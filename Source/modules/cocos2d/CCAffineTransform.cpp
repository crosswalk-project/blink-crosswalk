// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"
#include "modules/cocos2d/CCAffineTransform.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "wtf/ArrayBufferView.h"

namespace blink {

CCAffineTransform::CCAffineTransform()
{
    m_cocos2d_impl = NULL;
}

CCAffineTransform::~CCAffineTransform()
{
    if (m_cocos2d_impl != NULL) {
        delete m_cocos2d_impl;
        m_cocos2d_impl = NULL;
    }
}

CCAffineTransform::CCAffineTransform(float a, float b, float c, float d, float tx, float ty)
{
    m_cocos2d_impl = new cocos2d::CCAffineTransform();
    m_cocos2d_impl->a = a;
    m_cocos2d_impl->b = b;
    m_cocos2d_impl->c = c;
    m_cocos2d_impl->d = d;
    m_cocos2d_impl->tx = tx;
    m_cocos2d_impl->ty = ty;
}

}
