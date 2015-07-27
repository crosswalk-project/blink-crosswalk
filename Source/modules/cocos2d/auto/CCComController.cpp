// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCComController.h"

namespace blink {

    void CCComController::setEnabled(bool arg0) {

        ((cocos2d::extension::CCComController*)m_cocos2d_impl)->setEnabled((bool)(arg0));
    }

    bool CCComController::isEnabled() {

        bool ret_impl = ((cocos2d::extension::CCComController*)m_cocos2d_impl)->isEnabled();
        
        
        return ret_impl;
    }

    void CCComController::update(float arg0) {

        ((cocos2d::extension::CCComController*)m_cocos2d_impl)->update((float)(arg0));
    }

    bool CCComController::init() {

        bool ret_impl = ((cocos2d::extension::CCComController*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    ScriptValue CCComController::createInternal(ScriptState* scriptState) {

        cocos2d::extension::CCComController* ret_impl = cocos2d::extension::CCComController::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCComController)
        
    }

    ScriptValue CCComController::createInstance(ScriptState* scriptState) {

        cocos2d::CCObject* ret_impl = cocos2d::extension::CCComController::createInstance();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCObject)
        
    }
    cocos2d::extension::CCComController* CCComController::getCocos2dImpl() {
        return (cocos2d::extension::CCComController*)m_cocos2d_impl;
    }


    CCComController::CCComController() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCComController> CCComController::create()
    {
        RefPtrWillBeRawPtr<CCComController> ret = adoptRefWillBeNoop(new CCComController());
        cocos2d::extension::CCComController* impl = new cocos2d::extension::CCComController();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCComController::~CCComController() {
    }
} // namespace blink
