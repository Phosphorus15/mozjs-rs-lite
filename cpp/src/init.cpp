#include <jsapi.h>

static JSClass global_class = {
    "global",
    JSCLASS_GLOBAL_FLAGS,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    JS_GlobalObjectTraceHook
};

extern "C"{

bool mozjs_init() {
	return JS_Init();
}

void* mozjs_new_runtime(uint32_t size) {
	return (void *)JS_NewRuntime(size);
}

  void* js_new_auto_request(void *context) {
    return (void*) new JSAutoRequest((JSContext *) context);
  }

  void js_free_auto_request(void *request) {
    delete ((JSAutoRequest *) request);
  }

  void* js_acquire_default_global(void* context) {
    return (void*) new JS::RootedObject((JSContext*) context, JS_NewGlobalObject((JSContext*) context, &global_class, nullptr, JS::FireOnNewGlobalHook));
  }

  void* js_rooted_value(void* context) {
    return (void *) new JS::RootedValue((JSContext*) context);
  }

  void js_free_rooted_value(void* context) {
    delete ((JS::RootedValue*) context);
  }

  void* js_compile_option(void* context) {
    return (void *) new JS::CompileOptions((JSContext*) context);
  }

  void js_free_compile_option(void* context) {
    delete ((JS::CompileOptions*) context);
  }

  bool mozjs_init_standard_classes(void* context, void* global) {
    return JS_InitStandardClasses((JSContext* ) context, *(JS::RootedObject *) global);
  }

  void* mozjs_create_auto_compartment(void* context, void* global) {
    return (void *) new JSAutoCompartment((JSContext* ) context, *(JS::RootedObject *) global);
  }

  void* mozjs_free_auto_compartment(void * comp) {
    delete ((JSAutoCompartment*) comp);
  }

  bool js_line_eval(void* context, void* global, void* opts, const char* script, size_t len, void* rvalue) {
    return JS::Evaluate((JSContext *) context, *(JS::RootedObject *) global, *(JS::CompileOptions *) opts, script, len, (JS::RootedValue *) rvalue);
  }

  char* mozjs_rvalue_to_string(void* context, void* rval) {
    JSString* str = ((JS::RootedValue *) rval) -> toString();
    return JS_EncodeString((JSContext *) context, str);
  }

}
