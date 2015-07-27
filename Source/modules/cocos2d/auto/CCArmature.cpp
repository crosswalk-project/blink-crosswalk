// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCArmature.h"

namespace blink {

    ScriptValue CCArmature::getBone(ScriptState* scriptState, String arg0) {

        cocos2d::extension::CCBone* ret_impl = ((cocos2d::extension::CCArmature*)m_cocos2d_impl)->getBone((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCBone)
        
    }

    void CCArmature::changeBoneParent(CCBone* arg0, String arg1) {
        cocos2d::extension::CCBone* _arg0 = (cocos2d::extension::CCBone*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCArmature*)m_cocos2d_impl)->changeBoneParent( _arg0, (char*)(arg1.utf8().data()));
    }

    void CCArmature::setAnimation(CCArmatureAnimation* arg0) {
        cocos2d::extension::CCArmatureAnimation* _arg0 = (cocos2d::extension::CCArmatureAnimation*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCArmature*)m_cocos2d_impl)->setAnimation( _arg0);
    }

    ScriptValue CCArmature::getBoneAtPoint(ScriptState* scriptState, float arg0, float arg1) {

        cocos2d::extension::CCBone* ret_impl = ((cocos2d::extension::CCArmature*)m_cocos2d_impl)->getBoneAtPoint((float)(arg0), (float)(arg1));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCBone)
        
    }

    ScriptValue CCArmature::getBatchNode(ScriptState* scriptState) {

        cocos2d::extension::CCBatchNode* ret_impl = ((cocos2d::extension::CCArmature*)m_cocos2d_impl)->getBatchNode();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCBatchNode)
        
    }

    void CCArmature::setVersion(float arg0) {

        ((cocos2d::extension::CCArmature*)m_cocos2d_impl)->setVersion((float)(arg0));
    }

    void CCArmature::updateOffsetPoint() {

        ((cocos2d::extension::CCArmature*)m_cocos2d_impl)->updateOffsetPoint();
    }

    ScriptValue CCArmature::getParentBone(ScriptState* scriptState) {

        cocos2d::extension::CCBone* ret_impl = ((cocos2d::extension::CCArmature*)m_cocos2d_impl)->getParentBone();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCBone)
        
    }

    void CCArmature::setName(String arg0_wrapper) {
        std::string arg0 = std::string(arg0_wrapper.utf8().data());
        ((cocos2d::extension::CCArmature*)m_cocos2d_impl)->setName((std::string)(arg0));
    }

    void CCArmature::removeBone(CCBone* arg0, bool arg1) {
        cocos2d::extension::CCBone* _arg0 = (cocos2d::extension::CCBone*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCArmature*)m_cocos2d_impl)->removeBone( _arg0, (bool)(arg1));
    }

    bool CCArmature::getArmatureTransformDirty() {

        bool ret_impl = ((cocos2d::extension::CCArmature*)m_cocos2d_impl)->getArmatureTransformDirty();
        
        
        return ret_impl;
    }

    String CCArmature::getName() {

        String ret_impl = String(((cocos2d::extension::CCArmature*)m_cocos2d_impl)->getName().c_str());
        
        
        return ret_impl;
    }

    bool CCArmature::init(String arg0) {

        bool ret_impl = ((cocos2d::extension::CCArmature*)m_cocos2d_impl)->init((char*)(arg0.utf8().data()));
        
        
        return ret_impl;
    }

    bool CCArmature::init() {

        bool ret_impl = ((cocos2d::extension::CCArmature*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    bool CCArmature::init(String arg0, CCBone* arg1) {
        cocos2d::extension::CCBone* _arg1 = (cocos2d::extension::CCBone*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCArmature*)m_cocos2d_impl)->init((char*)(arg0.utf8().data()),  _arg1);
        
        
        return ret_impl;
    }

    void CCArmature::setParentBone(CCBone* arg0) {
        cocos2d::extension::CCBone* _arg0 = (cocos2d::extension::CCBone*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCArmature*)m_cocos2d_impl)->setParentBone( _arg0);
    }

    void CCArmature::drawContour() {

        ((cocos2d::extension::CCArmature*)m_cocos2d_impl)->drawContour();
    }

    void CCArmature::setBatchNode(CCBatchNode* arg0) {
        cocos2d::extension::CCBatchNode* _arg0 = (cocos2d::extension::CCBatchNode*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCArmature*)m_cocos2d_impl)->setBatchNode( _arg0);
    }

    void CCArmature::draw() {

        ((cocos2d::extension::CCArmature*)m_cocos2d_impl)->draw();
    }

    PassRefPtrWillBeRawPtr<CCAffineTransform> CCArmature::nodeToParentTransform() {

        cocos2d::CCAffineTransform ret_impl = ((cocos2d::extension::CCArmature*)m_cocos2d_impl)->nodeToParentTransform();
        
        RefPtr<CCAffineTransform> ret = adoptRefWillBeNoop(new CCAffineTransform());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCArmature::addBone(CCBone* arg0, String arg1) {
        cocos2d::extension::CCBone* _arg0 = (cocos2d::extension::CCBone*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCArmature*)m_cocos2d_impl)->addBone( _arg0, (char*)(arg1.utf8().data()));
    }

    void CCArmature::update(float arg0) {

        ((cocos2d::extension::CCArmature*)m_cocos2d_impl)->update((float)(arg0));
    }

    PassRefPtrWillBeRawPtr<CCRect> CCArmature::boundingBox() {

        cocos2d::CCRect ret_impl = ((cocos2d::extension::CCArmature*)m_cocos2d_impl)->boundingBox();
        
        RefPtr<CCRect> ret = adoptRefWillBeNoop(new CCRect());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    float CCArmature::getVersion() {

        float ret_impl = ((cocos2d::extension::CCArmature*)m_cocos2d_impl)->getVersion();
        
        
        return ret_impl;
    }

    ScriptValue CCArmature::getAnimation(ScriptState* scriptState) {

        cocos2d::extension::CCArmatureAnimation* ret_impl = ((cocos2d::extension::CCArmature*)m_cocos2d_impl)->getAnimation();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArmatureAnimation)
        
    }

    ScriptValue CCArmature::getBoneDic(ScriptState* scriptState) {

        cocos2d::CCDictionary* ret_impl = ((cocos2d::extension::CCArmature*)m_cocos2d_impl)->getBoneDic();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCDictionary)
        
    }
    ScriptValue CCArmature::createInternal(ScriptState* scriptState, String arg0) {

        cocos2d::extension::CCArmature* ret_impl = cocos2d::extension::CCArmature::create((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArmature)
        
    }
    ScriptValue CCArmature::createInternal(ScriptState* scriptState) {

        cocos2d::extension::CCArmature* ret_impl = cocos2d::extension::CCArmature::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArmature)
        
    }
    ScriptValue CCArmature::createInternal(ScriptState* scriptState, String arg0, CCBone* arg1) {
        cocos2d::extension::CCBone* _arg1 = (cocos2d::extension::CCBone*)(arg1->getCocos2dImpl());

        cocos2d::extension::CCArmature* ret_impl = cocos2d::extension::CCArmature::create((char*)(arg0.utf8().data()),  _arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArmature)
        
    }
    cocos2d::extension::CCArmature* CCArmature::getCocos2dImpl() {
        return (cocos2d::extension::CCArmature*)m_cocos2d_impl;
    }


    CCArmature::CCArmature() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCArmature> CCArmature::create()
    {
        RefPtrWillBeRawPtr<CCArmature> ret = adoptRefWillBeNoop(new CCArmature());
        cocos2d::extension::CCArmature* impl = new cocos2d::extension::CCArmature();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCArmature::~CCArmature() {
    }
} // namespace blink
