// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCBone.h"

namespace blink {

    PassRefPtrWillBeRawPtr<CCAffineTransform> CCBone::nodeToWorldTransform() {

        cocos2d::CCAffineTransform ret_impl = ((cocos2d::extension::CCBone*)m_cocos2d_impl)->nodeToWorldTransform();
        
        RefPtr<CCAffineTransform> ret = adoptRefWillBeNoop(new CCAffineTransform());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    bool CCBone::isTransformDirty() {

        bool ret_impl = ((cocos2d::extension::CCBone*)m_cocos2d_impl)->isTransformDirty();
        
        
        return ret_impl;
    }

    void CCBone::updateZOrder() {

        ((cocos2d::extension::CCBone*)m_cocos2d_impl)->updateZOrder();
    }

    void CCBone::setTransformDirty(bool arg0) {

        ((cocos2d::extension::CCBone*)m_cocos2d_impl)->setTransformDirty((bool)(arg0));
    }

    ScriptValue CCBone::getDisplayRenderNode(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = ((cocos2d::extension::CCBone*)m_cocos2d_impl)->getDisplayRenderNode();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    bool CCBone::isBlendDirty() {

        bool ret_impl = ((cocos2d::extension::CCBone*)m_cocos2d_impl)->isBlendDirty();
        
        
        return ret_impl;
    }

    void CCBone::addChildBone(CCBone* arg0) {
        cocos2d::extension::CCBone* _arg0 = (cocos2d::extension::CCBone*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCBone*)m_cocos2d_impl)->addChildBone( _arg0);
    }

    ScriptValue CCBone::getWorldInfo(ScriptState* scriptState) {

        cocos2d::extension::CCBaseData* ret_impl = ((cocos2d::extension::CCBone*)m_cocos2d_impl)->getWorldInfo();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCBaseData)
        
    }

