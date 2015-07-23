// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"
#include "modules/cocos2d/CCSize.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "wtf/ArrayBufferView.h"

namespace blink {

CCSize::CCSize()
{
    m_cocos2d_impl = new cocos2d::CCSize(0, 0);
}

CCSize::~CCSize()
{
    if (m_cocos2d_impl != NULL) {
        delete m_cocos2d_impl;
        m_cocos2d_impl = NULL;
    }
}

CCSize::CCSize(float width, float height)
{
    m_cocos2d_impl = new cocos2d::CCSize(width, height);
}
}
