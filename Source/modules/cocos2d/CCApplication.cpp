// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/CCApplication.h"
#include "modules/cocos2d/cocos2d.hpp"

namespace blink {

    void CCApplication::setAnimationInterval(double arg0) {

    }

    CCApplication* CCApplication::getInstance() {
        return this;
    }

    CCApplication::CCApplication() {
    }

}
