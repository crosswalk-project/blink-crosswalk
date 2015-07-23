// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"
#include "modules/cocos2d/DOMWindowCocos2d.h"

#include "core/frame/LocalDOMWindow.h"
#include "modules/cocos2d/Cocos2d.h"
#include "modules/cocos2d/cocos2d.hpp"

namespace blink {

DOMWindowCocos2d::DOMWindowCocos2d(LocalDOMWindow& window)
    : DOMWindowProperty(window.frame())
{
}

DOMWindowCocos2d::~DOMWindowCocos2d()
{
}

const char* DOMWindowCocos2d::supplementName()
{
    return "DOMWindowCocos2d";
}

DOMWindowCocos2d& DOMWindowCocos2d::from(LocalDOMWindow& window)
{
    DOMWindowCocos2d* cocos2d = static_cast<DOMWindowCocos2d*>(WillBeHeapSupplement<LocalDOMWindow>::from(window, supplementName()));
    if (!cocos2d) {
        cocos2d = new DOMWindowCocos2d(window);
        provideTo(window, supplementName(), adoptPtrWillBeNoop(cocos2d));
    }
    return *cocos2d;
}

Cocos2d* DOMWindowCocos2d::crosswalk(LocalDOMWindow& window)
{
    return DOMWindowCocos2d::from(window).crosswalk();
}

Cocos2d* DOMWindowCocos2d::crosswalk() const
{
    if (!m_cocos2d && frame())
        m_cocos2d = Cocos2d::create();
    return m_cocos2d.get();
}

} // namespace blink