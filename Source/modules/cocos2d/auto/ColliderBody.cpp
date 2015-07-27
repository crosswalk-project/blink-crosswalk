// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/ColliderBody.h"

namespace blink {
    cocos2d::extension::ColliderBody* ColliderBody::getCocos2dImpl() {
        return (cocos2d::extension::ColliderBody*)m_cocos2d_impl;
    }


    ColliderBody::ColliderBody() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<ColliderBody> ColliderBody::create()
    {
        RefPtrWillBeRawPtr<ColliderBody> ret = adoptRefWillBeNoop(new ColliderBody());
        return ret.release();
    }


    ColliderBody::~ColliderBody() {
    }
} // namespace blink
