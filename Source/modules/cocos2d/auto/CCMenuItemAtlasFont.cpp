// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCMenuItemAtlasFont.h"

namespace blink {
    cocos2d::CCMenuItemAtlasFont* CCMenuItemAtlasFont::getCocos2dImpl() {
        return (cocos2d::CCMenuItemAtlasFont*)m_cocos2d_impl;
    }


    CCMenuItemAtlasFont::CCMenuItemAtlasFont() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCMenuItemAtlasFont> CCMenuItemAtlasFont::create()
    {
        RefPtrWillBeRawPtr<CCMenuItemAtlasFont> ret = adoptRefWillBeNoop(new CCMenuItemAtlasFont());
        cocos2d::CCMenuItemAtlasFont* impl = new cocos2d::CCMenuItemAtlasFont();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCMenuItemAtlasFont::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCMenuItemAtlasFont::~CCMenuItemAtlasFont() {
    }
} // namespace blink
