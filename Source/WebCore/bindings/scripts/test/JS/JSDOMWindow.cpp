/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSDOMWindow.h"

#include "ActiveDOMObject.h"
#include "ExtendedDOMClientIsoSubspaces.h"
#include "ExtendedDOMIsoSubspaces.h"
#include "HTMLFrameOwnerElement.h"
#include "JSDOMAttribute.h"
#include "JSDOMBinding.h"
#include "JSDOMConstructorNotConstructable.h"
#include "JSDOMExceptionHandling.h"
#include "JSDOMGlobalObjectInlines.h"
#include "JSDOMWindow.h"
#include "JSDOMWrapperCache.h"
#include "JSExposedStar.h"
#include "JSExposedToWorkerAndWindow.h"
#include "JSTestConditionalIncludes.h"
#include "JSTestConditionallyReadWrite.h"
#include "JSTestDefaultToJSON.h"
#include "JSTestDefaultToJSONFilteredByExposed.h"
#include "JSTestEnabledBySetting.h"
#include "JSTestEnabledForContext.h"
#include "JSTestNode.h"
#include "JSTestObj.h"
#include "JSTestPromiseRejectionEvent.h"
#include "ScriptExecutionContext.h"
#include "WebCoreJSClientData.h"
#include <JavaScriptCore/HeapAnalyzer.h>
#include <JavaScriptCore/JSCInlines.h>
#include <JavaScriptCore/JSDestructibleObjectHeapCellType.h>
#include <JavaScriptCore/SlotVisitorMacros.h>
#include <JavaScriptCore/SubspaceInlines.h>
#include <wtf/GetPtr.h>
#include <wtf/PointerPreparations.h>
#include <wtf/URL.h>
#include <wtf/text/MakeString.h>

#if ENABLE(Condition1) || ENABLE(Condition2)
#include "JSTestInterface.h"
#endif


namespace WebCore {
using namespace JSC;

// Attributes

static JSC_DECLARE_CUSTOM_GETTER(jsDOMWindowConstructor);
static JSC_DECLARE_CUSTOM_GETTER(jsDOMWindow_DOMWindowConstructor);
static JSC_DECLARE_CUSTOM_GETTER(jsDOMWindow_ExposedStarConstructor);
static JSC_DECLARE_CUSTOM_GETTER(jsDOMWindow_ExposedToWorkerAndWindowConstructor);
static JSC_DECLARE_CUSTOM_GETTER(jsDOMWindow_TestConditionalIncludesConstructor);
static JSC_DECLARE_CUSTOM_GETTER(jsDOMWindow_TestConditionallyReadWriteConstructor);
static JSC_DECLARE_CUSTOM_GETTER(jsDOMWindow_TestDefaultToJSONConstructor);
static JSC_DECLARE_CUSTOM_GETTER(jsDOMWindow_TestDefaultToJSONFilteredByExposedConstructor);
static JSC_DECLARE_CUSTOM_GETTER(jsDOMWindow_TestEnabledBySettingConstructor);
static JSC_DECLARE_CUSTOM_GETTER(jsDOMWindow_TestEnabledForContextConstructor);
#if ENABLE(Condition1) || ENABLE(Condition2)
static JSC_DECLARE_CUSTOM_GETTER(jsDOMWindow_TestInterfaceConstructor);
#endif
static JSC_DECLARE_CUSTOM_GETTER(jsDOMWindow_TestNodeConstructor);
static JSC_DECLARE_CUSTOM_GETTER(jsDOMWindow_TestObjectConstructor);
static JSC_DECLARE_CUSTOM_GETTER(jsDOMWindow_TestPromiseRejectionEventConstructor);

using JSDOMWindowDOMConstructor = JSDOMConstructorNotConstructable<JSDOMWindow>;

/* Hash table */

static const struct CompactHashIndex JSDOMWindowTableIndex[37] = {
    { -1, -1 },
    { 6, 35 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 5, 33 },
    { -1, -1 },
    { 3, -1 },
    { 2, 32 },
    { 0, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 1, -1 },
    { -1, -1 },
    { 10, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 4, 34 },
    { 7, 36 },
    { 8, -1 },
    { 9, -1 },
    { 11, -1 },
};


static const HashTableValue JSDOMWindowTableValues[] =
{
    { "DOMWindow"_s, static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsDOMWindow_DOMWindowConstructor, 0 } },
    { "ExposedStar"_s, static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsDOMWindow_ExposedStarConstructor, 0 } },
    { "ExposedToWorkerAndWindow"_s, static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsDOMWindow_ExposedToWorkerAndWindowConstructor, 0 } },
    { "TestConditionalIncludes"_s, static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsDOMWindow_TestConditionalIncludesConstructor, 0 } },
    { "TestConditionallyReadWrite"_s, static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsDOMWindow_TestConditionallyReadWriteConstructor, 0 } },
    { "TestDefaultToJSON"_s, static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsDOMWindow_TestDefaultToJSONConstructor, 0 } },
    { "TestDefaultToJSONFilteredByExposed"_s, static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsDOMWindow_TestDefaultToJSONFilteredByExposedConstructor, 0 } },
    { "TestEnabledBySetting"_s, static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsDOMWindow_TestEnabledBySettingConstructor, 0 } },
