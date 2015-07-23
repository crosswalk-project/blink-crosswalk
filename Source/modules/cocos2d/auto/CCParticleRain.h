// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCParticleRain_h__
#define __CCParticleRain_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCParticleRain;
}

namespace blink {

class CCParticleRain 
		:public CCParticleSystemQuad
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCParticleRain> create();
    
    bool init();
    
    bool initWithTotalParticles(unsigned int arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState);
    
    static ScriptValue createWithTotalParticles(ScriptState* scriptState, unsigned int arg0);
    cocos2d::CCParticleRain* getCocos2dImpl();
    ~CCParticleRain();
public:
    CCParticleRain ();
};

DEFINE_TYPE_CASTS(CCParticleRain, CCParticleSystemQuad, pCCParticleRain, true, true);

} // namespace blink

#endif
