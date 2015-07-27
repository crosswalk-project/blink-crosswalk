// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCRepeatForever.h"

namespace blink {

    void CCRepeatForever::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCRepeatForever*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    void CCRepeatForever::setInnerAction(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        ((cocos2d::CCRepeatForever*)m_cocos2d_impl)->setInnerAction( _arg0);
    }

    void CCRepeatForever::step(float arg0) {

        ((cocos2d::CCRepeatForever*)m_cocos2d_impl)->step((float)(arg0));
    }

    bool CCRepeatForever::initWithAction(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCRepeatForever*)m_cocos2d_impl)->initWithAction( _arg0);
        
        
        return ret_impl;
    }

    ScriptValue CCRepeatForever::getInnerAction(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCRepeatForever*)m_cocos2d_impl)->getInnerAction();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    bool CCRepeatForever::isDone() {

        bool ret_impl = ((cocos2d::CCRepeatForever*)m_cocos2d_impl)->isDone();
        
        
        return ret_impl;
    }

    ScriptValue CCRepeatForever::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCRepeatForever*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    ScriptValue CCRepeatForever::createInternal(ScriptState* scriptState, ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        cocos2d::CCRepeatForever* ret_impl = cocos2d::CCRepeatForever::create( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCRepeatForever)
        
    }
    cocos2d::CCRepeatForever* CCRepeatForever::getCocos2dImpl() {
        return (cocos2d::CCRepeatForever*)m_cocos2d_impl;
    }


    CCRepeatForever::CCRepeatForever() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCRepeatForever> CCRepeatForever::create()
    {
        RefPtrWillBeRawPtr<CCRepeatForever> ret = adoptRefWillBeNoop(new CCRepeatForever());
        cocos2d::CCRepeatForever* impl = new cocos2d::CCRepeatForever();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCRepeatForever::~CCRepeatForever() {
    }
} // namespace blink
