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
#include "JSExposedStar.h"

#include "ActiveDOMObject.h"
#include "ExtendedDOMClientIsoSubspaces.h"
#include "ExtendedDOMIsoSubspaces.h"
#include "IDLTypes.h"
#include "JSDOMBinding.h"
#include "JSDOMConstructorNotConstructable.h"
#include "JSDOMConvertBase.h"
#include "JSDOMExceptionHandling.h"
#include "JSDOMGlobalObjectInlines.h"
#include "JSDOMOperation.h"
#include "JSDOMWindowBase.h"
#include "JSDOMWrapperCache.h"
#include "JSWorkerGlobalScopeBase.h"
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


namespace WebCore {
using namespace JSC;

// Functions

static JSC_DECLARE_HOST_FUNCTION(jsExposedStarPrototypeFunction_operationForAllContexts);
static JSC_DECLARE_HOST_FUNCTION(jsExposedStarPrototypeFunction_operationJustForWindowContexts);
static JSC_DECLARE_HOST_FUNCTION(jsExposedStarPrototypeFunction_operationJustForWorkerContexts);

// Attributes

static JSC_DECLARE_CUSTOM_GETTER(jsExposedStarConstructor);

class JSExposedStarPrototype final : public JSC::JSNonFinalObject {
public:
    using Base = JSC::JSNonFinalObject;
    static JSExposedStarPrototype* create(JSC::VM& vm, JSDOMGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSExposedStarPrototype* ptr = new (NotNull, JSC::allocateCell<JSExposedStarPrototype>(vm)) JSExposedStarPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    template<typename CellType, JSC::SubspaceAccess>
    static JSC::GCClient::IsoSubspace* subspaceFor(JSC::VM& vm)
    {
        STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSExposedStarPrototype, Base);
        return &vm.plainObjectSpace();
    }
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSExposedStarPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};
STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSExposedStarPrototype, JSExposedStarPrototype::Base);

using JSExposedStarDOMConstructor = JSDOMConstructorNotConstructable<JSExposedStar>;

template<> const ClassInfo JSExposedStarDOMConstructor::s_info = { "ExposedStar"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSExposedStarDOMConstructor) };

template<> JSValue JSExposedStarDOMConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    return JSEventTarget::getConstructor(vm, &globalObject);
}

template<> void JSExposedStarDOMConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->length, jsNumber(0), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    JSString* nameString = jsNontrivialString(vm, "ExposedStar"_s);
    m_originalName.set(vm, this, nameString);
    putDirect(vm, vm.propertyNames->name, nameString, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->prototype, JSExposedStar::prototype(vm, globalObject), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum | JSC::PropertyAttribute::DontDelete);
}

/* Hash table for prototype */

static const HashTableValue JSExposedStarPrototypeTableValues[] =
{
    { "constructor"_s, static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsExposedStarConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) } },
    { "operationForAllContexts"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(jsExposedStarPrototypeFunction_operationForAllContexts), (intptr_t) (0) } },
    { "operationJustForWindowContexts"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(jsExposedStarPrototypeFunction_operationJustForWindowContexts), (intptr_t) (0) } },
    { "operationJustForWorkerContexts"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(jsExposedStarPrototypeFunction_operationJustForWorkerContexts), (intptr_t) (0) } },
};

const ClassInfo JSExposedStarPrototype::s_info = { "ExposedStar"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSExposedStarPrototype) };

void JSExposedStarPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSExposedStar::info(), JSExposedStarPrototypeTableValues, *this);
    bool hasDisabledRuntimeProperties = false;
    if (!(globalObject())->inherits<JSDOMWindowBase>()) {
        hasDisabledRuntimeProperties = true;
        auto propertyName = Identifier::fromString(vm, "operationJustForWindowContexts"_s);
        VM::DeletePropertyModeScope scope(vm, VM::DeletePropertyMode::IgnoreConfigurable);
        DeletePropertySlot slot;
        JSObject::deleteProperty(this, globalObject(), propertyName, slot);
    }
    if (!(globalObject())->inherits<JSWorkerGlobalScopeBase>()) {
        hasDisabledRuntimeProperties = true;
        auto propertyName = Identifier::fromString(vm, "operationJustForWorkerContexts"_s);
        VM::DeletePropertyModeScope scope(vm, VM::DeletePropertyMode::IgnoreConfigurable);
        DeletePropertySlot slot;
        JSObject::deleteProperty(this, globalObject(), propertyName, slot);
    }
    if (hasDisabledRuntimeProperties && structure()->isDictionary())
        flattenDictionaryObject(vm);
    JSC_TO_STRING_TAG_WITHOUT_TRANSITION();
}

const ClassInfo JSExposedStar::s_info = { "ExposedStar"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSExposedStar) };

JSExposedStar::JSExposedStar(Structure* structure, JSDOMGlobalObject& globalObject, Ref<ExposedStar>&& impl)
    : JSEventTarget(structure, globalObject, WTFMove(impl))
{
}

void JSExposedStar::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));

    static_assert(!std::is_base_of<ActiveDOMObject, ExposedStar>::value, "Interface is not marked as [ActiveDOMObject] even though implementation class subclasses ActiveDOMObject.");

}

