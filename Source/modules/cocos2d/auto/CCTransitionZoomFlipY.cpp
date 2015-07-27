// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTransitionZoomFlipY.h"

namespace blink {
    ScriptValue CCTransitionZoomFlipY::createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg1_wrapper, arg1);
        cocos2d::CCScene* _arg1 = (cocos2d::CCScene*)(arg1->getCocos2dImpl());

        cocos2d::CCTransitionZoomFlipY* ret_impl = cocos2d::CCTransitionZoomFlipY::create((float)(arg0),  _arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTransitionZoomFlipY)
        
    }
    ScriptValue CCTransitionZoomFlipY::createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1_wrapper, int arg2) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg1_wrapper, arg1);
        cocos2d::CCScene* _arg1 = (cocos2d::CCScene*)(arg1->getCocos2dImpl());

        cocos2d::CCTransitionZoomFlipY* ret_impl = cocos2d::CCTransitionZoomFlipY::create((float)(arg0),  _arg1, (cocos2d::tOrientation)(arg2));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTransitionZoomFlipY)
        
    }
    cocos2d::CCTransitionZoomFlipY* CCTransitionZoomFlipY::getCocos2dImpl() {
        return (cocos2d::CCTransitionZoomFlipY*)m_cocos2d_impl;
    }


    CCTransitionZoomFlipY::CCTransitionZoomFlipY() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTransitionZoomFlipY> CCTransitionZoomFlipY::create()
    {
        RefPtrWillBeRawPtr<CCTransitionZoomFlipY> ret = adoptRefWillBeNoop(new CCTransitionZoomFlipY());
        cocos2d::CCTransitionZoomFlipY* impl = new cocos2d::CCTransitionZoomFlipY();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTransitionZoomFlipY::~CCTransitionZoomFlipY() {
    }
} // namespace blink
