// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/SceneReader.h"

namespace blink {

    ScriptValue SceneReader::createNodeWithSceneFile(ScriptState* scriptState, String arg0) {

        cocos2d::CCNode* ret_impl = ((cocos2d::extension::SceneReader*)m_cocos2d_impl)->createNodeWithSceneFile((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    ScriptValue SceneReader::getNodeByTag(ScriptState* scriptState, int arg0) {

        cocos2d::CCNode* ret_impl = ((cocos2d::extension::SceneReader*)m_cocos2d_impl)->getNodeByTag((int)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    void SceneReader::purge() {

        cocos2d::extension::SceneReader::purge();
    }

    String SceneReader::sceneReaderVersion() {

        const String ret_impl = cocos2d::extension::SceneReader::sceneReaderVersion();
        
        
        return ret_impl;
    }

    ScriptValue SceneReader::getInstance(ScriptState* scriptState) {

        cocos2d::extension::SceneReader* ret_impl = cocos2d::extension::SceneReader::sharedSceneReader();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, SceneReader)
        
    }
    cocos2d::extension::SceneReader* SceneReader::getCocos2dImpl() {
        return (cocos2d::extension::SceneReader*)m_cocos2d_impl;
    }


    SceneReader::SceneReader() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<SceneReader> SceneReader::create()
    {
        RefPtrWillBeRawPtr<SceneReader> ret = adoptRefWillBeNoop(new SceneReader());
        return ret.release();
    }


    SceneReader::~SceneReader() {
    }
} // namespace blink
