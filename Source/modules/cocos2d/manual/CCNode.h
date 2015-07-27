// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCNode_h__
#define __CCNode_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"

namespace cocos2d {
    class CCNode;
    class CCTouch;
}

namespace blink {
class OnEnterEventCallback;
class OnExitEventCallback;
class OnEnterTransitionDidFinishEventCallback;
class OnExitTransitionDidStartEventCallback;
class OnTouchCallback;
class OnTouchesCallback;

typedef WillBeHeapVector<RefPtrWillBeMember<CCTouch> > TouchHeapVector;

class CCNode : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*);
    static PassRefPtrWillBeRawPtr<CCNode> create();
    void addChild(ScriptValue& arg0, int arg1);
    void addChild(ScriptValue& arg0);
    void addChild(ScriptValue& arg0, int arg1, int arg2);
    
    bool removeComponent(String arg0);
    
    void removeAllComponents();
    
    ScriptValue getShaderProgram(ScriptState* scriptState);
    
    ScriptValue getChildren(ScriptState* scriptState);
    
    int getScriptHandler();
    
    PassRefPtrWillBeRawPtr<CCPoint> convertToWorldSpaceAR(CCPoint* arg0);
    
    bool isIgnoreAnchorPointForPosition();
    
    bool init();
    
    void setRotation(float arg0);
    
    void setZOrder(int arg0);
    
    void setScaleY(float arg0);
    
    void setScaleX(float arg0);
    
    void unregisterScriptHandler();
    
    int getTag();
    
    PassRefPtrWillBeRawPtr<CCAffineTransform> getNodeToWorldTransform();
    void removeChild(ScriptValue& arg0, bool arg1);
    void removeChild(ScriptValue& arg0);
    
    PassRefPtrWillBeRawPtr<CCPoint> convertToWorldSpace(CCPoint* arg0);
    
    void setSkewX(float arg0);
    
    void setSkewY(float arg0);
    
    PassRefPtrWillBeRawPtr<CCPoint> convertTouchToNodeSpace(CCTouch* arg0);
    void removeAllChildren( bool arg0);
    void removeAllChildren();
    
    float getRotationX();
    
    float getRotationY();
    
    void setParent(ScriptValue& arg0);
    
    PassRefPtrWillBeRawPtr<CCAffineTransform> getNodeToParentTransform();
    
    PassRefPtrWillBeRawPtr<CCPoint> convertToNodeSpace(CCPoint* arg0);
    
    ScriptValue getGrid(ScriptState* scriptState);
    void setPosition(float arg0, float arg1);
    
    void stopActionByTag(int arg0);
    
    void reorderChild(ScriptValue& arg0, int arg1);
    
    void setPositionY(float arg0);
    
    void setPositionX(float arg0);
    
    PassRefPtrWillBeRawPtr<CCPoint> getAnchorPoint();
    
    unsigned int getNumberOfRunningActions();
    
    void updateTransform();
    
    bool isVisible();
    
    unsigned int getChildrenCount();
    
    PassRefPtrWillBeRawPtr<CCPoint> convertToNodeSpaceAR(CCPoint* arg0);
    
    bool addComponent(ScriptValue& arg0);
    
    void visit();
    
    void setShaderProgram(CCGLProgram* arg0);
    
    float getRotation();
    
    void resumeSchedulerAndActions();
    
    int getZOrder();
    
    PassRefPtrWillBeRawPtr<CCPoint> getAnchorPointInPoints();
    
    ScriptValue runAction(ScriptState* scriptState, ScriptValue& arg0);
    
    void transform();
    
    void setVertexZ(float arg0);
    
    void setScheduler(CCScheduler* arg0);
    
    void stopAllActions();
    
    float getSkewX();
    
    float getSkewY();
    
    void ignoreAnchorPointForPosition(bool arg0);
    
    ScriptValue getActionByTag(ScriptState* scriptState, int arg0);
    
    void setRotationX(float arg0);
    
    void setRotationY(float arg0);
    
    void setAdditionalTransform(CCAffineTransform* arg0);
    
    ScriptValue getScheduler(ScriptState* scriptState);
    
    unsigned int getOrderOfArrival();
    
    void setActionManager(ScriptValue& arg0);
    void getPosition(PassRefPtr<Uint8Array> arg0, PassRefPtr<Uint8Array> arg1);
    PassRefPtrWillBeRawPtr<CCPoint> getPosition();
    
    bool isRunning();
    
    ScriptValue getParent(ScriptState* scriptState);
    
    float getPositionY();
    
    float getPositionX();
    void removeChildByTag(int arg0, bool arg1);
    void removeChildByTag(int arg0);
    
    void setVisible(bool arg0);
    
    PassRefPtrWillBeRawPtr<CCAffineTransform> getParentToNodeTransform();
    
    void pauseSchedulerAndActions();
    
    float getVertexZ();
    void setScale(float arg0, float arg1);
    void setScale(float arg0);
    
    ScriptValue getChildByTag(ScriptState* scriptState, int arg0);
    
    void setOrderOfArrival(unsigned int arg0);
    
    float getScaleY();
    
    float getScaleX();
    
    void cleanup();
    
    ScriptValue getComponent(ScriptState* scriptState, String arg0);
    
    PassRefPtrWillBeRawPtr<CCSize> getContentSize();
    
    PassRefPtrWillBeRawPtr<CCRect> getBoundingBox();
    
    void draw();
    
    void transformAncestors();
    
    void setUserObject(CCObject* arg0);
    
    void registerScriptHandler(int arg0);
    void removeFromParent( bool arg0);
    void removeFromParent();
    
    PassRefPtrWillBeRawPtr<CCPoint> convertTouchToNodeSpaceAR(CCTouch* arg0);
    
    void update(float arg0);
    
    void sortAllChildren();
    
    PassRefPtrWillBeRawPtr<CCAffineTransform> getWorldToNodeTransform();
    
    float getScale();
    
    ScriptValue getCamera(ScriptState* scriptState);
    
    void setTag(int arg0);
    
    void stopAction(ScriptValue& arg0);
    
    ScriptValue getActionManager(ScriptState* scriptState);
    
    static ScriptValue createInternal(ScriptState* scriptState);
    void onEnter() {}
    void onEnterTransitionDidFinish() {}
    void onExit() {}
    void onExitTransitionDidStart() {}

    void setOnExitEventCallback(OnExitEventCallback* callback);
    void setOnEnterEventCallback(OnEnterEventCallback* callback);
    void setOnEnterTransitionDidFinishEventCallback(OnEnterTransitionDidFinishEventCallback* callback);
    void setOnExitTransitionDidStartEventCallback(OnExitTransitionDidStartEventCallback* callback);

    void setTouchBeganCallback(OnTouchCallback* callback);
    void setTouchMovedCallback(OnTouchCallback* callback);
    void setTouchEndedCallback(OnTouchCallback* callback);
    void setTouchCancelledCallback(OnTouchCallback* callback);
    void setTouchesBeganCallback(OnTouchesCallback* callback);
    void setTouchesMovedCallback(OnTouchesCallback* callback);
    void setTouchesEndedCallback(OnTouchesCallback* callback);
    void setTouchesCancelledCallback(OnTouchesCallback* callback);
    
    void executeOnEnterEvent();
    void executeOnExitEvent();
    void executeOnEnterTransitionDidFinishEvent();
    void executeOnExitTransitionDidStartEvent();

    int executeOnTouchEvent(int eventType, cocos2d::CCTouch *pTouch);
    int executeOnTouchesEvent(int eventType, TouchHeapVector touches);

    void setAnchorPointInternal(CCPoint* p);
    void setContentSizeInternal(CCSize* size);
   
    cocos2d::CCNode* getCocos2dImpl();
    ~CCNode();
    void setPosition( const ScriptValue& arg0);
protected:
    Persistent<OnEnterEventCallback> m_onEnter_callback;
    Persistent<OnExitEventCallback> m_onExit_callback;
    Persistent<OnEnterTransitionDidFinishEventCallback> m_onEnterTransitionDidFinish_callback;
    Persistent<OnExitTransitionDidStartEventCallback> m_onExitTransitionDidStart_callback;
    Persistent<OnTouchCallback> m_onTouchBegan_callback;
    Persistent<OnTouchCallback> m_onTouchMoved_callback;
    Persistent<OnTouchCallback> m_onTouchEnded_callback;
    Persistent<OnTouchCallback> m_onTouchCancelled_callback;
    Persistent<OnTouchesCallback> m_onTouchesBegan_callback;
    Persistent<OnTouchesCallback> m_onTouchesMoved_callback;
    Persistent<OnTouchesCallback> m_onTouchesEnded_callback;
    Persistent<OnTouchesCallback> m_onTouchesCancelled_callback;

public:
    CCNode ();
};

DEFINE_TYPE_CASTS(CCNode, CCObject, pCCNode, true, true);

} // namespace blink

#endif
