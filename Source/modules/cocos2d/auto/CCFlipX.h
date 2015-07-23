// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCFlipX_h__
#define __CCFlipX_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCFlipX;
}

namespace blink {

class CCFlipX 
		:public CCActionInstant
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCFlipX> create();
    
    bool initWithFlipX(bool arg0);
    
    ScriptValue reverse(ScriptState* scriptState);
    
    void update(float arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, bool arg0);
    cocos2d::CCFlipX* getCocos2dImpl();
    ~CCFlipX();
public:
    CCFlipX ();
};

DEFINE_TYPE_CASTS(CCFlipX, CCActionInstant, pCCFlipX, true, true);

} // namespace blink

#endif
