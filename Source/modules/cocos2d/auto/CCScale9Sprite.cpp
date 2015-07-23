// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCScale9Sprite.h"

namespace blink {

    PassRefPtrWillBeRawPtr<CCRect> CCScale9Sprite::getCapInsets() {

        cocos2d::CCRect ret_impl = ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->getCapInsets();
        
        RefPtr<CCRect> ret = adoptRefWillBeNoop(new CCRect());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCScale9Sprite::setOpacityModifyRGB(bool arg0) {

        ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->setOpacityModifyRGB((bool)(arg0));
    }

    bool CCScale9Sprite::updateWithBatchNode(CCSpriteBatchNode* arg0, CCRect* arg1, bool arg2, CCRect* arg3) {
        cocos2d::CCSpriteBatchNode* _arg0 = (cocos2d::CCSpriteBatchNode*)(arg0->getCocos2dImpl());
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());
        cocos2d::CCRect* _arg3 = (cocos2d::CCRect*)(arg3->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->updateWithBatchNode( _arg0,  *_arg1, (bool)(arg2),  *_arg3);
        
        
        return ret_impl;
    }

    void CCScale9Sprite::setInsetBottom(float arg0) {

        ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->setInsetBottom((float)(arg0));
    }

    bool CCScale9Sprite::isOpacityModifyRGB() {

        bool ret_impl = ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->isOpacityModifyRGB();
        
        
        return ret_impl;
    }

    bool CCScale9Sprite::initWithSpriteFrameName(String arg0) {

        bool ret_impl = ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->initWithSpriteFrameName((char*)(arg0.utf8().data()));
        
        
        return ret_impl;
    }

    bool CCScale9Sprite::initWithSpriteFrameName(String arg0, CCRect* arg1) {
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->initWithSpriteFrameName((char*)(arg0.utf8().data()),  *_arg1);
        
        
        return ret_impl;
    }

    void CCScale9Sprite::setInsetTop(float arg0) {

        ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->setInsetTop((float)(arg0));
    }

    void CCScale9Sprite::updateDisplayedOpacity(unsigned char arg0) {

        ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->updateDisplayedOpacity((unsigned char)(arg0));
    }

    bool CCScale9Sprite::init() {

        bool ret_impl = ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    void CCScale9Sprite::setPreferredSize(CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->setPreferredSize( *_arg0);
    }

    unsigned char CCScale9Sprite::getOpacity() {

        unsigned char ret_impl = ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->getOpacity();
        
        
        return ret_impl;
    }

    void CCScale9Sprite::setSpriteFrame(CCSpriteFrame* arg0) {
        cocos2d::CCSpriteFrame* _arg0 = (cocos2d::CCSpriteFrame*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->setSpriteFrame( _arg0);
    }

    PassRefPtrWillBeRawPtr<ccColor3B> CCScale9Sprite::getColor() {

        const cocos2d::ccColor3B ret_impl = ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->getColor();
        
        RefPtr<ccColor3B> ret = adoptRefWillBeNoop(new ccColor3B());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    bool CCScale9Sprite::initWithBatchNode(CCSpriteBatchNode* arg0, CCRect* arg1, CCRect* arg2) {
        cocos2d::CCSpriteBatchNode* _arg0 = (cocos2d::CCSpriteBatchNode*)(arg0->getCocos2dImpl());
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());
        cocos2d::CCRect* _arg2 = (cocos2d::CCRect*)(arg2->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->initWithBatchNode( _arg0,  *_arg1,  *_arg2);
        
        
        return ret_impl;
    }

    bool CCScale9Sprite::initWithBatchNode(CCSpriteBatchNode* arg0, CCRect* arg1, bool arg2, CCRect* arg3) {
        cocos2d::CCSpriteBatchNode* _arg0 = (cocos2d::CCSpriteBatchNode*)(arg0->getCocos2dImpl());
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());
        cocos2d::CCRect* _arg3 = (cocos2d::CCRect*)(arg3->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->initWithBatchNode( _arg0,  *_arg1, (bool)(arg2),  *_arg3);
        
        
        return ret_impl;
    }

    float CCScale9Sprite::getInsetBottom() {

        float ret_impl = ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->getInsetBottom();
        
        
        return ret_impl;
    }

    ScriptValue CCScale9Sprite::resizableSpriteWithCapInsets(ScriptState* scriptState, CCRect* arg0) {
        cocos2d::CCRect* _arg0 = (cocos2d::CCRect*)(arg0->getCocos2dImpl());

        cocos2d::extension::CCScale9Sprite* ret_impl = ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->resizableSpriteWithCapInsets( *_arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCScale9Sprite)
        
    }

    void CCScale9Sprite::setOpacity(unsigned char arg0) {

        ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->setOpacity((unsigned char)(arg0));
    }

    float CCScale9Sprite::getInsetRight() {

        float ret_impl = ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->getInsetRight();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCSize> CCScale9Sprite::getOriginalSize() {

        cocos2d::CCSize ret_impl = ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->getOriginalSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    bool CCScale9Sprite::initWithFile(String arg0, CCRect* arg1) {
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->initWithFile((char*)(arg0.utf8().data()),  *_arg1);
        
        
        return ret_impl;
    }

    bool CCScale9Sprite::initWithFile(String arg0, CCRect* arg1, CCRect* arg2) {
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());
        cocos2d::CCRect* _arg2 = (cocos2d::CCRect*)(arg2->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->initWithFile((char*)(arg0.utf8().data()),  *_arg1,  *_arg2);
        
        
        return ret_impl;
    }

    bool CCScale9Sprite::initWithFile(CCRect* arg0, String arg1) {
        cocos2d::CCRect* _arg0 = (cocos2d::CCRect*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->initWithFile( *_arg0, (char*)(arg1.utf8().data()));
        
        
        return ret_impl;
    }

    bool CCScale9Sprite::initWithFile(String arg0) {

        bool ret_impl = ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->initWithFile((char*)(arg0.utf8().data()));
        
        
        return ret_impl;
    }

    void CCScale9Sprite::setColor(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->setColor( *_arg0);
    }

    float CCScale9Sprite::getInsetTop() {

        float ret_impl = ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->getInsetTop();
        
        
        return ret_impl;
    }

    void CCScale9Sprite::setInsetLeft(float arg0) {

        ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->setInsetLeft((float)(arg0));
    }

    bool CCScale9Sprite::initWithSpriteFrame(CCSpriteFrame* arg0) {
        cocos2d::CCSpriteFrame* _arg0 = (cocos2d::CCSpriteFrame*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->initWithSpriteFrame( _arg0);
        
        
        return ret_impl;
    }

    bool CCScale9Sprite::initWithSpriteFrame(CCSpriteFrame* arg0, CCRect* arg1) {
        cocos2d::CCSpriteFrame* _arg0 = (cocos2d::CCSpriteFrame*)(arg0->getCocos2dImpl());
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->initWithSpriteFrame( _arg0,  *_arg1);
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCSize> CCScale9Sprite::getPreferredSize() {

        cocos2d::CCSize ret_impl = ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->getPreferredSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCScale9Sprite::setCapInsets(CCRect* arg0) {
        cocos2d::CCRect* _arg0 = (cocos2d::CCRect*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->setCapInsets( *_arg0);
    }

    float CCScale9Sprite::getInsetLeft() {

        float ret_impl = ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->getInsetLeft();
        
        
        return ret_impl;
    }

    void CCScale9Sprite::updateDisplayedColor(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->updateDisplayedColor( *_arg0);
    }

    void CCScale9Sprite::setInsetRight(float arg0) {

        ((cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl)->setInsetRight((float)(arg0));
    }
    ScriptValue CCScale9Sprite::createInternal(ScriptState* scriptState, String arg0, CCRect* arg1) {
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());

        cocos2d::extension::CCScale9Sprite* ret_impl = cocos2d::extension::CCScale9Sprite::create((char*)(arg0.utf8().data()),  *_arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCScale9Sprite)
        
    }
    ScriptValue CCScale9Sprite::createInternal(ScriptState* scriptState, String arg0, CCRect* arg1, CCRect* arg2) {
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());
        cocos2d::CCRect* _arg2 = (cocos2d::CCRect*)(arg2->getCocos2dImpl());

        cocos2d::extension::CCScale9Sprite* ret_impl = cocos2d::extension::CCScale9Sprite::create((char*)(arg0.utf8().data()),  *_arg1,  *_arg2);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCScale9Sprite)
        
    }
    ScriptValue CCScale9Sprite::createInternal(ScriptState* scriptState, CCRect* arg0, String arg1) {
        cocos2d::CCRect* _arg0 = (cocos2d::CCRect*)(arg0->getCocos2dImpl());

        cocos2d::extension::CCScale9Sprite* ret_impl = cocos2d::extension::CCScale9Sprite::create( *_arg0, (char*)(arg1.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCScale9Sprite)
        
    }
    ScriptValue CCScale9Sprite::createInternal(ScriptState* scriptState, String arg0) {

        cocos2d::extension::CCScale9Sprite* ret_impl = cocos2d::extension::CCScale9Sprite::create((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCScale9Sprite)
        
    }
    ScriptValue CCScale9Sprite::createInternal(ScriptState* scriptState) {

        cocos2d::extension::CCScale9Sprite* ret_impl = cocos2d::extension::CCScale9Sprite::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCScale9Sprite)
        
    }
    ScriptValue CCScale9Sprite::createWithSpriteFrameName(ScriptState* scriptState, String arg0) {

        cocos2d::extension::CCScale9Sprite* ret_impl = cocos2d::extension::CCScale9Sprite::createWithSpriteFrameName((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCScale9Sprite)
        
    }
    ScriptValue CCScale9Sprite::createWithSpriteFrameName(ScriptState* scriptState, String arg0, CCRect* arg1) {
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());

        cocos2d::extension::CCScale9Sprite* ret_impl = cocos2d::extension::CCScale9Sprite::createWithSpriteFrameName((char*)(arg0.utf8().data()),  *_arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCScale9Sprite)
        
    }
    ScriptValue CCScale9Sprite::createWithSpriteFrame(ScriptState* scriptState, CCSpriteFrame* arg0) {
        cocos2d::CCSpriteFrame* _arg0 = (cocos2d::CCSpriteFrame*)(arg0->getCocos2dImpl());

        cocos2d::extension::CCScale9Sprite* ret_impl = cocos2d::extension::CCScale9Sprite::createWithSpriteFrame( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCScale9Sprite)
        
    }
    ScriptValue CCScale9Sprite::createWithSpriteFrame(ScriptState* scriptState, CCSpriteFrame* arg0, CCRect* arg1) {
        cocos2d::CCSpriteFrame* _arg0 = (cocos2d::CCSpriteFrame*)(arg0->getCocos2dImpl());
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());

        cocos2d::extension::CCScale9Sprite* ret_impl = cocos2d::extension::CCScale9Sprite::createWithSpriteFrame( _arg0,  *_arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCScale9Sprite)
        
    }
    cocos2d::extension::CCScale9Sprite* CCScale9Sprite::getCocos2dImpl() {
        return (cocos2d::extension::CCScale9Sprite*)m_cocos2d_impl;
    }


    CCScale9Sprite::CCScale9Sprite() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCScale9Sprite> CCScale9Sprite::create()
    {
        RefPtrWillBeRawPtr<CCScale9Sprite> ret = adoptRefWillBeNoop(new CCScale9Sprite());
        cocos2d::extension::CCScale9Sprite* impl = new cocos2d::extension::CCScale9Sprite();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCScale9Sprite::~CCScale9Sprite() {
    }
} // namespace blink
