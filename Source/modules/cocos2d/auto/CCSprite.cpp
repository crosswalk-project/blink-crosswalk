// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCSprite.h"

namespace blink {

    void CCSprite::draw() {

        ((cocos2d::CCSprite*)m_cocos2d_impl)->draw();
    }

    void CCSprite::addChild(ScriptValue& arg0_wrapper, int arg1) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSprite*)m_cocos2d_impl)->addChild( _arg0, (int)(arg1));
    }

    void CCSprite::addChild(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSprite*)m_cocos2d_impl)->addChild( _arg0);
    }

    void CCSprite::addChild(ScriptValue& arg0_wrapper, int arg1, int arg2) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSprite*)m_cocos2d_impl)->addChild( _arg0, (int)(arg1), (int)(arg2));
    }

    void CCSprite::setTexture(CCTexture2D* arg0) {
        cocos2d::CCTexture2D* _arg0 = (cocos2d::CCTexture2D*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSprite*)m_cocos2d_impl)->setTexture( _arg0);
    }

    bool CCSprite::isFlippedX() {

        bool ret_impl = ((cocos2d::CCSprite*)m_cocos2d_impl)->isFlipX();
        
        
        return ret_impl;
    }

    ScriptValue CCSprite::getTexture(ScriptState* scriptState) {

        cocos2d::CCTexture2D* ret_impl = ((cocos2d::CCSprite*)m_cocos2d_impl)->getTexture();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTexture2D)
        
    }

    void CCSprite::setFlippedY(bool arg0) {

        ((cocos2d::CCSprite*)m_cocos2d_impl)->setFlipY((bool)(arg0));
    }

    void CCSprite::setFlippedX(bool arg0) {

        ((cocos2d::CCSprite*)m_cocos2d_impl)->setFlipX((bool)(arg0));
    }

    void CCSprite::setScaleY(float arg0) {

        ((cocos2d::CCSprite*)m_cocos2d_impl)->setScaleY((float)(arg0));
    }

    void CCSprite::setScale(float arg0) {

        ((cocos2d::CCSprite*)m_cocos2d_impl)->setScale((float)(arg0));
    }

    void CCSprite::setOpacity(unsigned char arg0) {

        ((cocos2d::CCSprite*)m_cocos2d_impl)->setOpacity((unsigned char)(arg0));
    }

    void CCSprite::setDisplayFrameWithAnimationName(String arg0, int arg1) {

        ((cocos2d::CCSprite*)m_cocos2d_impl)->setDisplayFrameWithAnimationName((char*)(arg0.utf8().data()), (int)(arg1));
    }

    void CCSprite::setRotationY(float arg0) {

        ((cocos2d::CCSprite*)m_cocos2d_impl)->setRotationY((float)(arg0));
    }

    void CCSprite::setOpacityModifyRGB(bool arg0) {

        ((cocos2d::CCSprite*)m_cocos2d_impl)->setOpacityModifyRGB((bool)(arg0));
    }

    ScriptValue CCSprite::getBatchNode(ScriptState* scriptState) {

        cocos2d::CCSpriteBatchNode* ret_impl = ((cocos2d::CCSprite*)m_cocos2d_impl)->getBatchNode();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSpriteBatchNode)
        
    }

    bool CCSprite::isTextureRectRotated() {

        bool ret_impl = ((cocos2d::CCSprite*)m_cocos2d_impl)->isTextureRectRotated();
        
        
        return ret_impl;
    }

    bool CCSprite::isOpacityModifyRGB() {

        bool ret_impl = ((cocos2d::CCSprite*)m_cocos2d_impl)->isOpacityModifyRGB();
        
        
        return ret_impl;
    }

    void CCSprite::setTextureRect(CCRect* arg0, bool arg1, CCSize* arg2) {
        cocos2d::CCRect* _arg0 = (cocos2d::CCRect*)(arg0->getCocos2dImpl());
        cocos2d::CCSize* _arg2 = (cocos2d::CCSize*)(arg2->getCocos2dImpl());

        ((cocos2d::CCSprite*)m_cocos2d_impl)->setTextureRect( *_arg0, (bool)(arg1),  *_arg2);
    }

    void CCSprite::setTextureRect(CCRect* arg0) {
        cocos2d::CCRect* _arg0 = (cocos2d::CCRect*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSprite*)m_cocos2d_impl)->setTextureRect( *_arg0);
    }

    bool CCSprite::init() {

        bool ret_impl = ((cocos2d::CCSprite*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    void CCSprite::setVertexZ(float arg0) {

        ((cocos2d::CCSprite*)m_cocos2d_impl)->setVertexZ((float)(arg0));
    }

    PassRefPtrWillBeRawPtr<CCRect> CCSprite::getTextureRect() {

        const cocos2d::CCRect ret_impl = ((cocos2d::CCSprite*)m_cocos2d_impl)->getTextureRect();
        
        RefPtr<CCRect> ret = adoptRefWillBeNoop(new CCRect());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCSprite::updateDisplayedOpacity(unsigned char arg0) {

        ((cocos2d::CCSprite*)m_cocos2d_impl)->updateDisplayedOpacity((unsigned char)(arg0));
    }

    bool CCSprite::initWithSpriteFrameName(String arg0) {

        bool ret_impl = ((cocos2d::CCSprite*)m_cocos2d_impl)->initWithSpriteFrameName((char*)(arg0.utf8().data()));
        
        
        return ret_impl;
    }

    bool CCSprite::isFrameDisplayed(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCSpriteFrame, arg0_wrapper, arg0);
        cocos2d::CCSpriteFrame* _arg0 = (cocos2d::CCSpriteFrame*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCSprite*)m_cocos2d_impl)->isFrameDisplayed( _arg0);
        
        
        return ret_impl;
    }

    unsigned int CCSprite::getAtlasIndex() {

        unsigned int ret_impl = ((cocos2d::CCSprite*)m_cocos2d_impl)->getAtlasIndex();
        
        
        return ret_impl;
    }

    void CCSprite::setRotation(float arg0) {

        ((cocos2d::CCSprite*)m_cocos2d_impl)->setRotation((float)(arg0));
    }

    void CCSprite::setDisplayFrame(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCSpriteFrame, arg0_wrapper, arg0);
        cocos2d::CCSpriteFrame* _arg0 = (cocos2d::CCSpriteFrame*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSprite*)m_cocos2d_impl)->setDisplayFrame( _arg0);
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCSprite::getOffsetPosition() {

        const cocos2d::CCPoint ret_impl = ((cocos2d::CCSprite*)m_cocos2d_impl)->getOffsetPosition();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCSprite::setBatchNode(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCSpriteBatchNode, arg0_wrapper, arg0);
        cocos2d::CCSpriteBatchNode* _arg0 = (cocos2d::CCSpriteBatchNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSprite*)m_cocos2d_impl)->setBatchNode( _arg0);
    }

    void CCSprite::setRotationX(float arg0) {

        ((cocos2d::CCSprite*)m_cocos2d_impl)->setRotationX((float)(arg0));
    }

    void CCSprite::setScaleX(float arg0) {

        ((cocos2d::CCSprite*)m_cocos2d_impl)->setScaleX((float)(arg0));
    }

    bool CCSprite::initWithTexture(CCTexture2D* arg0, CCRect* arg1) {
        cocos2d::CCTexture2D* _arg0 = (cocos2d::CCTexture2D*)(arg0->getCocos2dImpl());
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCSprite*)m_cocos2d_impl)->initWithTexture( _arg0,  *_arg1);
        
        
        return ret_impl;
    }

    bool CCSprite::initWithTexture(CCTexture2D* arg0) {
        cocos2d::CCTexture2D* _arg0 = (cocos2d::CCTexture2D*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCSprite*)m_cocos2d_impl)->initWithTexture( _arg0);
        
        
        return ret_impl;
    }

    bool CCSprite::initWithTexture(CCTexture2D* arg0, CCRect* arg1, bool arg2) {
        cocos2d::CCTexture2D* _arg0 = (cocos2d::CCTexture2D*)(arg0->getCocos2dImpl());
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCSprite*)m_cocos2d_impl)->initWithTexture( _arg0,  *_arg1, (bool)(arg2));
        
        
        return ret_impl;
    }

    void CCSprite::removeAllChildrenWithCleanup(bool arg0) {

        ((cocos2d::CCSprite*)m_cocos2d_impl)->removeAllChildrenWithCleanup((bool)(arg0));
    }

    void CCSprite::sortAllChildren() {

        ((cocos2d::CCSprite*)m_cocos2d_impl)->sortAllChildren();
    }

    void CCSprite::setAtlasIndex(unsigned int arg0) {

        ((cocos2d::CCSprite*)m_cocos2d_impl)->setAtlasIndex((unsigned int)(arg0));
    }

    void CCSprite::setVertexRect(CCRect* arg0) {
        cocos2d::CCRect* _arg0 = (cocos2d::CCRect*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSprite*)m_cocos2d_impl)->setVertexRect( *_arg0);
    }

    void CCSprite::setDirty(bool arg0) {

        ((cocos2d::CCSprite*)m_cocos2d_impl)->setDirty((bool)(arg0));
    }

    bool CCSprite::isDirty() {

        bool ret_impl = ((cocos2d::CCSprite*)m_cocos2d_impl)->isDirty();
        
        
        return ret_impl;
    }

    void CCSprite::reorderChild(ScriptValue& arg0_wrapper, int arg1) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSprite*)m_cocos2d_impl)->reorderChild( _arg0, (int)(arg1));
    }

    void CCSprite::ignoreAnchorPointForPosition(bool arg0) {

        ((cocos2d::CCSprite*)m_cocos2d_impl)->ignoreAnchorPointForPosition((bool)(arg0));
    }

    bool CCSprite::initWithFile(String arg0, CCRect* arg1) {
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCSprite*)m_cocos2d_impl)->initWithFile((char*)(arg0.utf8().data()),  *_arg1);
        
        
        return ret_impl;
    }

    bool CCSprite::initWithFile(String arg0) {

        bool ret_impl = ((cocos2d::CCSprite*)m_cocos2d_impl)->initWithFile((char*)(arg0.utf8().data()));
        
        
        return ret_impl;
    }

    void CCSprite::setColor(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSprite*)m_cocos2d_impl)->setColor( *_arg0);
    }

    bool CCSprite::initWithSpriteFrame(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCSpriteFrame, arg0_wrapper, arg0);
        cocos2d::CCSpriteFrame* _arg0 = (cocos2d::CCSpriteFrame*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCSprite*)m_cocos2d_impl)->initWithSpriteFrame( _arg0);
        
        
        return ret_impl;
    }

    void CCSprite::removeChild(ScriptValue& arg0_wrapper, bool arg1) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSprite*)m_cocos2d_impl)->removeChild( _arg0, (bool)(arg1));
    }

    void CCSprite::updateTransform() {

        ((cocos2d::CCSprite*)m_cocos2d_impl)->updateTransform();
    }

    bool CCSprite::isFlippedY() {

        bool ret_impl = ((cocos2d::CCSprite*)m_cocos2d_impl)->isFlipY();
        
        
        return ret_impl;
    }

    void CCSprite::updateDisplayedColor(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSprite*)m_cocos2d_impl)->updateDisplayedColor( *_arg0);
    }

    void CCSprite::setSkewX(float arg0) {

        ((cocos2d::CCSprite*)m_cocos2d_impl)->setSkewX((float)(arg0));
    }

    void CCSprite::setSkewY(float arg0) {

        ((cocos2d::CCSprite*)m_cocos2d_impl)->setSkewY((float)(arg0));
    }

    void CCSprite::setVisible(bool arg0) {

        ((cocos2d::CCSprite*)m_cocos2d_impl)->setVisible((bool)(arg0));
    }
    ScriptValue CCSprite::createInternal(ScriptState* scriptState, String arg0) {

        cocos2d::CCSprite* ret_impl = cocos2d::CCSprite::create((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSprite)
        
    }
    ScriptValue CCSprite::createInternal(ScriptState* scriptState) {

        cocos2d::CCSprite* ret_impl = cocos2d::CCSprite::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSprite)
        
    }
    ScriptValue CCSprite::createInternal(ScriptState* scriptState, String arg0, CCRect* arg1) {
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());

        cocos2d::CCSprite* ret_impl = cocos2d::CCSprite::create((char*)(arg0.utf8().data()),  *_arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSprite)
        
    }
    ScriptValue CCSprite::createWithTexture(ScriptState* scriptState, CCTexture2D* arg0, CCRect* arg1) {
        cocos2d::CCTexture2D* _arg0 = (cocos2d::CCTexture2D*)(arg0->getCocos2dImpl());
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());

        cocos2d::CCSprite* ret_impl = cocos2d::CCSprite::createWithTexture( _arg0,  *_arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSprite)
        
    }
    ScriptValue CCSprite::createWithTexture(ScriptState* scriptState, CCTexture2D* arg0) {
        cocos2d::CCTexture2D* _arg0 = (cocos2d::CCTexture2D*)(arg0->getCocos2dImpl());

        cocos2d::CCSprite* ret_impl = cocos2d::CCSprite::createWithTexture( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSprite)
        
    }

    ScriptValue CCSprite::createWithSpriteFrameName(ScriptState* scriptState, String arg0) {

        cocos2d::CCSprite* ret_impl = cocos2d::CCSprite::createWithSpriteFrameName((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSprite)
        
    }

    ScriptValue CCSprite::createWithSpriteFrame(ScriptState* scriptState, ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCSpriteFrame, arg0_wrapper, arg0);
        cocos2d::CCSpriteFrame* _arg0 = (cocos2d::CCSpriteFrame*)(arg0->getCocos2dImpl());

        cocos2d::CCSprite* ret_impl = cocos2d::CCSprite::createWithSpriteFrame( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSprite)
        
    }
    cocos2d::CCSprite* CCSprite::getCocos2dImpl() {
        return (cocos2d::CCSprite*)m_cocos2d_impl;
    }


    CCSprite::CCSprite() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCSprite> CCSprite::create()
    {
        RefPtrWillBeRawPtr<CCSprite> ret = adoptRefWillBeNoop(new CCSprite());
        cocos2d::CCSprite* impl = new cocos2d::CCSprite();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCSprite::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCSprite::~CCSprite() {
    }
} // namespace blink
