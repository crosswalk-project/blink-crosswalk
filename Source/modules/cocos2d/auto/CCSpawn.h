// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCSpawn_h__
#define __CCSpawn_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCSpawn;
}

namespace blink {

class CCSpawn 
		:public CCActionInterval
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCSpawn> create();
    
    void startWithTarget(ScriptValue& arg0);
    
    ScriptValue reverse(ScriptState* scriptState);
    
    void stop();
    
    void update(float arg0);
    
    bool initWithTwoActions(ScriptValue& arg0, ScriptValue& arg1);
    cocos2d::CCSpawn* getCocos2dImpl();
    ~CCSpawn();
public:
    CCSpawn ();
};

DEFINE_TYPE_CASTS(CCSpawn, CCActionInterval, pCCSpawn, true, true);

} // namespace blink

#endif
