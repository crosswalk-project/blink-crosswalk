// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __ActionObject_h__
#define __ActionObject_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class ActionObject;
    }
}

namespace blink {

class ActionObject : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<ActionObject> create();
    
    void setCurrentTime(float arg0);
    
    void pause();
    
    void setName(String arg0);
    
    void setUnitTime(float arg0);
    
    float getTotalTime();
    
    String getName();
    
    void stop();
    void play(CCCallFunc* arg0);
    void play();
    
    float getCurrentTime();
    
    void removeActionNode(PassRefPtr<Uint8Array> arg0);
    
    bool getLoop();
    
    void addActionNode(PassRefPtr<Uint8Array> arg0);
    
    float getUnitTime();
    
    bool isPlaying();
    
    void updateToFrameByTime(float arg0);
    
    void setLoop(bool arg0);
    
    void simulationActionUpdate(float arg0);
    cocos2d::extension::ActionObject* getCocos2dImpl();
    ~ActionObject();
public:
    ActionObject ();
};

DEFINE_TYPE_CASTS(ActionObject, CCObject, pActionObject, true, true);

} // namespace blink

#endif
