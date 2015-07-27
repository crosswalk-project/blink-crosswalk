// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCScaleBy.h"

namespace blink {

    void CCScaleBy::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCScaleBy*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    ScriptValue CCScaleBy::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCScaleBy*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }
    ScriptValue CCScaleBy::createInternal(ScriptState* scriptState, float arg0, float arg1, float arg2) {

        cocos2d::CCScaleBy* ret_impl = cocos2d::CCScaleBy::create((float)(arg0), (float)(arg1), (float)(arg2));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCScaleBy)
        
    }
    ScriptValue CCScaleBy::createInternal(ScriptState* scriptState, float arg0, float arg1) {

        cocos2d::CCScaleBy* ret_impl = cocos2d::CCScaleBy::create((float)(arg0), (float)(arg1));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCScaleBy)
        
    }
    cocos2d::CCScaleBy* CCScaleBy::getCocos2dImpl() {
        return (cocos2d::CCScaleBy*)m_cocos2d_impl;
    }


    CCScaleBy::CCScaleBy() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCScaleBy> CCScaleBy::create()
    {
        RefPtrWillBeRawPtr<CCScaleBy> ret = adoptRefWillBeNoop(new CCScaleBy());
        cocos2d::CCScaleBy* impl = new cocos2d::CCScaleBy();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCScaleBy::~CCScaleBy() {
    }
} // namespace blink