#if ENABLE(Condition1) || ENABLE(Condition2)
    { "TestInterface"_s, static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsDOMWindow_TestInterfaceConstructor, 0 } },
#else
    { { }, 0, NoIntrinsic, { HashTableValue::End } },
#endif
    { "TestNode"_s, static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsDOMWindow_TestNodeConstructor, 0 } },
    { "TestObject"_s, static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsDOMWindow_TestObjectConstructor, 0 } },
    { "TestPromiseRejectionEvent"_s, static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsDOMWindow_TestPromiseRejectionEventConstructor, 0 } },
};

static const HashTable JSDOMWindowTable = { 12, 31, static_cast<uint8_t>(static_cast<unsigned>(JSC::PropertyAttribute::DontEnum)), JSDOMWindow::info(), JSDOMWindowTableValues, JSDOMWindowTableIndex };
template<> const ClassInfo JSDOMWindowDOMConstructor::s_info = { "DOMWindow"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSDOMWindowDOMConstructor) };

template<> JSValue JSDOMWindowDOMConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    return JSEventTarget::getConstructor(vm, &globalObject);
}

template<> void JSDOMWindowDOMConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->length, jsNumber(0), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    JSString* nameString = jsNontrivialString(vm, "DOMWindow"_s);
    m_originalName.set(vm, this, nameString);
    putDirect(vm, vm.propertyNames->name, nameString, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->prototype, globalObject.getPrototypeDirect(), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum | JSC::PropertyAttribute::DontDelete);
}

/* Hash table for prototype */

static const struct CompactHashIndex JSDOMWindowPrototypeTableIndex[2] = {
    { -1, -1 },
    { 0, -1 },
};


static const HashTableValue JSDOMWindowPrototypeTableValues[] =
{
    { "constructor"_s, static_cast<unsigned>(PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsDOMWindowConstructor, 0 } },
};

static const HashTable JSDOMWindowPrototypeTable = { 1, 1, static_cast<uint8_t>(static_cast<unsigned>(PropertyAttribute::DontEnum)), JSDOMWindow::info(), JSDOMWindowPrototypeTableValues, JSDOMWindowPrototypeTableIndex };
const ClassInfo JSDOMWindowPrototype::s_info = { "DOMWindow"_s, &Base::s_info, &JSDOMWindowPrototypeTable, nullptr, CREATE_METHOD_TABLE(JSDOMWindowPrototype) };

void JSDOMWindowPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSDOMWindow::info(), JSDOMWindowPrototypeTableValues, *this);
    JSC_TO_STRING_TAG_WITHOUT_TRANSITION();
}

