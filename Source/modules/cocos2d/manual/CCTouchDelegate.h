// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTouchDelegate_h__
#define __CCTouchDelegate_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"

#include "modules/cocos2d/cocos2d_class.hpp"

namespace blink {
   
class CCTouchDelegate : public RefCountedWillBeGarbageCollectedFinalized <CCTouchDelegate>, public ScriptWrappable {
    DEFINE_WRAPPERTYPEINFO();

public:
    CCTouchDelegate() {};
    ~CCTouchDelegate() {};
    static void registerStandardDelegate(ScriptValue& pJSObj, int priority);
    static void registerTargetedDelegate(ScriptValue& pJSObj, int priority, bool swallowsTouches);
    static void unregisterTouchDelegate(ScriptValue& pJSObj);
};

}

#endif // CCTouchDelegate_h
