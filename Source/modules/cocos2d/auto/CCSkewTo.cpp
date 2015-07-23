// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCSkewTo.h"

namespace blink {

    void CCSkewTo::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSkewTo*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    void CCSkewTo::update(float arg0) {

        ((cocos2d::CCSkewTo*)m_cocos2d_impl)->update((float)(arg0));
    }

    bool CCSkewTo::initWithDuration(float arg0, float arg1, float arg2) {

        bool ret_impl = ((cocos2d::CCSkewTo*)m_cocos2d_impl)->initWithDuration((float)(arg0), (float)(arg1), (float)(arg2));
        
        
        return ret_impl;
    }

    ScriptValue CCSkewTo::createInternal(ScriptState* scriptState, float arg0, float arg1, float arg2) {

        cocos2d::CCSkewTo* ret_impl = cocos2d::CCSkewTo::create((float)(arg0), (float)(arg1), (float)(arg2));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSkewTo)
        
    }
    cocos2d::CCSkewTo* CCSkewTo::getCocos2dImpl() {
        return (cocos2d::CCSkewTo*)m_cocos2d_impl;
    }


    CCSkewTo::CCSkewTo() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCSkewTo> CCSkewTo::create()
    {
        RefPtrWillBeRawPtr<CCSkewTo> ret = adoptRefWillBeNoop(new CCSkewTo());
        cocos2d::CCSkewTo* impl = new cocos2d::CCSkewTo();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCSkewTo::~CCSkewTo() {
    }
} // namespace blink
