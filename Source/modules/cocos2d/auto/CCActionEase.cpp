// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCActionEase.h"

namespace blink {

    void CCActionEase::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCActionEase*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    ScriptValue CCActionEase::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCActionEase*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    void CCActionEase::stop() {

        ((cocos2d::CCActionEase*)m_cocos2d_impl)->stop();
    }

    void CCActionEase::update(float arg0) {

        ((cocos2d::CCActionEase*)m_cocos2d_impl)->update((float)(arg0));
    }

    bool CCActionEase::initWithAction(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCActionEase*)m_cocos2d_impl)->initWithAction( _arg0);
        
        
        return ret_impl;
    }

    ScriptValue CCActionEase::getInnerAction(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCActionEase*)m_cocos2d_impl)->getInnerAction();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    ScriptValue CCActionEase::createInternal(ScriptState* scriptState, ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        cocos2d::CCActionEase* ret_impl = cocos2d::CCActionEase::create( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionEase)
        
    }
    cocos2d::CCActionEase* CCActionEase::getCocos2dImpl() {
        return (cocos2d::CCActionEase*)m_cocos2d_impl;
    }


    CCActionEase::CCActionEase() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCActionEase> CCActionEase::create()
    {
        RefPtrWillBeRawPtr<CCActionEase> ret = adoptRefWillBeNoop(new CCActionEase());
        cocos2d::CCActionEase* impl = new cocos2d::CCActionEase();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCActionEase::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCActionEase::~CCActionEase() {
    }
} // namespace blink
