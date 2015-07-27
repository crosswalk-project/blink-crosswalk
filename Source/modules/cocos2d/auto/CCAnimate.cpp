// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCAnimate.h"

namespace blink {

    void CCAnimate::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCAnimate*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    ScriptValue CCAnimate::getAnimation(ScriptState* scriptState) {

        cocos2d::CCAnimation* ret_impl = ((cocos2d::CCAnimate*)m_cocos2d_impl)->getAnimation();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCAnimation)
        
    }

    void CCAnimate::stop() {

        ((cocos2d::CCAnimate*)m_cocos2d_impl)->stop();
    }

    void CCAnimate::update(float arg0) {

        ((cocos2d::CCAnimate*)m_cocos2d_impl)->update((float)(arg0));
    }

    bool CCAnimate::initWithAnimation(CCAnimation* arg0) {
        cocos2d::CCAnimation* _arg0 = (cocos2d::CCAnimation*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCAnimate*)m_cocos2d_impl)->initWithAnimation( _arg0);
        
        
        return ret_impl;
    }

    void CCAnimate::setAnimation(CCAnimation* arg0) {
        cocos2d::CCAnimation* _arg0 = (cocos2d::CCAnimation*)(arg0->getCocos2dImpl());

        ((cocos2d::CCAnimate*)m_cocos2d_impl)->setAnimation( _arg0);
    }

    ScriptValue CCAnimate::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCAnimate*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    ScriptValue CCAnimate::createInternal(ScriptState* scriptState, CCAnimation* arg0) {
        cocos2d::CCAnimation* _arg0 = (cocos2d::CCAnimation*)(arg0->getCocos2dImpl());

        cocos2d::CCAnimate* ret_impl = cocos2d::CCAnimate::create( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCAnimate)
        
    }
    cocos2d::CCAnimate* CCAnimate::getCocos2dImpl() {
        return (cocos2d::CCAnimate*)m_cocos2d_impl;
    }


    CCAnimate::CCAnimate() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCAnimate> CCAnimate::create()
    {
        RefPtrWillBeRawPtr<CCAnimate> ret = adoptRefWillBeNoop(new CCAnimate());
        cocos2d::CCAnimate* impl = new cocos2d::CCAnimate();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCAnimate::~CCAnimate() {
    }
} // namespace blink
