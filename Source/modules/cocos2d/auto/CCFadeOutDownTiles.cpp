// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCFadeOutDownTiles.h"

namespace blink {

    float CCFadeOutDownTiles::testFunc(CCSize* arg0, float arg1) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        float ret_impl = ((cocos2d::CCFadeOutDownTiles*)m_cocos2d_impl)->testFunc( *_arg0, (float)(arg1));
        
        
        return ret_impl;
    }

    ScriptValue CCFadeOutDownTiles::createInternal(ScriptState* scriptState, float arg0, CCSize* arg1) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());

        cocos2d::CCFadeOutDownTiles* ret_impl = cocos2d::CCFadeOutDownTiles::create((float)(arg0),  *_arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCFadeOutDownTiles)
        
    }
    cocos2d::CCFadeOutDownTiles* CCFadeOutDownTiles::getCocos2dImpl() {
        return (cocos2d::CCFadeOutDownTiles*)m_cocos2d_impl;
    }


    CCFadeOutDownTiles::CCFadeOutDownTiles() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCFadeOutDownTiles> CCFadeOutDownTiles::create()
    {
        RefPtrWillBeRawPtr<CCFadeOutDownTiles> ret = adoptRefWillBeNoop(new CCFadeOutDownTiles());
        cocos2d::CCFadeOutDownTiles* impl = new cocos2d::CCFadeOutDownTiles();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCFadeOutDownTiles::~CCFadeOutDownTiles() {
    }
} // namespace blink