const ClassInfo JSDOMWindow::s_info = { "DOMWindow"_s, &Base::s_info, &JSDOMWindowTable, nullptr, CREATE_METHOD_TABLE(JSDOMWindow) };

JSDOMWindow::JSDOMWindow(VM& vm, Structure* structure, Ref<DOMWindow>&& impl, JSWindowProxy* proxy)
    : JSEventTarget(vm, structure, WTFMove(impl), proxy)
{
}

Ref<DOMWindow> JSDOMWindow::protectedWrapped() const
{
    return wrapped();
}

static_assert(!std::is_base_of<ActiveDOMObject, DOMWindow>::value, "Interface is not marked as [ActiveDOMObject] even though implementation class subclasses ActiveDOMObject.");

void JSDOMWindow::finishCreation(VM& vm, JSWindowProxy* proxy)
{
    Base::finishCreation(vm, proxy);

    auto* scriptExecutionContext = jsCast<JSDOMGlobalObject*>(globalObject())->scriptExecutionContext();

    if (((scriptExecutionContext && scriptExecutionContext->isSecureContext()) && TestEnabledForContext::enabledForContext(*jsCast<JSDOMGlobalObject*>(globalObject())->scriptExecutionContext())))
        putDirectCustomAccessor(vm, builtinNames(vm).TestEnabledForContextPublicName(), CustomGetterSetter::create(vm, jsDOMWindow_TestEnabledForContextConstructor, nullptr), attributesForStructure(static_cast<unsigned>(JSC::PropertyAttribute::DontEnum)));
}

JSValue JSDOMWindow::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDOMWindowDOMConstructor, DOMConstructorID::DOMWindow>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

JSC_DEFINE_CUSTOM_GETTER(jsDOMWindowConstructor, (JSGlobalObject* lexicalGlobalObject, EncodedJSValue thisValue, PropertyName))
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSDOMWindowPrototype*>(JSValue::decode(thisValue));
    if (UNLIKELY(!prototype))
        return throwVMTypeError(lexicalGlobalObject, throwScope);
    return JSValue::encode(JSDOMWindow::getConstructor(vm, prototype->globalObject()));
}

static inline JSValue jsDOMWindow_DOMWindowConstructorGetter(JSGlobalObject& lexicalGlobalObject, JSDOMWindow& thisObject)
{
    UNUSED_PARAM(lexicalGlobalObject);
    return JSDOMWindow::getConstructor(JSC::getVM(&lexicalGlobalObject), &thisObject);
}

