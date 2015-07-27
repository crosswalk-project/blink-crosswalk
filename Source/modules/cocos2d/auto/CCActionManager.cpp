// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCActionManager.h"

namespace blink {

    ScriptValue CCActionManager::getActionByTag(ScriptState* scriptState, unsigned int arg0, CCObject* arg1) {
        cocos2d::CCObject* _arg1 = (cocos2d::CCObject*)(arg1->getCocos2dImpl());

        cocos2d::CCAction* ret_impl = ((cocos2d::CCActionManager*)m_cocos2d_impl)->getActionByTag((unsigned int)(arg0),  _arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCAction)
        
    }

    void CCActionManager::removeActionByTag(unsigned int arg0, CCObject* arg1) {
        cocos2d::CCObject* _arg1 = (cocos2d::CCObject*)(arg1->getCocos2dImpl());

        ((cocos2d::CCActionManager*)m_cocos2d_impl)->removeActionByTag((unsigned int)(arg0),  _arg1);
    }

    void CCActionManager::removeAllActions() {

        ((cocos2d::CCActionManager*)m_cocos2d_impl)->removeAllActions();
    }

    void CCActionManager::addAction(ScriptValue& arg0_wrapper, ScriptValue& arg1_wrapper, bool arg2) {
        SCRIPT_VALUE_WRAPPER(CCAction, arg0_wrapper, arg0);
        cocos2d::CCAction* _arg0 = (cocos2d::CCAction*)(arg0->getCocos2dImpl());
        SCRIPT_VALUE_WRAPPER(CCNode, arg1_wrapper, arg1);
        cocos2d::CCNode* _arg1 = (cocos2d::CCNode*)(arg1->getCocos2dImpl());

        ((cocos2d::CCActionManager*)m_cocos2d_impl)->addAction( _arg0,  _arg1, (bool)(arg2));
    }

    void CCActionManager::resumeTarget(CCObject* arg0) {
        cocos2d::CCObject* _arg0 = (cocos2d::CCObject*)(arg0->getCocos2dImpl());

        ((cocos2d::CCActionManager*)m_cocos2d_impl)->resumeTarget( _arg0);
    }

    void CCActionManager::pauseTarget(CCObject* arg0) {
        cocos2d::CCObject* _arg0 = (cocos2d::CCObject*)(arg0->getCocos2dImpl());

        ((cocos2d::CCActionManager*)m_cocos2d_impl)->pauseTarget( _arg0);
    }

    void CCActionManager::removeAllActionsFromTarget(CCObject* arg0) {
        cocos2d::CCObject* _arg0 = (cocos2d::CCObject*)(arg0->getCocos2dImpl());

        ((cocos2d::CCActionManager*)m_cocos2d_impl)->removeAllActionsFromTarget( _arg0);
    }

    void CCActionManager::resumeTargets(CCSet* arg0) {
        cocos2d::CCSet* _arg0 = (cocos2d::CCSet*)(arg0->getCocos2dImpl());

        ((cocos2d::CCActionManager*)m_cocos2d_impl)->resumeTargets( _arg0);
    }

    void CCActionManager::removeAction(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCAction, arg0_wrapper, arg0);
        cocos2d::CCAction* _arg0 = (cocos2d::CCAction*)(arg0->getCocos2dImpl());

        ((cocos2d::CCActionManager*)m_cocos2d_impl)->removeAction( _arg0);
    }

    unsigned int CCActionManager::numberOfRunningActionsInTarget(CCObject* arg0) {
        cocos2d::CCObject* _arg0 = (cocos2d::CCObject*)(arg0->getCocos2dImpl());

        unsigned int ret_impl = ((cocos2d::CCActionManager*)m_cocos2d_impl)->numberOfRunningActionsInTarget( _arg0);
        
        
        return ret_impl;
    }

    ScriptValue CCActionManager::pauseAllRunningActions(ScriptState* scriptState) {

        cocos2d::CCSet* ret_impl = ((cocos2d::CCActionManager*)m_cocos2d_impl)->pauseAllRunningActions();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSet)
        
    }
    cocos2d::CCActionManager* CCActionManager::getCocos2dImpl() {
        return (cocos2d::CCActionManager*)m_cocos2d_impl;
    }


    CCActionManager::CCActionManager() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCActionManager> CCActionManager::create()
    {
        RefPtrWillBeRawPtr<CCActionManager> ret = adoptRefWillBeNoop(new CCActionManager());
        cocos2d::CCActionManager* impl = new cocos2d::CCActionManager();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCActionManager::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCActionManager::~CCActionManager() {
    }
} // namespace blink
