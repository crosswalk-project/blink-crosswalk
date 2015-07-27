// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/manual/CCMenuItemFont.h"

namespace blink {

    unsigned int CCMenuItemFont::fontSizeObj() {

        unsigned int ret_impl = ((cocos2d::CCMenuItemFont*)m_cocos2d_impl)->fontSizeObj();
        
        
        return ret_impl;
    }

    String CCMenuItemFont::fontNameObj() {

        const String ret_impl = ((cocos2d::CCMenuItemFont*)m_cocos2d_impl)->fontNameObj();
        
        
        return ret_impl;
    }

    void CCMenuItemFont::setFontNameObj(String arg0) {

        ((cocos2d::CCMenuItemFont*)m_cocos2d_impl)->setFontNameObj((char*)(arg0.utf8().data()));
    }

    void CCMenuItemFont::setFontSizeObj(unsigned int arg0) {

        ((cocos2d::CCMenuItemFont*)m_cocos2d_impl)->setFontSizeObj((unsigned int)(arg0));
    }

    void CCMenuItemFont::setFontName(String arg0) {

        cocos2d::CCMenuItemFont::setFontName((char*)(arg0.utf8().data()));
    }

    String CCMenuItemFont::fontName() {

        const String ret_impl = cocos2d::CCMenuItemFont::fontName();
        
        
        return ret_impl;
    }

    unsigned int CCMenuItemFont::fontSize() {

        unsigned int ret_impl = cocos2d::CCMenuItemFont::fontSize();
        
        
        return ret_impl;
    }

    void CCMenuItemFont::setFontSize(unsigned int arg0) {

        cocos2d::CCMenuItemFont::setFontSize((unsigned int)(arg0));
    }

    void CCMenuItemFont::initWithString(String str,
                        MenuItemCallback* callback,
			ScriptValue& target) {
        SCRIPT_VALUE_WRAPPER(CCNode, target, arg3);
        cocos2d::CCObject* _arg3 = nullptr;
        if (arg3) {
            _arg3 = (cocos2d::CCObject*)(arg3->getCocos2dImpl());
        }
        ((cocos2d::CCMenuItemFont*)m_cocos2d_impl)->initWithString(str.utf8().data(), _arg3, NULL);
        blink::CCMenuItem::setMenuItemCallback(callback);
    }

    cocos2d::CCMenuItemFont* CCMenuItemFont::getCocos2dImpl() {
        return (cocos2d::CCMenuItemFont*)m_cocos2d_impl;
    }

    CCMenuItemFont::CCMenuItemFont() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCMenuItemFont> CCMenuItemFont::create()
    {
        RefPtrWillBeRawPtr<CCMenuItemFont> ret = adoptRefWillBeNoop(new CCMenuItemFont());
        cocos2d::CCMenuItemFont* impl = new cocos2d::CCMenuItemFont();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCMenuItemFont::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCMenuItemFont::~CCMenuItemFont() {
    }
} // namespace blink
