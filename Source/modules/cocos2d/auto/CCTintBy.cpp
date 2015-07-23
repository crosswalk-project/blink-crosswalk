// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTintBy.h"

namespace blink {

    void CCTintBy::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTintBy*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    ScriptValue CCTintBy::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCTintBy*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    bool CCTintBy::initWithDuration(float arg0, short arg1, short arg2, short arg3) {

        bool ret_impl = ((cocos2d::CCTintBy*)m_cocos2d_impl)->initWithDuration((float)(arg0), (short)(arg1), (short)(arg2), (short)(arg3));
        
        
        return ret_impl;
    }

    void CCTintBy::update(float arg0) {

        ((cocos2d::CCTintBy*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCTintBy::createInternal(ScriptState* scriptState, float arg0, short arg1, short arg2, short arg3) {

        cocos2d::CCTintBy* ret_impl = cocos2d::CCTintBy::create((float)(arg0), (short)(arg1), (short)(arg2), (short)(arg3));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTintBy)
        
    }
    cocos2d::CCTintBy* CCTintBy::getCocos2dImpl() {
        return (cocos2d::CCTintBy*)m_cocos2d_impl;
    }


    CCTintBy::CCTintBy() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTintBy> CCTintBy::create()
    {
        RefPtrWillBeRawPtr<CCTintBy> ret = adoptRefWillBeNoop(new CCTintBy());
        cocos2d::CCTintBy* impl = new cocos2d::CCTintBy();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTintBy::~CCTintBy() {
    }
} // namespace blink
