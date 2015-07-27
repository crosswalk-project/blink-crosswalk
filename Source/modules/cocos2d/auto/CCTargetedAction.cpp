// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTargetedAction.h"

namespace blink {

    void CCTargetedAction::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTargetedAction*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    void CCTargetedAction::setForcedTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTargetedAction*)m_cocos2d_impl)->setForcedTarget( _arg0);
    }

    bool CCTargetedAction::initWithTarget(ScriptValue& arg0_wrapper, ScriptValue& arg1_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());
        SCRIPT_VALUE_WRAPPER(CCFiniteTimeAction, arg1_wrapper, arg1);
        cocos2d::CCFiniteTimeAction* _arg1 = (cocos2d::CCFiniteTimeAction*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCTargetedAction*)m_cocos2d_impl)->initWithTarget( _arg0,  _arg1);
        
        
        return ret_impl;
    }

    void CCTargetedAction::stop() {

        ((cocos2d::CCTargetedAction*)m_cocos2d_impl)->stop();
    }

    void CCTargetedAction::update(float arg0) {

        ((cocos2d::CCTargetedAction*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCTargetedAction::getForcedTarget(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = ((cocos2d::CCTargetedAction*)m_cocos2d_impl)->getForcedTarget();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    ScriptValue CCTargetedAction::createInternal(ScriptState* scriptState, ScriptValue& arg0_wrapper, ScriptValue& arg1_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());
        SCRIPT_VALUE_WRAPPER(CCFiniteTimeAction, arg1_wrapper, arg1);
        cocos2d::CCFiniteTimeAction* _arg1 = (cocos2d::CCFiniteTimeAction*)(arg1->getCocos2dImpl());

        cocos2d::CCTargetedAction* ret_impl = cocos2d::CCTargetedAction::create( _arg0,  _arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTargetedAction)
        
    }
    cocos2d::CCTargetedAction* CCTargetedAction::getCocos2dImpl() {
        return (cocos2d::CCTargetedAction*)m_cocos2d_impl;
    }


    CCTargetedAction::CCTargetedAction() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTargetedAction> CCTargetedAction::create()
    {
        RefPtrWillBeRawPtr<CCTargetedAction> ret = adoptRefWillBeNoop(new CCTargetedAction());
        cocos2d::CCTargetedAction* impl = new cocos2d::CCTargetedAction();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCTargetedAction::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCTargetedAction::~CCTargetedAction() {
    }
} // namespace blink
