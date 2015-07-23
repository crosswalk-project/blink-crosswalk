// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCProgressTo.h"

namespace blink {

    void CCProgressTo::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCProgressTo*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    bool CCProgressTo::initWithDuration(float arg0, float arg1) {

        bool ret_impl = ((cocos2d::CCProgressTo*)m_cocos2d_impl)->initWithDuration((float)(arg0), (float)(arg1));
        
        
        return ret_impl;
    }

    void CCProgressTo::update(float arg0) {

        ((cocos2d::CCProgressTo*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCProgressTo::createInternal(ScriptState* scriptState, float arg0, float arg1) {

        cocos2d::CCProgressTo* ret_impl = cocos2d::CCProgressTo::create((float)(arg0), (float)(arg1));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCProgressTo)
        
    }
    cocos2d::CCProgressTo* CCProgressTo::getCocos2dImpl() {
        return (cocos2d::CCProgressTo*)m_cocos2d_impl;
    }


    CCProgressTo::CCProgressTo() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCProgressTo> CCProgressTo::create()
    {
        RefPtrWillBeRawPtr<CCProgressTo> ret = adoptRefWillBeNoop(new CCProgressTo());
        cocos2d::CCProgressTo* impl = new cocos2d::CCProgressTo();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCProgressTo::~CCProgressTo() {
    }
} // namespace blink
