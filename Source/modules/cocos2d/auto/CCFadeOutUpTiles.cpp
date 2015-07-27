// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCFadeOutUpTiles.h"

namespace blink {

    void CCFadeOutUpTiles::transformTile(CCPoint* arg0, float arg1) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::CCFadeOutUpTiles*)m_cocos2d_impl)->transformTile( *_arg0, (float)(arg1));
    }

    float CCFadeOutUpTiles::testFunc(CCSize* arg0, float arg1) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        float ret_impl = ((cocos2d::CCFadeOutUpTiles*)m_cocos2d_impl)->testFunc( *_arg0, (float)(arg1));
        
        
        return ret_impl;
    }

    ScriptValue CCFadeOutUpTiles::createInternal(ScriptState* scriptState, float arg0, CCSize* arg1) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());

        cocos2d::CCFadeOutUpTiles* ret_impl = cocos2d::CCFadeOutUpTiles::create((float)(arg0),  *_arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCFadeOutUpTiles)
        
    }
    cocos2d::CCFadeOutUpTiles* CCFadeOutUpTiles::getCocos2dImpl() {
        return (cocos2d::CCFadeOutUpTiles*)m_cocos2d_impl;
    }


    CCFadeOutUpTiles::CCFadeOutUpTiles() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCFadeOutUpTiles> CCFadeOutUpTiles::create()
    {
        RefPtrWillBeRawPtr<CCFadeOutUpTiles> ret = adoptRefWillBeNoop(new CCFadeOutUpTiles());
        cocos2d::CCFadeOutUpTiles* impl = new cocos2d::CCFadeOutUpTiles();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCFadeOutUpTiles::~CCFadeOutUpTiles() {
    }
} // namespace blink
