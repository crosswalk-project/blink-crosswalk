// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTimer_h__
#define __CCTimer_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTimer;
}

namespace blink {

class CCTimer : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTimer> create();
    
    float getInterval();
    
    void setInterval(float arg0);
    
    bool initWithScriptHandler(int arg0, float arg1);
    
    void update(float arg0);
    
    int getScriptHandler();
    
    static ScriptValue timerWithScriptHandler(ScriptState* scriptState, int arg0, float arg1);
    cocos2d::CCTimer* getCocos2dImpl();
    ~CCTimer();
public:
    CCTimer ();
};

DEFINE_TYPE_CASTS(CCTimer, CCObject, pCCTimer, true, true);

} // namespace blink

#endif
