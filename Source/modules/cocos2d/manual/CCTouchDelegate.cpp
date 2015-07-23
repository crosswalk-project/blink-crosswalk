// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/manual/CCTouchDelegate.h"

namespace blink {

void CCTouchDelegate::registerStandardDelegate(ScriptValue& obj, int priority)
{
    SCRIPT_VALUE_WRAPPER(CCNode, obj, arg0);
    cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

    cocos2d::JSTouchDelegate::registerStandardDelegate(_arg0, priority);
}

void CCTouchDelegate::registerTargetedDelegate(ScriptValue& obj, int priority, bool swallowsTouches)
{
    SCRIPT_VALUE_WRAPPER(CCNode, obj, arg0);
    cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

    cocos2d::JSTouchDelegate::registerTargetedDelegate(_arg0, priority, swallowsTouches);
}

void CCTouchDelegate::unregisterTouchDelegate(ScriptValue& obj)
{
    SCRIPT_VALUE_WRAPPER(CCNode, obj, arg0);
    cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

    cocos2d::JSTouchDelegate::unregisterTouchDelegate(_arg0);
}

}
