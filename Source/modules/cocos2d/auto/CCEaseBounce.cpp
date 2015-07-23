// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCEaseBounce.h"

namespace blink {

    float CCEaseBounce::bounceTime(float arg0) {

        float ret_impl = ((cocos2d::CCEaseBounce*)m_cocos2d_impl)->bounceTime((float)(arg0));
        
        
        return ret_impl;
    }

    ScriptValue CCEaseBounce::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCEaseBounce*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    ScriptValue CCEaseBounce::createInternal(ScriptState* scriptState, ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        cocos2d::CCEaseBounce* ret_impl = cocos2d::CCEaseBounce::create( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCEaseBounce)
        
    }
    cocos2d::CCEaseBounce* CCEaseBounce::getCocos2dImpl() {
        return (cocos2d::CCEaseBounce*)m_cocos2d_impl;
    }


    CCEaseBounce::CCEaseBounce() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCEaseBounce> CCEaseBounce::create()
    {
        RefPtrWillBeRawPtr<CCEaseBounce> ret = adoptRefWillBeNoop(new CCEaseBounce());
        cocos2d::CCEaseBounce* impl = new cocos2d::CCEaseBounce();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCEaseBounce::~CCEaseBounce() {
    }
} // namespace blink
