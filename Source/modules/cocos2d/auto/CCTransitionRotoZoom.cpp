// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTransitionRotoZoom.h"

namespace blink {

    ScriptValue CCTransitionRotoZoom::createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg1_wrapper, arg1);
        cocos2d::CCScene* _arg1 = (cocos2d::CCScene*)(arg1->getCocos2dImpl());

        cocos2d::CCTransitionRotoZoom* ret_impl = cocos2d::CCTransitionRotoZoom::create((float)(arg0),  _arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTransitionRotoZoom)
        
    }
    cocos2d::CCTransitionRotoZoom* CCTransitionRotoZoom::getCocos2dImpl() {
        return (cocos2d::CCTransitionRotoZoom*)m_cocos2d_impl;
    }


    CCTransitionRotoZoom::CCTransitionRotoZoom() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTransitionRotoZoom> CCTransitionRotoZoom::create()
    {
        RefPtrWillBeRawPtr<CCTransitionRotoZoom> ret = adoptRefWillBeNoop(new CCTransitionRotoZoom());
        cocos2d::CCTransitionRotoZoom* impl = new cocos2d::CCTransitionRotoZoom();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTransitionRotoZoom::~CCTransitionRotoZoom() {
    }
} // namespace blink
