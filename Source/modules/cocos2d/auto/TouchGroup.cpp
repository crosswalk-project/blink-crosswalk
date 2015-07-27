// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/TouchGroup.h"

namespace blink {

    void TouchGroup::removeWidget(Widget* arg0) {
        cocos2d::gui::Widget* _arg0 = (cocos2d::gui::Widget*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::TouchGroup*)m_cocos2d_impl)->removeWidget( _arg0);
    }

    ScriptValue TouchGroup::getWidgetByTag(ScriptState* scriptState, int arg0) {

        cocos2d::gui::Widget* ret_impl = ((cocos2d::gui::TouchGroup*)m_cocos2d_impl)->getWidgetByTag((int)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, Widget)
        
    }

    ScriptValue TouchGroup::getRootWidget(ScriptState* scriptState) {

        cocos2d::gui::Widget* ret_impl = ((cocos2d::gui::TouchGroup*)m_cocos2d_impl)->getRootWidget();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, Widget)
        
    }

    bool TouchGroup::init() {

        bool ret_impl = ((cocos2d::gui::TouchGroup*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    ScriptValue TouchGroup::getWidgetByName(ScriptState* scriptState, String arg0) {

        cocos2d::gui::Widget* ret_impl = ((cocos2d::gui::TouchGroup*)m_cocos2d_impl)->getWidgetByName((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, Widget)
        
    }

    void TouchGroup::addWidget(Widget* arg0) {
        cocos2d::gui::Widget* _arg0 = (cocos2d::gui::Widget*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::TouchGroup*)m_cocos2d_impl)->addWidget( _arg0);
    }

    void TouchGroup::clear() {

        ((cocos2d::gui::TouchGroup*)m_cocos2d_impl)->clear();
    }

    ScriptValue TouchGroup::createInternal(ScriptState* scriptState) {

        cocos2d::gui::TouchGroup* ret_impl = cocos2d::gui::TouchGroup::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, TouchGroup)
        
    }
    cocos2d::gui::TouchGroup* TouchGroup::getCocos2dImpl() {
        return (cocos2d::gui::TouchGroup*)m_cocos2d_impl;
    }


    TouchGroup::TouchGroup() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<TouchGroup> TouchGroup::create()
    {
        RefPtrWillBeRawPtr<TouchGroup> ret = adoptRefWillBeNoop(new TouchGroup());
        cocos2d::gui::TouchGroup* impl = new cocos2d::gui::TouchGroup();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    TouchGroup::~TouchGroup() {
    }
} // namespace blink
