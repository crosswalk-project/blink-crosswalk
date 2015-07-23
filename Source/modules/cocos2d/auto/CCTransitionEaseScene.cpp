// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTransitionEaseScene.h"

namespace blink {

    ScriptValue CCTransitionEaseScene::easeActionWithAction(ScriptState* scriptState, ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCTransitionEaseScene*)m_cocos2d_impl)->easeActionWithAction( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }
    cocos2d::CCTransitionEaseScene* CCTransitionEaseScene::getCocos2dImpl() {
        return (cocos2d::CCTransitionEaseScene*)m_cocos2d_impl;
    }


    CCTransitionEaseScene::CCTransitionEaseScene() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTransitionEaseScene> CCTransitionEaseScene::create()
    {
        RefPtrWillBeRawPtr<CCTransitionEaseScene> ret = adoptRefWillBeNoop(new CCTransitionEaseScene());
        return ret.release();
    }


    CCTransitionEaseScene::~CCTransitionEaseScene() {
    }
} // namespace blink
