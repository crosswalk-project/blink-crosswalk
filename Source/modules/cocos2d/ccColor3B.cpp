// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"
#include "modules/cocos2d/ccColor3B.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "wtf/ArrayBufferView.h"

namespace blink {

ccColor3B::ccColor3B()
{
    m_cocos2d_impl = new cocos2d::ccColor3B();
    m_cocos2d_impl->r = 0;
    m_cocos2d_impl->g = 0;
    m_cocos2d_impl->b = 0;
}

ccColor3B::~ccColor3B() {
    if (m_cocos2d_impl) {
        delete m_cocos2d_impl;
        m_cocos2d_impl = NULL;
    }
}

ccColor3B::ccColor3B(float r, float g, float b)
{
    m_cocos2d_impl = new cocos2d::ccColor3B();
    m_cocos2d_impl->r = r;
    m_cocos2d_impl->g = g;
    m_cocos2d_impl->b = b;
}

}
