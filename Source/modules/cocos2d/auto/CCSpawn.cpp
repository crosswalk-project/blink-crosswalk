// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCSpawn.h"

namespace blink {

    void CCSpawn::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSpawn*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    ScriptValue CCSpawn::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCSpawn*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    void CCSpawn::stop() {

        ((cocos2d::CCSpawn*)m_cocos2d_impl)->stop();
    }

    void CCSpawn::update(float arg0) {

        ((cocos2d::CCSpawn*)m_cocos2d_impl)->update((float)(arg0));
    }

    bool CCSpawn::initWithTwoActions(ScriptValue& arg0_wrapper, ScriptValue& arg1_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCFiniteTimeAction, arg0_wrapper, arg0);
        cocos2d::CCFiniteTimeAction* _arg0 = (cocos2d::CCFiniteTimeAction*)(arg0->getCocos2dImpl());
        SCRIPT_VALUE_WRAPPER(CCFiniteTimeAction, arg1_wrapper, arg1);
        cocos2d::CCFiniteTimeAction* _arg1 = (cocos2d::CCFiniteTimeAction*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCSpawn*)m_cocos2d_impl)->initWithTwoActions( _arg0,  _arg1);
        
        
        return ret_impl;
    }
    cocos2d::CCSpawn* CCSpawn::getCocos2dImpl() {
        return (cocos2d::CCSpawn*)m_cocos2d_impl;
    }


    CCSpawn::CCSpawn() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCSpawn> CCSpawn::create()
    {
        RefPtrWillBeRawPtr<CCSpawn> ret = adoptRefWillBeNoop(new CCSpawn());
        cocos2d::CCSpawn* impl = new cocos2d::CCSpawn();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCSpawn::~CCSpawn() {
    }
} // namespace blink
