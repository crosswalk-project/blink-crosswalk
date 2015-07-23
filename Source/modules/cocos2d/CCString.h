// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CCString_h
#define CCString_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"

#include "modules/cocos2d/cocos2d_class.hpp"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"


namespace blink {

class CCString : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    static PassRefPtrWillBeRawPtr<CCString> create()
    {
        RefPtrWillBeRawPtr<CCString> ret = adoptRefWillBeNoop(new CCString());
        return ret.release();
    }

    ~CCString() {};

    cocos2d::CCString* getCocos2dImpl() {return (cocos2d::CCString*)(m_cocos2d_impl);}
    void setCocos2dImpl(cocos2d::CCString* impl) {m_cocos2d_impl = impl;}
    void setCocos2dImpl(cocos2d::CCString impl) {m_cocos2d_impl = new cocos2d::CCString(impl);}

protected:
    cocos2d::CCString* m_cocos2d_impl;

public:
    CCString();
};

DEFINE_TYPE_CASTS(CCString, CCObject, pCCString, true, true);

}

#endif // CCString_h
