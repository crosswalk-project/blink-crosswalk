// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CheckBox.h"

namespace blink {

    bool CheckBox::getSelectedState() {

        bool ret_impl = ((cocos2d::gui::CheckBox*)m_cocos2d_impl)->getSelectedState();
        
        
        return ret_impl;
    }

    void CheckBox::loadTextureBackGroundSelected(String arg0, int arg1) {

        ((cocos2d::gui::CheckBox*)m_cocos2d_impl)->loadTextureBackGroundSelected((char*)(arg0.utf8().data()), (cocos2d::gui::TextureResType)(arg1));
    }

    void CheckBox::loadTextureBackGroundDisabled(String arg0, int arg1) {

        ((cocos2d::gui::CheckBox*)m_cocos2d_impl)->loadTextureBackGroundDisabled((char*)(arg0.utf8().data()), (cocos2d::gui::TextureResType)(arg1));
    }

    String CheckBox::getDescription() {

        String ret_impl = String(((cocos2d::gui::CheckBox*)m_cocos2d_impl)->getDescription().c_str());
        
        
        return ret_impl;
    }

    void CheckBox::setFlipY(bool arg0) {

        ((cocos2d::gui::CheckBox*)m_cocos2d_impl)->setFlipY((bool)(arg0));
    }

    void CheckBox::setFlipX(bool arg0) {

        ((cocos2d::gui::CheckBox*)m_cocos2d_impl)->setFlipX((bool)(arg0));
    }

    bool CheckBox::isFlipX() {

        bool ret_impl = ((cocos2d::gui::CheckBox*)m_cocos2d_impl)->isFlipX();
        
        
        return ret_impl;
    }

    bool CheckBox::isFlipY() {

        bool ret_impl = ((cocos2d::gui::CheckBox*)m_cocos2d_impl)->isFlipY();
        
        
        return ret_impl;
    }

    void CheckBox::loadTextureFrontCross(String arg0, int arg1) {

        ((cocos2d::gui::CheckBox*)m_cocos2d_impl)->loadTextureFrontCross((char*)(arg0.utf8().data()), (cocos2d::gui::TextureResType)(arg1));
    }

    ScriptValue CheckBox::getVirtualRenderer(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = ((cocos2d::gui::CheckBox*)m_cocos2d_impl)->getVirtualRenderer();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    PassRefPtrWillBeRawPtr<CCSize> CheckBox::getContentSize() {

        const cocos2d::CCSize ret_impl = ((cocos2d::gui::CheckBox*)m_cocos2d_impl)->getContentSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CheckBox::loadTextures(String arg0, String arg1, String arg2, String arg3, String arg4, int arg5) {

        ((cocos2d::gui::CheckBox*)m_cocos2d_impl)->loadTextures((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (char*)(arg2.utf8().data()), (char*)(arg3.utf8().data()), (char*)(arg4.utf8().data()), (cocos2d::gui::TextureResType)(arg5));
    }

    void CheckBox::loadTextureBackGround(String arg0, int arg1) {

        ((cocos2d::gui::CheckBox*)m_cocos2d_impl)->loadTextureBackGround((char*)(arg0.utf8().data()), (cocos2d::gui::TextureResType)(arg1));
    }

    void CheckBox::setSelectedState(bool arg0) {

        ((cocos2d::gui::CheckBox*)m_cocos2d_impl)->setSelectedState((bool)(arg0));
    }

    void CheckBox::loadTextureFrontCrossDisabled(String arg0, int arg1) {

        ((cocos2d::gui::CheckBox*)m_cocos2d_impl)->loadTextureFrontCrossDisabled((char*)(arg0.utf8().data()), (cocos2d::gui::TextureResType)(arg1));
    }

    ScriptValue CheckBox::createInternal(ScriptState* scriptState) {

        cocos2d::gui::CheckBox* ret_impl = cocos2d::gui::CheckBox::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CheckBox)
        
    }
    cocos2d::gui::CheckBox* CheckBox::getCocos2dImpl() {
        return (cocos2d::gui::CheckBox*)m_cocos2d_impl;
    }


    CheckBox::CheckBox() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CheckBox> CheckBox::create()
    {
        RefPtrWillBeRawPtr<CheckBox> ret = adoptRefWillBeNoop(new CheckBox());
        cocos2d::gui::CheckBox* impl = new cocos2d::gui::CheckBox();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CheckBox::~CheckBox() {
    }
} // namespace blink