    ScriptValue CCBone::getTween(ScriptState* scriptState) {

        cocos2d::extension::CCTween* ret_impl = ((cocos2d::extension::CCBone*)m_cocos2d_impl)->getTween();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTween)
        
    }

    ScriptValue CCBone::getParentBone(ScriptState* scriptState) {

        cocos2d::extension::CCBone* ret_impl = ((cocos2d::extension::CCBone*)m_cocos2d_impl)->getParentBone();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCBone)
        
    }

    void CCBone::updateColor() {

        ((cocos2d::extension::CCBone*)m_cocos2d_impl)->updateColor();
    }

    void CCBone::setChildArmature(CCArmature* arg0) {
        cocos2d::extension::CCArmature* _arg0 = (cocos2d::extension::CCArmature*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCBone*)m_cocos2d_impl)->setChildArmature( _arg0);
    }

    String CCBone::getName() {

        String ret_impl = String(((cocos2d::extension::CCBone*)m_cocos2d_impl)->getName().c_str());
        
        
        return ret_impl;
    }

    void CCBone::setOpacity(unsigned char arg0) {

        ((cocos2d::extension::CCBone*)m_cocos2d_impl)->setOpacity((unsigned char)(arg0));
    }

    int CCBone::getDisplayRenderNodeType() {

        int ret_impl = ((cocos2d::extension::CCBone*)m_cocos2d_impl)->getDisplayRenderNodeType();
        
        
        return ret_impl;
    }

    void CCBone::removeDisplay(int arg0) {

        ((cocos2d::extension::CCBone*)m_cocos2d_impl)->removeDisplay((int)(arg0));
    }

    void CCBone::updateDisplayedOpacity(unsigned char arg0) {

        ((cocos2d::extension::CCBone*)m_cocos2d_impl)->updateDisplayedOpacity((unsigned char)(arg0));
    }

    bool CCBone::init(String arg0) {

        bool ret_impl = ((cocos2d::extension::CCBone*)m_cocos2d_impl)->init((char*)(arg0.utf8().data()));
        
        
        return ret_impl;
    }

    bool CCBone::init() {

        bool ret_impl = ((cocos2d::extension::CCBone*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    void CCBone::setParentBone(CCBone* arg0) {
        cocos2d::extension::CCBone* _arg0 = (cocos2d::extension::CCBone*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCBone*)m_cocos2d_impl)->setParentBone( _arg0);
    }

    void CCBone::setZOrder(int arg0) {

        ((cocos2d::extension::CCBone*)m_cocos2d_impl)->setZOrder((int)(arg0));
    }

    bool CCBone::getIgnoreMovementBoneData() {

        bool ret_impl = ((cocos2d::extension::CCBone*)m_cocos2d_impl)->getIgnoreMovementBoneData();
        
        
        return ret_impl;
    }

    void CCBone::setIgnoreMovementBoneData(bool arg0) {

        ((cocos2d::extension::CCBone*)m_cocos2d_impl)->setIgnoreMovementBoneData((bool)(arg0));
    }

    void CCBone::setName(String arg0_wrapper) {
        std::string arg0 = std::string(arg0_wrapper.utf8().data());
        ((cocos2d::extension::CCBone*)m_cocos2d_impl)->setName((std::string)(arg0));
    }

    void CCBone::removeFromParent(bool arg0) {

        ((cocos2d::extension::CCBone*)m_cocos2d_impl)->removeFromParent((bool)(arg0));
    }

    ScriptValue CCBone::getChildArmature(ScriptState* scriptState) {

        cocos2d::extension::CCArmature* ret_impl = ((cocos2d::extension::CCBone*)m_cocos2d_impl)->getChildArmature();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArmature)
        
    }

    void CCBone::update(float arg0) {

        ((cocos2d::extension::CCBone*)m_cocos2d_impl)->update((float)(arg0));
    }

    void CCBone::setDisplayManager(CCDisplayManager* arg0) {
        cocos2d::extension::CCDisplayManager* _arg0 = (cocos2d::extension::CCDisplayManager*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCBone*)m_cocos2d_impl)->setDisplayManager( _arg0);
    }

    void CCBone::changeDisplayWithIndex(int arg0, bool arg1) {

        ((cocos2d::extension::CCBone*)m_cocos2d_impl)->changeDisplayWithIndex((int)(arg0), (bool)(arg1));
    }

    void CCBone::changeDisplayWithName(String arg0, bool arg1) {

        ((cocos2d::extension::CCBone*)m_cocos2d_impl)->changeDisplayWithName((char*)(arg0.utf8().data()), (bool)(arg1));
    }

    ScriptValue CCBone::getColliderBodyList(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::extension::CCBone*)m_cocos2d_impl)->getColliderBodyList();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    void CCBone::setArmature(CCArmature* arg0) {
        cocos2d::extension::CCArmature* _arg0 = (cocos2d::extension::CCArmature*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCBone*)m_cocos2d_impl)->setArmature( _arg0);
    }

    void CCBone::setBlendDirty(bool arg0) {

        ((cocos2d::extension::CCBone*)m_cocos2d_impl)->setBlendDirty((bool)(arg0));
    }

    void CCBone::addDisplay(CCNode* arg0, int arg1) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCBone*)m_cocos2d_impl)->addDisplay( _arg0, (int)(arg1));
    }

    void CCBone::addDisplay(PassRefPtr<Uint8Array> arg0, int arg1) {

        ((cocos2d::extension::CCBone*)m_cocos2d_impl)->addDisplay((cocos2d::extension::CCDisplayData*)(arg0.get()->data()), (int)(arg1));
    }

    void CCBone::setColor(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCBone*)m_cocos2d_impl)->setColor( *_arg0);
    }

    void CCBone::removeChildBone(CCBone* arg0, bool arg1) {
        cocos2d::extension::CCBone* _arg0 = (cocos2d::extension::CCBone*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCBone*)m_cocos2d_impl)->removeChildBone( _arg0, (bool)(arg1));
    }

    ScriptValue CCBone::getDisplayManager(ScriptState* scriptState) {

        cocos2d::extension::CCDisplayManager* ret_impl = ((cocos2d::extension::CCBone*)m_cocos2d_impl)->getDisplayManager();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCDisplayManager)
        
    }

    ScriptValue CCBone::getArmature(ScriptState* scriptState) {

        cocos2d::extension::CCArmature* ret_impl = ((cocos2d::extension::CCBone*)m_cocos2d_impl)->getArmature();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArmature)
        
    }

    PassRefPtrWillBeRawPtr<CCAffineTransform> CCBone::nodeToArmatureTransform() {

        cocos2d::CCAffineTransform ret_impl = ((cocos2d::extension::CCBone*)m_cocos2d_impl)->nodeToArmatureTransform();
        
        RefPtr<CCAffineTransform> ret = adoptRefWillBeNoop(new CCAffineTransform());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCBone::updateDisplayedColor(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCBone*)m_cocos2d_impl)->updateDisplayedColor( *_arg0);
    }
    ScriptValue CCBone::createInternal(ScriptState* scriptState, String arg0) {

        cocos2d::extension::CCBone* ret_impl = cocos2d::extension::CCBone::create((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCBone)
        
    }
    ScriptValue CCBone::createInternal(ScriptState* scriptState) {

        cocos2d::extension::CCBone* ret_impl = cocos2d::extension::CCBone::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCBone)
        
    }
    cocos2d::extension::CCBone* CCBone::getCocos2dImpl() {
        return (cocos2d::extension::CCBone*)m_cocos2d_impl;
    }


    CCBone::CCBone() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCBone> CCBone::create()
    {
        RefPtrWillBeRawPtr<CCBone> ret = adoptRefWillBeNoop(new CCBone());
        cocos2d::extension::CCBone* impl = new cocos2d::extension::CCBone();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCBone::~CCBone() {
    }
} // namespace blink
