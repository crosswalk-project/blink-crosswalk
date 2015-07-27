// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCFlipY.h"

namespace blink {

    bool CCFlipY::initWithFlipY(bool arg0) {

        bool ret_impl = ((cocos2d::CCFlipY*)m_cocos2d_impl)->initWithFlipY((bool)(arg0));
        
        
        return ret_impl;
    }

    ScriptValue CCFlipY::reverse(ScriptState* scriptState) {

        cocos2d::CCFiniteTimeAction* ret_impl = ((cocos2d::CCFlipY*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCFiniteTimeAction)
        
    }

    void CCFlipY::update(float arg0) {

        ((cocos2d::CCFlipY*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCFlipY::createInternal(ScriptState* scriptState, bool arg0) {

        cocos2d::CCFlipY* ret_impl = cocos2d::CCFlipY::create((bool)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCFlipY)
        
    }
    cocos2d::CCFlipY* CCFlipY::getCocos2dImpl() {
        return (cocos2d::CCFlipY*)m_cocos2d_impl;
    }


    CCFlipY::CCFlipY() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCFlipY> CCFlipY::create()
    {
        RefPtrWillBeRawPtr<CCFlipY> ret = adoptRefWillBeNoop(new CCFlipY());
        cocos2d::CCFlipY* impl = new cocos2d::CCFlipY();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCFlipY::~CCFlipY() {
    }
} // namespace blink
