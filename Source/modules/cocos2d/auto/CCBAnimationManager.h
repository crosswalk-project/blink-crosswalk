// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCBAnimationManager_h__
#define __CCBAnimationManager_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCBAnimationManager;
    }
}

namespace blink {

class CCBAnimationManager : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCBAnimationManager> create();
    
    void moveAnimationsFromNode(CCNode* arg0, CCNode* arg1);
    
    void setAutoPlaySequenceId(int arg0);
    
    ScriptValue getDocumentCallbackNames(ScriptState* scriptState);
    
    ScriptValue actionForSoundChannel(ScriptState* scriptState, PassRefPtr<Uint8Array> arg0);
    
    void setBaseValue(CCObject* arg0, CCNode* arg1, String arg2);
    
    ScriptValue getDocumentOutletNodes(ScriptState* scriptState);
    
    void addNode(CCNode* arg0, CCDictionary* arg1);
    
    String getLastCompletedSequenceName();
    
    void setRootNode(CCNode* arg0);
    
    void runAnimationsForSequenceNamedTweenDuration(String arg0, float arg1);
    
    void addDocumentOutletName(String arg0);
    
    ScriptValue getSequences(ScriptState* scriptState);
    
    PassRefPtrWillBeRawPtr<CCSize> getRootContainerSize();
    
    void setDocumentControllerName(String arg0);
    
    PassRefPtrWillBeRawPtr<CCSize> getContainerSize(CCNode* arg0);
    
    ScriptValue actionForCallbackChannel(ScriptState* scriptState, PassRefPtr<Uint8Array> arg0);
    
    ScriptValue getDocumentOutletNames(ScriptState* scriptState);
    
    void addDocumentCallbackControlEvents(unsigned int arg0);
    
    bool init();
    
    ScriptValue getKeyframeCallbacks(ScriptState* scriptState);
    
    ScriptValue getDocumentCallbackControlEvents(ScriptState* scriptState);
    
    void setRootContainerSize(CCSize* arg0);
    
    void runAnimationsForSequenceIdTweenDuration(int arg0, float arg1);
    
    String getRunningSequenceName();
    
    int getAutoPlaySequenceId();
    
    void addDocumentCallbackName(String arg0);
    
    ScriptValue getRootNode(ScriptState* scriptState);
    
    void addDocumentOutletNode(CCNode* arg0);
    
    void addDocumentCallbackNode(CCNode* arg0);
    
    void runAnimationsForSequenceNamed(String arg0);
    
    void setCallFunc(CCCallFunc* arg0, String arg1);
    
    ScriptValue getDocumentCallbackNodes(ScriptState* scriptState);
    
    void setSequences(CCArray* arg0);
    
    void debug();
    
    String getDocumentControllerName();
    cocos2d::extension::CCBAnimationManager* getCocos2dImpl();
    ~CCBAnimationManager();
public:
    CCBAnimationManager ();
};

DEFINE_TYPE_CASTS(CCBAnimationManager, CCObject, pCCBAnimationManager, true, true);

} // namespace blink

#endif
