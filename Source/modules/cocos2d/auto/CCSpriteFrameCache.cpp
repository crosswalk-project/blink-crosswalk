// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCSpriteFrameCache.h"

namespace blink {

    void CCSpriteFrameCache::addSpriteFrames(String arg0, String arg1) {

        ((cocos2d::CCSpriteFrameCache*)m_cocos2d_impl)->addSpriteFramesWithFile((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()));
    }

    void CCSpriteFrameCache::addSpriteFrames(String arg0) {

        ((cocos2d::CCSpriteFrameCache*)m_cocos2d_impl)->addSpriteFramesWithFile((char*)(arg0.utf8().data()));
    }

    void CCSpriteFrameCache::addSpriteFrames(String arg0, CCTexture2D* arg1) {
        cocos2d::CCTexture2D* _arg1 = (cocos2d::CCTexture2D*)(arg1->getCocos2dImpl());

        ((cocos2d::CCSpriteFrameCache*)m_cocos2d_impl)->addSpriteFramesWithFile((char*)(arg0.utf8().data()),  _arg1);
    }

    void CCSpriteFrameCache::addSpriteFrame(ScriptValue& arg0_wrapper, String arg1) {
        SCRIPT_VALUE_WRAPPER(CCSpriteFrame, arg0_wrapper, arg0);
        cocos2d::CCSpriteFrame* _arg0 = (cocos2d::CCSpriteFrame*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSpriteFrameCache*)m_cocos2d_impl)->addSpriteFrame( _arg0, (char*)(arg1.utf8().data()));
    }

    void CCSpriteFrameCache::removeUnusedSpriteFrames() {

        ((cocos2d::CCSpriteFrameCache*)m_cocos2d_impl)->removeUnusedSpriteFrames();
    }

    ScriptValue CCSpriteFrameCache::getSpriteFrame(ScriptState* scriptState, String arg0) {

        cocos2d::CCSpriteFrame* ret_impl = ((cocos2d::CCSpriteFrameCache*)m_cocos2d_impl)->spriteFrameByName((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSpriteFrame)
        
    }

    void CCSpriteFrameCache::removeSpriteFramesFromFile(String arg0) {

        ((cocos2d::CCSpriteFrameCache*)m_cocos2d_impl)->removeSpriteFramesFromFile((char*)(arg0.utf8().data()));
    }

    bool CCSpriteFrameCache::init() {

        bool ret_impl = ((cocos2d::CCSpriteFrameCache*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    void CCSpriteFrameCache::removeSpriteFrames() {

        ((cocos2d::CCSpriteFrameCache*)m_cocos2d_impl)->removeSpriteFrames();
    }

    void CCSpriteFrameCache::removeSpriteFramesFromTexture(CCTexture2D* arg0) {
        cocos2d::CCTexture2D* _arg0 = (cocos2d::CCTexture2D*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSpriteFrameCache*)m_cocos2d_impl)->removeSpriteFramesFromTexture( _arg0);
    }

    void CCSpriteFrameCache::removeSpriteFrameByName(String arg0) {

        ((cocos2d::CCSpriteFrameCache*)m_cocos2d_impl)->removeSpriteFrameByName((char*)(arg0.utf8().data()));
    }

    void CCSpriteFrameCache::purgeSharedSpriteFrameCache() {

        cocos2d::CCSpriteFrameCache::purgeSharedSpriteFrameCache();
    }

    ScriptValue CCSpriteFrameCache::getInstance(ScriptState* scriptState) {

        cocos2d::CCSpriteFrameCache* ret_impl = cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSpriteFrameCache)
        
    }
    cocos2d::CCSpriteFrameCache* CCSpriteFrameCache::getCocos2dImpl() {
        return (cocos2d::CCSpriteFrameCache*)m_cocos2d_impl;
    }


    CCSpriteFrameCache::CCSpriteFrameCache() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCSpriteFrameCache> CCSpriteFrameCache::create()
    {
        RefPtrWillBeRawPtr<CCSpriteFrameCache> ret = adoptRefWillBeNoop(new CCSpriteFrameCache());
        return ret.release();
    }


    CCSpriteFrameCache::~CCSpriteFrameCache() {
    }
} // namespace blink
