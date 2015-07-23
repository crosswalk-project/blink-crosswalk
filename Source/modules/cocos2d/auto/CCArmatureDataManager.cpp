// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCArmatureDataManager.h"

namespace blink {

    void CCArmatureDataManager::addArmatureFileInfo(String arg0, String arg1, String arg2) {

        ((cocos2d::extension::CCArmatureDataManager*)m_cocos2d_impl)->addArmatureFileInfo((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (char*)(arg2.utf8().data()));
    }

    void CCArmatureDataManager::addArmatureFileInfo(String arg0) {

        ((cocos2d::extension::CCArmatureDataManager*)m_cocos2d_impl)->addArmatureFileInfo((char*)(arg0.utf8().data()));
    }

    void CCArmatureDataManager::removeArmatureFileInfo(String arg0) {

        ((cocos2d::extension::CCArmatureDataManager*)m_cocos2d_impl)->removeArmatureFileInfo((char*)(arg0.utf8().data()));
    }

    bool CCArmatureDataManager::init() {

        bool ret_impl = ((cocos2d::extension::CCArmatureDataManager*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    bool CCArmatureDataManager::isAutoLoadSpriteFile() {

        bool ret_impl = ((cocos2d::extension::CCArmatureDataManager*)m_cocos2d_impl)->isAutoLoadSpriteFile();
        
        
        return ret_impl;
    }

    void CCArmatureDataManager::addSpriteFrameFromFile(String arg0, String arg1, String arg2) {

        ((cocos2d::extension::CCArmatureDataManager*)m_cocos2d_impl)->addSpriteFrameFromFile((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (char*)(arg2.utf8().data()));
    }

    void CCArmatureDataManager::purge() {

        cocos2d::extension::CCArmatureDataManager::purge();
    }

    ScriptValue CCArmatureDataManager::getInstance(ScriptState* scriptState) {

        cocos2d::extension::CCArmatureDataManager* ret_impl = cocos2d::extension::CCArmatureDataManager::sharedArmatureDataManager();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArmatureDataManager)
        
    }
    cocos2d::extension::CCArmatureDataManager* CCArmatureDataManager::getCocos2dImpl() {
        return (cocos2d::extension::CCArmatureDataManager*)m_cocos2d_impl;
    }


    CCArmatureDataManager::CCArmatureDataManager() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCArmatureDataManager> CCArmatureDataManager::create()
    {
        RefPtrWillBeRawPtr<CCArmatureDataManager> ret = adoptRefWillBeNoop(new CCArmatureDataManager());
        return ret.release();
    }


    CCArmatureDataManager::~CCArmatureDataManager() {
    }
} // namespace blink
