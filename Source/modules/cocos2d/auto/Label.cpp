// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/Label.h"

namespace blink {

    ScriptValue Label::getVirtualRenderer(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = ((cocos2d::gui::Label*)m_cocos2d_impl)->getVirtualRenderer();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    String Label::getStringValue() {

        const String ret_impl = ((cocos2d::gui::Label*)m_cocos2d_impl)->getStringValue();
        
        
        return ret_impl;
    }

    String Label::getDescription() {

        String ret_impl = String(((cocos2d::gui::Label*)m_cocos2d_impl)->getDescription().c_str());
        
        
        return ret_impl;
    }

    void Label::setScale(float arg0) {

        ((cocos2d::gui::Label*)m_cocos2d_impl)->setScale((float)(arg0));
    }

    void Label::setTextVerticalAlignment(int arg0) {

        ((cocos2d::gui::Label*)m_cocos2d_impl)->setTextVerticalAlignment((cocos2d::CCVerticalTextAlignment)(arg0));
    }

    void Label::setFontName(String arg0_wrapper) {
        std::string arg0 = std::string(arg0_wrapper.utf8().data());
        ((cocos2d::gui::Label*)m_cocos2d_impl)->setFontName((std::string)(arg0));
    }

    void Label::setTouchScaleChangeEnabled(bool arg0) {

        ((cocos2d::gui::Label*)m_cocos2d_impl)->setTouchScaleChangeEnabled((bool)(arg0));
    }

    bool Label::isFlipX() {

        bool ret_impl = ((cocos2d::gui::Label*)m_cocos2d_impl)->isFlipX();
        
        
        return ret_impl;
    }

    bool Label::isFlipY() {

        bool ret_impl = ((cocos2d::gui::Label*)m_cocos2d_impl)->isFlipY();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCSize> Label::getContentSize() {

        const cocos2d::CCSize ret_impl = ((cocos2d::gui::Label*)m_cocos2d_impl)->getContentSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    bool Label::isTouchScaleChangeEnabled() {

        bool ret_impl = ((cocos2d::gui::Label*)m_cocos2d_impl)->isTouchScaleChangeEnabled();
        
        
        return ret_impl;
    }

    void Label::setTextAreaSize(CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Label*)m_cocos2d_impl)->setTextAreaSize( *_arg0);
    }

    int Label::getStringLength() {

        int ret_impl = ((cocos2d::gui::Label*)m_cocos2d_impl)->getStringLength();
        
        
        return ret_impl;
    }

    void Label::setScaleY(float arg0) {

        ((cocos2d::gui::Label*)m_cocos2d_impl)->setScaleY((float)(arg0));
    }

    void Label::setScaleX(float arg0) {

        ((cocos2d::gui::Label*)m_cocos2d_impl)->setScaleX((float)(arg0));
    }

    void Label::setFlipY(bool arg0) {

        ((cocos2d::gui::Label*)m_cocos2d_impl)->setFlipY((bool)(arg0));
    }

    void Label::setFlipX(bool arg0) {

        ((cocos2d::gui::Label*)m_cocos2d_impl)->setFlipX((bool)(arg0));
    }

    void Label::setFontSize(int arg0) {

        ((cocos2d::gui::Label*)m_cocos2d_impl)->setFontSize((int)(arg0));
    }

    void Label::setText(String arg0_wrapper) {
        std::string arg0 = std::string(arg0_wrapper.utf8().data());
        ((cocos2d::gui::Label*)m_cocos2d_impl)->setText((std::string)(arg0));
    }

    void Label::setTextHorizontalAlignment(int arg0) {

        ((cocos2d::gui::Label*)m_cocos2d_impl)->setTextHorizontalAlignment((cocos2d::CCTextAlignment)(arg0));
    }

    ScriptValue Label::createInternal(ScriptState* scriptState) {

        cocos2d::gui::Label* ret_impl = cocos2d::gui::Label::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, Label)
        
    }
    cocos2d::gui::Label* Label::getCocos2dImpl() {
        return (cocos2d::gui::Label*)m_cocos2d_impl;
    }


    Label::Label() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<Label> Label::create()
    {
        RefPtrWillBeRawPtr<Label> ret = adoptRefWillBeNoop(new Label());
        cocos2d::gui::Label* impl = new cocos2d::gui::Label();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    Label::~Label() {
    }
} // namespace blink
