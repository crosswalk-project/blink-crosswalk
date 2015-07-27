// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCShaderCache.h"

namespace blink {

    void CCShaderCache::reloadDefaultShaders() {

        ((cocos2d::CCShaderCache*)m_cocos2d_impl)->reloadDefaultShaders();
    }

    void CCShaderCache::addProgram(CCGLProgram* arg0, String arg1) {
        cocos2d::CCGLProgram* _arg0 = (cocos2d::CCGLProgram*)(arg0->getCocos2dImpl());

        ((cocos2d::CCShaderCache*)m_cocos2d_impl)->addProgram( _arg0, (char*)(arg1.utf8().data()));
    }

    ScriptValue CCShaderCache::getProgram(ScriptState* scriptState, String arg0) {

        cocos2d::CCGLProgram* ret_impl = ((cocos2d::CCShaderCache*)m_cocos2d_impl)->programForKey((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCGLProgram)
        
    }

    void CCShaderCache::loadDefaultShaders() {

        ((cocos2d::CCShaderCache*)m_cocos2d_impl)->loadDefaultShaders();
    }

    ScriptValue CCShaderCache::getInstance(ScriptState* scriptState) {

        cocos2d::CCShaderCache* ret_impl = cocos2d::CCShaderCache::sharedShaderCache();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCShaderCache)
        
    }

    void CCShaderCache::purgeSharedShaderCache() {

        cocos2d::CCShaderCache::purgeSharedShaderCache();
    }
    cocos2d::CCShaderCache* CCShaderCache::getCocos2dImpl() {
        return (cocos2d::CCShaderCache*)m_cocos2d_impl;
    }


    CCShaderCache::CCShaderCache() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCShaderCache> CCShaderCache::create()
    {
        RefPtrWillBeRawPtr<CCShaderCache> ret = adoptRefWillBeNoop(new CCShaderCache());
        cocos2d::CCShaderCache* impl = new cocos2d::CCShaderCache();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCShaderCache::~CCShaderCache() {
    }
} // namespace blink
