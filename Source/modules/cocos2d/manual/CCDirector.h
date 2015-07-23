// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCDirector_h__
#define __CCDirector_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCDirector;
}

namespace blink {

class CCDirector : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCDirector> create();
    static void destroyDirector();
    
    void pause();
    
    void setDelegate(CCDirectorDelegate* arg0);
    
    void setContentScaleFactor(float arg0);
    
    float getContentScaleFactor();
    
    PassRefPtrWillBeRawPtr<CCSize> getWinSizeInPixels();
    
    float getDeltaTime();
    
    void setGLDefaultValues();
    
    void setActionManager(ScriptValue& arg0);
    
    void setAlphaBlending(bool arg0);
    
    void popToRootScene();
    
    ScriptValue getNotificationNode(ScriptState* scriptState);
    
    PassRefPtrWillBeRawPtr<CCSize> getWinSize();
    
    void end();
    
    bool isSendCleanupToScene();
    
    PassRefPtrWillBeRawPtr<CCPoint> getVisibleOrigin();
    
    void mainLoop();
    
    void setDepthTest(bool arg0);
    
    float getSecondsPerFrame();
    
    PassRefPtrWillBeRawPtr<CCPoint> convertToUI(CCPoint* arg0);
    
    void setDefaultValues();
    
    bool init();
    
    void setScheduler(CCScheduler* arg0);
    
    void reshapeProjection(CCSize* arg0);
    
    void startAnimation();
    
    ScriptValue getRunningScene(ScriptState* scriptState);
    
    void setViewport();
    
    void stopAnimation();
    
    void popToSceneStackLevel(int arg0);
    
    void resume();
    
    bool isNextDeltaTimeZero();

    PassRefPtrWillBeRawPtr<CCDirectorDelegate> getDelegate();

    void setOpenGLView(CCEGLView* arg0);
    
    PassRefPtrWillBeRawPtr<CCPoint> convertToGL(CCPoint* arg0);
    
    void purgeCachedData();
    
    unsigned int getTotalFrames();
    
    void runWithScene(ScriptValue& arg0);
    
    void setNotificationNode(ScriptValue& arg0);
    
    void drawScene();
    
    void popScene();
    
    bool isDisplayStats();
    
    void setProjection(int arg0);
    
    float getZEye();
    
    void setNextDeltaTimeZero(bool arg0);
    
    PassRefPtrWillBeRawPtr<CCSize> getVisibleSize();
    
    ScriptValue getScheduler(ScriptState* scriptState);
    
    void pushScene(ScriptValue& arg0);
    
    double getAnimationInterval();
    
    bool isPaused();
    
    void setDisplayStats(bool arg0);
    
    void replaceScene(ScriptValue& arg0);
    
    void setAnimationInterval(double arg0);
    
    ScriptValue getActionManager(ScriptState* scriptState);
    
    static ScriptValue getInstance(ScriptState* scriptState);
    cocos2d::CCDirector* getCocos2dImpl();
    ~CCDirector();
public:
    CCDirector ();
};

DEFINE_TYPE_CASTS(CCDirector, CCObject, pCCDirector, true, true);

} // namespace blink

#endif
