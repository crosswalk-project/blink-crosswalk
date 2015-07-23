// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCAction.h"

namespace blink {

    void CCAction::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCAction*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    void CCAction::setOriginalTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCAction*)m_cocos2d_impl)->setOriginalTarget( _arg0);
    }

    void CCAction::setTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCAction*)m_cocos2d_impl)->setTarget( _arg0);
    }

    ScriptValue CCAction::getOriginalTarget(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = ((cocos2d::CCAction*)m_cocos2d_impl)->getOriginalTarget();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    void CCAction::stop() {

        ((cocos2d::CCAction*)m_cocos2d_impl)->stop();
    }

    void CCAction::update(float arg0) {

        ((cocos2d::CCAction*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCAction::getTarget(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = ((cocos2d::CCAction*)m_cocos2d_impl)->getTarget();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    void CCAction::step(float arg0) {

        ((cocos2d::CCAction*)m_cocos2d_impl)->step((float)(arg0));
    }

    void CCAction::setTag(int arg0) {

        ((cocos2d::CCAction*)m_cocos2d_impl)->setTag((int)(arg0));
    }

    int CCAction::getTag() {

        int ret_impl = ((cocos2d::CCAction*)m_cocos2d_impl)->getTag();
        
        
        return ret_impl;
    }

    bool CCAction::isDone() {

        bool ret_impl = ((cocos2d::CCAction*)m_cocos2d_impl)->isDone();
        
        
        return ret_impl;
    }

    ScriptValue CCAction::createInternal(ScriptState* scriptState) {

        cocos2d::CCAction* ret_impl = cocos2d::CCAction::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCAction)
        
    }
    cocos2d::CCAction* CCAction::getCocos2dImpl() {
        return (cocos2d::CCAction*)m_cocos2d_impl;
    }


    CCAction::CCAction() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCAction> CCAction::create()
    {
        RefPtrWillBeRawPtr<CCAction> ret = adoptRefWillBeNoop(new CCAction());
        cocos2d::CCAction* impl = new cocos2d::CCAction();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCAction::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCAction::~CCAction() {
    }
} // namespace blink
