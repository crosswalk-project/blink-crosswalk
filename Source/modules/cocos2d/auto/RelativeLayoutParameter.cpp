// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/RelativeLayoutParameter.h"

namespace blink {

    void RelativeLayoutParameter::setAlign(int arg0) {

        ((cocos2d::gui::RelativeLayoutParameter*)m_cocos2d_impl)->setAlign((cocos2d::gui::RelativeAlign)(arg0));
    }

    void RelativeLayoutParameter::setRelativeToWidgetName(String arg0) {

        ((cocos2d::gui::RelativeLayoutParameter*)m_cocos2d_impl)->setRelativeToWidgetName((char*)(arg0.utf8().data()));
    }

    String RelativeLayoutParameter::getRelativeName() {

        const String ret_impl = ((cocos2d::gui::RelativeLayoutParameter*)m_cocos2d_impl)->getRelativeName();
        
        
        return ret_impl;
    }

    String RelativeLayoutParameter::getRelativeToWidgetName() {

        const String ret_impl = ((cocos2d::gui::RelativeLayoutParameter*)m_cocos2d_impl)->getRelativeToWidgetName();
        
        
        return ret_impl;
    }

    void RelativeLayoutParameter::setRelativeName(String arg0) {

        ((cocos2d::gui::RelativeLayoutParameter*)m_cocos2d_impl)->setRelativeName((char*)(arg0.utf8().data()));
    }

    int RelativeLayoutParameter::getAlign() {

        int ret_impl = ((cocos2d::gui::RelativeLayoutParameter*)m_cocos2d_impl)->getAlign();
        
        
        return ret_impl;
    }

    ScriptValue RelativeLayoutParameter::createInternal(ScriptState* scriptState) {

        cocos2d::gui::RelativeLayoutParameter* ret_impl = cocos2d::gui::RelativeLayoutParameter::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, RelativeLayoutParameter)
        
    }
    cocos2d::gui::RelativeLayoutParameter* RelativeLayoutParameter::getCocos2dImpl() {
        return (cocos2d::gui::RelativeLayoutParameter*)m_cocos2d_impl;
    }


    RelativeLayoutParameter::RelativeLayoutParameter() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<RelativeLayoutParameter> RelativeLayoutParameter::create()
    {
        RefPtrWillBeRawPtr<RelativeLayoutParameter> ret = adoptRefWillBeNoop(new RelativeLayoutParameter());
        cocos2d::gui::RelativeLayoutParameter* impl = new cocos2d::gui::RelativeLayoutParameter();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    RelativeLayoutParameter::~RelativeLayoutParameter() {
    }
} // namespace blink
