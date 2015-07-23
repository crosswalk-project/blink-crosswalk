// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTransitionFade.h"

namespace blink {

    bool CCTransitionFade::initWithDuration(float arg0, ScriptValue& arg1_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg1_wrapper, arg1);
        cocos2d::CCScene* _arg1 = (cocos2d::CCScene*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCTransitionFade*)m_cocos2d_impl)->initWithDuration((float)(arg0),  _arg1);
        
        
        return ret_impl;
    }

    bool CCTransitionFade::initWithDuration(float arg0, ScriptValue& arg1_wrapper, ccColor3B* arg2) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg1_wrapper, arg1);
        cocos2d::CCScene* _arg1 = (cocos2d::CCScene*)(arg1->getCocos2dImpl());
        cocos2d::ccColor3B* _arg2 = (cocos2d::ccColor3B*)(arg2->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCTransitionFade*)m_cocos2d_impl)->initWithDuration((float)(arg0),  _arg1,  *_arg2);
        
        
        return ret_impl;
    }
    ScriptValue CCTransitionFade::createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg1_wrapper, arg1);
        cocos2d::CCScene* _arg1 = (cocos2d::CCScene*)(arg1->getCocos2dImpl());

        cocos2d::CCTransitionFade* ret_impl = cocos2d::CCTransitionFade::create((float)(arg0),  _arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTransitionFade)
        
    }
    ScriptValue CCTransitionFade::createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1_wrapper, ccColor3B* arg2) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg1_wrapper, arg1);
        cocos2d::CCScene* _arg1 = (cocos2d::CCScene*)(arg1->getCocos2dImpl());
        cocos2d::ccColor3B* _arg2 = (cocos2d::ccColor3B*)(arg2->getCocos2dImpl());

        cocos2d::CCTransitionFade* ret_impl = cocos2d::CCTransitionFade::create((float)(arg0),  _arg1,  *_arg2);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTransitionFade)
        
    }
    cocos2d::CCTransitionFade* CCTransitionFade::getCocos2dImpl() {
        return (cocos2d::CCTransitionFade*)m_cocos2d_impl;
    }


    CCTransitionFade::CCTransitionFade() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTransitionFade> CCTransitionFade::create()
    {
        RefPtrWillBeRawPtr<CCTransitionFade> ret = adoptRefWillBeNoop(new CCTransitionFade());
        cocos2d::CCTransitionFade* impl = new cocos2d::CCTransitionFade();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTransitionFade::~CCTransitionFade() {
    }
} // namespace blink
