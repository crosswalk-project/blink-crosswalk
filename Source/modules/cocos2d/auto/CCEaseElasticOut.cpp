// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCEaseElasticOut.h"

namespace blink {

    void CCEaseElasticOut::update(float arg0) {

        ((cocos2d::CCEaseElasticOut*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCEaseElasticOut::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCEaseElasticOut*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }
    ScriptValue CCEaseElasticOut::createInternal(ScriptState* scriptState, ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        cocos2d::CCEaseElasticOut* ret_impl = cocos2d::CCEaseElasticOut::create( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCEaseElasticOut)
        
    }
    ScriptValue CCEaseElasticOut::createInternal(ScriptState* scriptState, ScriptValue& arg0_wrapper, float arg1) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        cocos2d::CCEaseElasticOut* ret_impl = cocos2d::CCEaseElasticOut::create( _arg0, (float)(arg1));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCEaseElasticOut)
        
    }
    cocos2d::CCEaseElasticOut* CCEaseElasticOut::getCocos2dImpl() {
        return (cocos2d::CCEaseElasticOut*)m_cocos2d_impl;
    }


    CCEaseElasticOut::CCEaseElasticOut() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCEaseElasticOut> CCEaseElasticOut::create()
    {
        RefPtrWillBeRawPtr<CCEaseElasticOut> ret = adoptRefWillBeNoop(new CCEaseElasticOut());
        cocos2d::CCEaseElasticOut* impl = new cocos2d::CCEaseElasticOut();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCEaseElasticOut::~CCEaseElasticOut() {
    }
} // namespace blink
