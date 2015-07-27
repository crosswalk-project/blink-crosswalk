// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCSpriteBatchNode.h"

namespace blink {

    void CCSpriteBatchNode::appendChild(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCSprite, arg0_wrapper, arg0);
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSpriteBatchNode*)m_cocos2d_impl)->appendChild( _arg0);
    }

    void CCSpriteBatchNode::reorderBatch(bool arg0) {

        ((cocos2d::CCSpriteBatchNode*)m_cocos2d_impl)->reorderBatch((bool)(arg0));
    }

    ScriptValue CCSpriteBatchNode::getTexture(ScriptState* scriptState) {

        cocos2d::CCTexture2D* ret_impl = ((cocos2d::CCSpriteBatchNode*)m_cocos2d_impl)->getTexture();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTexture2D)
        
    }

    void CCSpriteBatchNode::visit() {

        ((cocos2d::CCSpriteBatchNode*)m_cocos2d_impl)->visit();
    }

    void CCSpriteBatchNode::removeAllChildren(bool arg0) {

        ((cocos2d::CCSpriteBatchNode*)m_cocos2d_impl)->removeAllChildrenWithCleanup((bool)(arg0));
    }

    void CCSpriteBatchNode::setTexture(CCTexture2D* arg0) {
        cocos2d::CCTexture2D* _arg0 = (cocos2d::CCTexture2D*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSpriteBatchNode*)m_cocos2d_impl)->setTexture( _arg0);
    }

    void CCSpriteBatchNode::addChild(ScriptValue& arg0_wrapper, int arg1) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSpriteBatchNode*)m_cocos2d_impl)->addChild( _arg0, (int)(arg1));
    }

    void CCSpriteBatchNode::addChild(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSpriteBatchNode*)m_cocos2d_impl)->addChild( _arg0);
    }

    void CCSpriteBatchNode::addChild(ScriptValue& arg0_wrapper, int arg1, int arg2) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSpriteBatchNode*)m_cocos2d_impl)->addChild( _arg0, (int)(arg1), (int)(arg2));
    }

    void CCSpriteBatchNode::removeChildAtIndex(unsigned int arg0, bool arg1) {

        ((cocos2d::CCSpriteBatchNode*)m_cocos2d_impl)->removeChildAtIndex((unsigned int)(arg0), (bool)(arg1));
    }

    void CCSpriteBatchNode::removeSpriteFromAtlas(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCSprite, arg0_wrapper, arg0);
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSpriteBatchNode*)m_cocos2d_impl)->removeSpriteFromAtlas( _arg0);
    }

    unsigned int CCSpriteBatchNode::atlasIndexForChild(ScriptValue& arg0_wrapper, int arg1) {
        SCRIPT_VALUE_WRAPPER(CCSprite, arg0_wrapper, arg0);
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());

        unsigned int ret_impl = ((cocos2d::CCSpriteBatchNode*)m_cocos2d_impl)->atlasIndexForChild( _arg0, (int)(arg1));
        
        
        return ret_impl;
    }

    void CCSpriteBatchNode::increaseAtlasCapacity() {

        ((cocos2d::CCSpriteBatchNode*)m_cocos2d_impl)->increaseAtlasCapacity();
    }

    bool CCSpriteBatchNode::init() {

        bool ret_impl = ((cocos2d::CCSpriteBatchNode*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    void CCSpriteBatchNode::insertChild(ScriptValue& arg0_wrapper, unsigned int arg1) {
        SCRIPT_VALUE_WRAPPER(CCSprite, arg0_wrapper, arg0);
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSpriteBatchNode*)m_cocos2d_impl)->insertChild( _arg0, (unsigned int)(arg1));
    }

    unsigned int CCSpriteBatchNode::lowestAtlasIndexInChild(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCSprite, arg0_wrapper, arg0);
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());

        unsigned int ret_impl = ((cocos2d::CCSpriteBatchNode*)m_cocos2d_impl)->lowestAtlasIndexInChild( _arg0);
        
        
        return ret_impl;
    }

    void CCSpriteBatchNode::draw() {

        ((cocos2d::CCSpriteBatchNode*)m_cocos2d_impl)->draw();
    }

    bool CCSpriteBatchNode::initWithTexture(CCTexture2D* arg0, unsigned int arg1) {
        cocos2d::CCTexture2D* _arg0 = (cocos2d::CCTexture2D*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCSpriteBatchNode*)m_cocos2d_impl)->initWithTexture( _arg0, (unsigned int)(arg1));
        
        
        return ret_impl;
    }

    void CCSpriteBatchNode::sortAllChildren() {

        ((cocos2d::CCSpriteBatchNode*)m_cocos2d_impl)->sortAllChildren();
    }

    void CCSpriteBatchNode::reorderChild(ScriptValue& arg0_wrapper, int arg1) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSpriteBatchNode*)m_cocos2d_impl)->reorderChild( _arg0, (int)(arg1));
    }

    bool CCSpriteBatchNode::initWithFile(String arg0, unsigned int arg1) {

        bool ret_impl = ((cocos2d::CCSpriteBatchNode*)m_cocos2d_impl)->initWithFile((char*)(arg0.utf8().data()), (unsigned int)(arg1));
        
        
        return ret_impl;
    }

    unsigned int CCSpriteBatchNode::rebuildIndexInOrder(ScriptValue& arg0_wrapper, unsigned int arg1) {
        SCRIPT_VALUE_WRAPPER(CCSprite, arg0_wrapper, arg0);
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());

        unsigned int ret_impl = ((cocos2d::CCSpriteBatchNode*)m_cocos2d_impl)->rebuildIndexInOrder( _arg0, (unsigned int)(arg1));
        
        
        return ret_impl;
    }

    ScriptValue CCSpriteBatchNode::getDescendants(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::CCSpriteBatchNode*)m_cocos2d_impl)->getDescendants();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    void CCSpriteBatchNode::removeChild(ScriptValue& arg0_wrapper, bool arg1) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSpriteBatchNode*)m_cocos2d_impl)->removeChild( _arg0, (bool)(arg1));
    }

    unsigned int CCSpriteBatchNode::highestAtlasIndexInChild(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCSprite, arg0_wrapper, arg0);
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());

        unsigned int ret_impl = ((cocos2d::CCSpriteBatchNode*)m_cocos2d_impl)->highestAtlasIndexInChild( _arg0);
        
        
        return ret_impl;
    }
    ScriptValue CCSpriteBatchNode::createInternal(ScriptState* scriptState, String arg0) {

        cocos2d::CCSpriteBatchNode* ret_impl = cocos2d::CCSpriteBatchNode::create((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSpriteBatchNode)
        
    }
    ScriptValue CCSpriteBatchNode::createInternal(ScriptState* scriptState, String arg0, unsigned int arg1) {

        cocos2d::CCSpriteBatchNode* ret_impl = cocos2d::CCSpriteBatchNode::create((char*)(arg0.utf8().data()), (unsigned int)(arg1));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSpriteBatchNode)
        
    }
    ScriptValue CCSpriteBatchNode::createWithTexture(ScriptState* scriptState, CCTexture2D* arg0) {
        cocos2d::CCTexture2D* _arg0 = (cocos2d::CCTexture2D*)(arg0->getCocos2dImpl());

        cocos2d::CCSpriteBatchNode* ret_impl = cocos2d::CCSpriteBatchNode::createWithTexture( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSpriteBatchNode)
        
    }
    ScriptValue CCSpriteBatchNode::createWithTexture(ScriptState* scriptState, CCTexture2D* arg0, unsigned int arg1) {
        cocos2d::CCTexture2D* _arg0 = (cocos2d::CCTexture2D*)(arg0->getCocos2dImpl());

        cocos2d::CCSpriteBatchNode* ret_impl = cocos2d::CCSpriteBatchNode::createWithTexture( _arg0, (unsigned int)(arg1));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSpriteBatchNode)
        
    }
    cocos2d::CCSpriteBatchNode* CCSpriteBatchNode::getCocos2dImpl() {
        return (cocos2d::CCSpriteBatchNode*)m_cocos2d_impl;
    }


    CCSpriteBatchNode::CCSpriteBatchNode() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCSpriteBatchNode> CCSpriteBatchNode::create()
    {
        RefPtrWillBeRawPtr<CCSpriteBatchNode> ret = adoptRefWillBeNoop(new CCSpriteBatchNode());
        cocos2d::CCSpriteBatchNode* impl = new cocos2d::CCSpriteBatchNode();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCSpriteBatchNode::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCSpriteBatchNode::~CCSpriteBatchNode() {
    }
} // namespace blink
