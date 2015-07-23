// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/manual/CCMenuItemImage.h"

namespace blink {

    void CCMenuItemImage::setDisabledSpriteFrame(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCSpriteFrame, arg0_wrapper, arg0);
        cocos2d::CCSpriteFrame* _arg0 = (cocos2d::CCSpriteFrame*)(arg0->getCocos2dImpl());

        ((cocos2d::CCMenuItemImage*)m_cocos2d_impl)->setDisabledSpriteFrame( _arg0);
    }

    void CCMenuItemImage::setSelectedSpriteFrame(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCSpriteFrame, arg0_wrapper, arg0);
        cocos2d::CCSpriteFrame* _arg0 = (cocos2d::CCSpriteFrame*)(arg0->getCocos2dImpl());

        ((cocos2d::CCMenuItemImage*)m_cocos2d_impl)->setSelectedSpriteFrame( _arg0);
    }

    bool CCMenuItemImage::init() {

        bool ret_impl = ((cocos2d::CCMenuItemImage*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    void CCMenuItemImage::setNormalSpriteFrame(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCSpriteFrame, arg0_wrapper, arg0);
        cocos2d::CCSpriteFrame* _arg0 = (cocos2d::CCSpriteFrame*)(arg0->getCocos2dImpl());

        ((cocos2d::CCMenuItemImage*)m_cocos2d_impl)->setNormalSpriteFrame( _arg0);
    }

    void CCMenuItemImage::initWithNormalImage(String normalImage,
                                              String selectedImage,
                                              String disabledImage,
                                              ScriptValue& target,
					      MenuItemCallback* callback) {
        SCRIPT_VALUE_WRAPPER(CCNode, target, arg3);
	cocos2d::CCSprite* _arg0 = NULL;
        if (!normalImage.isEmpty() && normalImage != "null") {
            _arg0 = cocos2d::CCSprite::create(normalImage.utf8().data());
        }
 
	cocos2d::CCSprite* _arg1 = NULL;
        if (!selectedImage.isEmpty() && selectedImage != "null") {
            _arg1 = cocos2d::CCSprite::create(selectedImage.utf8().data());
        }

	cocos2d::CCSprite* _arg2 = NULL;
        if (!disabledImage.isEmpty() && disabledImage != "null") {
            _arg2 = cocos2d::CCSprite::create(disabledImage.utf8().data());
        }

        cocos2d::CCObject* _arg3 = nullptr;
        if (arg3) {
            _arg3 = (cocos2d::CCObject*)(arg3->getCocos2dImpl());
        }
	((cocos2d::CCMenuItemImage*)m_cocos2d_impl)->initWithNormalSprite(_arg0, _arg1, _arg2, _arg3, NULL);
        blink::CCMenuItem::setMenuItemCallback(callback);
    }

    cocos2d::CCMenuItemImage* CCMenuItemImage::getCocos2dImpl() {
        return (cocos2d::CCMenuItemImage*)m_cocos2d_impl;
    }

    CCMenuItemImage::CCMenuItemImage() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCMenuItemImage> CCMenuItemImage::create()
    {
        RefPtrWillBeRawPtr<CCMenuItemImage> ret = adoptRefWillBeNoop(new CCMenuItemImage());
        cocos2d::CCMenuItemImage* impl = new cocos2d::CCMenuItemImage();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCMenuItemImage::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCMenuItemImage::~CCMenuItemImage() {
    }
} // namespace blink
