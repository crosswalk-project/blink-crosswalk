// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTMXTiledMap.h"

namespace blink {

    void CCTMXTiledMap::setObjectGroups(CCArray* arg0) {
        cocos2d::CCArray* _arg0 = (cocos2d::CCArray*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTMXTiledMap*)m_cocos2d_impl)->setObjectGroups( _arg0);
    }

    void CCTMXTiledMap::setTileSize(CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTMXTiledMap*)m_cocos2d_impl)->setTileSize( *_arg0);
    }

    void CCTMXTiledMap::setMapSize(CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTMXTiledMap*)m_cocos2d_impl)->setMapSize( *_arg0);
    }

    PassRefPtrWillBeRawPtr<CCSize> CCTMXTiledMap::getTileSize() {

        const cocos2d::CCSize ret_impl = ((cocos2d::CCTMXTiledMap*)m_cocos2d_impl)->getTileSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    ScriptValue CCTMXTiledMap::getPropertiesForGID(ScriptState* scriptState, int arg0) {

        cocos2d::CCDictionary* ret_impl = ((cocos2d::CCTMXTiledMap*)m_cocos2d_impl)->propertiesForGID((int)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCDictionary)
        
    }

    ScriptValue CCTMXTiledMap::getObjectGroups(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::CCTMXTiledMap*)m_cocos2d_impl)->getObjectGroups();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    bool CCTMXTiledMap::initWithXML(String arg0, String arg1) {

        bool ret_impl = ((cocos2d::CCTMXTiledMap*)m_cocos2d_impl)->initWithXML((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()));
        
        
        return ret_impl;
    }

    bool CCTMXTiledMap::initWithTMXFile(String arg0) {

        bool ret_impl = ((cocos2d::CCTMXTiledMap*)m_cocos2d_impl)->initWithTMXFile((char*)(arg0.utf8().data()));
        
        
        return ret_impl;
    }

    ScriptValue CCTMXTiledMap::getObjectGroup(ScriptState* scriptState, String arg0) {

        cocos2d::CCTMXObjectGroup* ret_impl = ((cocos2d::CCTMXTiledMap*)m_cocos2d_impl)->objectGroupNamed((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTMXObjectGroup)
        
    }

    PassRefPtrWillBeRawPtr<CCSize> CCTMXTiledMap::getMapSize() {

        const cocos2d::CCSize ret_impl = ((cocos2d::CCTMXTiledMap*)m_cocos2d_impl)->getMapSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    ScriptValue CCTMXTiledMap::getProperties(ScriptState* scriptState) {

        cocos2d::CCDictionary* ret_impl = ((cocos2d::CCTMXTiledMap*)m_cocos2d_impl)->getProperties();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCDictionary)
        
    }

    void CCTMXTiledMap::setMapOrientation(int arg0) {

        ((cocos2d::CCTMXTiledMap*)m_cocos2d_impl)->setMapOrientation((int)(arg0));
    }

    void CCTMXTiledMap::setProperties(CCDictionary* arg0) {
        cocos2d::CCDictionary* _arg0 = (cocos2d::CCDictionary*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTMXTiledMap*)m_cocos2d_impl)->setProperties( _arg0);
    }

    ScriptValue CCTMXTiledMap::getLayer(ScriptState* scriptState, String arg0) {

        cocos2d::CCTMXLayer* ret_impl = ((cocos2d::CCTMXTiledMap*)m_cocos2d_impl)->layerNamed((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTMXLayer)
        
    }

    int CCTMXTiledMap::getMapOrientation() {

        int ret_impl = ((cocos2d::CCTMXTiledMap*)m_cocos2d_impl)->getMapOrientation();
        
        
        return ret_impl;
    }

    ScriptValue CCTMXTiledMap::getProperty(ScriptState* scriptState, String arg0) {

        cocos2d::CCString* ret_impl = ((cocos2d::CCTMXTiledMap*)m_cocos2d_impl)->propertyNamed((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCString)
        
    }

    ScriptValue CCTMXTiledMap::createInternal(ScriptState* scriptState, String arg0) {

        cocos2d::CCTMXTiledMap* ret_impl = cocos2d::CCTMXTiledMap::create((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTMXTiledMap)
        
    }

    ScriptValue CCTMXTiledMap::createWithXML(ScriptState* scriptState, String arg0, String arg1) {

        cocos2d::CCTMXTiledMap* ret_impl = cocos2d::CCTMXTiledMap::createWithXML((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTMXTiledMap)
        
    }
    cocos2d::CCTMXTiledMap* CCTMXTiledMap::getCocos2dImpl() {
        return (cocos2d::CCTMXTiledMap*)m_cocos2d_impl;
    }


    CCTMXTiledMap::CCTMXTiledMap() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTMXTiledMap> CCTMXTiledMap::create()
    {
        RefPtrWillBeRawPtr<CCTMXTiledMap> ret = adoptRefWillBeNoop(new CCTMXTiledMap());
        cocos2d::CCTMXTiledMap* impl = new cocos2d::CCTMXTiledMap();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCTMXTiledMap::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCTMXTiledMap::~CCTMXTiledMap() {
    }
} // namespace blink
