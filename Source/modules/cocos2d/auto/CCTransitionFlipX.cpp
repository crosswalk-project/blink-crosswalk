// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTransitionFlipX.h"

namespace blink {
    ScriptValue CCTransitionFlipX::createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg1_wrapper, arg1);
        cocos2d::CCScene* _arg1 = (cocos2d::CCScene*)(arg1->getCocos2dImpl());

        cocos2d::CCTransitionFlipX* ret_impl = cocos2d::CCTransitionFlipX::create((float)(arg0),  _arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTransitionFlipX)
        
    }
    ScriptValue CCTransitionFlipX::createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1_wrapper, int arg2) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg1_wrapper, arg1);
        cocos2d::CCScene* _arg1 = (cocos2d::CCScene*)(arg1->getCocos2dImpl());

        cocos2d::CCTransitionFlipX* ret_impl = cocos2d::CCTransitionFlipX::create((float)(arg0),  _arg1, (cocos2d::tOrientation)(arg2));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTransitionFlipX)
        
    }
    cocos2d::CCTransitionFlipX* CCTransitionFlipX::getCocos2dImpl() {
        return (cocos2d::CCTransitionFlipX*)m_cocos2d_impl;
    }


    CCTransitionFlipX::CCTransitionFlipX() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTransitionFlipX> CCTransitionFlipX::create()
    {
        RefPtrWillBeRawPtr<CCTransitionFlipX> ret = adoptRefWillBeNoop(new CCTransitionFlipX());
        cocos2d::CCTransitionFlipX* impl = new cocos2d::CCTransitionFlipX();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTransitionFlipX::~CCTransitionFlipX() {
    }
} // namespace blink
