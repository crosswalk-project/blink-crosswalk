// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"
#include "modules/cocos2d/CCPoint.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "wtf/ArrayBufferView.h"

namespace blink {

CCPoint::CCPoint()
{
    m_cocos2d_impl = new cocos2d::CCPoint();
}

CCPoint::~CCPoint()
{
    if (m_cocos2d_impl != NULL) {
        delete m_cocos2d_impl;
        m_cocos2d_impl = NULL;
    }
}

CCPoint::CCPoint(float x, float y)
{
    m_cocos2d_impl = new cocos2d::CCPoint(x, y);
}

}
