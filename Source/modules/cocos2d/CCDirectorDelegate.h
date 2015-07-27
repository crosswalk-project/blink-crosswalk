// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCDirectorDelegate_h__
#define __CCDirectorDelegate_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"

#include "modules/cocos2d/cocos2d_class.hpp"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"


namespace blink {

class CCDirectorDelegate : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    static PassRefPtrWillBeRawPtr<CCDirectorDelegate> create()
    {
        RefPtrWillBeRawPtr<CCDirectorDelegate> ret = adoptRefWillBeNoop(new CCDirectorDelegate());
        return ret.release();
    }

    ~CCDirectorDelegate() {};

    cocos2d::CCDirectorDelegate* getCocos2dImpl() {return (cocos2d::CCDirectorDelegate*)(m_cocos2d_impl);}
    void setCocos2dImpl(cocos2d::CCDirectorDelegate* impl) {m_cocos2d_impl = impl;}
    /*
    void setCocos2dImpl(cocos2d::CCDirectorDelegate impl) {}
    */
protected:
    cocos2d::CCDirectorDelegate* m_cocos2d_impl;

public:
    CCDirectorDelegate();
};

DEFINE_TYPE_CASTS(CCDirectorDelegate, CCObject, pCCDirectorDelegate, true, true);

}

#endif // CCAction_h
