// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTransitionFlipY.h"

namespace blink {
    ScriptValue CCTransitionFlipY::createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg1_wrapper, arg1);
        cocos2d::CCScene* _arg1 = (cocos2d::CCScene*)(arg1->getCocos2dImpl());

        cocos2d::CCTransitionFlipY* ret_impl = cocos2d::CCTransitionFlipY::create((float)(arg0),  _arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTransitionFlipY)
        
    }
    ScriptValue CCTransitionFlipY::createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1_wrapper, int arg2) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg1_wrapper, arg1);
        cocos2d::CCScene* _arg1 = (cocos2d::CCScene*)(arg1->getCocos2dImpl());

        cocos2d::CCTransitionFlipY* ret_impl = cocos2d::CCTransitionFlipY::create((float)(arg0),  _arg1, (cocos2d::tOrientation)(arg2));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTransitionFlipY)
        
    }
    cocos2d::CCTransitionFlipY* CCTransitionFlipY::getCocos2dImpl() {
        return (cocos2d::CCTransitionFlipY*)m_cocos2d_impl;
    }


    CCTransitionFlipY::CCTransitionFlipY() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTransitionFlipY> CCTransitionFlipY::create()
    {
        RefPtrWillBeRawPtr<CCTransitionFlipY> ret = adoptRefWillBeNoop(new CCTransitionFlipY());
        cocos2d::CCTransitionFlipY* impl = new cocos2d::CCTransitionFlipY();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTransitionFlipY::~CCTransitionFlipY() {
    }
} // namespace blink
