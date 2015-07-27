// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTransitionZoomFlipX.h"

namespace blink {
    ScriptValue CCTransitionZoomFlipX::createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg1_wrapper, arg1);
        cocos2d::CCScene* _arg1 = (cocos2d::CCScene*)(arg1->getCocos2dImpl());

        cocos2d::CCTransitionZoomFlipX* ret_impl = cocos2d::CCTransitionZoomFlipX::create((float)(arg0),  _arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTransitionZoomFlipX)
        
    }
    ScriptValue CCTransitionZoomFlipX::createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1_wrapper, int arg2) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg1_wrapper, arg1);
        cocos2d::CCScene* _arg1 = (cocos2d::CCScene*)(arg1->getCocos2dImpl());

        cocos2d::CCTransitionZoomFlipX* ret_impl = cocos2d::CCTransitionZoomFlipX::create((float)(arg0),  _arg1, (cocos2d::tOrientation)(arg2));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTransitionZoomFlipX)
        
    }
    cocos2d::CCTransitionZoomFlipX* CCTransitionZoomFlipX::getCocos2dImpl() {
        return (cocos2d::CCTransitionZoomFlipX*)m_cocos2d_impl;
    }


    CCTransitionZoomFlipX::CCTransitionZoomFlipX() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTransitionZoomFlipX> CCTransitionZoomFlipX::create()
    {
        RefPtrWillBeRawPtr<CCTransitionZoomFlipX> ret = adoptRefWillBeNoop(new CCTransitionZoomFlipX());
        cocos2d::CCTransitionZoomFlipX* impl = new cocos2d::CCTransitionZoomFlipX();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTransitionZoomFlipX::~CCTransitionZoomFlipX() {
    }
} // namespace blink
