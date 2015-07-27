// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTransitionSceneOriented.h"

namespace blink {
    cocos2d::CCTransitionSceneOriented* CCTransitionSceneOriented::getCocos2dImpl() {
        return (cocos2d::CCTransitionSceneOriented*)m_cocos2d_impl;
    }


    CCTransitionSceneOriented::CCTransitionSceneOriented() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTransitionSceneOriented> CCTransitionSceneOriented::create()
    {
        RefPtrWillBeRawPtr<CCTransitionSceneOriented> ret = adoptRefWillBeNoop(new CCTransitionSceneOriented());
        cocos2d::CCTransitionSceneOriented* impl = new cocos2d::CCTransitionSceneOriented();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTransitionSceneOriented::~CCTransitionSceneOriented() {
    }
} // namespace blink
