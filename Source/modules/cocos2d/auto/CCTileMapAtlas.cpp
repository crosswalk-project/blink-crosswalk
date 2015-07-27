// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTileMapAtlas.h"

namespace blink {

    bool CCTileMapAtlas::initWithTileFile(String arg0, String arg1, int arg2, int arg3) {

        bool ret_impl = ((cocos2d::CCTileMapAtlas*)m_cocos2d_impl)->initWithTileFile((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (int)(arg2), (int)(arg3));
        
        
        return ret_impl;
    }

    void CCTileMapAtlas::releaseMap() {

        ((cocos2d::CCTileMapAtlas*)m_cocos2d_impl)->releaseMap();
    }

    PassRefPtrWillBeRawPtr<ccColor3B> CCTileMapAtlas::getTileAt(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        cocos2d::ccColor3B ret_impl = ((cocos2d::CCTileMapAtlas*)m_cocos2d_impl)->tileAt( *_arg0);
        
        RefPtr<ccColor3B> ret = adoptRefWillBeNoop(new ccColor3B());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCTileMapAtlas::setTile(ccColor3B* arg0, CCPoint* arg1) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());
        cocos2d::CCPoint* _arg1 = (cocos2d::CCPoint*)(arg1->getCocos2dImpl());

        ((cocos2d::CCTileMapAtlas*)m_cocos2d_impl)->setTile( *_arg0,  *_arg1);
    }

    ScriptValue CCTileMapAtlas::createInternal(ScriptState* scriptState, String arg0, String arg1, int arg2, int arg3) {

        cocos2d::CCTileMapAtlas* ret_impl = cocos2d::CCTileMapAtlas::create((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (int)(arg2), (int)(arg3));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTileMapAtlas)
        
    }
    cocos2d::CCTileMapAtlas* CCTileMapAtlas::getCocos2dImpl() {
        return (cocos2d::CCTileMapAtlas*)m_cocos2d_impl;
    }


    CCTileMapAtlas::CCTileMapAtlas() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTileMapAtlas> CCTileMapAtlas::create()
    {
        RefPtrWillBeRawPtr<CCTileMapAtlas> ret = adoptRefWillBeNoop(new CCTileMapAtlas());
        cocos2d::CCTileMapAtlas* impl = new cocos2d::CCTileMapAtlas();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCTileMapAtlas::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCTileMapAtlas::~CCTileMapAtlas() {
    }
} // namespace blink
