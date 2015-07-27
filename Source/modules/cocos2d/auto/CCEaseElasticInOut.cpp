// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCEaseElasticInOut.h"

namespace blink {

    void CCEaseElasticInOut::update(float arg0) {

        ((cocos2d::CCEaseElasticInOut*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCEaseElasticInOut::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCEaseElasticInOut*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }
    ScriptValue CCEaseElasticInOut::createInternal(ScriptState* scriptState, ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        cocos2d::CCEaseElasticInOut* ret_impl = cocos2d::CCEaseElasticInOut::create( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCEaseElasticInOut)
        
    }
    ScriptValue CCEaseElasticInOut::createInternal(ScriptState* scriptState, ScriptValue& arg0_wrapper, float arg1) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        cocos2d::CCEaseElasticInOut* ret_impl = cocos2d::CCEaseElasticInOut::create( _arg0, (float)(arg1));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCEaseElasticInOut)
        
    }
    cocos2d::CCEaseElasticInOut* CCEaseElasticInOut::getCocos2dImpl() {
        return (cocos2d::CCEaseElasticInOut*)m_cocos2d_impl;
    }


    CCEaseElasticInOut::CCEaseElasticInOut() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCEaseElasticInOut> CCEaseElasticInOut::create()
    {
        RefPtrWillBeRawPtr<CCEaseElasticInOut> ret = adoptRefWillBeNoop(new CCEaseElasticInOut());
        cocos2d::CCEaseElasticInOut* impl = new cocos2d::CCEaseElasticInOut();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCEaseElasticInOut::~CCEaseElasticInOut() {
    }
} // namespace blink
