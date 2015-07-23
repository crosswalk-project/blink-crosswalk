// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCProgressFromTo.h"

namespace blink {

    void CCProgressFromTo::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCProgressFromTo*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    void CCProgressFromTo::update(float arg0) {

        ((cocos2d::CCProgressFromTo*)m_cocos2d_impl)->update((float)(arg0));
    }

    bool CCProgressFromTo::initWithDuration(float arg0, float arg1, float arg2) {

        bool ret_impl = ((cocos2d::CCProgressFromTo*)m_cocos2d_impl)->initWithDuration((float)(arg0), (float)(arg1), (float)(arg2));
        
        
        return ret_impl;
    }

    ScriptValue CCProgressFromTo::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCProgressFromTo*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    ScriptValue CCProgressFromTo::createInternal(ScriptState* scriptState, float arg0, float arg1, float arg2) {

        cocos2d::CCProgressFromTo* ret_impl = cocos2d::CCProgressFromTo::create((float)(arg0), (float)(arg1), (float)(arg2));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCProgressFromTo)
        
    }
    cocos2d::CCProgressFromTo* CCProgressFromTo::getCocos2dImpl() {
        return (cocos2d::CCProgressFromTo*)m_cocos2d_impl;
    }


    CCProgressFromTo::CCProgressFromTo() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCProgressFromTo> CCProgressFromTo::create()
    {
        RefPtrWillBeRawPtr<CCProgressFromTo> ret = adoptRefWillBeNoop(new CCProgressFromTo());
        cocos2d::CCProgressFromTo* impl = new cocos2d::CCProgressFromTo();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCProgressFromTo::~CCProgressFromTo() {
    }
} // namespace blink