JSObject* JSExposedStar::createPrototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return JSExposedStarPrototype::create(vm, &globalObject, JSExposedStarPrototype::createStructure(vm, &globalObject, JSEventTarget::prototype(vm, globalObject)));
}

JSObject* JSExposedStar::prototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return getDOMPrototype<JSExposedStar>(vm, globalObject);
}

JSValue JSExposedStar::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSExposedStarDOMConstructor, DOMConstructorID::ExposedStar>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

JSC_DEFINE_CUSTOM_GETTER(jsExposedStarConstructor, (JSGlobalObject* lexicalGlobalObject, EncodedJSValue thisValue, PropertyName))
{
    VM& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSExposedStarPrototype*>(JSValue::decode(thisValue));
    if (UNLIKELY(!prototype))
        return throwVMTypeError(lexicalGlobalObject, throwScope);
    return JSValue::encode(JSExposedStar::getConstructor(JSC::getVM(lexicalGlobalObject), prototype->globalObject()));
}

static inline JSC::EncodedJSValue jsExposedStarPrototypeFunction_operationForAllContextsBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSExposedStar>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLUndefined>(*lexicalGlobalObject, throwScope, [&]() -> decltype(auto) { return impl.operationForAllContexts(); })));
}

JSC_DEFINE_HOST_FUNCTION(jsExposedStarPrototypeFunction_operationForAllContexts, (JSGlobalObject* lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSExposedStar>::call<jsExposedStarPrototypeFunction_operationForAllContextsBody>(*lexicalGlobalObject, *callFrame, "operationForAllContexts");
}

static inline JSC::EncodedJSValue jsExposedStarPrototypeFunction_operationJustForWindowContextsBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSExposedStar>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLUndefined>(*lexicalGlobalObject, throwScope, [&]() -> decltype(auto) { return impl.operationJustForWindowContexts(); })));
}

JSC_DEFINE_HOST_FUNCTION(jsExposedStarPrototypeFunction_operationJustForWindowContexts, (JSGlobalObject* lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSExposedStar>::call<jsExposedStarPrototypeFunction_operationJustForWindowContextsBody>(*lexicalGlobalObject, *callFrame, "operationJustForWindowContexts");
}

static inline JSC::EncodedJSValue jsExposedStarPrototypeFunction_operationJustForWorkerContextsBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSExposedStar>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLUndefined>(*lexicalGlobalObject, throwScope, [&]() -> decltype(auto) { return impl.operationJustForWorkerContexts(); })));
}

JSC_DEFINE_HOST_FUNCTION(jsExposedStarPrototypeFunction_operationJustForWorkerContexts, (JSGlobalObject* lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSExposedStar>::call<jsExposedStarPrototypeFunction_operationJustForWorkerContextsBody>(*lexicalGlobalObject, *callFrame, "operationJustForWorkerContexts");
}

JSC::GCClient::IsoSubspace* JSExposedStar::subspaceForImpl(JSC::VM& vm)
{
    return WebCore::subspaceForImpl<JSExposedStar, UseCustomHeapCellType::No>(vm,
        [] (auto& spaces) { return spaces.m_clientSubspaceForExposedStar.get(); },
        [] (auto& spaces, auto&& space) { spaces.m_clientSubspaceForExposedStar = WTFMove(space); },
        [] (auto& spaces) { return spaces.m_subspaceForExposedStar.get(); },
        [] (auto& spaces, auto&& space) { spaces.m_subspaceForExposedStar = WTFMove(space); }
    );
}

void JSExposedStar::analyzeHeap(JSCell* cell, HeapAnalyzer& analyzer)
{
    auto* thisObject = jsCast<JSExposedStar*>(cell);
    analyzer.setWrappedObjectForCell(cell, &thisObject->wrapped());
    if (thisObject->scriptExecutionContext())
        analyzer.setLabelForCell(cell, "url " + thisObject->scriptExecutionContext()->url().string());
    Base::analyzeHeap(cell, analyzer);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7ExposedStar@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore11ExposedStarE[]; }
#endif
#endif

JSC::JSValue toJSNewlyCreated(JSC::JSGlobalObject*, JSDOMGlobalObject* globalObject, Ref<ExposedStar>&& impl)
{

    if constexpr (std::is_polymorphic_v<ExposedStar>) {
#if ENABLE(BINDING_INTEGRITY)
        const void* actualVTablePointer = getVTablePointer(impl.ptr());
#if PLATFORM(WIN)
        void* expectedVTablePointer = __identifier("??_7ExposedStar@WebCore@@6B@");
#else
        void* expectedVTablePointer = &_ZTVN7WebCore11ExposedStarE[2];
#endif

        // If you hit this assertion you either have a use after free bug, or
        // ExposedStar has subclasses. If ExposedStar has subclasses that get passed
        // to toJS() we currently require ExposedStar you to opt out of binding hardening
        // by adding the SkipVTableValidation attribute to the interface IDL definition
        RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    }
    return createWrapper<ExposedStar>(globalObject, WTFMove(impl));
}

JSC::JSValue toJS(JSC::JSGlobalObject* lexicalGlobalObject, JSDOMGlobalObject* globalObject, ExposedStar& impl)
{
    return wrap(lexicalGlobalObject, globalObject, impl);
}

ExposedStar* JSExposedStar::toWrapped(JSC::VM&, JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSExposedStar*>(value))
        return &wrapper->wrapped();
    return nullptr;
}

}