// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTransitionJumpZoom.h"

namespace blink {

    ScriptValue CCTransitionJumpZoom::createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg1_wrapper, arg1);
        cocos2d::CCScene* _arg1 = (cocos2d::CCScene*)(arg1->getCocos2dImpl());

        cocos2d::CCTransitionJumpZoom* ret_impl = cocos2d::CCTransitionJumpZoom::create((float)(arg0),  _arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTransitionJumpZoom)
        
    }
    cocos2d::CCTransitionJumpZoom* CCTransitionJumpZoom::getCocos2dImpl() {
        return (cocos2d::CCTransitionJumpZoom*)m_cocos2d_impl;
    }


    CCTransitionJumpZoom::CCTransitionJumpZoom() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTransitionJumpZoom> CCTransitionJumpZoom::create()
    {
        RefPtrWillBeRawPtr<CCTransitionJumpZoom> ret = adoptRefWillBeNoop(new CCTransitionJumpZoom());
        cocos2d::CCTransitionJumpZoom* impl = new cocos2d::CCTransitionJumpZoom();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTransitionJumpZoom::~CCTransitionJumpZoom() {
    }
} // namespace blink
