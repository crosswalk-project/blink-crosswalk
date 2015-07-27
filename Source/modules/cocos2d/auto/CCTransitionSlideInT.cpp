// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTransitionSlideInT.h"

namespace blink {

    ScriptValue CCTransitionSlideInT::action(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCTransitionSlideInT*)m_cocos2d_impl)->action();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    void CCTransitionSlideInT::initScenes() {

        ((cocos2d::CCTransitionSlideInT*)m_cocos2d_impl)->initScenes();
    }

    ScriptValue CCTransitionSlideInT::createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg1_wrapper, arg1);
        cocos2d::CCScene* _arg1 = (cocos2d::CCScene*)(arg1->getCocos2dImpl());

        cocos2d::CCTransitionSlideInT* ret_impl = cocos2d::CCTransitionSlideInT::create((float)(arg0),  _arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTransitionSlideInT)
        
    }
    cocos2d::CCTransitionSlideInT* CCTransitionSlideInT::getCocos2dImpl() {
        return (cocos2d::CCTransitionSlideInT*)m_cocos2d_impl;
    }


    CCTransitionSlideInT::CCTransitionSlideInT() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTransitionSlideInT> CCTransitionSlideInT::create()
    {
        RefPtrWillBeRawPtr<CCTransitionSlideInT> ret = adoptRefWillBeNoop(new CCTransitionSlideInT());
        cocos2d::CCTransitionSlideInT* impl = new cocos2d::CCTransitionSlideInT();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTransitionSlideInT::~CCTransitionSlideInT() {
    }
} // namespace blink
