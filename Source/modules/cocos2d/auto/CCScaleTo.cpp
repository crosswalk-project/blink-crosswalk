// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCScaleTo.h"

namespace blink {

    void CCScaleTo::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCScaleTo*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    bool CCScaleTo::initWithDuration(float arg0, float arg1, float arg2) {

        bool ret_impl = ((cocos2d::CCScaleTo*)m_cocos2d_impl)->initWithDuration((float)(arg0), (float)(arg1), (float)(arg2));
        
        
        return ret_impl;
    }

    bool CCScaleTo::initWithDuration(float arg0, float arg1) {

        bool ret_impl = ((cocos2d::CCScaleTo*)m_cocos2d_impl)->initWithDuration((float)(arg0), (float)(arg1));
        
        
        return ret_impl;
    }

    void CCScaleTo::update(float arg0) {

        ((cocos2d::CCScaleTo*)m_cocos2d_impl)->update((float)(arg0));
    }
    ScriptValue CCScaleTo::createInternal(ScriptState* scriptState, float arg0, float arg1, float arg2) {

        cocos2d::CCScaleTo* ret_impl = cocos2d::CCScaleTo::create((float)(arg0), (float)(arg1), (float)(arg2));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCScaleTo)
        
    }
    ScriptValue CCScaleTo::createInternal(ScriptState* scriptState, float arg0, float arg1) {

        cocos2d::CCScaleTo* ret_impl = cocos2d::CCScaleTo::create((float)(arg0), (float)(arg1));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCScaleTo)
        
    }
    cocos2d::CCScaleTo* CCScaleTo::getCocos2dImpl() {
        return (cocos2d::CCScaleTo*)m_cocos2d_impl;
    }


    CCScaleTo::CCScaleTo() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCScaleTo> CCScaleTo::create()
    {
        RefPtrWillBeRawPtr<CCScaleTo> ret = adoptRefWillBeNoop(new CCScaleTo());
        cocos2d::CCScaleTo* impl = new cocos2d::CCScaleTo();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCScaleTo::~CCScaleTo() {
    }
} // namespace blink
