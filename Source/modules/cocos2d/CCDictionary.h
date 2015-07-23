// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CCDictionary_h
#define CCDictionary_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"

#include "modules/cocos2d/cocos2d_class.hpp"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"
#include "bindings/core/v8/ExceptionState.h"

namespace blink {

class CCDictionary : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    static PassRefPtrWillBeRawPtr<CCDictionary> create()
    {
        RefPtrWillBeRawPtr<CCDictionary> ret = adoptRefWillBeNoop(new CCDictionary());
        return ret.release();
    }

    ~CCDictionary();

    unsigned length() const;

    cocos2d::CCDictionary* getCocos2dImpl() {return (cocos2d::CCDictionary*)(m_cocos2d_impl);}
    void setCocos2dImpl(cocos2d::CCDictionary* impl);
    void setCocos2dImpl(cocos2d::CCDictionary impl) {m_cocos2d_impl = new cocos2d::CCDictionary(impl);}

    void getItem(String key, cocos2d::CCString** str, cocos2d::CCDictionary** dic, cocos2d::CCArray** arr,
                 cocos2d::CCDouble** dou, cocos2d::CCBool** bol, cocos2d::CCFloat** flt, cocos2d::CCInteger** itg);

    void namedPropertyEnumerator(Vector<String>& names, ExceptionState&);
    bool namedPropertyQuery(const AtomicString&, ExceptionState&);

    static PassRefPtrWillBeRawPtr<CCDictionary> fromJSObj(const ScriptValue& jsObj);

protected:
    cocos2d::CCDictionary* m_cocos2d_impl;
    static void v8ObjectToCCDictionary(v8::Handle<v8::Object>& jsDict, cocos2d::CCDictionary* ccDict);
    static void v8ArrayToCCArray(v8::Handle<v8::Array>& jsArray, cocos2d::CCArray* ccArray);

public:
    CCDictionary();
};

DEFINE_TYPE_CASTS(CCDictionary, CCObject, pCCDictionary, true, true);

}

#endif // CCAction_h
