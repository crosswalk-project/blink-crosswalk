// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTransitionScene.h"

namespace blink {

    void CCTransitionScene::draw() {

        ((cocos2d::CCTransitionScene*)m_cocos2d_impl)->draw();
    }

    void CCTransitionScene::finish() {

        ((cocos2d::CCTransitionScene*)m_cocos2d_impl)->finish();
    }

    bool CCTransitionScene::initWithDuration(float arg0, ScriptValue& arg1_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg1_wrapper, arg1);
        cocos2d::CCScene* _arg1 = (cocos2d::CCScene*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCTransitionScene*)m_cocos2d_impl)->initWithDuration((float)(arg0),  _arg1);
        
        
        return ret_impl;
    }

    void CCTransitionScene::cleanup() {

        ((cocos2d::CCTransitionScene*)m_cocos2d_impl)->cleanup();
    }

    void CCTransitionScene::hideOutShowIn() {

        ((cocos2d::CCTransitionScene*)m_cocos2d_impl)->hideOutShowIn();
    }

    ScriptValue CCTransitionScene::createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg1_wrapper, arg1);
        cocos2d::CCScene* _arg1 = (cocos2d::CCScene*)(arg1->getCocos2dImpl());

        cocos2d::CCTransitionScene* ret_impl = cocos2d::CCTransitionScene::create((float)(arg0),  _arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTransitionScene)
        
    }
    cocos2d::CCTransitionScene* CCTransitionScene::getCocos2dImpl() {
        return (cocos2d::CCTransitionScene*)m_cocos2d_impl;
    }


    CCTransitionScene::CCTransitionScene() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTransitionScene> CCTransitionScene::create()
    {
        RefPtrWillBeRawPtr<CCTransitionScene> ret = adoptRefWillBeNoop(new CCTransitionScene());
        cocos2d::CCTransitionScene* impl = new cocos2d::CCTransitionScene();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCTransitionScene::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCTransitionScene::~CCTransitionScene() {
    }
} // namespace blink
