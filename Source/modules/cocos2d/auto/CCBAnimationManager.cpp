// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCBAnimationManager.h"

namespace blink {

    void CCBAnimationManager::moveAnimationsFromNode(CCNode* arg0, CCNode* arg1) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());
        cocos2d::CCNode* _arg1 = (cocos2d::CCNode*)(arg1->getCocos2dImpl());

        ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->moveAnimationsFromNode( _arg0,  _arg1);
    }

    void CCBAnimationManager::setAutoPlaySequenceId(int arg0) {

        ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->setAutoPlaySequenceId((int)(arg0));
    }

    ScriptValue CCBAnimationManager::getDocumentCallbackNames(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->getDocumentCallbackNames();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    ScriptValue CCBAnimationManager::actionForSoundChannel(ScriptState* scriptState, PassRefPtr<Uint8Array> arg0) {

        cocos2d::CCObject* ret_impl = ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->actionForSoundChannel((cocos2d::extension::CCBSequenceProperty*)(arg0.get()->data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCObject)
        
    }

    void CCBAnimationManager::setBaseValue(CCObject* arg0, CCNode* arg1, String arg2) {
        cocos2d::CCObject* _arg0 = (cocos2d::CCObject*)(arg0->getCocos2dImpl());
        cocos2d::CCNode* _arg1 = (cocos2d::CCNode*)(arg1->getCocos2dImpl());

        ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->setBaseValue( _arg0,  _arg1, (char*)(arg2.utf8().data()));
    }

    ScriptValue CCBAnimationManager::getDocumentOutletNodes(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->getDocumentOutletNodes();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    void CCBAnimationManager::addNode(CCNode* arg0, CCDictionary* arg1) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());
        cocos2d::CCDictionary* _arg1 = (cocos2d::CCDictionary*)(arg1->getCocos2dImpl());

        ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->addNode( _arg0,  _arg1);
    }

    String CCBAnimationManager::getLastCompletedSequenceName() {

        String ret_impl = String(((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->getLastCompletedSequenceName().c_str());
        
        
        return ret_impl;
    }

    void CCBAnimationManager::setRootNode(CCNode* arg0) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->setRootNode( _arg0);
    }

    void CCBAnimationManager::runAnimationsForSequenceNamedTweenDuration(String arg0, float arg1) {

        ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->runAnimationsForSequenceNamedTweenDuration((char*)(arg0.utf8().data()), (float)(arg1));
    }

    void CCBAnimationManager::addDocumentOutletName(String arg0_wrapper) {
        std::string arg0 = std::string(arg0_wrapper.utf8().data());
        ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->addDocumentOutletName((std::string)(arg0));
    }

    ScriptValue CCBAnimationManager::getSequences(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->getSequences();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    PassRefPtrWillBeRawPtr<CCSize> CCBAnimationManager::getRootContainerSize() {

        const cocos2d::CCSize ret_impl = ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->getRootContainerSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCBAnimationManager::setDocumentControllerName(String arg0_wrapper) {
        std::string arg0 = std::string(arg0_wrapper.utf8().data());
        ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->setDocumentControllerName((std::string)(arg0));
    }

    PassRefPtrWillBeRawPtr<CCSize> CCBAnimationManager::getContainerSize(CCNode* arg0) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        const cocos2d::CCSize ret_impl = ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->getContainerSize( _arg0);
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    ScriptValue CCBAnimationManager::actionForCallbackChannel(ScriptState* scriptState, PassRefPtr<Uint8Array> arg0) {

        cocos2d::CCObject* ret_impl = ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->actionForCallbackChannel((cocos2d::extension::CCBSequenceProperty*)(arg0.get()->data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCObject)
        
    }

    ScriptValue CCBAnimationManager::getDocumentOutletNames(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->getDocumentOutletNames();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    void CCBAnimationManager::addDocumentCallbackControlEvents(unsigned int arg0) {

        ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->addDocumentCallbackControlEvents((unsigned int)(arg0));
    }

    bool CCBAnimationManager::init() {

        bool ret_impl = ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    ScriptValue CCBAnimationManager::getKeyframeCallbacks(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->getKeyframeCallbacks();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    ScriptValue CCBAnimationManager::getDocumentCallbackControlEvents(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->getDocumentCallbackControlEvents();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    void CCBAnimationManager::setRootContainerSize(CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->setRootContainerSize( *_arg0);
    }

    void CCBAnimationManager::runAnimationsForSequenceIdTweenDuration(int arg0, float arg1) {

        ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->runAnimationsForSequenceIdTweenDuration((int)(arg0), (float)(arg1));
    }

    String CCBAnimationManager::getRunningSequenceName() {

        const String ret_impl = ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->getRunningSequenceName();
        
        
        return ret_impl;
    }

    int CCBAnimationManager::getAutoPlaySequenceId() {

        int ret_impl = ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->getAutoPlaySequenceId();
        
        
        return ret_impl;
    }

    void CCBAnimationManager::addDocumentCallbackName(String arg0_wrapper) {
        std::string arg0 = std::string(arg0_wrapper.utf8().data());
        ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->addDocumentCallbackName((std::string)(arg0));
    }

    ScriptValue CCBAnimationManager::getRootNode(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->getRootNode();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    void CCBAnimationManager::addDocumentOutletNode(CCNode* arg0) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->addDocumentOutletNode( _arg0);
    }

    void CCBAnimationManager::addDocumentCallbackNode(CCNode* arg0) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->addDocumentCallbackNode( _arg0);
    }

    void CCBAnimationManager::runAnimationsForSequenceNamed(String arg0) {

        ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->runAnimationsForSequenceNamed((char*)(arg0.utf8().data()));
    }

    void CCBAnimationManager::setCallFunc(CCCallFunc* arg0, String arg1_wrapper) {
        cocos2d::CCCallFunc* _arg0 = (cocos2d::CCCallFunc*)(arg0->getCocos2dImpl());
        std::string arg1 = std::string(arg1_wrapper.utf8().data());
        ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->setCallFunc( _arg0, (std::string)(arg1));
    }

    ScriptValue CCBAnimationManager::getDocumentCallbackNodes(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->getDocumentCallbackNodes();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    void CCBAnimationManager::setSequences(CCArray* arg0) {
        cocos2d::CCArray* _arg0 = (cocos2d::CCArray*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->setSequences( _arg0);
    }

    void CCBAnimationManager::debug() {

        ((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->debug();
    }

    String CCBAnimationManager::getDocumentControllerName() {

        String ret_impl = String(((cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl)->getDocumentControllerName().c_str());
        
        
        return ret_impl;
    }
    cocos2d::extension::CCBAnimationManager* CCBAnimationManager::getCocos2dImpl() {
        return (cocos2d::extension::CCBAnimationManager*)m_cocos2d_impl;
    }


    CCBAnimationManager::CCBAnimationManager() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCBAnimationManager> CCBAnimationManager::create()
    {
        RefPtrWillBeRawPtr<CCBAnimationManager> ret = adoptRefWillBeNoop(new CCBAnimationManager());
        cocos2d::extension::CCBAnimationManager* impl = new cocos2d::extension::CCBAnimationManager();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCBAnimationManager::~CCBAnimationManager() {
    }
} // namespace blink
