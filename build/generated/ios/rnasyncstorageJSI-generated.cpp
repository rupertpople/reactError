/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateModuleCpp.js
 */

#include "rnasyncstorageJSI.h"

namespace facebook::react {

static jsi::Value __hostFunction_NativeAsyncStorageModuleCxxSpecJSI_multiGet(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  static_cast<NativeAsyncStorageModuleCxxSpecJSI *>(&turboModule)->multiGet(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asObject(rt).asArray(rt),
    count <= 1 ? throw jsi::JSError(rt, "Expected argument in position 1 to be passed") : args[1].asObject(rt).asFunction(rt)
  );
  return jsi::Value::undefined();
}
static jsi::Value __hostFunction_NativeAsyncStorageModuleCxxSpecJSI_multiSet(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  static_cast<NativeAsyncStorageModuleCxxSpecJSI *>(&turboModule)->multiSet(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asObject(rt).asArray(rt),
    count <= 1 ? throw jsi::JSError(rt, "Expected argument in position 1 to be passed") : args[1].asObject(rt).asFunction(rt)
  );
  return jsi::Value::undefined();
}
static jsi::Value __hostFunction_NativeAsyncStorageModuleCxxSpecJSI_multiRemove(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  static_cast<NativeAsyncStorageModuleCxxSpecJSI *>(&turboModule)->multiRemove(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asObject(rt).asArray(rt),
    count <= 1 ? throw jsi::JSError(rt, "Expected argument in position 1 to be passed") : args[1].asObject(rt).asFunction(rt)
  );
  return jsi::Value::undefined();
}
static jsi::Value __hostFunction_NativeAsyncStorageModuleCxxSpecJSI_multiMerge(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  static_cast<NativeAsyncStorageModuleCxxSpecJSI *>(&turboModule)->multiMerge(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asObject(rt).asArray(rt),
    count <= 1 ? throw jsi::JSError(rt, "Expected argument in position 1 to be passed") : args[1].asObject(rt).asFunction(rt)
  );
  return jsi::Value::undefined();
}
static jsi::Value __hostFunction_NativeAsyncStorageModuleCxxSpecJSI_getAllKeys(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  static_cast<NativeAsyncStorageModuleCxxSpecJSI *>(&turboModule)->getAllKeys(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asObject(rt).asFunction(rt)
  );
  return jsi::Value::undefined();
}
static jsi::Value __hostFunction_NativeAsyncStorageModuleCxxSpecJSI_clear(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  static_cast<NativeAsyncStorageModuleCxxSpecJSI *>(&turboModule)->clear(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asObject(rt).asFunction(rt)
  );
  return jsi::Value::undefined();
}

NativeAsyncStorageModuleCxxSpecJSI::NativeAsyncStorageModuleCxxSpecJSI(std::shared_ptr<CallInvoker> jsInvoker)
  : TurboModule("RNCAsyncStorage", jsInvoker) {
  methodMap_["multiGet"] = MethodMetadata {2, __hostFunction_NativeAsyncStorageModuleCxxSpecJSI_multiGet};
  methodMap_["multiSet"] = MethodMetadata {2, __hostFunction_NativeAsyncStorageModuleCxxSpecJSI_multiSet};
  methodMap_["multiRemove"] = MethodMetadata {2, __hostFunction_NativeAsyncStorageModuleCxxSpecJSI_multiRemove};
  methodMap_["multiMerge"] = MethodMetadata {2, __hostFunction_NativeAsyncStorageModuleCxxSpecJSI_multiMerge};
  methodMap_["getAllKeys"] = MethodMetadata {1, __hostFunction_NativeAsyncStorageModuleCxxSpecJSI_getAllKeys};
  methodMap_["clear"] = MethodMetadata {1, __hostFunction_NativeAsyncStorageModuleCxxSpecJSI_clear};
}


} // namespace facebook::react
