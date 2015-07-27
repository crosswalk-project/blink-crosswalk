// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTransitionSlideInR.h"

namespace blink {

    ScriptValue CCTransitionSlideInR::action(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCTransitionSlideInR*)m_cocos2d_impl)->action();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    void CCTransitionSlideInR::initScenes() {

        ((cocos2d::CCTransitionSlideInR*)m_cocos2d_impl)->initScenes();
    }

    ScriptValue CCTransitionSlideInR::createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg1_wrapper, arg1);
        cocos2d::CCScene* _arg1 = (cocos2d::CCScene*)(arg1->getCocos2dImpl());

        cocos2d::CCTransitionSlideInR* ret_impl = cocos2d::CCTransitionSlideInR::create((float)(arg0),  _arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTransitionSlideInR)
        
    }
    cocos2d::CCTransitionSlideInR* CCTransitionSlideInR::getCocos2dImpl() {
        return (cocos2d::CCTransitionSlideInR*)m_cocos2d_impl;
    }


    CCTransitionSlideInR::CCTransitionSlideInR() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTransitionSlideInR> CCTransitionSlideInR::create()
    {
        RefPtrWillBeRawPtr<CCTransitionSlideInR> ret = adoptRefWillBeNoop(new CCTransitionSlideInR());
        cocos2d::CCTransitionSlideInR* impl = new cocos2d::CCTransitionSlideInR();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTransitionSlideInR::~CCTransitionSlideInR() {
    }
} // namespace blink
