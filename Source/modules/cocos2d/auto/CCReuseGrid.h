// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCReuseGrid_h__
#define __CCReuseGrid_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCReuseGrid;
}

namespace blink {

class CCReuseGrid 
		:public CCActionInstant
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCReuseGrid> create();
    
    void startWithTarget(ScriptValue& arg0);
    
    bool initWithTimes(int arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, int arg0);
    cocos2d::CCReuseGrid* getCocos2dImpl();
    ~CCReuseGrid();
public:
    CCReuseGrid ();
};

DEFINE_TYPE_CASTS(CCReuseGrid, CCActionInstant, pCCReuseGrid, true, true);

} // namespace blink

#endif
