// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/LayoutParameter.h"

namespace blink {

    int LayoutParameter::getLayoutType() {

        int ret_impl = ((cocos2d::gui::LayoutParameter*)m_cocos2d_impl)->getLayoutType();
        
        
        return ret_impl;
    }

    ScriptValue LayoutParameter::createInternal(ScriptState* scriptState) {

        cocos2d::gui::LayoutParameter* ret_impl = cocos2d::gui::LayoutParameter::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, LayoutParameter)
        
    }
    cocos2d::gui::LayoutParameter* LayoutParameter::getCocos2dImpl() {
        return (cocos2d::gui::LayoutParameter*)m_cocos2d_impl;
    }


    LayoutParameter::LayoutParameter() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<LayoutParameter> LayoutParameter::create()
    {
        RefPtrWillBeRawPtr<LayoutParameter> ret = adoptRefWillBeNoop(new LayoutParameter());
        cocos2d::gui::LayoutParameter* impl = new cocos2d::gui::LayoutParameter();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    LayoutParameter::~LayoutParameter() {
    }
} // namespace blink
