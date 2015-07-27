// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCAnimationCache.h"

namespace blink {

    ScriptValue CCAnimationCache::getAnimation(ScriptState* scriptState, String arg0) {

        cocos2d::CCAnimation* ret_impl = ((cocos2d::CCAnimationCache*)m_cocos2d_impl)->animationByName((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCAnimation)
        
    }

    void CCAnimationCache::addAnimations(String arg0) {

        ((cocos2d::CCAnimationCache*)m_cocos2d_impl)->addAnimationsWithFile((char*)(arg0.utf8().data()));
    }

    bool CCAnimationCache::init() {

        bool ret_impl = ((cocos2d::CCAnimationCache*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    void CCAnimationCache::addAnimationsWithDictionary(CCDictionary* arg0, String arg1) {
        cocos2d::CCDictionary* _arg0 = (cocos2d::CCDictionary*)(arg0->getCocos2dImpl());

        ((cocos2d::CCAnimationCache*)m_cocos2d_impl)->addAnimationsWithDictionary( _arg0, (char*)(arg1.utf8().data()));
    }

    void CCAnimationCache::removeAnimation(String arg0) {

        ((cocos2d::CCAnimationCache*)m_cocos2d_impl)->removeAnimationByName((char*)(arg0.utf8().data()));
    }

    void CCAnimationCache::addAnimation(CCAnimation* arg0, String arg1) {
        cocos2d::CCAnimation* _arg0 = (cocos2d::CCAnimation*)(arg0->getCocos2dImpl());

        ((cocos2d::CCAnimationCache*)m_cocos2d_impl)->addAnimation( _arg0, (char*)(arg1.utf8().data()));
    }

    void CCAnimationCache::purgeSharedAnimationCache() {

        cocos2d::CCAnimationCache::purgeSharedAnimationCache();
    }

    ScriptValue CCAnimationCache::getInstance(ScriptState* scriptState) {

        cocos2d::CCAnimationCache* ret_impl = cocos2d::CCAnimationCache::sharedAnimationCache();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCAnimationCache)
        
    }
    cocos2d::CCAnimationCache* CCAnimationCache::getCocos2dImpl() {
        return (cocos2d::CCAnimationCache*)m_cocos2d_impl;
    }


    CCAnimationCache::CCAnimationCache() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCAnimationCache> CCAnimationCache::create()
    {
        RefPtrWillBeRawPtr<CCAnimationCache> ret = adoptRefWillBeNoop(new CCAnimationCache());
        cocos2d::CCAnimationCache* impl = new cocos2d::CCAnimationCache();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCAnimationCache::~CCAnimationCache() {
    }
} // namespace blink
