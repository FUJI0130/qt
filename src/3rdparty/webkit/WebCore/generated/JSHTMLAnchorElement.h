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

#ifndef JSHTMLAnchorElement_h
#define JSHTMLAnchorElement_h

#include "JSHTMLElement.h"

namespace WebCore {

class HTMLAnchorElement;

class JSHTMLAnchorElement : public JSHTMLElement {
    typedef JSHTMLElement Base;
public:
    JSHTMLAnchorElement(NonNullPassRefPtr<JSC::Structure>, JSDOMGlobalObject*, PassRefPtr<HTMLAnchorElement>);
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags));
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSHTMLAnchorElementPrototype : public JSC::JSObject {
    typedef JSC::JSObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags));
    }
    JSHTMLAnchorElementPrototype(NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::JSValue JSC_HOST_CALL jsHTMLAnchorElementPrototypeFunctionToString(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
// Attributes

JSC::JSValue jsHTMLAnchorElementAccessKey(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAnchorElementAccessKey(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLAnchorElementCharset(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAnchorElementCharset(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLAnchorElementCoords(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAnchorElementCoords(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLAnchorElementHref(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAnchorElementHref(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLAnchorElementHreflang(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAnchorElementHreflang(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLAnchorElementName(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAnchorElementName(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLAnchorElementRel(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAnchorElementRel(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLAnchorElementRev(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAnchorElementRev(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLAnchorElementShape(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAnchorElementShape(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLAnchorElementTarget(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAnchorElementTarget(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLAnchorElementType(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAnchorElementType(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLAnchorElementHash(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsHTMLAnchorElementHost(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsHTMLAnchorElementHostname(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsHTMLAnchorElementPathname(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsHTMLAnchorElementPort(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsHTMLAnchorElementProtocol(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsHTMLAnchorElementSearch(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsHTMLAnchorElementText(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsHTMLAnchorElementConstructor(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);

} // namespace WebCore

#endif
