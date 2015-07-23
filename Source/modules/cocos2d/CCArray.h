// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CCArray_h
#define CCArray_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"

#include "modules/cocos2d/cocos2d_class.hpp"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

namespace blink {

class CCArray : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    static PassRefPtrWillBeRawPtr<CCArray> create();

    ~CCArray();
    long length() const;

    cocos2d::CCArray* getCocos2dImpl() {return (cocos2d::CCArray*)(m_cocos2d_impl);}
    void setCocos2dImpl(cocos2d::CCArray* impl);
    void setCocos2dImpl(cocos2d::CCArray impl) {m_cocos2d_impl = new cocos2d::CCArray(impl);}

    void getItem(unsigned int index, cocos2d::CCString** str, cocos2d::CCDictionary** dic, cocos2d::CCArray** arr,
                 cocos2d::CCDouble** dou, cocos2d::CCBool** bol, cocos2d::CCFloat** flt, cocos2d::CCInteger** itg);

    void setItem(unsigned int index, cocos2d::CCObject obj);

    static PassRefPtrWillBeRawPtr<CCArray> fromJSArray(const Vector<ScriptValue>& jsValues);

protected:
    cocos2d::CCArray* m_cocos2d_impl;

public:
    CCArray();
};

DEFINE_TYPE_CASTS(CCArray, CCObject, pCCArray, true, true);

}

#endif // CCAction_h
