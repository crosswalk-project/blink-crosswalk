// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTextureCache.h"

namespace blink {

    void CCTextureCache::dumpCachedTextureInfo() {

        ((cocos2d::CCTextureCache*)m_cocos2d_impl)->dumpCachedTextureInfo();
    }

    ScriptValue CCTextureCache::addUIImage(ScriptState* scriptState, CCImage* arg0, String arg1) {
        cocos2d::CCImage* _arg0 = (cocos2d::CCImage*)(arg0->getCocos2dImpl());

        cocos2d::CCTexture2D* ret_impl = ((cocos2d::CCTextureCache*)m_cocos2d_impl)->addUIImage( _arg0, (char*)(arg1.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTexture2D)
        
    }

    void CCTextureCache::removeTextureForKey(String arg0) {

        ((cocos2d::CCTextureCache*)m_cocos2d_impl)->removeTextureForKey((char*)(arg0.utf8().data()));
    }

    ScriptValue CCTextureCache::textureForKey(ScriptState* scriptState, String arg0) {

        cocos2d::CCTexture2D* ret_impl = ((cocos2d::CCTextureCache*)m_cocos2d_impl)->textureForKey((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTexture2D)
        
    }

    ScriptValue CCTextureCache::snapshotTextures(ScriptState* scriptState) {

        cocos2d::CCDictionary* ret_impl = ((cocos2d::CCTextureCache*)m_cocos2d_impl)->snapshotTextures();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCDictionary)
        
    }

    ScriptValue CCTextureCache::addImage(ScriptState* scriptState, String arg0) {

        cocos2d::CCTexture2D* ret_impl = ((cocos2d::CCTextureCache*)m_cocos2d_impl)->addImage((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTexture2D)
        
    }

    void CCTextureCache::removeAllTextures() {

        ((cocos2d::CCTextureCache*)m_cocos2d_impl)->removeAllTextures();
    }

    void CCTextureCache::removeUnusedTextures() {

        ((cocos2d::CCTextureCache*)m_cocos2d_impl)->removeUnusedTextures();
    }

    void CCTextureCache::removeTexture(CCTexture2D* arg0) {
        cocos2d::CCTexture2D* _arg0 = (cocos2d::CCTexture2D*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTextureCache*)m_cocos2d_impl)->removeTexture( _arg0);
    }

    void CCTextureCache::purgeSharedTextureCache() {

        cocos2d::CCTextureCache::purgeSharedTextureCache();
    }

    void CCTextureCache::reloadAllTextures() {

        cocos2d::CCTextureCache::reloadAllTextures();
    }

    ScriptValue CCTextureCache::getInstance(ScriptState* scriptState) {

        cocos2d::CCTextureCache* ret_impl = cocos2d::CCTextureCache::sharedTextureCache();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTextureCache)
        
    }
    cocos2d::CCTextureCache* CCTextureCache::getCocos2dImpl() {
        return (cocos2d::CCTextureCache*)m_cocos2d_impl;
    }


    CCTextureCache::CCTextureCache() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTextureCache> CCTextureCache::create()
    {
        RefPtrWillBeRawPtr<CCTextureCache> ret = adoptRefWillBeNoop(new CCTextureCache());
        cocos2d::CCTextureCache* impl = new cocos2d::CCTextureCache();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTextureCache::~CCTextureCache() {
    }
} // namespace blink
