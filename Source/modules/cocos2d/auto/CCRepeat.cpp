// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCRepeat.h"

namespace blink {

    void CCRepeat::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCRepeat*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    void CCRepeat::setInnerAction(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCFiniteTimeAction, arg0_wrapper, arg0);
        cocos2d::CCFiniteTimeAction* _arg0 = (cocos2d::CCFiniteTimeAction*)(arg0->getCocos2dImpl());

        ((cocos2d::CCRepeat*)m_cocos2d_impl)->setInnerAction( _arg0);
    }

    void CCRepeat::stop() {

        ((cocos2d::CCRepeat*)m_cocos2d_impl)->stop();
    }

    void CCRepeat::update(float arg0) {

        ((cocos2d::CCRepeat*)m_cocos2d_impl)->update((float)(arg0));
    }

    bool CCRepeat::initWithAction(ScriptValue& arg0_wrapper, unsigned int arg1) {
        SCRIPT_VALUE_WRAPPER(CCFiniteTimeAction, arg0_wrapper, arg0);
        cocos2d::CCFiniteTimeAction* _arg0 = (cocos2d::CCFiniteTimeAction*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCRepeat*)m_cocos2d_impl)->initWithAction( _arg0, (unsigned int)(arg1));
        
        
        return ret_impl;
    }

    ScriptValue CCRepeat::getInnerAction(ScriptState* scriptState) {

        cocos2d::CCFiniteTimeAction* ret_impl = ((cocos2d::CCRepeat*)m_cocos2d_impl)->getInnerAction();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCFiniteTimeAction)
        
    }

    bool CCRepeat::isDone() {

        bool ret_impl = ((cocos2d::CCRepeat*)m_cocos2d_impl)->isDone();
        
        
        return ret_impl;
    }

    ScriptValue CCRepeat::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCRepeat*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    ScriptValue CCRepeat::createInternal(ScriptState* scriptState, ScriptValue& arg0_wrapper, unsigned int arg1) {
        SCRIPT_VALUE_WRAPPER(CCFiniteTimeAction, arg0_wrapper, arg0);
        cocos2d::CCFiniteTimeAction* _arg0 = (cocos2d::CCFiniteTimeAction*)(arg0->getCocos2dImpl());

        cocos2d::CCRepeat* ret_impl = cocos2d::CCRepeat::create( _arg0, (unsigned int)(arg1));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCRepeat)
        
    }
    cocos2d::CCRepeat* CCRepeat::getCocos2dImpl() {
        return (cocos2d::CCRepeat*)m_cocos2d_impl;
    }


    CCRepeat::CCRepeat() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCRepeat> CCRepeat::create()
    {
        RefPtrWillBeRawPtr<CCRepeat> ret = adoptRefWillBeNoop(new CCRepeat());
        cocos2d::CCRepeat* impl = new cocos2d::CCRepeat();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCRepeat::~CCRepeat() {
    }
} // namespace blink
