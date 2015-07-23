// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTintTo_h__
#define __CCTintTo_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTintTo;
}

namespace blink {

class CCTintTo 
		:public CCActionInterval
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTintTo> create();
    
    void startWithTarget(ScriptValue& arg0);
    
    bool initWithDuration(float arg0, unsigned char arg1, unsigned char arg2, unsigned char arg3);
    
    void update(float arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, unsigned char arg1, unsigned char arg2, unsigned char arg3);
    cocos2d::CCTintTo* getCocos2dImpl();
    ~CCTintTo();
public:
    CCTintTo ();
};

DEFINE_TYPE_CASTS(CCTintTo, CCActionInterval, pCCTintTo, true, true);

} // namespace blink

#endif
