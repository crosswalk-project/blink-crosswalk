// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCBaseData.h"

namespace blink {

    PassRefPtrWillBeRawPtr<ccColor4B> CCBaseData::getColor() {

        cocos2d::ccColor4B ret_impl = ((cocos2d::extension::CCBaseData*)m_cocos2d_impl)->getColor();
        
        RefPtr<ccColor4B> ret = adoptRefWillBeNoop(new ccColor4B());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCBaseData::setColor(ccColor4B* arg0) {
        cocos2d::ccColor4B* _arg0 = (cocos2d::ccColor4B*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCBaseData*)m_cocos2d_impl)->setColor( *_arg0);
    }

    ScriptValue CCBaseData::createInternal(ScriptState* scriptState) {

        cocos2d::extension::CCBaseData* ret_impl = cocos2d::extension::CCBaseData::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCBaseData)
        
    }
    cocos2d::extension::CCBaseData* CCBaseData::getCocos2dImpl() {
        return (cocos2d::extension::CCBaseData*)m_cocos2d_impl;
    }


    CCBaseData::CCBaseData() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCBaseData> CCBaseData::create()
    {
        RefPtrWillBeRawPtr<CCBaseData> ret = adoptRefWillBeNoop(new CCBaseData());
        cocos2d::extension::CCBaseData* impl = new cocos2d::extension::CCBaseData();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCBaseData::~CCBaseData() {
    }
} // namespace blink