JSC_DEFINE_CUSTOM_GETTER(jsDOMWindow_DOMWindowConstructor, (JSGlobalObject* lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSDOMWindow>::get<jsDOMWindow_DOMWindowConstructorGetter>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsDOMWindow_ExposedStarConstructorGetter(JSGlobalObject& lexicalGlobalObject, JSDOMWindow& thisObject)
{
    UNUSED_PARAM(lexicalGlobalObject);
    return JSExposedStar::getConstructor(JSC::getVM(&lexicalGlobalObject), &thisObject);
}

JSC_DEFINE_CUSTOM_GETTER(jsDOMWindow_ExposedStarConstructor, (JSGlobalObject* lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSDOMWindow>::get<jsDOMWindow_ExposedStarConstructorGetter>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsDOMWindow_ExposedToWorkerAndWindowConstructorGetter(JSGlobalObject& lexicalGlobalObject, JSDOMWindow& thisObject)
{
    UNUSED_PARAM(lexicalGlobalObject);
    return JSExposedToWorkerAndWindow::getConstructor(JSC::getVM(&lexicalGlobalObject), &thisObject);
}

JSC_DEFINE_CUSTOM_GETTER(jsDOMWindow_ExposedToWorkerAndWindowConstructor, (JSGlobalObject* lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSDOMWindow>::get<jsDOMWindow_ExposedToWorkerAndWindowConstructorGetter>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsDOMWindow_TestConditionalIncludesConstructorGetter(JSGlobalObject& lexicalGlobalObject, JSDOMWindow& thisObject)
{
    UNUSED_PARAM(lexicalGlobalObject);
    return JSTestConditionalIncludes::getConstructor(JSC::getVM(&lexicalGlobalObject), &thisObject);
}

JSC_DEFINE_CUSTOM_GETTER(jsDOMWindow_TestConditionalIncludesConstructor, (JSGlobalObject* lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSDOMWindow>::get<jsDOMWindow_TestConditionalIncludesConstructorGetter>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsDOMWindow_TestConditionallyReadWriteConstructorGetter(JSGlobalObject& lexicalGlobalObject, JSDOMWindow& thisObject)
{
    UNUSED_PARAM(lexicalGlobalObject);
    return JSTestConditionallyReadWrite::getConstructor(JSC::getVM(&lexicalGlobalObject), &thisObject);
}

JSC_DEFINE_CUSTOM_GETTER(jsDOMWindow_TestConditionallyReadWriteConstructor, (JSGlobalObject* lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSDOMWindow>::get<jsDOMWindow_TestConditionallyReadWriteConstructorGetter>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsDOMWindow_TestDefaultToJSONConstructorGetter(JSGlobalObject& lexicalGlobalObject, JSDOMWindow& thisObject)
{
    UNUSED_PARAM(lexicalGlobalObject);
    return JSTestDefaultToJSON::getConstructor(JSC::getVM(&lexicalGlobalObject), &thisObject);
}

JSC_DEFINE_CUSTOM_GETTER(jsDOMWindow_TestDefaultToJSONConstructor, (JSGlobalObject* lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSDOMWindow>::get<jsDOMWindow_TestDefaultToJSONConstructorGetter>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsDOMWindow_TestDefaultToJSONFilteredByExposedConstructorGetter(JSGlobalObject& lexicalGlobalObject, JSDOMWindow& thisObject)
{
    UNUSED_PARAM(lexicalGlobalObject);
    return JSTestDefaultToJSONFilteredByExposed::getConstructor(JSC::getVM(&lexicalGlobalObject), &thisObject);
}

JSC_DEFINE_CUSTOM_GETTER(jsDOMWindow_TestDefaultToJSONFilteredByExposedConstructor, (JSGlobalObject* lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSDOMWindow>::get<jsDOMWindow_TestDefaultToJSONFilteredByExposedConstructorGetter>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsDOMWindow_TestEnabledBySettingConstructorGetter(JSGlobalObject& lexicalGlobalObject, JSDOMWindow& thisObject)
{
    UNUSED_PARAM(lexicalGlobalObject);
    return JSTestEnabledBySetting::getConstructor(JSC::getVM(&lexicalGlobalObject), &thisObject);
}

JSC_DEFINE_CUSTOM_GETTER(jsDOMWindow_TestEnabledBySettingConstructor, (JSGlobalObject* lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSDOMWindow>::get<jsDOMWindow_TestEnabledBySettingConstructorGetter>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsDOMWindow_TestEnabledForContextConstructorGetter(JSGlobalObject& lexicalGlobalObject, JSDOMWindow& thisObject)
{
    UNUSED_PARAM(lexicalGlobalObject);
    return JSTestEnabledForContext::getConstructor(JSC::getVM(&lexicalGlobalObject), &thisObject);
}

JSC_DEFINE_CUSTOM_GETTER(jsDOMWindow_TestEnabledForContextConstructor, (JSGlobalObject* lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSDOMWindow>::get<jsDOMWindow_TestEnabledForContextConstructorGetter>(*lexicalGlobalObject, thisValue, attributeName);
}

#if ENABLE(Condition1) || ENABLE(Condition2)
static inline JSValue jsDOMWindow_TestInterfaceConstructorGetter(JSGlobalObject& lexicalGlobalObject, JSDOMWindow& thisObject)
{
    UNUSED_PARAM(lexicalGlobalObject);
    return JSTestInterface::getConstructor(JSC::getVM(&lexicalGlobalObject), &thisObject);
}

JSC_DEFINE_CUSTOM_GETTER(jsDOMWindow_TestInterfaceConstructor, (JSGlobalObject* lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSDOMWindow>::get<jsDOMWindow_TestInterfaceConstructorGetter>(*lexicalGlobalObject, thisValue, attributeName);
}

#endif

static inline JSValue jsDOMWindow_TestNodeConstructorGetter(JSGlobalObject& lexicalGlobalObject, JSDOMWindow& thisObject)
{
    UNUSED_PARAM(lexicalGlobalObject);
    return JSTestNode::getConstructor(JSC::getVM(&lexicalGlobalObject), &thisObject);
}

JSC_DEFINE_CUSTOM_GETTER(jsDOMWindow_TestNodeConstructor, (JSGlobalObject* lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSDOMWindow>::get<jsDOMWindow_TestNodeConstructorGetter>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsDOMWindow_TestObjectConstructorGetter(JSGlobalObject& lexicalGlobalObject, JSDOMWindow& thisObject)
{
    UNUSED_PARAM(lexicalGlobalObject);
    return JSTestObj::getConstructor(JSC::getVM(&lexicalGlobalObject), &thisObject);
}

JSC_DEFINE_CUSTOM_GETTER(jsDOMWindow_TestObjectConstructor, (JSGlobalObject* lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSDOMWindow>::get<jsDOMWindow_TestObjectConstructorGetter>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsDOMWindow_TestPromiseRejectionEventConstructorGetter(JSGlobalObject& lexicalGlobalObject, JSDOMWindow& thisObject)
{
    UNUSED_PARAM(lexicalGlobalObject);
    return JSTestPromiseRejectionEvent::getConstructor(JSC::getVM(&lexicalGlobalObject), &thisObject);
}

JSC_DEFINE_CUSTOM_GETTER(jsDOMWindow_TestPromiseRejectionEventConstructor, (JSGlobalObject* lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSDOMWindow>::get<jsDOMWindow_TestPromiseRejectionEventConstructorGetter>(*lexicalGlobalObject, thisValue, attributeName);
}

JSC::GCClient::IsoSubspace* JSDOMWindow::subspaceForImpl(JSC::VM& vm)
{
    return WebCore::subspaceForImpl<JSDOMWindow, UseCustomHeapCellType::Yes>(vm,
        [] (auto& spaces) { return spaces.m_clientSubspaceForDOMWindow.get(); },
        [] (auto& spaces, auto&& space) { spaces.m_clientSubspaceForDOMWindow = std::forward<decltype(space)>(space); },
        [] (auto& spaces) { return spaces.m_subspaceForDOMWindow.get(); },
        [] (auto& spaces, auto&& space) { spaces.m_subspaceForDOMWindow = std::forward<decltype(space)>(space); },
        [] (auto& server) -> JSC::HeapCellType& { return server.m_heapCellTypeForJSDOMWindow; }
    );
}

void JSDOMWindow::analyzeHeap(JSCell* cell, HeapAnalyzer& analyzer)
{
    auto* thisObject = jsCast<JSDOMWindow*>(cell);
    analyzer.setWrappedObjectForCell(cell, &thisObject->wrapped());
    if (thisObject->scriptExecutionContext())
        analyzer.setLabelForCell(cell, makeString("url "_s, thisObject->scriptExecutionContext()->url().string()));
    Base::analyzeHeap(cell, analyzer);
}

DOMWindow* JSDOMWindow::toWrapped(JSC::VM&, JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSDOMWindow*>(value))
        return &wrapper->wrapped();
    return nullptr;
}

}