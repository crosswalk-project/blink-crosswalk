// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTintTo.h"

namespace blink {

    void CCTintTo::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTintTo*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    bool CCTintTo::initWithDuration(float arg0, unsigned char arg1, unsigned char arg2, unsigned char arg3) {

        bool ret_impl = ((cocos2d::CCTintTo*)m_cocos2d_impl)->initWithDuration((float)(arg0), (unsigned char)(arg1), (unsigned char)(arg2), (unsigned char)(arg3));
        
        
        return ret_impl;
    }

    void CCTintTo::update(float arg0) {

        ((cocos2d::CCTintTo*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCTintTo::createInternal(ScriptState* scriptState, float arg0, unsigned char arg1, unsigned char arg2, unsigned char arg3) {

        cocos2d::CCTintTo* ret_impl = cocos2d::CCTintTo::create((float)(arg0), (unsigned char)(arg1), (unsigned char)(arg2), (unsigned char)(arg3));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTintTo)
        
    }
    cocos2d::CCTintTo* CCTintTo::getCocos2dImpl() {
        return (cocos2d::CCTintTo*)m_cocos2d_impl;
    }


    CCTintTo::CCTintTo() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTintTo> CCTintTo::create()
    {
        RefPtrWillBeRawPtr<CCTintTo> ret = adoptRefWillBeNoop(new CCTintTo());
        cocos2d::CCTintTo* impl = new cocos2d::CCTintTo();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTintTo::~CCTintTo() {
    }
} // namespace blink
