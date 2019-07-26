use libc::*;
use std::ffi::CString;
use std::ffi::CStr;

macro_rules! def_handle {
 ($x:ident) => {
  pub struct $x {
	pub handle: *mut c_void
  }
 }
}

def_handle!(JSContext);

macro_rules! def_context_handle {
 ($x:ident) => {
  pub struct $x <'a> {
        pub handle: *mut c_void,
	pub context: &'a JSContext
  }
 }
}

#[link(name = "mozrs")]
extern {
	fn mozjs_init() -> bool;
	fn mozjs_new_runtime(size: u32) -> *mut c_void;
	fn js_new_context(rt: *mut c_void, size: usize) -> *mut c_void;
	fn js_acquire_default_global(ct: *mut c_void) -> *mut c_void;
	fn js_rooted_value(ct: *mut c_void) -> *mut c_void;
	fn js_new_auto_request(ct: *mut c_void) -> *mut c_void;
	fn js_compile_option(ct: *mut c_void) -> *mut c_void;
	fn mozjs_init_standard_classes(ct: *mut c_void, global: *mut c_void) -> bool;
	fn mozjs_create_auto_compartment(ct: *mut c_void, global: *mut c_void) -> *mut c_void;
	fn mozjs_rvalue_to_string(ct: *mut c_void, rval: *mut c_void) -> *mut c_char;
	fn js_line_eval(ct: *mut c_void, global: *mut c_void, opts: *mut c_void, script: *const c_char, len : usize, rval: *mut c_void) -> bool;
}

def_handle!(JSRuntime);
def_context_handle!(RootedValue);
def_handle!(CompileOption);
def_handle!(AutoCompartment);
def_handle!(AutoRequest);
def_handle!(DefaultGlobalObject);

impl JSRuntime {
	pub fn new(size: u32) -> JSRuntime {
		JSRuntime {
			handle: unsafe { mozjs_new_runtime(size) }
		}
	}
}

impl JSContext {
	pub fn new(rt :JSRuntime, size: usize) -> JSContext {
		JSContext {
			handle: unsafe { js_new_context(rt.handle, size) }
		}
	}

	pub fn is_empty(&self) -> bool {
		(self.handle as usize) == 0
	}

	pub fn get_rooted_value(&self) -> RootedValue {
		RootedValue {
			context: self,
			handle: unsafe { js_rooted_value(self.handle) }
		}
	}

	pub fn new_compile_option(&self) -> CompileOption {
		CompileOption {
			handle: unsafe { js_compile_option(self.handle) }
		}
	}

	pub fn new_auto_request(&self) -> AutoRequest {
		AutoRequest {
			handle: unsafe { js_new_auto_request(self.handle) }
		}
	}

	pub fn init_global(&self) -> DefaultGlobalObject {	
		DefaultGlobalObject {
			handle: unsafe { js_acquire_default_global(self.handle) }
		}
	}

	pub fn init_standard_classes(&self, global: &DefaultGlobalObject) -> bool {
		unsafe { mozjs_init_standard_classes(self.handle, global.handle) }
	}

	pub fn new_auto_compartment(&self, global: &DefaultGlobalObject) -> AutoCompartment {
		AutoCompartment {
			handle: unsafe { mozjs_create_auto_compartment(self.handle, global.handle) }
		}
	}

	pub fn eval(&self, global: &DefaultGlobalObject, opts: &CompileOption, script: String, rval: &RootedValue) -> bool {
		let c_str = CString::new(&script[..]).unwrap();
		unsafe { js_line_eval(self.handle, global.handle, opts.handle, c_str.as_ptr(), script.len(), rval.handle) }
	}
}

impl <'a> ToString for RootedValue <'a>{

	fn to_string(&self) -> String {
		unsafe {
			let ptr = mozjs_rvalue_to_string(self.context.handle, self.handle);
			CStr::from_ptr(ptr).to_string_lossy().into_owned()
		}
	} 

}

fn main() {
	if !unsafe {mozjs_init()}  {
		panic!("Unable to initialize MozJs")
	}
	let runtime = JSRuntime::new(8 * 1024 * 1024);
	let context = JSContext::new(runtime, 8192);	
	let _request = context.new_auto_request();
	let rval = context.get_rooted_value();
	let global = context.init_global();
	let _compart = context.new_auto_compartment(&global);	
	context.init_standard_classes(&global);
	let opts = context.new_compile_option();
	context.eval(&global, &opts, String::from("'Hello ' + 'World from JavaScript' + '\\n' + new Date()"), &rval);
	println!("{}", rval.to_string());
}
