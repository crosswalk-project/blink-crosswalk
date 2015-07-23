// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCColliderFilter.h"

namespace blink {
    cocos2d::extension::CCColliderFilter* CCColliderFilter::getCocos2dImpl() {
        return (cocos2d::extension::CCColliderFilter*)m_cocos2d_impl;
    }


    CCColliderFilter::CCColliderFilter() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCColliderFilter> CCColliderFilter::create()
    {
        RefPtrWillBeRawPtr<CCColliderFilter> ret = adoptRefWillBeNoop(new CCColliderFilter());
        return ret.release();
    }


    CCColliderFilter::~CCColliderFilter() {
    }
} // namespace blink
