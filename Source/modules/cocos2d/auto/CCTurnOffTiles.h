// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTurnOffTiles_h__
#define __CCTurnOffTiles_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTurnOffTiles;
}

namespace blink {

class CCTurnOffTiles 
		:public CCTiledGrid3DAction
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTurnOffTiles> create();
    
    void turnOnTile(CCPoint* arg0);
    
    void startWithTarget(ScriptValue& arg0);
    
    void turnOffTile(CCPoint* arg0);
    
    void shuffle(PassRefPtr<Uint8Array> arg0, unsigned int arg1);
    
    bool initWithDuration(float arg0, CCSize* arg1, unsigned int arg2);
    
    void update(float arg0);
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, CCSize* arg1, unsigned int arg2);
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, CCSize* arg1);
    cocos2d::CCTurnOffTiles* getCocos2dImpl();
    ~CCTurnOffTiles();
public:
    CCTurnOffTiles ();
};

DEFINE_TYPE_CASTS(CCTurnOffTiles, CCTiledGrid3DAction, pCCTurnOffTiles, true, true);

} // namespace blink

#endif
