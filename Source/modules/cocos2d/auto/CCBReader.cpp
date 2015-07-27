// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCBReader.h"

namespace blink {

    ScriptValue CCBReader::getAnimationManager(ScriptState* scriptState) {

        cocos2d::extension::CCBAnimationManager* ret_impl = ((cocos2d::extension::CCBReader*)m_cocos2d_impl)->getAnimationManager();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCBAnimationManager)
        
    }

    void CCBReader::setAnimationManager(CCBAnimationManager* arg0) {
        cocos2d::extension::CCBAnimationManager* _arg0 = (cocos2d::extension::CCBAnimationManager*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCBReader*)m_cocos2d_impl)->setAnimationManager( _arg0);
    }

    void CCBReader::addOwnerOutletName(String arg0_wrapper) {
        std::string arg0 = std::string(arg0_wrapper.utf8().data());
        ((cocos2d::extension::CCBReader*)m_cocos2d_impl)->addOwnerOutletName((std::string)(arg0));
    }

    ScriptValue CCBReader::getOwnerCallbackNames(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::extension::CCBReader*)m_cocos2d_impl)->getOwnerCallbackNames();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    void CCBReader::addDocumentCallbackControlEvents(unsigned int arg0) {

        ((cocos2d::extension::CCBReader*)m_cocos2d_impl)->addDocumentCallbackControlEvents((unsigned int)(arg0));
    }

    void CCBReader::setCCBRootPath(String arg0) {

        ((cocos2d::extension::CCBReader*)m_cocos2d_impl)->setCCBRootPath((char*)(arg0.utf8().data()));
    }

    void CCBReader::addOwnerOutletNode(CCNode* arg0) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCBReader*)m_cocos2d_impl)->addOwnerOutletNode( _arg0);
    }

    ScriptValue CCBReader::getOwnerCallbackNodes(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::extension::CCBReader*)m_cocos2d_impl)->getOwnerCallbackNodes();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    bool CCBReader::readSoundKeyframesForSeq(PassRefPtr<Uint8Array> arg0) {

        bool ret_impl = ((cocos2d::extension::CCBReader*)m_cocos2d_impl)->readSoundKeyframesForSeq((cocos2d::extension::CCBSequence*)(arg0.get()->data()));
        
        
        return ret_impl;
    }

    String CCBReader::getCCBRootPath() {

        const String ret_impl = String(((cocos2d::extension::CCBReader*)m_cocos2d_impl)->getCCBRootPath().c_str());
        
        
        return ret_impl;
    }

    ScriptValue CCBReader::getOwnerCallbackControlEvents(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::extension::CCBReader*)m_cocos2d_impl)->getOwnerCallbackControlEvents();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    ScriptValue CCBReader::getOwnerOutletNodes(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::extension::CCBReader*)m_cocos2d_impl)->getOwnerOutletNodes();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    String CCBReader::readUTF8() {

        String ret_impl = String(((cocos2d::extension::CCBReader*)m_cocos2d_impl)->readUTF8().c_str());
        
        
        return ret_impl;
    }

    void CCBReader::addOwnerCallbackControlEvents(unsigned int arg0) {

        ((cocos2d::extension::CCBReader*)m_cocos2d_impl)->addOwnerCallbackControlEvents((unsigned int)(arg0));
    }

    ScriptValue CCBReader::getOwnerOutletNames(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::extension::CCBReader*)m_cocos2d_impl)->getOwnerOutletNames();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    bool CCBReader::readCallbackKeyframesForSeq(PassRefPtr<Uint8Array> arg0) {

        bool ret_impl = ((cocos2d::extension::CCBReader*)m_cocos2d_impl)->readCallbackKeyframesForSeq((cocos2d::extension::CCBSequence*)(arg0.get()->data()));
        
        
        return ret_impl;
    }

    ScriptValue CCBReader::getAnimationManagersForNodes(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::extension::CCBReader*)m_cocos2d_impl)->getAnimationManagersForNodes();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    ScriptValue CCBReader::getNodesWithAnimationManagers(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::extension::CCBReader*)m_cocos2d_impl)->getNodesWithAnimationManagers();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    void CCBReader::setResolutionScale(float arg0) {

        cocos2d::extension::CCBReader::setResolutionScale((float)(arg0));
    }
    cocos2d::extension::CCBReader* CCBReader::getCocos2dImpl() {
        return (cocos2d::extension::CCBReader*)m_cocos2d_impl;
    }


    CCBReader::CCBReader() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCBReader> CCBReader::create()
    {
        RefPtrWillBeRawPtr<CCBReader> ret = adoptRefWillBeNoop(new CCBReader());
        cocos2d::extension::CCBReader* impl = new cocos2d::extension::CCBReader();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCBReader::~CCBReader() {
    }
} // namespace blink
