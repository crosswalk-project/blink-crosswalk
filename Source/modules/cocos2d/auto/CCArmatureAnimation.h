// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCArmatureAnimation_h__
#define __CCArmatureAnimation_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCArmatureAnimation;
    }
}

namespace blink {

class CCArmatureAnimation : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCArmatureAnimation> create();
    
    float getSpeedScale();
    
    void pause();
    
    void setSpeedScale(float arg0);
    
    bool init(CCArmature* arg0);
    
    void play(String arg0, int arg1, int arg2, int arg3, int arg4);
    
    void gotoAndPause(int arg0);
    
    void resume();
    
    void stop();
    
    void update(float arg0);
    
    void playWithArray(CCArray* arg0, int arg1, bool arg2);
    
    void playWithIndexArray(CCArray* arg0, int arg1, bool arg2);
    
    void playWithIndex(int arg0, int arg1, int arg2, int arg3, int arg4);
    
    String getCurrentMovementID();
    
    void gotoAndPlay(int arg0);
    
    int getMovementCount();
    
    static ScriptValue createInternal(ScriptState* scriptState, CCArmature* arg0);
    cocos2d::extension::CCArmatureAnimation* getCocos2dImpl();
    ~CCArmatureAnimation();
public:
    CCArmatureAnimation ();
};

DEFINE_TYPE_CASTS(CCArmatureAnimation, CCObject, pCCArmatureAnimation, true, true);

} // namespace blink

#endif
