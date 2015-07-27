// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCFileUtils.h"

namespace blink {

    bool CCFileUtils::isFileExist(String arg0_wrapper) {
        std::string arg0 = std::string(arg0_wrapper.utf8().data());
        bool ret_impl = ((cocos2d::CCFileUtils*)m_cocos2d_impl)->isFileExist((std::string)(arg0));
        
        
        return ret_impl;
    }

    void CCFileUtils::removeSearchPath(String arg0) {

        ((cocos2d::CCFileUtils*)m_cocos2d_impl)->removeSearchPath((char*)(arg0.utf8().data()));
    }

    void CCFileUtils::purgeCachedEntries() {

        ((cocos2d::CCFileUtils*)m_cocos2d_impl)->purgeCachedEntries();
    }

    String CCFileUtils::fullPathFromRelativeFile(String arg0, String arg1) {

        const String ret_impl = ((cocos2d::CCFileUtils*)m_cocos2d_impl)->fullPathFromRelativeFile((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()));
        
        
        return ret_impl;
    }

    PassRefPtr<Uint8Array> CCFileUtils::getFileData(String arg0, String arg1, PassRefPtr<Uint8Array> arg2) {

        PassRefPtr<Uint8Array> ret_impl = ((cocos2d::CCFileUtils*)m_cocos2d_impl)->getFileData((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (unsigned long*)(arg2.get()->data()));
        
        
        return ret_impl;
    }

    bool CCFileUtils::isPopupNotify() {

        bool ret_impl = ((cocos2d::CCFileUtils*)m_cocos2d_impl)->isPopupNotify();
        
        
        return ret_impl;
    }

    void CCFileUtils::setFilenameLookupDictionary(CCDictionary* arg0) {
        cocos2d::CCDictionary* _arg0 = (cocos2d::CCDictionary*)(arg0->getCocos2dImpl());

        ((cocos2d::CCFileUtils*)m_cocos2d_impl)->setFilenameLookupDictionary( _arg0);
    }

    void CCFileUtils::addSearchResolutionsOrder(String arg0) {

        ((cocos2d::CCFileUtils*)m_cocos2d_impl)->addSearchResolutionsOrder((char*)(arg0.utf8().data()));
    }

    PassRefPtr<Uint8Array> CCFileUtils::getFileDataFromZip(String arg0, String arg1, PassRefPtr<Uint8Array> arg2) {

        PassRefPtr<Uint8Array> ret_impl = ((cocos2d::CCFileUtils*)m_cocos2d_impl)->getFileDataFromZip((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (unsigned long*)(arg2.get()->data()));
        
        
        return ret_impl;
    }

    void CCFileUtils::removeAllPaths() {

        ((cocos2d::CCFileUtils*)m_cocos2d_impl)->removeAllPaths();
    }

    String CCFileUtils::fullPathForFilename(String arg0) {

        String ret_impl = String(((cocos2d::CCFileUtils*)m_cocos2d_impl)->fullPathForFilename((char*)(arg0.utf8().data())).c_str());
        
        
        return ret_impl;
    }

    bool CCFileUtils::isAbsolutePath(String arg0_wrapper) {
        std::string arg0 = std::string(arg0_wrapper.utf8().data());
        bool ret_impl = ((cocos2d::CCFileUtils*)m_cocos2d_impl)->isAbsolutePath((std::string)(arg0));
        
        
        return ret_impl;
    }

    String CCFileUtils::getWritablePath() {

        String ret_impl = String(((cocos2d::CCFileUtils*)m_cocos2d_impl)->getWritablePath().c_str());
        
        
        return ret_impl;
    }

    void CCFileUtils::addSearchPath(String arg0) {

        ((cocos2d::CCFileUtils*)m_cocos2d_impl)->addSearchPath((char*)(arg0.utf8().data()));
    }

    void CCFileUtils::setPopupNotify(bool arg0) {

        ((cocos2d::CCFileUtils*)m_cocos2d_impl)->setPopupNotify((bool)(arg0));
    }

    void CCFileUtils::loadFilenameLookup(String arg0) {

        ((cocos2d::CCFileUtils*)m_cocos2d_impl)->loadFilenameLookupDictionaryFromFile((char*)(arg0.utf8().data()));
    }

    void CCFileUtils::purgeFileUtils() {

        cocos2d::CCFileUtils::purgeFileUtils();
    }

    ScriptValue CCFileUtils::getInstance(ScriptState* scriptState) {

        cocos2d::CCFileUtils* ret_impl = cocos2d::CCFileUtils::sharedFileUtils();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCFileUtils)
        
    }
    cocos2d::CCFileUtils* CCFileUtils::getCocos2dImpl() {
        return (cocos2d::CCFileUtils*)m_cocos2d_impl;
    }


    CCFileUtils::CCFileUtils() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCFileUtils> CCFileUtils::create()
    {
        RefPtrWillBeRawPtr<CCFileUtils> ret = adoptRefWillBeNoop(new CCFileUtils());
        return ret.release();
    }


    CCFileUtils::~CCFileUtils() {
    }
} // namespace blink
