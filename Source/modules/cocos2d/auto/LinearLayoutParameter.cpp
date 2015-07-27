// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/LinearLayoutParameter.h"

namespace blink {

    void LinearLayoutParameter::setGravity(int arg0) {

        ((cocos2d::gui::LinearLayoutParameter*)m_cocos2d_impl)->setGravity((cocos2d::gui::LinearGravity)(arg0));
    }

    int LinearLayoutParameter::getGravity() {

        int ret_impl = ((cocos2d::gui::LinearLayoutParameter*)m_cocos2d_impl)->getGravity();
        
        
        return ret_impl;
    }

    ScriptValue LinearLayoutParameter::createInternal(ScriptState* scriptState) {

        cocos2d::gui::LinearLayoutParameter* ret_impl = cocos2d::gui::LinearLayoutParameter::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, LinearLayoutParameter)
        
    }
    cocos2d::gui::LinearLayoutParameter* LinearLayoutParameter::getCocos2dImpl() {
        return (cocos2d::gui::LinearLayoutParameter*)m_cocos2d_impl;
    }


    LinearLayoutParameter::LinearLayoutParameter() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<LinearLayoutParameter> LinearLayoutParameter::create()
    {
        RefPtrWillBeRawPtr<LinearLayoutParameter> ret = adoptRefWillBeNoop(new LinearLayoutParameter());
        cocos2d::gui::LinearLayoutParameter* impl = new cocos2d::gui::LinearLayoutParameter();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    LinearLayoutParameter::~LinearLayoutParameter() {
    }
} // namespace blink
