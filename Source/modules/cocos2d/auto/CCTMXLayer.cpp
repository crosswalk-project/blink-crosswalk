// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTMXLayer.h"

namespace blink {

    void CCTMXLayer::addChild(ScriptValue& arg0_wrapper, int arg1, int arg2) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTMXLayer*)m_cocos2d_impl)->addChild( _arg0, (int)(arg1), (int)(arg2));
    }

    unsigned int CCTMXLayer::getTileGIDAt(CCPoint* arg0, PassRefPtr<Uint8Array> arg1) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        unsigned int ret_impl = ((cocos2d::CCTMXLayer*)m_cocos2d_impl)->tileGIDAt( *_arg0, (cocos2d::ccTMXTileFlags_*)(arg1.get()->data()));
        
        
        return ret_impl;
    }

    unsigned int CCTMXLayer::getTileGIDAt(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        unsigned int ret_impl = ((cocos2d::CCTMXLayer*)m_cocos2d_impl)->tileGIDAt( *_arg0);
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCTMXLayer::getPositionAt(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        cocos2d::CCPoint ret_impl = ((cocos2d::CCTMXLayer*)m_cocos2d_impl)->positionAt( *_arg0);
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCTMXLayer::setLayerOrientation(unsigned int arg0) {

        ((cocos2d::CCTMXLayer*)m_cocos2d_impl)->setLayerOrientation((unsigned int)(arg0));
    }

    void CCTMXLayer::releaseMap() {

        ((cocos2d::CCTMXLayer*)m_cocos2d_impl)->releaseMap();
    }

    void CCTMXLayer::setTiles(PassRefPtr<Uint8Array> arg0) {

        ((cocos2d::CCTMXLayer*)m_cocos2d_impl)->setTiles((unsigned int*)(arg0.get()->data()));
    }

    PassRefPtrWillBeRawPtr<CCSize> CCTMXLayer::getLayerSize() {

        const cocos2d::CCSize ret_impl = ((cocos2d::CCTMXLayer*)m_cocos2d_impl)->getLayerSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCTMXLayer::setMapTileSize(CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTMXLayer*)m_cocos2d_impl)->setMapTileSize( *_arg0);
    }

    unsigned int CCTMXLayer::getLayerOrientation() {

        unsigned int ret_impl = ((cocos2d::CCTMXLayer*)m_cocos2d_impl)->getLayerOrientation();
        
        
        return ret_impl;
    }

    void CCTMXLayer::setProperties(CCDictionary* arg0) {
        cocos2d::CCDictionary* _arg0 = (cocos2d::CCDictionary*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTMXLayer*)m_cocos2d_impl)->setProperties( _arg0);
    }

    void CCTMXLayer::setLayerName(String arg0) {

        ((cocos2d::CCTMXLayer*)m_cocos2d_impl)->setLayerName((char*)(arg0.utf8().data()));
    }

    void CCTMXLayer::removeTileAt(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTMXLayer*)m_cocos2d_impl)->removeTileAt( *_arg0);
    }

    bool CCTMXLayer::initWithTilesetInfo(CCTMXTilesetInfo* arg0, CCTMXLayerInfo* arg1, ScriptValue& arg2_wrapper) {
        cocos2d::CCTMXTilesetInfo* _arg0 = (cocos2d::CCTMXTilesetInfo*)(arg0->getCocos2dImpl());
        cocos2d::CCTMXLayerInfo* _arg1 = (cocos2d::CCTMXLayerInfo*)(arg1->getCocos2dImpl());
        SCRIPT_VALUE_WRAPPER(CCTMXMapInfo, arg2_wrapper, arg2);
        cocos2d::CCTMXMapInfo* _arg2 = (cocos2d::CCTMXMapInfo*)(arg2->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCTMXLayer*)m_cocos2d_impl)->initWithTilesetInfo( _arg0,  _arg1,  _arg2);
        
        
        return ret_impl;
    }

    void CCTMXLayer::setupTiles() {

        ((cocos2d::CCTMXLayer*)m_cocos2d_impl)->setupTiles();
    }

    PassRefPtrWillBeRawPtr<CCSize> CCTMXLayer::getMapTileSize() {

        const cocos2d::CCSize ret_impl = ((cocos2d::CCTMXLayer*)m_cocos2d_impl)->getMapTileSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    ScriptValue CCTMXLayer::getProperty(ScriptState* scriptState, String arg0) {

        cocos2d::CCString* ret_impl = ((cocos2d::CCTMXLayer*)m_cocos2d_impl)->propertyNamed((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCString)
        
    }

    void CCTMXLayer::setLayerSize(CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTMXLayer*)m_cocos2d_impl)->setLayerSize( *_arg0);
    }

    String CCTMXLayer::getLayerName() {

        const String ret_impl = ((cocos2d::CCTMXLayer*)m_cocos2d_impl)->getLayerName();
        
        
        return ret_impl;
    }

    void CCTMXLayer::setTileSet(CCTMXTilesetInfo* arg0) {
        cocos2d::CCTMXTilesetInfo* _arg0 = (cocos2d::CCTMXTilesetInfo*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTMXLayer*)m_cocos2d_impl)->setTileSet( _arg0);
    }

    void CCTMXLayer::removeChild(ScriptValue& arg0_wrapper, bool arg1) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTMXLayer*)m_cocos2d_impl)->removeChild( _arg0, (bool)(arg1));
    }

    ScriptValue CCTMXLayer::getTileSet(ScriptState* scriptState) {

        cocos2d::CCTMXTilesetInfo* ret_impl = ((cocos2d::CCTMXLayer*)m_cocos2d_impl)->getTileSet();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTMXTilesetInfo)
        
    }

    ScriptValue CCTMXLayer::getProperties(ScriptState* scriptState) {

        cocos2d::CCDictionary* ret_impl = ((cocos2d::CCTMXLayer*)m_cocos2d_impl)->getProperties();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCDictionary)
        
    }

    ScriptValue CCTMXLayer::getTileAt(ScriptState* scriptState, CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        cocos2d::CCSprite* ret_impl = ((cocos2d::CCTMXLayer*)m_cocos2d_impl)->tileAt( *_arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSprite)
        
    }

    ScriptValue CCTMXLayer::createInternal(ScriptState* scriptState, CCTMXTilesetInfo* arg0, CCTMXLayerInfo* arg1, ScriptValue& arg2_wrapper) {
        cocos2d::CCTMXTilesetInfo* _arg0 = (cocos2d::CCTMXTilesetInfo*)(arg0->getCocos2dImpl());
        cocos2d::CCTMXLayerInfo* _arg1 = (cocos2d::CCTMXLayerInfo*)(arg1->getCocos2dImpl());
        SCRIPT_VALUE_WRAPPER(CCTMXMapInfo, arg2_wrapper, arg2);
        cocos2d::CCTMXMapInfo* _arg2 = (cocos2d::CCTMXMapInfo*)(arg2->getCocos2dImpl());

        cocos2d::CCTMXLayer* ret_impl = cocos2d::CCTMXLayer::create( _arg0,  _arg1,  _arg2);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTMXLayer)
        
    }
    cocos2d::CCTMXLayer* CCTMXLayer::getCocos2dImpl() {
        return (cocos2d::CCTMXLayer*)m_cocos2d_impl;
    }


    CCTMXLayer::CCTMXLayer() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTMXLayer> CCTMXLayer::create()
    {
        RefPtrWillBeRawPtr<CCTMXLayer> ret = adoptRefWillBeNoop(new CCTMXLayer());
        cocos2d::CCTMXLayer* impl = new cocos2d::CCTMXLayer();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCTMXLayer::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCTMXLayer::~CCTMXLayer() {
    }
} // namespace blink
