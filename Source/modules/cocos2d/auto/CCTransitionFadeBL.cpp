// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTransitionFadeBL.h"

namespace blink {

    ScriptValue CCTransitionFadeBL::actionWithSize(ScriptState* scriptState, CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCTransitionFadeBL*)m_cocos2d_impl)->actionWithSize( *_arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    ScriptValue CCTransitionFadeBL::createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg1_wrapper, arg1);
        cocos2d::CCScene* _arg1 = (cocos2d::CCScene*)(arg1->getCocos2dImpl());

        cocos2d::CCTransitionFadeBL* ret_impl = cocos2d::CCTransitionFadeBL::create((float)(arg0),  _arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTransitionFadeBL)
        
    }
    cocos2d::CCTransitionFadeBL* CCTransitionFadeBL::getCocos2dImpl() {
        return (cocos2d::CCTransitionFadeBL*)m_cocos2d_impl;
    }


    CCTransitionFadeBL::CCTransitionFadeBL() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTransitionFadeBL> CCTransitionFadeBL::create()
    {
        RefPtrWillBeRawPtr<CCTransitionFadeBL> ret = adoptRefWillBeNoop(new CCTransitionFadeBL());
        cocos2d::CCTransitionFadeBL* impl = new cocos2d::CCTransitionFadeBL();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTransitionFadeBL::~CCTransitionFadeBL() {
    }
} // namespace blink
