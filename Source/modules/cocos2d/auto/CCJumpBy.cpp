// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCJumpBy.h"

namespace blink {

    void CCJumpBy::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCJumpBy*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    ScriptValue CCJumpBy::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCJumpBy*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    bool CCJumpBy::initWithDuration(float arg0, CCPoint* arg1, float arg2, unsigned int arg3) {
        cocos2d::CCPoint* _arg1 = (cocos2d::CCPoint*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCJumpBy*)m_cocos2d_impl)->initWithDuration((float)(arg0),  *_arg1, (float)(arg2), (unsigned int)(arg3));
        
        
        return ret_impl;
    }

    void CCJumpBy::update(float arg0) {

        ((cocos2d::CCJumpBy*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCJumpBy::createInternal(ScriptState* scriptState, float arg0, CCPoint* arg1, float arg2, unsigned int arg3) {
        cocos2d::CCPoint* _arg1 = (cocos2d::CCPoint*)(arg1->getCocos2dImpl());

        cocos2d::CCJumpBy* ret_impl = cocos2d::CCJumpBy::create((float)(arg0),  *_arg1, (float)(arg2), (unsigned int)(arg3));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCJumpBy)
        
    }
    cocos2d::CCJumpBy* CCJumpBy::getCocos2dImpl() {
        return (cocos2d::CCJumpBy*)m_cocos2d_impl;
    }


    CCJumpBy::CCJumpBy() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCJumpBy> CCJumpBy::create()
    {
        RefPtrWillBeRawPtr<CCJumpBy> ret = adoptRefWillBeNoop(new CCJumpBy());
        cocos2d::CCJumpBy* impl = new cocos2d::CCJumpBy();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCJumpBy::~CCJumpBy() {
    }
} // namespace blink
