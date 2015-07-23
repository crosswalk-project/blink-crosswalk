// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCFadeOutTRTiles_h__
#define __CCFadeOutTRTiles_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCFadeOutTRTiles;
}

namespace blink {

class CCFadeOutTRTiles 
		:public CCTiledGrid3DAction
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCFadeOutTRTiles> create();
    
    void turnOnTile(CCPoint* arg0);
    
    void turnOffTile(CCPoint* arg0);
    
    void transformTile(CCPoint* arg0, float arg1);
    
    float testFunc(CCSize* arg0, float arg1);
    
    void update(float arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, CCSize* arg1);
    cocos2d::CCFadeOutTRTiles* getCocos2dImpl();
    ~CCFadeOutTRTiles();
public:
    CCFadeOutTRTiles ();
};

DEFINE_TYPE_CASTS(CCFadeOutTRTiles, CCTiledGrid3DAction, pCCFadeOutTRTiles, true, true);

} // namespace blink

#endif
