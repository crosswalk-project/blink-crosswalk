// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCEaseElastic.h"

namespace blink {

    void CCEaseElastic::setPeriod(float arg0) {

        ((cocos2d::CCEaseElastic*)m_cocos2d_impl)->setPeriod((float)(arg0));
    }

    bool CCEaseElastic::initWithAction(ScriptValue& arg0_wrapper, float arg1) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCEaseElastic*)m_cocos2d_impl)->initWithAction( _arg0, (float)(arg1));
        
        
        return ret_impl;
    }

    float CCEaseElastic::getPeriod() {

        float ret_impl = ((cocos2d::CCEaseElastic*)m_cocos2d_impl)->getPeriod();
        
        
        return ret_impl;
    }

    ScriptValue CCEaseElastic::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCEaseElastic*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }
    ScriptValue CCEaseElastic::createInternal(ScriptState* scriptState, ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        cocos2d::CCEaseElastic* ret_impl = cocos2d::CCEaseElastic::create( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCEaseElastic)
        
    }
    ScriptValue CCEaseElastic::createInternal(ScriptState* scriptState, ScriptValue& arg0_wrapper, float arg1) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        cocos2d::CCEaseElastic* ret_impl = cocos2d::CCEaseElastic::create( _arg0, (float)(arg1));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCEaseElastic)
        
    }
    cocos2d::CCEaseElastic* CCEaseElastic::getCocos2dImpl() {
        return (cocos2d::CCEaseElastic*)m_cocos2d_impl;
    }


    CCEaseElastic::CCEaseElastic() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCEaseElastic> CCEaseElastic::create()
    {
        RefPtrWillBeRawPtr<CCEaseElastic> ret = adoptRefWillBeNoop(new CCEaseElastic());
        cocos2d::CCEaseElastic* impl = new cocos2d::CCEaseElastic();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCEaseElastic::~CCEaseElastic() {
    }
} // namespace blink
