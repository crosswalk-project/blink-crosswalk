// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCEditBox.h"

namespace blink {

    void CCEditBox::setAnchorPoint(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCEditBox*)m_cocos2d_impl)->setAnchorPoint( *_arg0);
    }

    String CCEditBox::getText() {

        const String ret_impl = ((cocos2d::extension::CCEditBox*)m_cocos2d_impl)->getText();
        
        
        return ret_impl;
    }

    void CCEditBox::setPlaceholderFontName(String arg0) {

        ((cocos2d::extension::CCEditBox*)m_cocos2d_impl)->setPlaceholderFontName((char*)(arg0.utf8().data()));
    }

    String CCEditBox::getPlaceHolder() {

        const String ret_impl = ((cocos2d::extension::CCEditBox*)m_cocos2d_impl)->getPlaceHolder();
        
        
        return ret_impl;
    }

    void CCEditBox::setFontName(String arg0) {

        ((cocos2d::extension::CCEditBox*)m_cocos2d_impl)->setFontName((char*)(arg0.utf8().data()));
    }

    void CCEditBox::setPlaceholderFontSize(int arg0) {

        ((cocos2d::extension::CCEditBox*)m_cocos2d_impl)->setPlaceholderFontSize((int)(arg0));
    }

    void CCEditBox::setInputMode(int arg0) {

        ((cocos2d::extension::CCEditBox*)m_cocos2d_impl)->setInputMode((cocos2d::extension::EditBoxInputMode)(arg0));
    }

    void CCEditBox::setPlaceholderFontColor(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCEditBox*)m_cocos2d_impl)->setPlaceholderFontColor( *_arg0);
    }

    void CCEditBox::setFontColor(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCEditBox*)m_cocos2d_impl)->setFontColor( *_arg0);
    }

    void CCEditBox::setPlaceholderFont(String arg0, int arg1) {

        ((cocos2d::extension::CCEditBox*)m_cocos2d_impl)->setPlaceholderFont((char*)(arg0.utf8().data()), (int)(arg1));
    }

    void CCEditBox::setFontSize(int arg0) {

        ((cocos2d::extension::CCEditBox*)m_cocos2d_impl)->setFontSize((int)(arg0));
    }

    bool CCEditBox::initWithSizeAndBackgroundSprite(CCSize* arg0, CCScale9Sprite* arg1) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());
        cocos2d::extension::CCScale9Sprite* _arg1 = (cocos2d::extension::CCScale9Sprite*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCEditBox*)m_cocos2d_impl)->initWithSizeAndBackgroundSprite( *_arg0,  _arg1);
        
        
        return ret_impl;
    }

    void CCEditBox::setPlaceHolder(String arg0) {

        ((cocos2d::extension::CCEditBox*)m_cocos2d_impl)->setPlaceHolder((char*)(arg0.utf8().data()));
    }

    void CCEditBox::setReturnType(int arg0) {

        ((cocos2d::extension::CCEditBox*)m_cocos2d_impl)->setReturnType((cocos2d::extension::KeyboardReturnType)(arg0));
    }

    void CCEditBox::setInputFlag(int arg0) {

        ((cocos2d::extension::CCEditBox*)m_cocos2d_impl)->setInputFlag((cocos2d::extension::EditBoxInputFlag)(arg0));
    }

    int CCEditBox::getMaxLength() {

        int ret_impl = ((cocos2d::extension::CCEditBox*)m_cocos2d_impl)->getMaxLength();
        
        
        return ret_impl;
    }

    void CCEditBox::setText(String arg0) {

        ((cocos2d::extension::CCEditBox*)m_cocos2d_impl)->setText((char*)(arg0.utf8().data()));
    }

    void CCEditBox::setMaxLength(int arg0) {

        ((cocos2d::extension::CCEditBox*)m_cocos2d_impl)->setMaxLength((int)(arg0));
    }

    void CCEditBox::setFont(String arg0, int arg1) {

        ((cocos2d::extension::CCEditBox*)m_cocos2d_impl)->setFont((char*)(arg0.utf8().data()), (int)(arg1));
    }

    void CCEditBox::setVisible(bool arg0) {

        ((cocos2d::extension::CCEditBox*)m_cocos2d_impl)->setVisible((bool)(arg0));
    }

    ScriptValue CCEditBox::createInternal(ScriptState* scriptState, CCSize* arg0, CCScale9Sprite* arg1, CCScale9Sprite* arg2, CCScale9Sprite* arg3) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());
        cocos2d::extension::CCScale9Sprite* _arg1 = (cocos2d::extension::CCScale9Sprite*)(arg1->getCocos2dImpl());
        cocos2d::extension::CCScale9Sprite* _arg2 = (cocos2d::extension::CCScale9Sprite*)(arg2->getCocos2dImpl());
        cocos2d::extension::CCScale9Sprite* _arg3 = (cocos2d::extension::CCScale9Sprite*)(arg3->getCocos2dImpl());

        cocos2d::extension::CCEditBox* ret_impl = cocos2d::extension::CCEditBox::create( *_arg0,  _arg1,  _arg2,  _arg3);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCEditBox)
        
    }
    cocos2d::extension::CCEditBox* CCEditBox::getCocos2dImpl() {
        return (cocos2d::extension::CCEditBox*)m_cocos2d_impl;
    }


    CCEditBox::CCEditBox() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCEditBox> CCEditBox::create()
    {
        RefPtrWillBeRawPtr<CCEditBox> ret = adoptRefWillBeNoop(new CCEditBox());
        cocos2d::extension::CCEditBox* impl = new cocos2d::extension::CCEditBox();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCEditBox::~CCEditBox() {
    }
} // namespace blink
