// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCMoveBy_h__
#define __CCMoveBy_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCMoveBy;
}

namespace blink {

class CCMoveBy 
		:public CCActionInterval
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCMoveBy> create();
    
    void startWithTarget(ScriptValue& arg0);
    
    void update(float arg0);
    
    bool initWithDuration(float arg0, CCPoint* arg1);
    
    ScriptValue reverse(ScriptState* scriptState);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, CCPoint* arg1);
    cocos2d::CCMoveBy* getCocos2dImpl();
    ~CCMoveBy();
public:
    CCMoveBy ();
};

DEFINE_TYPE_CASTS(CCMoveBy, CCActionInterval, pCCMoveBy, true, true);

} // namespace blink

#endif
