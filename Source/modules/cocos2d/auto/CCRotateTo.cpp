// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCRotateTo.h"

namespace blink {

    void CCRotateTo::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCRotateTo*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    bool CCRotateTo::initWithDuration(float arg0, float arg1, float arg2) {

        bool ret_impl = ((cocos2d::CCRotateTo*)m_cocos2d_impl)->initWithDuration((float)(arg0), (float)(arg1), (float)(arg2));
        
        
        return ret_impl;
    }

    bool CCRotateTo::initWithDuration(float arg0, float arg1) {

        bool ret_impl = ((cocos2d::CCRotateTo*)m_cocos2d_impl)->initWithDuration((float)(arg0), (float)(arg1));
        
        
        return ret_impl;
    }

    void CCRotateTo::update(float arg0) {

        ((cocos2d::CCRotateTo*)m_cocos2d_impl)->update((float)(arg0));
    }
    ScriptValue CCRotateTo::createInternal(ScriptState* scriptState, float arg0, float arg1, float arg2) {

        cocos2d::CCRotateTo* ret_impl = cocos2d::CCRotateTo::create((float)(arg0), (float)(arg1), (float)(arg2));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCRotateTo)
        
    }
    ScriptValue CCRotateTo::createInternal(ScriptState* scriptState, float arg0, float arg1) {

        cocos2d::CCRotateTo* ret_impl = cocos2d::CCRotateTo::create((float)(arg0), (float)(arg1));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCRotateTo)
        
    }
    cocos2d::CCRotateTo* CCRotateTo::getCocos2dImpl() {
        return (cocos2d::CCRotateTo*)m_cocos2d_impl;
    }


    CCRotateTo::CCRotateTo() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCRotateTo> CCRotateTo::create()
    {
        RefPtrWillBeRawPtr<CCRotateTo> ret = adoptRefWillBeNoop(new CCRotateTo());
        cocos2d::CCRotateTo* impl = new cocos2d::CCRotateTo();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCRotateTo::~CCRotateTo() {
    }
} // namespace blink
