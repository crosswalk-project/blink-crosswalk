// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTMXMapInfo.h"

namespace blink {

    ScriptValue CCTMXMapInfo::getTileProperties(ScriptState* scriptState) {

        cocos2d::CCDictionary* ret_impl = ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->getTileProperties();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCDictionary)
        
    }

    void CCTMXMapInfo::setObjectGroups(CCArray* arg0) {
        cocos2d::CCArray* _arg0 = (cocos2d::CCArray*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->setObjectGroups( _arg0);
    }

    void CCTMXMapInfo::setTileSize(CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->setTileSize( *_arg0);
    }

    bool CCTMXMapInfo::initWithTMXFile(String arg0) {

        bool ret_impl = ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->initWithTMXFile((char*)(arg0.utf8().data()));
        
        
        return ret_impl;
    }

    void CCTMXMapInfo::setTMXFileName(String arg0) {

        ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->setTMXFileName((char*)(arg0.utf8().data()));
    }

    void CCTMXMapInfo::setLayers(CCArray* arg0) {
        cocos2d::CCArray* _arg0 = (cocos2d::CCArray*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->setLayers( _arg0);
    }

    void CCTMXMapInfo::setStoringCharacters(bool arg0) {

        ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->setStoringCharacters((bool)(arg0));
    }

    bool CCTMXMapInfo::getStoringCharacters() {

        bool ret_impl = ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->getStoringCharacters();
        
        
        return ret_impl;
    }

    int CCTMXMapInfo::getParentElement() {

        int ret_impl = ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->getParentElement();
        
        
        return ret_impl;
    }

    int CCTMXMapInfo::getLayerAttribs() {

        int ret_impl = ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->getLayerAttribs();
        
        
        return ret_impl;
    }

    ScriptValue CCTMXMapInfo::getLayers(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->getLayers();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    ScriptValue CCTMXMapInfo::getTilesets(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->getTilesets();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    unsigned int CCTMXMapInfo::getParentGID() {

        unsigned int ret_impl = ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->getParentGID();
        
        
        return ret_impl;
    }

    void CCTMXMapInfo::setParentElement(int arg0) {

        ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->setParentElement((int)(arg0));
    }

    void CCTMXMapInfo::setProperties(CCDictionary* arg0) {
        cocos2d::CCDictionary* _arg0 = (cocos2d::CCDictionary*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->setProperties( _arg0);
    }

    void CCTMXMapInfo::setParentGID(unsigned int arg0) {

        ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->setParentGID((unsigned int)(arg0));
    }

    bool CCTMXMapInfo::parseXMLString(String arg0) {

        bool ret_impl = ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->parseXMLString((char*)(arg0.utf8().data()));
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCSize> CCTMXMapInfo::getTileSize() {

        const cocos2d::CCSize ret_impl = ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->getTileSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    ScriptValue CCTMXMapInfo::getObjectGroups(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->getObjectGroups();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    void CCTMXMapInfo::setLayerAttribs(int arg0) {

        ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->setLayerAttribs((int)(arg0));
    }

    String CCTMXMapInfo::getTMXFileName() {

        const String ret_impl = ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->getTMXFileName();
        
        
        return ret_impl;
    }

    void CCTMXMapInfo::setCurrentString(String arg0) {

        ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->setCurrentString((char*)(arg0.utf8().data()));
    }

    bool CCTMXMapInfo::initWithXML(String arg0, String arg1) {

        bool ret_impl = ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->initWithXML((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()));
        
        
        return ret_impl;
    }

    void CCTMXMapInfo::setTileProperties(CCDictionary* arg0) {
        cocos2d::CCDictionary* _arg0 = (cocos2d::CCDictionary*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->setTileProperties( _arg0);
    }

    void CCTMXMapInfo::setMapSize(CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->setMapSize( *_arg0);
    }

    bool CCTMXMapInfo::parseXMLFile(String arg0) {

        bool ret_impl = ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->parseXMLFile((char*)(arg0.utf8().data()));
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCSize> CCTMXMapInfo::getMapSize() {

        const cocos2d::CCSize ret_impl = ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->getMapSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCTMXMapInfo::setTilesets(CCArray* arg0) {
        cocos2d::CCArray* _arg0 = (cocos2d::CCArray*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->setTilesets( _arg0);
    }

    ScriptValue CCTMXMapInfo::getProperties(ScriptState* scriptState) {

        cocos2d::CCDictionary* ret_impl = ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->getProperties();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCDictionary)
        
    }

    String CCTMXMapInfo::getCurrentString() {

        const String ret_impl = ((cocos2d::CCTMXMapInfo*)m_cocos2d_impl)->getCurrentString();
        
        
        return ret_impl;
    }

    ScriptValue CCTMXMapInfo::formatWithTMXFile(ScriptState* scriptState, String arg0) {

        cocos2d::CCTMXMapInfo* ret_impl = cocos2d::CCTMXMapInfo::formatWithTMXFile((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTMXMapInfo)
        
    }

    ScriptValue CCTMXMapInfo::formatWithXML(ScriptState* scriptState, String arg0, String arg1) {

        cocos2d::CCTMXMapInfo* ret_impl = cocos2d::CCTMXMapInfo::formatWithXML((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTMXMapInfo)
        
    }
    cocos2d::CCTMXMapInfo* CCTMXMapInfo::getCocos2dImpl() {
        return (cocos2d::CCTMXMapInfo*)m_cocos2d_impl;
    }


    CCTMXMapInfo::CCTMXMapInfo() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTMXMapInfo> CCTMXMapInfo::create()
    {
        RefPtrWillBeRawPtr<CCTMXMapInfo> ret = adoptRefWillBeNoop(new CCTMXMapInfo());
        cocos2d::CCTMXMapInfo* impl = new cocos2d::CCTMXMapInfo();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCTMXMapInfo::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCTMXMapInfo::~CCTMXMapInfo() {
    }
} // namespace blink
