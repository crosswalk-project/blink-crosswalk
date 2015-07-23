// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"
#include "bindings/modules/v8/V8CCMenuItem.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/manual/CCMenuItem.h"
#include "modules/cocos2d/events/MenuItemCallback.h"

namespace blink {

    void CCMenuItem::setEnabled(bool arg0) {

        ((cocos2d::CCMenuItem*)m_cocos2d_impl)->setEnabled((bool)(arg0));
    }

    void CCMenuItem::activate() {

        ((cocos2d::CCMenuItem*)m_cocos2d_impl)->activate();
    }

    void CCMenuItem::unregisterScriptTapHandler() {

        ((cocos2d::CCMenuItem*)m_cocos2d_impl)->unregisterScriptTapHandler();
    }

    bool CCMenuItem::isEnabled() {

        bool ret_impl = ((cocos2d::CCMenuItem*)m_cocos2d_impl)->isEnabled();
        
        
        return ret_impl;
    }

    void CCMenuItem::selected() {

        ((cocos2d::CCMenuItem*)m_cocos2d_impl)->selected();
    }

    int CCMenuItem::getScriptTapHandler() {

        int ret_impl = ((cocos2d::CCMenuItem*)m_cocos2d_impl)->getScriptTapHandler();
        
        
        return ret_impl;
    }

    bool CCMenuItem::isSelected() {

        bool ret_impl = ((cocos2d::CCMenuItem*)m_cocos2d_impl)->isSelected();
        
        
        return ret_impl;
    }

    void CCMenuItem::registerScriptTapHandler(int arg0) {

        ((cocos2d::CCMenuItem*)m_cocos2d_impl)->registerScriptTapHandler((int)(arg0));
    }

    void CCMenuItem::unselected() {

        ((cocos2d::CCMenuItem*)m_cocos2d_impl)->unselected();
    }

    PassRefPtrWillBeRawPtr<CCRect> CCMenuItem::rect() {

        cocos2d::CCRect ret_impl = ((cocos2d::CCMenuItem*)m_cocos2d_impl)->rect();
        
        RefPtr<CCRect> ret = adoptRefWillBeNoop(new CCRect());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }
    cocos2d::CCMenuItem* CCMenuItem::getCocos2dImpl() {
        return (cocos2d::CCMenuItem*)m_cocos2d_impl;
    }

    CCMenuItem::CCMenuItem() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCMenuItem> CCMenuItem::create()
    {
        RefPtrWillBeRawPtr<CCMenuItem> ret = adoptRefWillBeNoop(new CCMenuItem());
        cocos2d::CCMenuItem* impl = new cocos2d::CCMenuItem();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCMenuItem::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCMenuItem::~CCMenuItem() {
        m_menu_item_callback = nullptr;
    }

    void CCMenuItem::setMenuItemCallback(MenuItemCallback* callback) {
        m_menu_item_callback = callback;
    }

    void CCMenuItem::executeMenuItemEvent() {
        if (m_menu_item_callback)
            m_menu_item_callback->handleEvent();
    }
} // namespace blink
