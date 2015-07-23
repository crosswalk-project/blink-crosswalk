// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCSpeed.h"

namespace blink {

    void CCSpeed::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSpeed*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    void CCSpeed::setInnerAction(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSpeed*)m_cocos2d_impl)->setInnerAction( _arg0);
    }

    ScriptValue CCSpeed::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCSpeed*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    void CCSpeed::stop() {

        ((cocos2d::CCSpeed*)m_cocos2d_impl)->stop();
    }

    void CCSpeed::step(float arg0) {

        ((cocos2d::CCSpeed*)m_cocos2d_impl)->step((float)(arg0));
    }

    void CCSpeed::setSpeed(float arg0) {

        ((cocos2d::CCSpeed*)m_cocos2d_impl)->setSpeed((float)(arg0));
    }

    bool CCSpeed::initWithAction(ScriptValue& arg0_wrapper, float arg1) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCSpeed*)m_cocos2d_impl)->initWithAction( _arg0, (float)(arg1));
        
        
        return ret_impl;
    }

    ScriptValue CCSpeed::getInnerAction(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCSpeed*)m_cocos2d_impl)->getInnerAction();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    bool CCSpeed::isDone() {

        bool ret_impl = ((cocos2d::CCSpeed*)m_cocos2d_impl)->isDone();
        
        
        return ret_impl;
    }

    float CCSpeed::getSpeed() {

        float ret_impl = ((cocos2d::CCSpeed*)m_cocos2d_impl)->getSpeed();
        
        
        return ret_impl;
    }

    ScriptValue CCSpeed::createInternal(ScriptState* scriptState, ScriptValue& arg0_wrapper, float arg1) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        cocos2d::CCSpeed* ret_impl = cocos2d::CCSpeed::create( _arg0, (float)(arg1));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSpeed)
        
    }
    cocos2d::CCSpeed* CCSpeed::getCocos2dImpl() {
        return (cocos2d::CCSpeed*)m_cocos2d_impl;
    }


    CCSpeed::CCSpeed() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCSpeed> CCSpeed::create()
    {
        RefPtrWillBeRawPtr<CCSpeed> ret = adoptRefWillBeNoop(new CCSpeed());
        cocos2d::CCSpeed* impl = new cocos2d::CCSpeed();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCSpeed::~CCSpeed() {
    }
} // namespace blink
