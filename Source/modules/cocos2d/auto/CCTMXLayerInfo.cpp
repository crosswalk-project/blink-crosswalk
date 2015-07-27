// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTMXLayerInfo.h"

namespace blink {

    void CCTMXLayerInfo::setProperties(CCDictionary* arg0) {
        cocos2d::CCDictionary* _arg0 = (cocos2d::CCDictionary*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTMXLayerInfo*)m_cocos2d_impl)->setProperties( _arg0);
    }

    ScriptValue CCTMXLayerInfo::getProperties(ScriptState* scriptState) {

        cocos2d::CCDictionary* ret_impl = ((cocos2d::CCTMXLayerInfo*)m_cocos2d_impl)->getProperties();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCDictionary)
        
    }
    cocos2d::CCTMXLayerInfo* CCTMXLayerInfo::getCocos2dImpl() {
        return (cocos2d::CCTMXLayerInfo*)m_cocos2d_impl;
    }


    CCTMXLayerInfo::CCTMXLayerInfo() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTMXLayerInfo> CCTMXLayerInfo::create()
    {
        RefPtrWillBeRawPtr<CCTMXLayerInfo> ret = adoptRefWillBeNoop(new CCTMXLayerInfo());
        cocos2d::CCTMXLayerInfo* impl = new cocos2d::CCTMXLayerInfo();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTMXLayerInfo::~CCTMXLayerInfo() {
    }
} // namespace blink
