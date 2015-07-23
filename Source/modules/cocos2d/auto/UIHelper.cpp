// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/UIHelper.h"

namespace blink {

    ScriptValue UIHelper::seekActionWidgetByActionTag(ScriptState* scriptState, Widget* arg0, int arg1) {
        cocos2d::gui::Widget* _arg0 = (cocos2d::gui::Widget*)(arg0->getCocos2dImpl());

        cocos2d::gui::Widget* ret_impl = cocos2d::gui::UIHelper::seekActionWidgetByActionTag( _arg0, (int)(arg1));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, Widget)
        
    }

    ScriptValue UIHelper::seekWidgetByTag(ScriptState* scriptState, Widget* arg0, int arg1) {
        cocos2d::gui::Widget* _arg0 = (cocos2d::gui::Widget*)(arg0->getCocos2dImpl());

        cocos2d::gui::Widget* ret_impl = cocos2d::gui::UIHelper::seekWidgetByTag( _arg0, (int)(arg1));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, Widget)
        
    }

    ScriptValue UIHelper::seekWidgetByRelativeName(ScriptState* scriptState, Widget* arg0, String arg1) {
        cocos2d::gui::Widget* _arg0 = (cocos2d::gui::Widget*)(arg0->getCocos2dImpl());

        cocos2d::gui::Widget* ret_impl = cocos2d::gui::UIHelper::seekWidgetByRelativeName( _arg0, (char*)(arg1.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, Widget)
        
    }

    ScriptValue UIHelper::seekWidgetByName(ScriptState* scriptState, Widget* arg0, String arg1) {
        cocos2d::gui::Widget* _arg0 = (cocos2d::gui::Widget*)(arg0->getCocos2dImpl());

        cocos2d::gui::Widget* ret_impl = cocos2d::gui::UIHelper::seekWidgetByName( _arg0, (char*)(arg1.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, Widget)
        
    }
    cocos2d::gui::UIHelper* UIHelper::getCocos2dImpl() {
        return (cocos2d::gui::UIHelper*)m_cocos2d_impl;
    }


    UIHelper::UIHelper() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<UIHelper> UIHelper::create()
    {
        RefPtrWillBeRawPtr<UIHelper> ret = adoptRefWillBeNoop(new UIHelper());
        return ret.release();
    }


    UIHelper::~UIHelper() {
    }
} // namespace blink
