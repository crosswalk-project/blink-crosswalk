// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCLabelBMFont.h"

namespace blink {

    void CCLabelBMFont::createFontChars() {

        ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->createFontChars();
    }

    String CCLabelBMFont::getString() {

        const String ret_impl = ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->getString();
        
        
        return ret_impl;
    }

    void CCLabelBMFont::setScale(float arg0) {

        ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->setScale((float)(arg0));
    }

    void CCLabelBMFont::setOpacity(unsigned char arg0) {

        ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->setOpacity((unsigned char)(arg0));
    }

    void CCLabelBMFont::setCascadeOpacityEnabled(bool arg0) {

        ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->setCascadeOpacityEnabled((bool)(arg0));
    }

    String CCLabelBMFont::getFntFile() {

        const String ret_impl = ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->getFntFile();
        
        
        return ret_impl;
    }

    void CCLabelBMFont::updateLabel() {

        ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->updateLabel();
    }

    void CCLabelBMFont::setWidth(float arg0) {

        ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->setWidth((float)(arg0));
    }

    bool CCLabelBMFont::isOpacityModifyRGB() {

        bool ret_impl = ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->isOpacityModifyRGB();
        
        
        return ret_impl;
    }

    bool CCLabelBMFont::isCascadeOpacityEnabled() {

        bool ret_impl = ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->isCascadeOpacityEnabled();
        
        
        return ret_impl;
    }

    void CCLabelBMFont::setString(String arg0, bool arg1) {

        ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->setString((char*)(arg0.utf8().data()), (bool)(arg1));
    }

    void CCLabelBMFont::setString(String arg0) {

        ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->setString((char*)(arg0.utf8().data()));
    }

    bool CCLabelBMFont::initWithString(String arg0, String arg1, float arg2, int arg3, CCPoint* arg4) {
        cocos2d::CCPoint* _arg4 = (cocos2d::CCPoint*)(arg4->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->initWithString((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (float)(arg2), (cocos2d::CCTextAlignment)(arg3),  *_arg4);
        
        
        return ret_impl;
    }

    void CCLabelBMFont::setCascadeColorEnabled(bool arg0) {

        ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->setCascadeColorEnabled((bool)(arg0));
    }

    void CCLabelBMFont::setOpacityModifyRGB(bool arg0) {

        ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->setOpacityModifyRGB((bool)(arg0));
    }

    void CCLabelBMFont::updateDisplayedOpacity(unsigned char arg0) {

        ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->updateDisplayedOpacity((unsigned char)(arg0));
    }

    bool CCLabelBMFont::init() {

        bool ret_impl = ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    void CCLabelBMFont::setFntFile(String arg0) {

        ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->setFntFile((char*)(arg0.utf8().data()));
    }

    unsigned char CCLabelBMFont::getOpacity() {

        unsigned char ret_impl = ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->getOpacity();
        
        
        return ret_impl;
    }

    void CCLabelBMFont::setLineBreakWithoutSpace(bool arg0) {

        ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->setLineBreakWithoutSpace((bool)(arg0));
    }

    void CCLabelBMFont::setScaleY(float arg0) {

        ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->setScaleY((float)(arg0));
    }

    void CCLabelBMFont::setScaleX(float arg0) {

        ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->setScaleX((float)(arg0));
    }

    PassRefPtrWillBeRawPtr<ccColor3B> CCLabelBMFont::getColor() {

        const cocos2d::ccColor3B ret_impl = ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->getColor();
        
        RefPtr<ccColor3B> ret = adoptRefWillBeNoop(new ccColor3B());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    unsigned char CCLabelBMFont::getDisplayedOpacity() {

        unsigned char ret_impl = ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->getDisplayedOpacity();
        
        
        return ret_impl;
    }

    bool CCLabelBMFont::isCascadeColorEnabled() {

        bool ret_impl = ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->isCascadeColorEnabled();
        
        
        return ret_impl;
    }

    void CCLabelBMFont::setColor(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->setColor( *_arg0);
    }

    void CCLabelBMFont::setCString(String arg0) {

        ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->setCString((char*)(arg0.utf8().data()));
    }

    PassRefPtrWillBeRawPtr<ccColor3B> CCLabelBMFont::getDisplayedColor() {

        const cocos2d::ccColor3B ret_impl = ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->getDisplayedColor();
        
        RefPtr<ccColor3B> ret = adoptRefWillBeNoop(new ccColor3B());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCLabelBMFont::updateDisplayedColor(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->updateDisplayedColor( *_arg0);
    }

    void CCLabelBMFont::setAlignment(int arg0) {

        ((cocos2d::CCLabelBMFont*)m_cocos2d_impl)->setAlignment((cocos2d::CCTextAlignment)(arg0));
    }

    void CCLabelBMFont::purgeCachedData() {

        cocos2d::CCLabelBMFont::purgeCachedData();
    }
    ScriptValue CCLabelBMFont::createInternal(ScriptState* scriptState, String arg0, String arg1, float arg2, int arg3) {

        cocos2d::CCLabelBMFont* ret_impl = cocos2d::CCLabelBMFont::create((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (float)(arg2), (cocos2d::CCTextAlignment)(arg3));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCLabelBMFont)
        
    }
    ScriptValue CCLabelBMFont::createInternal(ScriptState* scriptState, String arg0, String arg1, float arg2, int arg3, CCPoint* arg4) {
        cocos2d::CCPoint* _arg4 = (cocos2d::CCPoint*)(arg4->getCocos2dImpl());

        cocos2d::CCLabelBMFont* ret_impl = cocos2d::CCLabelBMFont::create((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (float)(arg2), (cocos2d::CCTextAlignment)(arg3),  *_arg4);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCLabelBMFont)
        
    }
    ScriptValue CCLabelBMFont::createInternal(ScriptState* scriptState, String arg0, String arg1, float arg2) {

        cocos2d::CCLabelBMFont* ret_impl = cocos2d::CCLabelBMFont::create((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (float)(arg2));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCLabelBMFont)
        
    }
    ScriptValue CCLabelBMFont::createInternal(ScriptState* scriptState, String arg0, String arg1) {

        cocos2d::CCLabelBMFont* ret_impl = cocos2d::CCLabelBMFont::create((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCLabelBMFont)
        
    }
    ScriptValue CCLabelBMFont::createInternal(ScriptState* scriptState) {

        cocos2d::CCLabelBMFont* ret_impl = cocos2d::CCLabelBMFont::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCLabelBMFont)
        
    }
    cocos2d::CCLabelBMFont* CCLabelBMFont::getCocos2dImpl() {
        return (cocos2d::CCLabelBMFont*)m_cocos2d_impl;
    }


    CCLabelBMFont::CCLabelBMFont() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCLabelBMFont> CCLabelBMFont::create()
    {
        RefPtrWillBeRawPtr<CCLabelBMFont> ret = adoptRefWillBeNoop(new CCLabelBMFont());
        cocos2d::CCLabelBMFont* impl = new cocos2d::CCLabelBMFont();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCLabelBMFont::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCLabelBMFont::~CCLabelBMFont() {
    }
} // namespace blink
