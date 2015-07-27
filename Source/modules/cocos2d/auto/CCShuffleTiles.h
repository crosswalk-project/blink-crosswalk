// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCShuffleTiles_h__
#define __CCShuffleTiles_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCShuffleTiles;
}

namespace blink {

class CCShuffleTiles 
		:public CCTiledGrid3DAction
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCShuffleTiles> create();
    
    void startWithTarget(ScriptValue& arg0);
    
    bool initWithDuration(float arg0, CCSize* arg1, unsigned int arg2);
    
    PassRefPtrWillBeRawPtr<CCSize> getDelta(CCSize* arg0);
    
    void update(float arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, CCSize* arg1, unsigned int arg2);
    cocos2d::CCShuffleTiles* getCocos2dImpl();
    ~CCShuffleTiles();
public:
    CCShuffleTiles ();
};

DEFINE_TYPE_CASTS(CCShuffleTiles, CCTiledGrid3DAction, pCCShuffleTiles, true, true);

} // namespace blink

#endif
