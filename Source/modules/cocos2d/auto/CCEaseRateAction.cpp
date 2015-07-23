// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCEaseRateAction.h"

namespace blink {

    void CCEaseRateAction::setRate(float arg0) {

        ((cocos2d::CCEaseRateAction*)m_cocos2d_impl)->setRate((float)(arg0));
    }

    bool CCEaseRateAction::initWithAction(ScriptValue& arg0_wrapper, float arg1) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCEaseRateAction*)m_cocos2d_impl)->initWithAction( _arg0, (float)(arg1));
        
        
        return ret_impl;
    }

    ScriptValue CCEaseRateAction::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCEaseRateAction*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    float CCEaseRateAction::getRate() {

        float ret_impl = ((cocos2d::CCEaseRateAction*)m_cocos2d_impl)->getRate();
        
        
        return ret_impl;
    }

    ScriptValue CCEaseRateAction::createInternal(ScriptState* scriptState, ScriptValue& arg0_wrapper, float arg1) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        cocos2d::CCEaseRateAction* ret_impl = cocos2d::CCEaseRateAction::create( _arg0, (float)(arg1));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCEaseRateAction)
        
    }
    cocos2d::CCEaseRateAction* CCEaseRateAction::getCocos2dImpl() {
        return (cocos2d::CCEaseRateAction*)m_cocos2d_impl;
    }


    CCEaseRateAction::CCEaseRateAction() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCEaseRateAction> CCEaseRateAction::create()
    {
        RefPtrWillBeRawPtr<CCEaseRateAction> ret = adoptRefWillBeNoop(new CCEaseRateAction());
        cocos2d::CCEaseRateAction* impl = new cocos2d::CCEaseRateAction();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCEaseRateAction::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCEaseRateAction::~CCEaseRateAction() {
    }
} // namespace blink
