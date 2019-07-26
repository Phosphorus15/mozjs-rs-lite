// Auto-generated file for jsapi.h by mozjs-rs generator
// Modify if necessary

#define JS_HAS_CTYPES

#include <jsapi.h>

using namespace JS;

 extern "C" {
// bool JS_CallOnce(JSCallOnceType* once, JSInitCallback func);
bool js_call_once(void* once, JSInitCallback func) {
	return (bool) JS_CallOnce((JSCallOnceType *) once, func);
}

// int64_t JS_Now(void);
int64_t js_now(void) {
	return (int64_t) JS_Now();
}

// jsval JS_GetNaNValue(JSContext* cx);
// Manually modified
jsval js_get_nan_value(void* cx) {
	return (jsval) JS_GetNaNValue((JSContext *) cx);
}

// jsval JS_GetNegativeInfinityValue(JSContext* cx);
jsval js_get_negative_infinity_value(void* cx) {
	return (jsval) JS_GetNegativeInfinityValue((JSContext *) cx);
}

// jsval JS_GetPositiveInfinityValue(JSContext* cx);
jsval js_get_positive_infinity_value(void* cx) {
	return (jsval) JS_GetPositiveInfinityValue((JSContext *) cx);
}

// jsval JS_GetEmptyStringValue(JSContext* cx);
jsval js_get_empty_string_value(void* cx) {
	return (jsval) JS_GetEmptyStringValue((JSContext *) cx);
}

// JSString* JS_GetEmptyString(JSRuntime* rt);
void * js_get_empty_string(void* rt) {
	return (void *) JS_GetEmptyString((JSRuntime *) rt);
}

// bool JS_GetCompartmentStats(JSRuntime* rt, CompartmentStatsVector& stats);
bool js_get_compartment_stats(void* rt, CompartmentStatsVector& stats) {
	return (bool) JS_GetCompartmentStats((JSRuntime *) rt, (CompartmentStatsVector &) stats);
}

// bool JS_ValueToObject(JSContext* cx, JS::HandleValue v, JS::MutableHandleObject objp);
bool js_value_to_object(void* cx, JS::HandleValue v, JS::MutableHandleObject objp) {
	return (bool) JS_ValueToObject((JSContext *) cx, v, objp);
}

// JSFunction* JS_ValueToFunction(JSContext* cx, JS::HandleValue v);
void * js_value_to_function(void* cx, JS::HandleValue v) {
	return (void *) JS_ValueToFunction((JSContext *) cx, v);
}

// JSFunction* JS_ValueToConstructor(JSContext* cx, JS::HandleValue v);
void * js_value_to_constructor(void* cx, JS::HandleValue v) {
	return (void *) JS_ValueToConstructor((JSContext *) cx, v);
}

// JSString* JS_ValueToSource(JSContext* cx, JS::Handle<JS::Value> v);
void * js_value_to_source(void* cx, JS::Handle<JS::Value> v) {
	return (void *) JS_ValueToSource((JSContext *) cx, v);
}

// bool JS_DoubleIsInt32(double d, int32_t* ip);
bool js_double_is_int32(double d, void* ip) {
	return (bool) JS_DoubleIsInt32(d, (int32_t *) ip);
}

// JSType JS_TypeOfValue(JSContext* cx, JS::Handle<JS::Value> v);
JSType js_type_of_value(void* cx, JS::Handle<JS::Value> v) {
	return (JSType) JS_TypeOfValue((JSContext *) cx, v);
}

// bool JS_StrictlyEqual(JSContext* cx, JS::Handle<JS::Value> v1, JS::Handle<JS::Value> v2, bool* equal);
bool js_strictly_equal(void* cx, JS::Handle<JS::Value> v1, JS::Handle<JS::Value> v2, void* equal) {
	return (bool) JS_StrictlyEqual((JSContext *) cx, v1, v2, (bool *) equal);
}

// bool JS_LooselyEqual(JSContext* cx, JS::Handle<JS::Value> v1, JS::Handle<JS::Value> v2, bool* equal);
bool js_loosely_equal(void* cx, JS::Handle<JS::Value> v1, JS::Handle<JS::Value> v2, void* equal) {
	return (bool) JS_LooselyEqual((JSContext *) cx, v1, v2, (bool *) equal);
}

// bool JS_SameValue(JSContext* cx, JS::Handle<JS::Value> v1, JS::Handle<JS::Value> v2, bool* same);
bool js_same_value(void* cx, JS::Handle<JS::Value> v1, JS::Handle<JS::Value> v2, void* same) {
	return (bool) JS_SameValue((JSContext *) cx, v1, v2, (bool *) same);
}

// bool JS_IsBuiltinEvalFunction(JSFunction* fun);
bool js_is_builtin_eval_function(void* fun) {
	return (bool) JS_IsBuiltinEvalFunction((JSFunction *) fun);
}

// bool JS_IsBuiltinFunctionConstructor(JSFunction* fun);
bool js_is_builtin_function_constructor(void* fun) {
	return (bool) JS_IsBuiltinFunctionConstructor((JSFunction *) fun);
}

// bool JS_Init(void);
bool js_init(void) {
	return (bool) JS_Init();
}

// void JS_ShutDown(void);
void js_shut_down(void) {
	JS_ShutDown();
}

// void JS_DestroyRuntime(JSRuntime* rt);
void js_destroy_runtime(void* rt) {
	JS_DestroyRuntime((JSRuntime *) rt);
}

// bool JS_SetICUMemoryFunctions(JS_ICUAllocFn allocFn, JS_ICUReallocFn reallocFn, JS_ICUFreeFn freeFn);
bool js_set_icu_memory_functions(JS_ICUAllocFn allocFn, JS_ICUReallocFn reallocFn, JS_ICUFreeFn freeFn) {
	return (bool) JS_SetICUMemoryFunctions(allocFn, reallocFn, freeFn);
}

// JSRuntime* JS_GetRuntime(JSContext* cx);
void * js_get_runtime(void* cx) {
	return (void *) JS_GetRuntime((JSContext *) cx);
}

// JSRuntime* JS_GetParentRuntime(JSContext* cx);
void * js_get_parent_runtime(void* cx) {
	return (void *) JS_GetParentRuntime((JSContext *) cx);
}

// void JS_BeginRequest(JSContext* cx);
void js_begin_request(void* cx) {
	JS_BeginRequest((JSContext *) cx);
}

// void JS_EndRequest(JSContext* cx);
void js_end_request(void* cx) {
	JS_EndRequest((JSContext *) cx);
}

// void JS_SetContextCallback(JSRuntime* rt, JSContextCallback cxCallback, void* data);
void js_set_context_callback(void* rt, JSContextCallback cxCallback, void* data) {
	JS_SetContextCallback((JSRuntime *) rt, cxCallback, (void *) data);
}

// JSContext* JS_NewContext(JSRuntime* rt, size_t stackChunkSize);
void * js_new_context(void* rt, size_t stackChunkSize) {
	return (void *) JS_NewContext((JSRuntime *) rt, stackChunkSize);
}

// void JS_DestroyContext(JSContext* cx);
void js_destroy_context(void* cx) {
	JS_DestroyContext((JSContext *) cx);
}

// void JS_DestroyContextNoGC(JSContext* cx);
void js_destroy_context_no_gc(void* cx) {
	JS_DestroyContextNoGC((JSContext *) cx);
}

// void* JS_GetContextPrivate(JSContext* cx);
void * js_get_context_private(void* cx) {
	return (void *) JS_GetContextPrivate((JSContext *) cx);
}

// void JS_SetContextPrivate(JSContext* cx, void* data);
void js_set_context_private(void* cx, void* data) {
	JS_SetContextPrivate((JSContext *) cx, (void *) data);
}

// void* JS_GetSecondContextPrivate(JSContext* cx);
void * js_get_second_context_private(void* cx) {
	return (void *) JS_GetSecondContextPrivate((JSContext *) cx);
}

// void JS_SetSecondContextPrivate(JSContext* cx, void* data);
void js_set_second_context_private(void* cx, void* data) {
	JS_SetSecondContextPrivate((JSContext *) cx, (void *) data);
}

// JSContext* JS_ContextIterator(JSRuntime* rt, JSContext** iterp);
void * js_context_iterator(void* rt, JSContext** iterp) {
	return (void *) JS_ContextIterator((JSRuntime *) rt, (JSContext **) iterp);
}

// JSVersion JS_GetVersion(JSContext* cx);
JSVersion js_get_version(void* cx) {
	return (JSVersion) JS_GetVersion((JSContext *) cx);
}

// const char* JS_VersionToString(JSVersion version);
void * js_version_to_string(JSVersion version) {
	return (void *) JS_VersionToString(version);
}

// JSVersion JS_StringToVersion(const char* string);
JSVersion js_string_to_version(const void* string) {
	return (JSVersion) JS_StringToVersion((char *) string);
}

// const char* JS_GetImplementationVersion(void);
void * js_get_implementation_version(void) {
	return (void *) JS_GetImplementationVersion();
}

// void JS_SetDestroyCompartmentCallback(JSRuntime* rt, JSDestroyCompartmentCallback callback);
void js_set_destroy_compartment_callback(void* rt, JSDestroyCompartmentCallback callback) {
	JS_SetDestroyCompartmentCallback((JSRuntime *) rt, callback);
}

// void JS_SetDestroyZoneCallback(JSRuntime* rt, JSZoneCallback callback);
void js_set_destroy_zone_callback(void* rt, JSZoneCallback callback) {
	JS_SetDestroyZoneCallback((JSRuntime *) rt, callback);
}

// void JS_SetSweepZoneCallback(JSRuntime* rt, JSZoneCallback callback);
void js_set_sweep_zone_callback(void* rt, JSZoneCallback callback) {
	JS_SetSweepZoneCallback((JSRuntime *) rt, callback);
}

// void JS_SetCompartmentNameCallback(JSRuntime* rt, JSCompartmentNameCallback callback);
void js_set_compartment_name_callback(void* rt, JSCompartmentNameCallback callback) {
	JS_SetCompartmentNameCallback((JSRuntime *) rt, callback);
}

// void JS_SetWrapObjectCallbacks(JSRuntime* rt, const JSWrapObjectCallbacks* callbacks);
void js_set_wrap_object_callbacks(void* rt, const void* callbacks) {
	JS_SetWrapObjectCallbacks((JSRuntime *) rt, (JSWrapObjectCallbacks *) callbacks);
}

// void JS_SetCompartmentPrivate(JSCompartment* compartment, void* data);
void js_set_compartment_private(void* compartment, void* data) {
	JS_SetCompartmentPrivate((JSCompartment *) compartment, (void *) data);
}

// void* JS_GetCompartmentPrivate(JSCompartment* compartment);
void * js_get_compartment_private(void* compartment) {
	return (void *) JS_GetCompartmentPrivate((JSCompartment *) compartment);
}

// void JS_SetZoneUserData(JS::Zone* zone, void* data);
void js_set_zone_user_data(void* zone, void* data) {
	JS_SetZoneUserData((JS::Zone *) zone, (void *) data);
}

// void* JS_GetZoneUserData(JS::Zone* zone);
void * js_get_zone_user_data(void* zone) {
	return (void *) JS_GetZoneUserData((JS::Zone *) zone);
}

// bool JS_WrapObject(JSContext* cx, JS::MutableHandleObject objp);
bool js_wrap_object(void* cx, JS::MutableHandleObject objp) {
	return (bool) JS_WrapObject((JSContext *) cx, objp);
}

// bool JS_WrapValue(JSContext* cx, JS::MutableHandleValue vp);
bool js_wrap_value(void* cx, JS::MutableHandleValue vp) {
	return (bool) JS_WrapValue((JSContext *) cx, vp);
}

// JSObject* JS_TransplantObject(JSContext* cx, JS::HandleObject origobj, JS::HandleObject target);
void * js_transplant_object(void* cx, JS::HandleObject origobj, JS::HandleObject target) {
	return (void *) JS_TransplantObject((JSContext *) cx, origobj, target);
}

// bool JS_RefreshCrossCompartmentWrappers(JSContext* cx, JS::Handle<JSObject*> obj);
bool js_refresh_cross_compartment_wrappers(void* cx, JS::Handle<JSObject*> obj) {
	return (bool) JS_RefreshCrossCompartmentWrappers((JSContext *) cx, obj);
}

// JSCompartment* JS_EnterCompartment(JSContext* cx, JSObject* target);
void * js_enter_compartment(void* cx, void* target) {
	return (void *) JS_EnterCompartment((JSContext *) cx, (JSObject *) target);
}

// void JS_LeaveCompartment(JSContext* cx, JSCompartment* oldCompartment);
void js_leave_compartment(void* cx, void* oldCompartment) {
	JS_LeaveCompartment((JSContext *) cx, (JSCompartment *) oldCompartment);
}

// bool JS_InitStandardClasses(JSContext* cx, JS::Handle<JSObject*> obj);
bool js_init_standard_classes(void* cx, JS::Handle<JSObject*> obj) {
	return (bool) JS_InitStandardClasses((JSContext *) cx, obj);
}

// bool JS_ResolveStandardClass(JSContext* cx, JS::HandleObject obj, JS::HandleId id, bool* resolved);
bool js_resolve_standard_class(void* cx, JS::HandleObject obj, JS::HandleId id, void* resolved) {
	return (bool) JS_ResolveStandardClass((JSContext *) cx, obj, id, (bool *) resolved);
}

// bool JS_EnumerateStandardClasses(JSContext* cx, JS::HandleObject obj);
bool js_enumerate_standard_classes(void* cx, JS::HandleObject obj) {
	return (bool) JS_EnumerateStandardClasses((JSContext *) cx, obj);
}

// bool JS_GetClassObject(JSContext* cx, JSProtoKey key, JS::MutableHandle<JSObject*> objp);
bool js_get_class_object(void* cx, JSProtoKey key, JS::MutableHandle<JSObject*> objp) {
	return (bool) JS_GetClassObject((JSContext *) cx, key, objp);
}

// bool JS_GetClassPrototype(JSContext* cx, JSProtoKey key, JS::MutableHandle<JSObject*> objp);
bool js_get_class_prototype(void* cx, JSProtoKey key, JS::MutableHandle<JSObject*> objp) {
	return (bool) JS_GetClassPrototype((JSContext *) cx, key, objp);
}

// JSProtoKey IdentifyStandardInstance(JSObject* obj);
JSProtoKey identify_standard_instance(void* obj) {
	return (JSProtoKey) IdentifyStandardInstance((JSObject *) obj);
}

// JSProtoKey IdentifyStandardPrototype(JSObject* obj);
JSProtoKey identify_standard_prototype(void* obj) {
	return (JSProtoKey) IdentifyStandardPrototype((JSObject *) obj);
}

// JSProtoKey IdentifyStandardInstanceOrPrototype(JSObject* obj);
JSProtoKey identify_standard_instance_or_prototype(void* obj) {
	return (JSProtoKey) IdentifyStandardInstanceOrPrototype((JSObject *) obj);
}

// JSProtoKey IdentifyStandardConstructor(JSObject* obj);
JSProtoKey identify_standard_constructor(void* obj) {
	return (JSProtoKey) IdentifyStandardConstructor((JSObject *) obj);
}

// void ProtoKeyToId(JSContext* cx, JSProtoKey key, JS::MutableHandleId idp);
void proto_key_to_id(void* cx, JSProtoKey key, JS::MutableHandleId idp) {
	ProtoKeyToId((JSContext *) cx, key, idp);
}

// JSProtoKey JS_IdToProtoKey(JSContext* cx, JS::HandleId id);
JSProtoKey js_id_to_proto_key(void* cx, JS::HandleId id) {
	return (JSProtoKey) JS_IdToProtoKey((JSContext *) cx, id);
}

// JSObject* JS_GetFunctionPrototype(JSContext* cx, JS::HandleObject forObj);
void * js_get_function_prototype(void* cx, JS::HandleObject forObj) {
	return (void *) JS_GetFunctionPrototype((JSContext *) cx, forObj);
}

// JSObject* JS_GetObjectPrototype(JSContext* cx, JS::HandleObject forObj);
void * js_get_object_prototype(void* cx, JS::HandleObject forObj) {
	return (void *) JS_GetObjectPrototype((JSContext *) cx, forObj);
}

// JSObject* JS_GetArrayPrototype(JSContext* cx, JS::HandleObject forObj);
void * js_get_array_prototype(void* cx, JS::HandleObject forObj) {
	return (void *) JS_GetArrayPrototype((JSContext *) cx, forObj);
}

// JSObject* JS_GetErrorPrototype(JSContext* cx);
void * js_get_error_prototype(void* cx) {
	return (void *) JS_GetErrorPrototype((JSContext *) cx);
}

// JSObject* JS_GetGlobalForObject(JSContext* cx, JSObject* obj);
void * js_get_global_for_object(void* cx, void* obj) {
	return (void *) JS_GetGlobalForObject((JSContext *) cx, (JSObject *) obj);
}

// bool JS_IsGlobalObject(JSObject* obj);
bool js_is_global_object(void* obj) {
	return (bool) JS_IsGlobalObject((JSObject *) obj);
}

// JSObject* JS_GetGlobalForCompartmentOrNull(JSContext* cx, JSCompartment* c);
void * js_get_global_for_compartment_or_null(void* cx, void* c) {
	return (void *) JS_GetGlobalForCompartmentOrNull((JSContext *) cx, (JSCompartment *) c);
}

// JSObject* CurrentGlobalOrNull(JSContext* cx);
void * current_global_or_null(void* cx) {
	return (void *) CurrentGlobalOrNull((JSContext *) cx);
}

// JSObject* JS_InitReflect(JSContext* cx, JS::HandleObject global);
void * js_init_reflect(void* cx, JS::HandleObject global) {
	return (void *) JS_InitReflect((JSContext *) cx, global);
}

// bool JS_DefineProfilingFunctions(JSContext* cx, JS::HandleObject obj);
bool js_define_profiling_functions(void* cx, JS::HandleObject obj) {
	return (bool) JS_DefineProfilingFunctions((JSContext *) cx, obj);
}

// bool JS_DefineDebuggerObject(JSContext* cx, JS::HandleObject obj);
bool js_define_debugger_object(void* cx, JS::HandleObject obj) {
	return (bool) JS_DefineDebuggerObject((JSContext *) cx, obj);
}

// bool JS_InitCTypesClass(JSContext* cx, JS::HandleObject global);
/*
bool js_init_c_types_class(void* cx, JS::HandleObject global) {
	return (bool) JS_InitCTypesClass((JSContext *) cx, global);
}
*/

// void JS_SetCTypesCallbacks(JSObject* ctypesObj, const JSCTypesCallbacks* callbacks);
/*
void js_set_c_types_callbacks(void* ctypesObj, const void* callbacks) {
	JS_SetCTypesCallbacks((JSObject *) ctypesObj, (JSCTypesCallbacks *) callbacks);
}
*/

// void* JS_malloc(JSContext* cx, size_t nbytes);
void * js_malloc(void* cx, size_t nbytes) {
	return (void *) JS_malloc((JSContext *) cx, nbytes);
}

// void* JS_realloc(JSContext* cx, void* p, size_t oldBytes, size_t newBytes);
void * js_realloc(void* cx, void* p, size_t oldBytes, size_t newBytes) {
	return (void *) JS_realloc((JSContext *) cx, (void *) p, oldBytes, newBytes);
}

// void JS_free(JSContext* cx, void* p);
void js_free(void* cx, void* p) {
	JS_free((JSContext *) cx, (void *) p);
}

// void JS_freeop(JSFreeOp* fop, void* p);
void js_freeop(void* fop, void* p) {
	JS_freeop((JSFreeOp *) fop, (void *) p);
}

// JSFreeOp* JS_GetDefaultFreeOp(JSRuntime* rt);
void * js_get_default_free_op(void* rt) {
	return (void *) JS_GetDefaultFreeOp((JSRuntime *) rt);
}

// void JS_updateMallocCounter(JSContext* cx, size_t nbytes);
void js_update_malloc_counter(void* cx, size_t nbytes) {
	JS_updateMallocCounter((JSContext *) cx, nbytes);
}

// char* JS_strdup(JSContext* cx, const char* s);
void * js_strdup(void* cx, const void* s) {
	return (void *) JS_strdup((JSContext *) cx, (char *) s);
}

// bool JS_AddExtraGCRootsTracer(JSRuntime* rt, JSTraceDataOp traceOp, void* data);
bool js_add_extra_gc_roots_tracer(void* rt, JSTraceDataOp traceOp, void* data) {
	return (bool) JS_AddExtraGCRootsTracer((JSRuntime *) rt, traceOp, (void *) data);
}

// void JS_RemoveExtraGCRootsTracer(JSRuntime* rt, JSTraceDataOp traceOp, void* data);
void js_remove_extra_gc_roots_tracer(void* rt, JSTraceDataOp traceOp, void* data) {
	JS_RemoveExtraGCRootsTracer((JSRuntime *) rt, traceOp, (void *) data);
}

// void JS_GC(JSRuntime* rt);
void js_gc(void* rt) {
	JS_GC((JSRuntime *) rt);
}

// void JS_MaybeGC(JSContext* cx);
void js_maybe_gc(void* cx) {
	JS_MaybeGC((JSContext *) cx);
}

// void JS_SetGCCallback(JSRuntime* rt, JSGCCallback cb, void* data);
void js_set_gc_callback(void* rt, JSGCCallback cb, void* data) {
	JS_SetGCCallback((JSRuntime *) rt, cb, (void *) data);
}

// bool JS_AddFinalizeCallback(JSRuntime* rt, JSFinalizeCallback cb, void* data);
bool js_add_finalize_callback(void* rt, JSFinalizeCallback cb, void* data) {
	return (bool) JS_AddFinalizeCallback((JSRuntime *) rt, cb, (void *) data);
}

// void JS_RemoveFinalizeCallback(JSRuntime* rt, JSFinalizeCallback cb);
void js_remove_finalize_callback(void* rt, JSFinalizeCallback cb) {
	JS_RemoveFinalizeCallback((JSRuntime *) rt, cb);
}

// bool JS_IsGCMarkingTracer(JSTracer* trc);
bool js_is_gc_marking_tracer(void* trc) {
	return (bool) JS_IsGCMarkingTracer((JSTracer *) trc);
}

// bool JS_IsMarkingGray(JSTracer* trc);
bool js_is_marking_gray(void* trc) {
	return (bool) JS_IsMarkingGray((JSTracer *) trc);
}

// bool JS_AddWeakPointerCallback(JSRuntime* rt, JSWeakPointerCallback cb, void* data);
bool js_add_weak_pointer_callback(void* rt, JSWeakPointerCallback cb, void* data) {
	return (bool) JS_AddWeakPointerCallback((JSRuntime *) rt, cb, (void *) data);
}

// void JS_RemoveWeakPointerCallback(JSRuntime* rt, JSWeakPointerCallback cb);
void js_remove_weak_pointer_callback(void* rt, JSWeakPointerCallback cb) {
	JS_RemoveWeakPointerCallback((JSRuntime *) rt, cb);
}

// void JS_UpdateWeakPointerAfterGC(JS::Heap<JSObject*>* objp);
void js_update_weak_pointer_after_gc(void* objp) {
	JS_UpdateWeakPointerAfterGC((JS::Heap<JSObject*> *) objp);
}

// void JS_UpdateWeakPointerAfterGCUnbarriered(JSObject** objp);
void js_update_weak_pointer_after_gc_unbarriered(JSObject** objp) {
	JS_UpdateWeakPointerAfterGCUnbarriered((JSObject **) objp);
}

// void JS_SetGCParameter(JSRuntime* rt, JSGCParamKey key, uint32_t value);
void js_set_gc_parameter(void* rt, JSGCParamKey key, uint32_t value) {
	JS_SetGCParameter((JSRuntime *) rt, key, value);
}

// uint32_t JS_GetGCParameter(JSRuntime* rt, JSGCParamKey key);
uint32_t js_get_gc_parameter(void* rt, JSGCParamKey key) {
	return (uint32_t) JS_GetGCParameter((JSRuntime *) rt, key);
}

// void JS_SetGCParameterForThread(JSContext* cx, JSGCParamKey key, uint32_t value);
void js_set_gc_parameter_for_thread(void* cx, JSGCParamKey key, uint32_t value) {
	JS_SetGCParameterForThread((JSContext *) cx, key, value);
}

// uint32_t JS_GetGCParameterForThread(JSContext* cx, JSGCParamKey key);
uint32_t js_get_gc_parameter_for_thread(void* cx, JSGCParamKey key) {
	return (uint32_t) JS_GetGCParameterForThread((JSContext *) cx, key);
}

// void JS_SetGCParametersBasedOnAvailableMemory(JSRuntime* rt, uint32_t availMem);
void js_set_gc_parameters_based_on_available_memory(void* rt, uint32_t availMem) {
	JS_SetGCParametersBasedOnAvailableMemory((JSRuntime *) rt, availMem);
}

// bool JS_IsExternalString(JSString* str);
bool js_is_external_string(void* str) {
	return (bool) JS_IsExternalString((JSString *) str);
}

// const JSStringFinalizer* JS_GetExternalStringFinalizer(JSString* str);
void * js_get_external_string_finalizer(void* str) {
	return (void *) JS_GetExternalStringFinalizer((JSString *) str);
}

// int JS_IdArrayLength(JSContext* cx, JSIdArray* ida);
int js_id_array_length(void* cx, void* ida) {
	return (int) JS_IdArrayLength((JSContext *) cx, (JSIdArray *) ida);
}

// jsid JS_IdArrayGet(JSContext* cx, JSIdArray* ida, unsigned index);
jsid js_id_array_get(void* cx, void* ida, unsigned index) {
	return (jsid) JS_IdArrayGet((JSContext *) cx, (JSIdArray *) ida, index);
}

// void JS_DestroyIdArray(JSContext* cx, JSIdArray* ida);
void js_destroy_id_array(void* cx, void* ida) {
	JS_DestroyIdArray((JSContext *) cx, (JSIdArray *) ida);
}

// bool JS_ValueToId(JSContext* cx, JS::HandleValue v, JS::MutableHandleId idp);
bool js_value_to_id(void* cx, JS::HandleValue v, JS::MutableHandleId idp) {
	return (bool) JS_ValueToId((JSContext *) cx, v, idp);
}

// bool JS_StringToId(JSContext* cx, JS::HandleString s, JS::MutableHandleId idp);
bool js_string_to_id(void* cx, JS::HandleString s, JS::MutableHandleId idp) {
	return (bool) JS_StringToId((JSContext *) cx, s, idp);
}

// bool JS_IdToValue(JSContext* cx, jsid id, JS::MutableHandle<JS::Value> vp);
bool js_id_to_value(void* cx, jsid id, JS::MutableHandle<JS::Value> vp) {
	return (bool) JS_IdToValue((JSContext *) cx, id, vp);
}

// bool             checkAccessorsAreSelfHosted();
/*
bool             check_accessors_are_self_hosted() {
	return (bool)             checkAccessorsAreSelfHosted();
}
*/

// const JSClass* JS_GetClass(JSObject* obj);
void * js_get_class(void* obj) {
	return (void *) JS_GetClass((JSObject *) obj);
}

// bool JS_InstanceOf(JSContext* cx, JS::Handle<JSObject*> obj, const JSClass* clasp, JS::CallArgs* args);
bool js_instance_of(void* cx, JS::Handle<JSObject*> obj, const void* clasp, void* args) {
	return (bool) JS_InstanceOf((JSContext *) cx, obj, (JSClass *) clasp, (JS::CallArgs *) args);
}

// bool JS_HasInstance(JSContext* cx, JS::Handle<JSObject*> obj, JS::Handle<JS::Value> v, bool* bp);
bool js_has_instance(void* cx, JS::Handle<JSObject*> obj, JS::Handle<JS::Value> v, void* bp) {
	return (bool) JS_HasInstance((JSContext *) cx, obj, v, (bool *) bp);
}

// void* JS_GetPrivate(JSObject* obj);
void * js_get_private(void* obj) {
	return (void *) JS_GetPrivate((JSObject *) obj);
}

// void JS_SetPrivate(JSObject* obj, void* data);
void js_set_private(void* obj, void* data) {
	JS_SetPrivate((JSObject *) obj, (void *) data);
}

// bool JS_GetPrototype(JSContext* cx, JS::HandleObject obj, JS::MutableHandleObject protop);
bool js_get_prototype(void* cx, JS::HandleObject obj, JS::MutableHandleObject protop) {
	return (bool) JS_GetPrototype((JSContext *) cx, obj, protop);
}

// bool JS_SetPrototype(JSContext* cx, JS::HandleObject obj, JS::HandleObject proto);
bool js_set_prototype(void* cx, JS::HandleObject obj, JS::HandleObject proto) {
	return (bool) JS_SetPrototype((JSContext *) cx, obj, proto);
}

// JSObject* JS_GetParent(JSObject* obj);
void * js_get_parent(void* obj) {
	return (void *) JS_GetParent((JSObject *) obj);
}

// bool JS_SetParent(JSContext* cx, JS::HandleObject obj, JS::HandleObject parent);
bool js_set_parent(void* cx, JS::HandleObject obj, JS::HandleObject parent) {
	return (bool) JS_SetParent((JSContext *) cx, obj, parent);
}

// JSObject* JS_GetConstructor(JSContext* cx, JS::Handle<JSObject*> proto);
void * js_get_constructor(void* cx, JS::Handle<JSObject*> proto) {
	return (void *) JS_GetConstructor((JSContext *) cx, proto);
}

// void JS_GlobalObjectTraceHook(JSTracer* trc, JSObject* global);
void js_global_object_trace_hook(void* trc, void* global) {
	JS_GlobalObjectTraceHook((JSTracer *) trc, (JSObject *) global);
}

// void JS_FireOnNewGlobalObject(JSContext* cx, JS::HandleObject global);
void js_fire_on_new_global_object(void* cx, JS::HandleObject global) {
	JS_FireOnNewGlobalObject((JSContext *) cx, global);
}

// bool JS_IsExtensible(JSContext* cx, JS::HandleObject obj, bool* extensible);
bool js_is_extensible(void* cx, JS::HandleObject obj, void* extensible) {
	return (bool) JS_IsExtensible((JSContext *) cx, obj, (bool *) extensible);
}

// bool JS_IsNative(JSObject* obj);
bool js_is_native(void* obj) {
	return (bool) JS_IsNative((JSObject *) obj);
}

// JSRuntime* JS_GetObjectRuntime(JSObject* obj);
void * js_get_object_runtime(void* obj) {
	return (void *) JS_GetObjectRuntime((JSObject *) obj);
}

// JSObject* JS_NewPlainObject(JSContext* cx);
void * js_new_plain_object(void* cx) {
	return (void *) JS_NewPlainObject((JSContext *) cx);
}

// bool JS_DeepFreezeObject(JSContext* cx, JS::Handle<JSObject*> obj);
bool js_deep_freeze_object(void* cx, JS::Handle<JSObject*> obj) {
	return (bool) JS_DeepFreezeObject((JSContext *) cx, obj);
}

// bool JS_FreezeObject(JSContext* cx, JS::Handle<JSObject*> obj);
bool js_freeze_object(void* cx, JS::Handle<JSObject*> obj) {
	return (bool) JS_FreezeObject((JSContext *) cx, obj);
}

// bool JS_PreventExtensions(JSContext* cx, JS::HandleObject obj, bool* succeeded);
bool js_prevent_extensions(void* cx, JS::HandleObject obj, void* succeeded) {
	return (bool) JS_PreventExtensions((JSContext *) cx, obj, (bool *) succeeded);
}

// JSObject* JS_New(JSContext* cx, JS::HandleObject ctor, const JS::HandleValueArray& args);
void * js_new(void* cx, JS::HandleObject ctor, const JS::HandleValueArray& args) {
	return (void *) JS_New((JSContext *) cx, ctor, (JS::HandleValueArray &) args);
}

// bool JS_DefineConstDoubles(JSContext* cx, JS::HandleObject obj, const JSConstDoubleSpec* cds);
bool js_define_const_doubles(void* cx, JS::HandleObject obj, const void* cds) {
	return (bool) JS_DefineConstDoubles((JSContext *) cx, obj, (JSConstDoubleSpec *) cds);
}

// bool JS_DefineConstIntegers(JSContext* cx, JS::HandleObject obj, const JSConstIntegerSpec* cis);
bool js_define_const_integers(void* cx, JS::HandleObject obj, const void* cis) {
	return (bool) JS_DefineConstIntegers((JSContext *) cx, obj, (JSConstIntegerSpec *) cis);
}

// bool JS_DefineProperties(JSContext* cx, JS::HandleObject obj, const JSPropertySpec* ps);
bool js_define_properties(void* cx, JS::HandleObject obj, const void* ps) {
	return (bool) JS_DefineProperties((JSContext *) cx, obj, (JSPropertySpec *) ps);
}

// bool JS_HasProperty(JSContext* cx, JS::HandleObject obj, const char* name, bool* foundp);
bool js_has_property(void* cx, JS::HandleObject obj, const void* name, void* foundp) {
	return (bool) JS_HasProperty((JSContext *) cx, obj, (char *) name, (bool *) foundp);
}

// bool JS_HasPropertyById(JSContext* cx, JS::HandleObject obj, JS::HandleId id, bool* foundp);
bool js_has_property_by_id(void* cx, JS::HandleObject obj, JS::HandleId id, void* foundp) {
	return (bool) JS_HasPropertyById((JSContext *) cx, obj, id, (bool *) foundp);
}

// bool JS_GetProperty(JSContext* cx, JS::HandleObject obj, const char* name, JS::MutableHandleValue vp);
bool js_get_property(void* cx, JS::HandleObject obj, const void* name, JS::MutableHandleValue vp) {
	return (bool) JS_GetProperty((JSContext *) cx, obj, (char *) name, vp);
}

// bool JS_GetPropertyById(JSContext* cx, JS::HandleObject obj, JS::HandleId id, JS::MutableHandleValue vp);
bool js_get_property_by_id(void* cx, JS::HandleObject obj, JS::HandleId id, JS::MutableHandleValue vp) {
	return (bool) JS_GetPropertyById((JSContext *) cx, obj, id, vp);
}

// bool JS_SetProperty(JSContext* cx, JS::HandleObject obj, const char* name, JS::HandleValue v);
bool js_set_property(void* cx, JS::HandleObject obj, const void* name, JS::HandleValue v) {
	return (bool) JS_SetProperty((JSContext *) cx, obj, (char *) name, v);
}

// bool JS_SetPropertyById(JSContext* cx, JS::HandleObject obj, JS::HandleId id, JS::HandleValue v);
bool js_set_property_by_id(void* cx, JS::HandleObject obj, JS::HandleId id, JS::HandleValue v) {
	return (bool) JS_SetPropertyById((JSContext *) cx, obj, id, v);
}

// bool JS_DeleteProperty(JSContext* cx, JS::HandleObject obj, const char* name);
bool js_delete_property(void* cx, JS::HandleObject obj, const void* name) {
	return (bool) JS_DeleteProperty((JSContext *) cx, obj, (char *) name);
}

// bool JS_DeleteProperty2(JSContext* cx, JS::HandleObject obj, const char* name, bool* succeeded);
bool js_delete_property2(void* cx, JS::HandleObject obj, const void* name, void* succeeded) {
	return (bool) JS_DeleteProperty2((JSContext *) cx, obj, (char *) name, (bool *) succeeded);
}

// bool JS_DeletePropertyById(JSContext* cx, JS::HandleObject obj, jsid id);
/*
bool js_delete_property_by_id(void* cx, JS::HandleObject obj, jsid id) {
	return (bool) JS_DeletePropertyById((JSContext *) cx, obj, id);
}
*/

// bool JS_DeletePropertyById2(JSContext* cx, JS::HandleObject obj, JS::HandleId id, bool* succeeded);
bool js_delete_property_by_id2(void* cx, JS::HandleObject obj, JS::HandleId id, void* succeeded) {
	return (bool) JS_DeletePropertyById2((JSContext *) cx, obj, id, (bool *) succeeded);
}

// JSObject* JS_NewArrayObject(JSContext* cx, const JS::HandleValueArray& contents);
void * js_new_array_object(void* cx, const JS::HandleValueArray& contents) {
	return (void *) JS_NewArrayObject((JSContext *) cx, (JS::HandleValueArray &) contents);
}

// bool JS_IsArrayObject(JSContext* cx, JS::HandleValue value);
bool js_is_array_object(void* cx, JS::HandleValue value) {
	return (bool) JS_IsArrayObject((JSContext *) cx, value);
}

// bool JS_GetArrayLength(JSContext* cx, JS::Handle<JSObject*> obj, uint32_t* lengthp);
bool js_get_array_length(void* cx, JS::Handle<JSObject*> obj, void* lengthp) {
	return (bool) JS_GetArrayLength((JSContext *) cx, obj, (uint32_t *) lengthp);
}

// bool JS_SetArrayLength(JSContext* cx, JS::Handle<JSObject*> obj, uint32_t length);
bool js_set_array_length(void* cx, JS::Handle<JSObject*> obj, uint32_t length) {
	return (bool) JS_SetArrayLength((JSContext *) cx, obj, length);
}

// bool JS_AlreadyHasOwnElement(JSContext* cx, JS::HandleObject obj, uint32_t index, bool* foundp);
bool js_already_has_own_element(void* cx, JS::HandleObject obj, uint32_t index, void* foundp) {
	return (bool) JS_AlreadyHasOwnElement((JSContext *) cx, obj, index, (bool *) foundp);
}

// bool JS_HasElement(JSContext* cx, JS::HandleObject obj, uint32_t index, bool* foundp);
bool js_has_element(void* cx, JS::HandleObject obj, uint32_t index, void* foundp) {
	return (bool) JS_HasElement((JSContext *) cx, obj, index, (bool *) foundp);
}

// bool JS_GetElement(JSContext* cx, JS::HandleObject obj, uint32_t index, JS::MutableHandleValue vp);
bool js_get_element(void* cx, JS::HandleObject obj, uint32_t index, JS::MutableHandleValue vp) {
	return (bool) JS_GetElement((JSContext *) cx, obj, index, vp);
}

// bool JS_SetElement(JSContext* cx, JS::HandleObject obj, uint32_t index, JS::HandleValue v);
bool js_set_element(void* cx, JS::HandleObject obj, uint32_t index, JS::HandleValue v) {
	return (bool) JS_SetElement((JSContext *) cx, obj, index, v);
}

// bool JS_DeleteElement(JSContext* cx, JS::HandleObject obj, uint32_t index);
bool js_delete_element(void* cx, JS::HandleObject obj, uint32_t index) {
	return (bool) JS_DeleteElement((JSContext *) cx, obj, index);
}

// bool JS_DeleteElement2(JSContext* cx, JS::HandleObject obj, uint32_t index, bool* succeeded);
bool js_delete_element2(void* cx, JS::HandleObject obj, uint32_t index, void* succeeded) {
	return (bool) JS_DeleteElement2((JSContext *) cx, obj, index, (bool *) succeeded);
}

// JSObject* JS_NewArrayBufferWithContents(JSContext* cx, size_t nbytes, void* contents);
void * js_new_array_buffer_with_contents(void* cx, size_t nbytes, void* contents) {
	return (void *) JS_NewArrayBufferWithContents((JSContext *) cx, nbytes, (void *) contents);
}

// void* JS_StealArrayBufferContents(JSContext* cx, JS::HandleObject obj);
void * js_steal_array_buffer_contents(void* cx, JS::HandleObject obj) {
	return (void *) JS_StealArrayBufferContents((JSContext *) cx, obj);
}

// JSObject* JS_NewMappedArrayBufferWithContents(JSContext* cx, size_t nbytes, void* contents);
void * js_new_mapped_array_buffer_with_contents(void* cx, size_t nbytes, void* contents) {
	return (void *) JS_NewMappedArrayBufferWithContents((JSContext *) cx, nbytes, (void *) contents);
}

// void* JS_CreateMappedArrayBufferContents(int fd, size_t offset, size_t length);
void * js_create_mapped_array_buffer_contents(int fd, size_t offset, size_t length) {
	return (void *) JS_CreateMappedArrayBufferContents(fd, offset, length);
}

// void JS_ReleaseMappedArrayBufferContents(void* contents, size_t length);
void js_release_mapped_array_buffer_contents(void* contents, size_t length) {
	JS_ReleaseMappedArrayBufferContents((void *) contents, length);
}

// JSIdArray* JS_Enumerate(JSContext* cx, JS::HandleObject obj);
void * js_enumerate(void* cx, JS::HandleObject obj) {
	return (void *) JS_Enumerate((JSContext *) cx, obj);
}

// jsval JS_GetReservedSlot(JSObject* obj, uint32_t index);
jsval js_get_reserved_slot(void* obj, uint32_t index) {
	return (jsval) JS_GetReservedSlot((JSObject *) obj, index);
}

// void JS_SetReservedSlot(JSObject* obj, uint32_t index, jsval v);
void js_set_reserved_slot(void* obj, uint32_t index, jsval v) {
	JS_SetReservedSlot((JSObject *) obj, index, v);
}

// JSObject* JS_GetFunctionObject(JSFunction* fun);
void * js_get_function_object(void* fun) {
	return (void *) JS_GetFunctionObject((JSFunction *) fun);
}

// JSString* JS_GetFunctionId(JSFunction* fun);
void * js_get_function_id(void* fun) {
	return (void *) JS_GetFunctionId((JSFunction *) fun);
}

// JSString* JS_GetFunctionDisplayId(JSFunction* fun);
void * js_get_function_display_id(void* fun) {
	return (void *) JS_GetFunctionDisplayId((JSFunction *) fun);
}

// uint16_t JS_GetFunctionArity(JSFunction* fun);
uint16_t js_get_function_arity(void* fun) {
	return (uint16_t) JS_GetFunctionArity((JSFunction *) fun);
}

// bool IsCallable(JSObject* obj);
bool is_callable(void* obj) {
	return (bool) IsCallable((JSObject *) obj);
}

// bool IsConstructor(JSObject* obj);
bool is_constructor(void* obj) {
	return (bool) IsConstructor((JSObject *) obj);
}

// bool JS_ObjectIsFunction(JSContext* cx, JSObject* obj);
bool js_object_is_function(void* cx, void* obj) {
	return (bool) JS_ObjectIsFunction((JSContext *) cx, (JSObject *) obj);
}

// bool JS_IsNativeFunction(JSObject* funobj, JSNative call);
bool js_is_native_function(void* funobj, JSNative call) {
	return (bool) JS_IsNativeFunction((JSObject *) funobj, call);
}

// bool JS_IsConstructor(JSFunction* fun);
bool js_is_constructor(void* fun) {
	return (bool) JS_IsConstructor((JSFunction *) fun);
}

// JSObject* JS_BindCallable(JSContext* cx, JS::Handle<JSObject*> callable, JS::Handle<JSObject*> newThis);
void * js_bind_callable(void* cx, JS::Handle<JSObject*> callable, JS::Handle<JSObject*> newThis) {
	return (void *) JS_BindCallable((JSContext *) cx, callable, newThis);
}

// JSObject* CloneFunctionObject(JSContext* cx, HandleObject funobj);
void * clone_function_object(void* cx, HandleObject funobj) {
	return (void *) CloneFunctionObject((JSContext *) cx, funobj);
}

// JSObject* JS_GetGlobalFromScript(JSScript* script);
void * js_get_global_from_script(void* script) {
	return (void *) JS_GetGlobalFromScript((JSScript *) script);
}

// const char* JS_GetScriptFilename(JSScript* script);
void * js_get_script_filename(void* script) {
	return (void *) JS_GetScriptFilename((JSScript *) script);
}

// unsigned JS_GetScriptBaseLineNumber(JSContext* cx, JSScript* script);
unsigned js_get_script_base_line_number(void* cx, void* script) {
	return (unsigned) JS_GetScriptBaseLineNumber((JSContext *) cx, (JSScript *) script);
}

// JSScript* JS_GetFunctionScript(JSContext* cx, JS::HandleFunction fun);
void * js_get_function_script(void* cx, JS::HandleFunction fun) {
	return (void *) JS_GetFunctionScript((JSContext *) cx, fun);
}

// bool CanCompileOffThread(JSContext* cx, const ReadOnlyCompileOptions& options, size_t length);
bool can_compile_off_thread(void* cx, const ReadOnlyCompileOptions& options, size_t length) {
	return (bool) CanCompileOffThread((JSContext *) cx, (ReadOnlyCompileOptions &) options, length);
}

// JSScript* FinishOffThreadScript(JSContext* maybecx, JSRuntime* rt, void* token);
void * finish_off_thread_script(void* maybecx, void* rt, void* token) {
	return (void *) FinishOffThreadScript((JSContext *) maybecx, (JSRuntime *) rt, (void *) token);
}

// JSString* JS_DecompileScript(JSContext* cx, JS::Handle<JSScript*> script, const char* name, unsigned indent);
void * js_decompile_script(void* cx, JS::Handle<JSScript*> script, const void* name, unsigned indent) {
	return (void *) JS_DecompileScript((JSContext *) cx, script, (char *) name, indent);
}

// JSString* JS_DecompileFunction(JSContext* cx, JS::Handle<JSFunction*> fun, unsigned indent);
void * js_decompile_function(void* cx, JS::Handle<JSFunction*> fun, unsigned indent) {
	return (void *) JS_DecompileFunction((JSContext *) cx, fun, indent);
}

// JSString* JS_DecompileFunctionBody(JSContext* cx, JS::Handle<JSFunction*> fun, unsigned indent);
void * js_decompile_function_body(void* cx, JS::Handle<JSFunction*> fun, unsigned indent) {
	return (void *) JS_DecompileFunctionBody((JSContext *) cx, fun, indent);
}

// bool JS_ExecuteScript(JSContext* cx, JS::HandleObject obj, JS::HandleScript script, JS::MutableHandleValue rval);
bool js_execute_script(void* cx, JS::HandleObject obj, JS::HandleScript script, JS::MutableHandleValue rval) {
	return (bool) JS_ExecuteScript((JSContext *) cx, obj, script, rval);
}

// bool CloneAndExecuteScript(JSContext* cx, JS::Handle<JSObject*> obj, JS::Handle<JSScript*> script);
bool clone_and_execute_script(void* cx, JS::Handle<JSObject*> obj, JS::Handle<JSScript*> script) {
	return (bool) CloneAndExecuteScript((JSContext *) cx, obj, script);
}

// JSInterruptCallback JS_SetInterruptCallback(JSRuntime* rt, JSInterruptCallback callback);
JSInterruptCallback js_set_interrupt_callback(void* rt, JSInterruptCallback callback) {
	return (JSInterruptCallback) JS_SetInterruptCallback((JSRuntime *) rt, callback);
}

// JSInterruptCallback JS_GetInterruptCallback(JSRuntime* rt);
JSInterruptCallback js_get_interrupt_callback(void* rt) {
	return (JSInterruptCallback) JS_GetInterruptCallback((JSRuntime *) rt);
}

// void JS_RequestInterruptCallback(JSRuntime* rt);
void js_request_interrupt_callback(void* rt) {
	JS_RequestInterruptCallback((JSRuntime *) rt);
}

// bool JS_IsRunning(JSContext* cx);
bool js_is_running(void* cx) {
	return (bool) JS_IsRunning((JSContext *) cx);
}

// bool JS_SaveFrameChain(JSContext* cx);
bool js_save_frame_chain(void* cx) {
	return (bool) JS_SaveFrameChain((JSContext *) cx);
}

// void JS_RestoreFrameChain(JSContext* cx);
void js_restore_frame_chain(void* cx) {
	JS_RestoreFrameChain((JSContext *) cx);
}

// JSString* JS_NewStringCopyN(JSContext* cx, const char* s, size_t n);
void * js_new_string_copy_n(void* cx, const void* s, size_t n) {
	return (void *) JS_NewStringCopyN((JSContext *) cx, (char *) s, n);
}

// JSString* JS_NewStringCopyZ(JSContext* cx, const char* s);
void * js_new_string_copy_z(void* cx, const void* s) {
	return (void *) JS_NewStringCopyZ((JSContext *) cx, (char *) s);
}

// JSString* JS_InternJSString(JSContext* cx, JS::HandleString str);
void * js_intern_js_string(void* cx, JS::HandleString str) {
	return (void *) JS_InternJSString((JSContext *) cx, str);
}

// JSString* JS_InternStringN(JSContext* cx, const char* s, size_t length);
void * js_intern_string_n(void* cx, const void* s, size_t length) {
	return (void *) JS_InternStringN((JSContext *) cx, (char *) s, length);
}

// JSString* JS_InternString(JSContext* cx, const char* s);
void * js_intern_string(void* cx, const void* s) {
	return (void *) JS_InternString((JSContext *) cx, (char *) s);
}

// JSString* JS_NewUCString(JSContext* cx, char16_t* chars, size_t length);
void * js_new_uc_string(void* cx, void* chars, size_t length) {
	return (void *) JS_NewUCString((JSContext *) cx, (char16_t *) chars, length);
}

// JSString* JS_NewUCStringCopyN(JSContext* cx, const char16_t* s, size_t n);
void * js_new_uc_string_copy_n(void* cx, const void* s, size_t n) {
	return (void *) JS_NewUCStringCopyN((JSContext *) cx, (char16_t *) s, n);
}

// JSString* JS_NewUCStringCopyZ(JSContext* cx, const char16_t* s);
void * js_new_uc_string_copy_z(void* cx, const void* s) {
	return (void *) JS_NewUCStringCopyZ((JSContext *) cx, (char16_t *) s);
}

// JSString* JS_InternUCStringN(JSContext* cx, const char16_t* s, size_t length);
void * js_intern_uc_string_n(void* cx, const void* s, size_t length) {
	return (void *) JS_InternUCStringN((JSContext *) cx, (char16_t *) s, length);
}

// JSString* JS_InternUCString(JSContext* cx, const char16_t* s);
void * js_intern_uc_string(void* cx, const void* s) {
	return (void *) JS_InternUCString((JSContext *) cx, (char16_t *) s);
}

// bool JS_CompareStrings(JSContext* cx, JSString* str1, JSString* str2, int32_t* result);
bool js_compare_strings(void* cx, void* str1, void* str2, void* result) {
	return (bool) JS_CompareStrings((JSContext *) cx, (JSString *) str1, (JSString *) str2, (int32_t *) result);
}

// bool JS_StringEqualsAscii(JSContext* cx, JSString* str, const char* asciiBytes, bool* match);
bool js_string_equals_ascii(void* cx, void* str, const void* asciiBytes, void* match) {
	return (bool) JS_StringEqualsAscii((JSContext *) cx, (JSString *) str, (char *) asciiBytes, (bool *) match);
}

// size_t JS_PutEscapedString(JSContext* cx, char* buffer, size_t size, JSString* str, char quote);
size_t js_put_escaped_string(void* cx, void* buffer, size_t size, void* str, char quote) {
	return (size_t) JS_PutEscapedString((JSContext *) cx, (char *) buffer, size, (JSString *) str, quote);
}

// bool JS_FileEscapedString(FILE* fp, JSString* str, char quote);
bool js_file_escaped_string(void* fp, void* str, char quote) {
	return (bool) JS_FileEscapedString((FILE *) fp, (JSString *) str, quote);
}

// size_t JS_GetStringLength(JSString* str);
size_t js_get_string_length(void* str) {
	return (size_t) JS_GetStringLength((JSString *) str);
}

// bool JS_StringIsFlat(JSString* str);
bool js_string_is_flat(void* str) {
	return (bool) JS_StringIsFlat((JSString *) str);
}

// bool JS_StringHasLatin1Chars(JSString* str);
bool js_string_has_latin1_chars(void* str) {
	return (bool) JS_StringHasLatin1Chars((JSString *) str);
}

// bool JS_GetStringCharAt(JSContext* cx, JSString* str, size_t index, char16_t* res);
bool js_get_string_char_at(void* cx, void* str, size_t index, void* res) {
	return (bool) JS_GetStringCharAt((JSContext *) cx, (JSString *) str, index, (char16_t *) res);
}

// char16_t JS_GetFlatStringCharAt(JSFlatString* str, size_t index);
char16_t js_get_flat_string_char_at(void* str, size_t index) {
	return (char16_t) JS_GetFlatStringCharAt((JSFlatString *) str, index);
}

// const char16_t* JS_GetTwoByteExternalStringChars(JSString* str);
void * js_get_two_byte_external_string_chars(void* str) {
	return (void *) JS_GetTwoByteExternalStringChars((JSString *) str);
}

// bool JS_CopyStringChars(JSContext* cx, mozilla::Range<char16_t> dest, JSString* str);
bool js_copy_string_chars(void* cx, mozilla::Range<char16_t> dest, void* str) {
	return (bool) JS_CopyStringChars((JSContext *) cx, dest, (JSString *) str);
}

// const JS::Latin1Char* JS_GetLatin1InternedStringChars(const JS::AutoCheckCannotGC& nogc, JSString* str);
void * js_get_latin1_interned_string_chars(const JS::AutoCheckCannotGC& nogc, void* str) {
	return (void *) JS_GetLatin1InternedStringChars((JS::AutoCheckCannotGC &) nogc, (JSString *) str);
}

// const char16_t* JS_GetTwoByteInternedStringChars(const JS::AutoCheckCannotGC& nogc, JSString* str);
void * js_get_two_byte_interned_string_chars(const JS::AutoCheckCannotGC& nogc, void* str) {
	return (void *) JS_GetTwoByteInternedStringChars((JS::AutoCheckCannotGC &) nogc, (JSString *) str);
}

// JSFlatString* JS_FlattenString(JSContext* cx, JSString* str);
void * js_flatten_string(void* cx, void* str) {
	return (void *) JS_FlattenString((JSContext *) cx, (JSString *) str);
}

// const JS::Latin1Char* JS_GetLatin1FlatStringChars(const JS::AutoCheckCannotGC& nogc, JSFlatString* str);
void * js_get_latin1_flat_string_chars(const JS::AutoCheckCannotGC& nogc, void* str) {
	return (void *) JS_GetLatin1FlatStringChars((JS::AutoCheckCannotGC &) nogc, (JSFlatString *) str);
}

// const char16_t* JS_GetTwoByteFlatStringChars(const JS::AutoCheckCannotGC& nogc, JSFlatString* str);
void * js_get_two_byte_flat_string_chars(const JS::AutoCheckCannotGC& nogc, void* str) {
	return (void *) JS_GetTwoByteFlatStringChars((JS::AutoCheckCannotGC &) nogc, (JSFlatString *) str);
}

// bool JS_FlatStringEqualsAscii(JSFlatString* str, const char* asciiBytes);
bool js_flat_string_equals_ascii(void* str, const void* asciiBytes) {
	return (bool) JS_FlatStringEqualsAscii((JSFlatString *) str, (char *) asciiBytes);
}

// size_t JS_PutEscapedFlatString(char* buffer, size_t size, JSFlatString* str, char quote);
size_t js_put_escaped_flat_string(void* buffer, size_t size, void* str, char quote) {
	return (size_t) JS_PutEscapedFlatString((char *) buffer, size, (JSFlatString *) str, quote);
}

// JSString* JS_ConcatStrings(JSContext* cx, JS::HandleString left, JS::HandleString right);
void * js_concat_strings(void* cx, JS::HandleString left, JS::HandleString right) {
	return (void *) JS_ConcatStrings((JSContext *) cx, left, right);
}

// JSAddonId* NewAddonId(JSContext* cx, JS::HandleString str);
void * new_addon_id(void* cx, JS::HandleString str) {
	return (void *) NewAddonId((JSContext *) cx, str);
}

// JSString* StringOfAddonId(JSAddonId* id);
void * string_of_addon_id(void* id) {
	return (void *) StringOfAddonId((JSAddonId *) id);
}

// JSAddonId* AddonIdOfObject(JSObject* obj);
void * addon_id_of_object(void* obj) {
	return (void *) AddonIdOfObject((JSObject *) obj);
}

// bool JS_SetDefaultLocale(JSRuntime* rt, const char* locale);
bool js_set_default_locale(void* rt, const void* locale) {
	return (bool) JS_SetDefaultLocale((JSRuntime *) rt, (char *) locale);
}

// void JS_ResetDefaultLocale(JSRuntime* rt);
void js_reset_default_locale(void* rt) {
	JS_ResetDefaultLocale((JSRuntime *) rt);
}

// void JS_SetLocaleCallbacks(JSRuntime* rt, const JSLocaleCallbacks* callbacks);
void js_set_locale_callbacks(void* rt, const void* callbacks) {
	JS_SetLocaleCallbacks((JSRuntime *) rt, (JSLocaleCallbacks *) callbacks);
}

// const JSLocaleCallbacks* JS_GetLocaleCallbacks(JSRuntime* rt);
void * js_get_locale_callbacks(void* rt) {
	return (void *) JS_GetLocaleCallbacks((JSRuntime *) rt);
}

// void JS_ReportOutOfMemory(JSContext* cx);
void js_report_out_of_memory(void* cx) {
	JS_ReportOutOfMemory((JSContext *) cx);
}

// void JS_ReportAllocationOverflow(JSContext* cx);
void js_report_allocation_overflow(void* cx) {
	JS_ReportAllocationOverflow((JSContext *) cx);
}

// JSErrorReporter JS_GetErrorReporter(JSRuntime* rt);
JSErrorReporter js_get_error_reporter(void* rt) {
	return (JSErrorReporter) JS_GetErrorReporter((JSRuntime *) rt);
}

// JSErrorReporter JS_SetErrorReporter(JSRuntime* rt, JSErrorReporter er);
JSErrorReporter js_set_error_reporter(void* rt, JSErrorReporter er) {
	return (JSErrorReporter) JS_SetErrorReporter((JSRuntime *) rt, er);
}

// JSObject* NewWeakMapObject(JSContext* cx);
void * new_weak_map_object(void* cx) {
	return (void *) NewWeakMapObject((JSContext *) cx);
}

// bool IsWeakMapObject(JSObject* obj);
bool is_weak_map_object(void* obj) {
	return (bool) IsWeakMapObject((JSObject *) obj);
}

// JSObject* NewMapObject(JSContext* cx);
void * new_map_object(void* cx) {
	return (void *) NewMapObject((JSContext *) cx);
}

// uint32_t MapSize(JSContext* cx, HandleObject obj);
uint32_t map_size(void* cx, HandleObject obj) {
	return (uint32_t) MapSize((JSContext *) cx, obj);
}

// bool MapHas(JSContext* cx, HandleObject obj, HandleValue key, bool* rval);
bool map_has(void* cx, HandleObject obj, HandleValue key, void* rval) {
	return (bool) MapHas((JSContext *) cx, obj, key, (bool *) rval);
}

// bool MapSet(JSContext* cx, HandleObject obj, HandleValue key, HandleValue val);
bool map_set(void* cx, HandleObject obj, HandleValue key, HandleValue val) {
	return (bool) MapSet((JSContext *) cx, obj, key, val);
}

// bool MapClear(JSContext* cx, HandleObject obj);
bool map_clear(void* cx, HandleObject obj) {
	return (bool) MapClear((JSContext *) cx, obj);
}

// bool MapKeys(JSContext* cx, HandleObject obj, MutableHandleValue rval);
bool map_keys(void* cx, HandleObject obj, MutableHandleValue rval) {
	return (bool) MapKeys((JSContext *) cx, obj, rval);
}

// bool MapValues(JSContext* cx, HandleObject obj, MutableHandleValue rval);
bool map_values(void* cx, HandleObject obj, MutableHandleValue rval) {
	return (bool) MapValues((JSContext *) cx, obj, rval);
}

// bool MapEntries(JSContext* cx, HandleObject obj, MutableHandleValue rval);
bool map_entries(void* cx, HandleObject obj, MutableHandleValue rval) {
	return (bool) MapEntries((JSContext *) cx, obj, rval);
}

// JSObject* JS_NewDateObject(JSContext* cx, int year, int mon, int mday, int hour, int min, int sec);
void * js_new_date_object(void* cx, int year, int mon, int mday, int hour, int min, int sec) {
	return (void *) JS_NewDateObject((JSContext *) cx, year, mon, mday, hour, min, sec);
}

// JSObject* JS_NewDateObjectMsec(JSContext* cx, double msec);
void * js_new_date_object_msec(void* cx, double msec) {
	return (void *) JS_NewDateObjectMsec((JSContext *) cx, msec);
}

// bool JS_ObjectIsDate(JSContext* cx, JS::HandleObject obj);
bool js_object_is_date(void* cx, JS::HandleObject obj) {
	return (bool) JS_ObjectIsDate((JSContext *) cx, obj);
}

// void JS_ClearDateCaches(JSContext* cx);
void js_clear_date_caches(void* cx) {
	JS_ClearDateCaches((JSContext *) cx);
}

// bool JS_ClearRegExpStatics(JSContext* cx, JS::HandleObject obj);
bool js_clear_reg_exp_statics(void* cx, JS::HandleObject obj) {
	return (bool) JS_ClearRegExpStatics((JSContext *) cx, obj);
}

// JSObject* JS_NewRegExpObjectNoStatics(JSContext* cx, char* bytes, size_t length, unsigned flags);
void * js_new_reg_exp_object_no_statics(void* cx, void* bytes, size_t length, unsigned flags) {
	return (void *) JS_NewRegExpObjectNoStatics((JSContext *) cx, (char *) bytes, length, flags);
}

// JSObject* JS_NewUCRegExpObjectNoStatics(JSContext* cx, char16_t* chars, size_t length, unsigned flags);
void * js_new_uc_reg_exp_object_no_statics(void* cx, void* chars, size_t length, unsigned flags) {
	return (void *) JS_NewUCRegExpObjectNoStatics((JSContext *) cx, (char16_t *) chars, length, flags);
}

// bool JS_ObjectIsRegExp(JSContext* cx, JS::HandleObject obj);
bool js_object_is_reg_exp(void* cx, JS::HandleObject obj) {
	return (bool) JS_ObjectIsRegExp((JSContext *) cx, obj);
}

// unsigned JS_GetRegExpFlags(JSContext* cx, JS::HandleObject obj);
unsigned js_get_reg_exp_flags(void* cx, JS::HandleObject obj) {
	return (unsigned) JS_GetRegExpFlags((JSContext *) cx, obj);
}

// JSString* JS_GetRegExpSource(JSContext* cx, JS::HandleObject obj);
void * js_get_reg_exp_source(void* cx, JS::HandleObject obj) {
	return (void *) JS_GetRegExpSource((JSContext *) cx, obj);
}

// bool JS_IsExceptionPending(JSContext* cx);
bool js_is_exception_pending(void* cx) {
	return (bool) JS_IsExceptionPending((JSContext *) cx);
}

// bool JS_GetPendingException(JSContext* cx, JS::MutableHandleValue vp);
bool js_get_pending_exception(void* cx, JS::MutableHandleValue vp) {
	return (bool) JS_GetPendingException((JSContext *) cx, vp);
}

// void JS_SetPendingException(JSContext* cx, JS::HandleValue v);
void js_set_pending_exception(void* cx, JS::HandleValue v) {
	JS_SetPendingException((JSContext *) cx, v);
}

// void JS_ClearPendingException(JSContext* cx);
void js_clear_pending_exception(void* cx) {
	JS_ClearPendingException((JSContext *) cx);
}

// bool JS_ReportPendingException(JSContext* cx);
bool js_report_pending_exception(void* cx) {
	return (bool) JS_ReportPendingException((JSContext *) cx);
}

// JSExceptionState* JS_SaveExceptionState(JSContext* cx);
void * js_save_exception_state(void* cx) {
	return (void *) JS_SaveExceptionState((JSContext *) cx);
}

// void JS_RestoreExceptionState(JSContext* cx, JSExceptionState* state);
void js_restore_exception_state(void* cx, void* state) {
	JS_RestoreExceptionState((JSContext *) cx, (JSExceptionState *) state);
}

// void JS_DropExceptionState(JSContext* cx, JSExceptionState* state);
void js_drop_exception_state(void* cx, void* state) {
	JS_DropExceptionState((JSContext *) cx, (JSExceptionState *) state);
}

// JSErrorReport* JS_ErrorFromException(JSContext* cx, JS::HandleObject obj);
void * js_error_from_exception(void* cx, JS::HandleObject obj) {
	return (void *) JS_ErrorFromException((JSContext *) cx, obj);
}

// bool JS_ThrowStopIteration(JSContext* cx);
bool js_throw_stop_iteration(void* cx) {
	return (bool) JS_ThrowStopIteration((JSContext *) cx);
}

// bool JS_IsStopIteration(jsval v);
bool js_is_stop_iteration(jsval v) {
	return (bool) JS_IsStopIteration(v);
}

// intptr_t JS_GetCurrentThread();
intptr_t js_get_current_thread() {
	return (intptr_t) JS_GetCurrentThread();
}

// void JS_AbortIfWrongThread(JSRuntime* rt);
void js_abort_if_wrong_thread(void* rt) {
	JS_AbortIfWrongThread((JSRuntime *) rt);
}

// JSObject* JS_NewObjectForConstructor(JSContext* cx, const JSClass* clasp, const JS::CallArgs& args);
void * js_new_object_for_constructor(void* cx, const void* clasp, const JS::CallArgs& args) {
	return (void *) JS_NewObjectForConstructor((JSContext *) cx, (JSClass *) clasp, (JS::CallArgs &) args);
}

// void JS_GetGCZeal(JSContext* cx, uint8_t* zeal, uint32_t* frequency, uint32_t* nextScheduled);
void js_get_gc_zeal(void* cx, void* zeal, void* frequency, void* nextScheduled) {
	JS_GetGCZeal((JSContext *) cx, (uint8_t *) zeal, (uint32_t *) frequency, (uint32_t *) nextScheduled);
}

// void JS_SetGCZeal(JSContext* cx, uint8_t zeal, uint32_t frequency);
void js_set_gc_zeal(void* cx, uint8_t zeal, uint32_t frequency) {
	JS_SetGCZeal((JSContext *) cx, zeal, frequency);
}

// void JS_ScheduleGC(JSContext* cx, uint32_t count);
void js_schedule_gc(void* cx, uint32_t count) {
	JS_ScheduleGC((JSContext *) cx, count);
}

// void JS_SetParallelParsingEnabled(JSRuntime* rt, bool enabled);
void js_set_parallel_parsing_enabled(void* rt, bool enabled) {
	JS_SetParallelParsingEnabled((JSRuntime *) rt, enabled);
}

// void JS_SetOffthreadIonCompilationEnabled(JSRuntime* rt, bool enabled);
void js_set_offthread_ion_compilation_enabled(void* rt, bool enabled) {
	JS_SetOffthreadIonCompilationEnabled((JSRuntime *) rt, enabled);
}

// void JS_SetGlobalJitCompilerOption(JSRuntime* rt, JSJitCompilerOption opt, uint32_t value);
void js_set_global_jit_compiler_option(void* rt, JSJitCompilerOption opt, uint32_t value) {
	JS_SetGlobalJitCompilerOption((JSRuntime *) rt, opt, value);
}

// int JS_GetGlobalJitCompilerOption(JSRuntime* rt, JSJitCompilerOption opt);
int js_get_global_jit_compiler_option(void* rt, JSJitCompilerOption opt) {
	return (int) JS_GetGlobalJitCompilerOption((JSRuntime *) rt, opt);
}

// bool JS_IndexToId(JSContext* cx, uint32_t index, JS::MutableHandleId);
// Manually modified
bool js_index_to_id(void* cx, uint32_t index, JS::MutableHandleId id) {
	return (bool) JS_IndexToId((JSContext *) cx, index, id);
}

// bool JS_CharsToId(JSContext* cx, JS::TwoByteChars chars, JS::MutableHandleId);
/*bool js_chars_to_id(void* cx, JS::TwoByteChars chars, JS::MutableHandleId) {
	return (bool) JS_CharsToId((JSContext *) cx, chars, JS::MutableHandleId);
}*/

// bool JS_IsIdentifier(JSContext* cx, JS::HandleString str, bool* isIdentifier);
bool js_is_identifier(void* cx, JS::HandleString str, void* isIdentifier) {
	return (bool) JS_IsIdentifier((JSContext *) cx, str, (bool *) isIdentifier);
}

// JSObject* GetScriptedCallerGlobal(JSContext* cx);
void * get_scripted_caller_global(void* cx) {
	return (void *) GetScriptedCallerGlobal((JSContext *) cx);
}

// void HideScriptedCaller(JSContext* cx);
void hide_scripted_caller(void* cx) {
	HideScriptedCaller((JSContext *) cx);
}

// void UnhideScriptedCaller(JSContext* cx);
void unhide_scripted_caller(void* cx) {
	UnhideScriptedCaller((JSContext *) cx);
}

// void* JS_EncodeScript(JSContext* cx, JS::HandleScript script, uint32_t* lengthp);
void * js_encode_script(void* cx, JS::HandleScript script, void* lengthp) {
	return (void *) JS_EncodeScript((JSContext *) cx, script, (uint32_t *) lengthp);
}

// void* JS_EncodeInterpretedFunction(JSContext* cx, JS::HandleObject funobj, uint32_t* lengthp);
void * js_encode_interpreted_function(void* cx, JS::HandleObject funobj, void* lengthp) {
	return (void *) JS_EncodeInterpretedFunction((JSContext *) cx, funobj, (uint32_t *) lengthp);
}

// JSScript* JS_DecodeScript(JSContext* cx, const void* data, uint32_t length);
void * js_decode_script(void* cx, const void* data, uint32_t length) {
	return (void *) JS_DecodeScript((JSContext *) cx, (void *) data, length);
}

// JSObject* JS_DecodeInterpretedFunction(JSContext* cx, const void* data, uint32_t length);
void * js_decode_interpreted_function(void* cx, const void* data, uint32_t length) {
	return (void *) JS_DecodeInterpretedFunction((JSContext *) cx, (void *) data, length);
}

// void SetAsmJSCacheOps(JSRuntime* rt, const AsmJSCacheOps* callbacks);
void set_asm_js_cache_ops(void* rt, const void* callbacks) {
	SetAsmJSCacheOps((JSRuntime *) rt, (AsmJSCacheOps *) callbacks);
}

// void SetLargeAllocationFailureCallback(JSRuntime* rt, LargeAllocationFailureCallback afc, void* data);
void set_large_allocation_failure_callback(void* rt, LargeAllocationFailureCallback afc, void* data) {
	SetLargeAllocationFailureCallback((JSRuntime *) rt, afc, (void *) data);
}

// void SetOutOfMemoryCallback(JSRuntime* rt, OutOfMemoryCallback cb, void* data);
void set_out_of_memory_callback(void* rt, OutOfMemoryCallback cb, void* data) {
	SetOutOfMemoryCallback((JSRuntime *) rt, cb, (void *) data);
}


}
