// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCActionInterval.h"

namespace blink {

    void CCActionInterval::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCActionInterval*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    bool CCActionInterval::initWithDuration(float arg0) {

        bool ret_impl = ((cocos2d::CCActionInterval*)m_cocos2d_impl)->initWithDuration((float)(arg0));
        
        
        return ret_impl;
    }

    void CCActionInterval::setAmplitudeRate(float arg0) {

        ((cocos2d::CCActionInterval*)m_cocos2d_impl)->setAmplitudeRate((float)(arg0));
    }

    float CCActionInterval::getAmplitudeRate() {

        float ret_impl = ((cocos2d::CCActionInterval*)m_cocos2d_impl)->getAmplitudeRate();
        
        
        return ret_impl;
    }

    void CCActionInterval::step(float arg0) {

        ((cocos2d::CCActionInterval*)m_cocos2d_impl)->step((float)(arg0));
    }

    float CCActionInterval::getElapsed() {

        float ret_impl = ((cocos2d::CCActionInterval*)m_cocos2d_impl)->getElapsed();
        
        
        return ret_impl;
    }

    bool CCActionInterval::isDone() {

        bool ret_impl = ((cocos2d::CCActionInterval*)m_cocos2d_impl)->isDone();
        
        
        return ret_impl;
    }

    ScriptValue CCActionInterval::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCActionInterval*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    ScriptValue CCActionInterval::createInternal(ScriptState* scriptState, float arg0) {

        cocos2d::CCActionInterval* ret_impl = cocos2d::CCActionInterval::create((float)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }
    cocos2d::CCActionInterval* CCActionInterval::getCocos2dImpl() {
        return (cocos2d::CCActionInterval*)m_cocos2d_impl;
    }


    CCActionInterval::CCActionInterval() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCActionInterval> CCActionInterval::create()
    {
        RefPtrWillBeRawPtr<CCActionInterval> ret = adoptRefWillBeNoop(new CCActionInterval());
        cocos2d::CCActionInterval* impl = new cocos2d::CCActionInterval();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCActionInterval::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCActionInterval::~CCActionInterval() {
    }
} // namespace blink
