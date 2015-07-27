// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTween_h__
#define __CCTween_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCTween;
    }
}

namespace blink {

class CCTween : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTween> create();
    
    void play(PassRefPtr<Uint8Array> arg0, int arg1, int arg2, int arg3, int arg4);
    
    void gotoAndPause(int arg0);
    
    ScriptValue getAnimation(ScriptState* scriptState);
    
    void gotoAndPlay(int arg0);
    
    bool init(CCBone* arg0);
    
    void setAnimation(CCArmatureAnimation* arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, CCBone* arg0);
    cocos2d::extension::CCTween* getCocos2dImpl();
    ~CCTween();
public:
    CCTween ();
};

DEFINE_TYPE_CASTS(CCTween, CCObject, pCCTween, true, true);

} // namespace blink

#endif
