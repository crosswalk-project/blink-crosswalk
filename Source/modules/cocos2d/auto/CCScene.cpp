// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCScene.h"

namespace blink {

    bool CCScene::init() {

        bool ret_impl = ((cocos2d::CCScene*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    ScriptValue CCScene::createInternal(ScriptState* scriptState) {

        cocos2d::CCScene* ret_impl = cocos2d::CCScene::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCScene)
        
    }
    cocos2d::CCScene* CCScene::getCocos2dImpl() {
        return (cocos2d::CCScene*)m_cocos2d_impl;
    }


    CCScene::CCScene() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCScene> CCScene::create()
    {
        RefPtrWillBeRawPtr<CCScene> ret = adoptRefWillBeNoop(new CCScene());
        cocos2d::CCScene* impl = new cocos2d::CCScene();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCScene::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCScene::~CCScene() {
    }
} // namespace blink
