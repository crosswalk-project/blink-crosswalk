// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCMenuItemToggle.h"

namespace blink {

    void CCMenuItemToggle::setSubItems(CCArray* arg0) {
        cocos2d::CCArray* _arg0 = (cocos2d::CCArray*)(arg0->getCocos2dImpl());

        ((cocos2d::CCMenuItemToggle*)m_cocos2d_impl)->setSubItems( _arg0);
    }

    bool CCMenuItemToggle::initWithItem(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCMenuItem, arg0_wrapper, arg0);
        cocos2d::CCMenuItem* _arg0 = (cocos2d::CCMenuItem*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCMenuItemToggle*)m_cocos2d_impl)->initWithItem( _arg0);
        
        
        return ret_impl;
    }

    void CCMenuItemToggle::setSelectedIndex(unsigned int arg0) {

        ((cocos2d::CCMenuItemToggle*)m_cocos2d_impl)->setSelectedIndex((unsigned int)(arg0));
    }

    void CCMenuItemToggle::setEnabled(bool arg0) {

        ((cocos2d::CCMenuItemToggle*)m_cocos2d_impl)->setEnabled((bool)(arg0));
    }

    unsigned int CCMenuItemToggle::getSelectedIndex() {

        unsigned int ret_impl = ((cocos2d::CCMenuItemToggle*)m_cocos2d_impl)->getSelectedIndex();
        
        
        return ret_impl;
    }

    void CCMenuItemToggle::addSubItem(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCMenuItem, arg0_wrapper, arg0);
        cocos2d::CCMenuItem* _arg0 = (cocos2d::CCMenuItem*)(arg0->getCocos2dImpl());

        ((cocos2d::CCMenuItemToggle*)m_cocos2d_impl)->addSubItem( _arg0);
    }

    void CCMenuItemToggle::selected() {

        ((cocos2d::CCMenuItemToggle*)m_cocos2d_impl)->selected();
    }

    void CCMenuItemToggle::activate() {

        ((cocos2d::CCMenuItemToggle*)m_cocos2d_impl)->activate();
    }

    void CCMenuItemToggle::unselected() {

        ((cocos2d::CCMenuItemToggle*)m_cocos2d_impl)->unselected();
    }

    ScriptValue CCMenuItemToggle::selectedItem(ScriptState* scriptState) {

        cocos2d::CCMenuItem* ret_impl = ((cocos2d::CCMenuItemToggle*)m_cocos2d_impl)->selectedItem();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCMenuItem)
        
    }
    cocos2d::CCMenuItemToggle* CCMenuItemToggle::getCocos2dImpl() {
        return (cocos2d::CCMenuItemToggle*)m_cocos2d_impl;
    }


    CCMenuItemToggle::CCMenuItemToggle() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCMenuItemToggle> CCMenuItemToggle::create()
    {
        RefPtrWillBeRawPtr<CCMenuItemToggle> ret = adoptRefWillBeNoop(new CCMenuItemToggle());
        cocos2d::CCMenuItemToggle* impl = new cocos2d::CCMenuItemToggle();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCMenuItemToggle::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCMenuItemToggle::~CCMenuItemToggle() {
    }
} // namespace blink
