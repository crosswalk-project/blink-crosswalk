// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/TextField.h"

namespace blink {

    void TextField::setAttachWithIME(bool arg0) {

        ((cocos2d::gui::TextField*)m_cocos2d_impl)->setAttachWithIME((bool)(arg0));
    }

    String TextField::getStringValue() {

        const String ret_impl = ((cocos2d::gui::TextField*)m_cocos2d_impl)->getStringValue();
        
        
        return ret_impl;
    }

    String TextField::getDescription() {

        String ret_impl = String(((cocos2d::gui::TextField*)m_cocos2d_impl)->getDescription().c_str());
        
        
        return ret_impl;
    }

    ScriptValue TextField::getVirtualRenderer(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = ((cocos2d::gui::TextField*)m_cocos2d_impl)->getVirtualRenderer();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    bool TextField::getDeleteBackward() {

        bool ret_impl = ((cocos2d::gui::TextField*)m_cocos2d_impl)->getDeleteBackward();
        
        
        return ret_impl;
    }

    bool TextField::getAttachWithIME() {

        bool ret_impl = ((cocos2d::gui::TextField*)m_cocos2d_impl)->getAttachWithIME();
        
        
        return ret_impl;
    }

    void TextField::setFontName(String arg0_wrapper) {
        std::string arg0 = std::string(arg0_wrapper.utf8().data());
        ((cocos2d::gui::TextField*)m_cocos2d_impl)->setFontName((std::string)(arg0));
    }

    bool TextField::getInsertText() {

        bool ret_impl = ((cocos2d::gui::TextField*)m_cocos2d_impl)->getInsertText();
        
        
        return ret_impl;
    }

    void TextField::initRenderer() {

        ((cocos2d::gui::TextField*)m_cocos2d_impl)->initRenderer();
    }

    bool TextField::getDetachWithIME() {

        bool ret_impl = ((cocos2d::gui::TextField*)m_cocos2d_impl)->getDetachWithIME();
        
        
        return ret_impl;
    }

    bool TextField::init() {

        bool ret_impl = ((cocos2d::gui::TextField*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCSize> TextField::getContentSize() {

        const cocos2d::CCSize ret_impl = ((cocos2d::gui::TextField*)m_cocos2d_impl)->getContentSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void TextField::didNotSelectSelf() {

        ((cocos2d::gui::TextField*)m_cocos2d_impl)->didNotSelectSelf();
    }

    bool TextField::isPasswordEnabled() {

        bool ret_impl = ((cocos2d::gui::TextField*)m_cocos2d_impl)->isPasswordEnabled();
        
        
        return ret_impl;
    }

    void TextField::attachWithIME() {

        ((cocos2d::gui::TextField*)m_cocos2d_impl)->attachWithIME();
    }

    void TextField::setPasswordEnabled(bool arg0) {

        ((cocos2d::gui::TextField*)m_cocos2d_impl)->setPasswordEnabled((bool)(arg0));
    }

    void TextField::update(float arg0) {

        ((cocos2d::gui::TextField*)m_cocos2d_impl)->update((float)(arg0));
    }

    void TextField::setMaxLengthEnabled(bool arg0) {

        ((cocos2d::gui::TextField*)m_cocos2d_impl)->setMaxLengthEnabled((bool)(arg0));
    }

    void TextField::setPasswordStyleText(String arg0) {

        ((cocos2d::gui::TextField*)m_cocos2d_impl)->setPasswordStyleText((char*)(arg0.utf8().data()));
    }

    void TextField::setFontSize(int arg0) {

        ((cocos2d::gui::TextField*)m_cocos2d_impl)->setFontSize((int)(arg0));
    }

    void TextField::setPlaceHolder(String arg0_wrapper) {
        std::string arg0 = std::string(arg0_wrapper.utf8().data());
        ((cocos2d::gui::TextField*)m_cocos2d_impl)->setPlaceHolder((std::string)(arg0));
    }

    int TextField::getMaxLength() {

        int ret_impl = ((cocos2d::gui::TextField*)m_cocos2d_impl)->getMaxLength();
        
        
        return ret_impl;
    }

    bool TextField::isMaxLengthEnabled() {

        bool ret_impl = ((cocos2d::gui::TextField*)m_cocos2d_impl)->isMaxLengthEnabled();
        
        
        return ret_impl;
    }

    void TextField::setDetachWithIME(bool arg0) {

        ((cocos2d::gui::TextField*)m_cocos2d_impl)->setDetachWithIME((bool)(arg0));
    }

    void TextField::setText(String arg0_wrapper) {
        std::string arg0 = std::string(arg0_wrapper.utf8().data());
        ((cocos2d::gui::TextField*)m_cocos2d_impl)->setText((std::string)(arg0));
    }

    void TextField::setInsertText(bool arg0) {

        ((cocos2d::gui::TextField*)m_cocos2d_impl)->setInsertText((bool)(arg0));
    }

    void TextField::setMaxLength(int arg0) {

        ((cocos2d::gui::TextField*)m_cocos2d_impl)->setMaxLength((int)(arg0));
    }

    void TextField::setTouchSize(CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::TextField*)m_cocos2d_impl)->setTouchSize( *_arg0);
    }

    void TextField::setDeleteBackward(bool arg0) {

        ((cocos2d::gui::TextField*)m_cocos2d_impl)->setDeleteBackward((bool)(arg0));
    }

    ScriptValue TextField::createInternal(ScriptState* scriptState) {

        cocos2d::gui::TextField* ret_impl = cocos2d::gui::TextField::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, TextField)
        
    }
    cocos2d::gui::TextField* TextField::getCocos2dImpl() {
        return (cocos2d::gui::TextField*)m_cocos2d_impl;
    }


    TextField::TextField() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<TextField> TextField::create()
    {
        RefPtrWillBeRawPtr<TextField> ret = adoptRefWillBeNoop(new TextField());
        cocos2d::gui::TextField* impl = new cocos2d::gui::TextField();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    TextField::~TextField() {
    }
} // namespace blink
