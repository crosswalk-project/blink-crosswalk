// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/Button.h"

namespace blink {

    ScriptValue Button::getVirtualRenderer(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = ((cocos2d::gui::Button*)m_cocos2d_impl)->getVirtualRenderer();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    String Button::getTitleText() {

        const String ret_impl = ((cocos2d::gui::Button*)m_cocos2d_impl)->getTitleText();
        
        
        return ret_impl;
    }

    void Button::setTitleFontSize(float arg0) {

        ((cocos2d::gui::Button*)m_cocos2d_impl)->setTitleFontSize((float)(arg0));
    }

    String Button::getDescription() {

        String ret_impl = String(((cocos2d::gui::Button*)m_cocos2d_impl)->getDescription().c_str());
        
        
        return ret_impl;
    }

    void Button::setScale9Enabled(bool arg0) {

        ((cocos2d::gui::Button*)m_cocos2d_impl)->setScale9Enabled((bool)(arg0));
    }

    void Button::setTitleColor(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Button*)m_cocos2d_impl)->setTitleColor( *_arg0);
    }

    void Button::ignoreContentAdaptWithSize(bool arg0) {

        ((cocos2d::gui::Button*)m_cocos2d_impl)->ignoreContentAdaptWithSize((bool)(arg0));
    }

    void Button::setCapInsetsDisabledRenderer(CCRect* arg0) {
        cocos2d::CCRect* _arg0 = (cocos2d::CCRect*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Button*)m_cocos2d_impl)->setCapInsetsDisabledRenderer( *_arg0);
    }

    bool Button::isFlipX() {

        bool ret_impl = ((cocos2d::gui::Button*)m_cocos2d_impl)->isFlipX();
        
        
        return ret_impl;
    }

    bool Button::isFlipY() {

        bool ret_impl = ((cocos2d::gui::Button*)m_cocos2d_impl)->isFlipY();
        
        
        return ret_impl;
    }

    void Button::loadTextureDisabled(String arg0, int arg1) {

        ((cocos2d::gui::Button*)m_cocos2d_impl)->loadTextureDisabled((char*)(arg0.utf8().data()), (cocos2d::gui::TextureResType)(arg1));
    }

    PassRefPtrWillBeRawPtr<CCSize> Button::getContentSize() {

        const cocos2d::CCSize ret_impl = ((cocos2d::gui::Button*)m_cocos2d_impl)->getContentSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void Button::setTitleText(String arg0_wrapper) {
        std::string arg0 = std::string(arg0_wrapper.utf8().data());
        ((cocos2d::gui::Button*)m_cocos2d_impl)->setTitleText((std::string)(arg0));
    }

    void Button::setCapInsetsNormalRenderer(CCRect* arg0) {
        cocos2d::CCRect* _arg0 = (cocos2d::CCRect*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Button*)m_cocos2d_impl)->setCapInsetsNormalRenderer( *_arg0);
    }

    void Button::loadTexturePressed(String arg0, int arg1) {

        ((cocos2d::gui::Button*)m_cocos2d_impl)->loadTexturePressed((char*)(arg0.utf8().data()), (cocos2d::gui::TextureResType)(arg1));
    }

    void Button::setFlipY(bool arg0) {

        ((cocos2d::gui::Button*)m_cocos2d_impl)->setFlipY((bool)(arg0));
    }

    void Button::setFlipX(bool arg0) {

        ((cocos2d::gui::Button*)m_cocos2d_impl)->setFlipX((bool)(arg0));
    }

    void Button::setTitleFontName(String arg0) {

        ((cocos2d::gui::Button*)m_cocos2d_impl)->setTitleFontName((char*)(arg0.utf8().data()));
    }

    void Button::loadTextures(String arg0, String arg1, String arg2, int arg3) {

        ((cocos2d::gui::Button*)m_cocos2d_impl)->loadTextures((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (char*)(arg2.utf8().data()), (cocos2d::gui::TextureResType)(arg3));
    }

    PassRefPtrWillBeRawPtr<ccColor3B> Button::getTitleColor() {

        const cocos2d::ccColor3B ret_impl = ((cocos2d::gui::Button*)m_cocos2d_impl)->getTitleColor();
        
        RefPtr<ccColor3B> ret = adoptRefWillBeNoop(new ccColor3B());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void Button::loadTextureNormal(String arg0, int arg1) {

        ((cocos2d::gui::Button*)m_cocos2d_impl)->loadTextureNormal((char*)(arg0.utf8().data()), (cocos2d::gui::TextureResType)(arg1));
    }

    void Button::setColor(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Button*)m_cocos2d_impl)->setColor( *_arg0);
    }

    void Button::setCapInsetsPressedRenderer(CCRect* arg0) {
        cocos2d::CCRect* _arg0 = (cocos2d::CCRect*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Button*)m_cocos2d_impl)->setCapInsetsPressedRenderer( *_arg0);
    }

    float Button::getTitleFontSize() {

        float ret_impl = ((cocos2d::gui::Button*)m_cocos2d_impl)->getTitleFontSize();
        
        
        return ret_impl;
    }

    String Button::getTitleFontName() {

        const String ret_impl = ((cocos2d::gui::Button*)m_cocos2d_impl)->getTitleFontName();
        
        
        return ret_impl;
    }

    void Button::setCapInsets(CCRect* arg0) {
        cocos2d::CCRect* _arg0 = (cocos2d::CCRect*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Button*)m_cocos2d_impl)->setCapInsets( *_arg0);
    }

    void Button::setPressedActionEnabled(bool arg0) {

        ((cocos2d::gui::Button*)m_cocos2d_impl)->setPressedActionEnabled((bool)(arg0));
    }

    ScriptValue Button::createInternal(ScriptState* scriptState) {

        cocos2d::gui::Button* ret_impl = cocos2d::gui::Button::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, Button)
        
    }
    cocos2d::gui::Button* Button::getCocos2dImpl() {
        return (cocos2d::gui::Button*)m_cocos2d_impl;
    }


    Button::Button() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<Button> Button::create()
    {
        RefPtrWillBeRawPtr<Button> ret = adoptRefWillBeNoop(new Button());
        cocos2d::gui::Button* impl = new cocos2d::gui::Button();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    Button::~Button() {
    }
} // namespace blink
