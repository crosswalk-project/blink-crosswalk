// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCFadeOutUpTiles_h__
#define __CCFadeOutUpTiles_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCFadeOutUpTiles;
}

namespace blink {

class CCFadeOutUpTiles 
		:public CCFadeOutTRTiles
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCFadeOutUpTiles> create();
    
    void transformTile(CCPoint* arg0, float arg1);
    
    float testFunc(CCSize* arg0, float arg1);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, CCSize* arg1);
    cocos2d::CCFadeOutUpTiles* getCocos2dImpl();
    ~CCFadeOutUpTiles();
public:
    CCFadeOutUpTiles ();
};

DEFINE_TYPE_CASTS(CCFadeOutUpTiles, CCFadeOutTRTiles, pCCFadeOutUpTiles, true, true);

} // namespace blink

#endif
