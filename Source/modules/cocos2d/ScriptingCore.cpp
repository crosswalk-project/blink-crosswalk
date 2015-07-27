// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "ScriptingCore.h"
#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"

#include "ScriptingCore.h"

#include <android/log.h>

#define  LOG_TAG    "ScriptingCore.cpp"
#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)

ScriptingCore::ScriptingCore()
{
}

ScriptingCore::~ScriptingCore()
{
}

void ScriptingCore::removeScriptObjectByCCObject(CCObject* pObj)
{
    blink::CCObject* crosswalkObj = (blink::CCObject*)(pObj->getCrosswalkImpl());
    if (crosswalkObj != NULL) {
        crosswalkObj->m_cocos2d_impl = NULL;
    }
}

int ScriptingCore::executeNodeEvent(CCNode* pNode, int nAction)
{
    if (!pNode) return 0;
    blink::CCNode* crosswalkImpl = (blink::CCNode*)(pNode->getCrosswalkImpl());
    if (!crosswalkImpl) return 0;

    if (nAction == kCCNodeOnEnter) {
        crosswalkImpl->executeOnEnterEvent();
        //resumeSchedulesAndActions(pNode);
    } else if(nAction == kCCNodeOnExit) {
        crosswalkImpl->executeOnExitEvent();
        //pauseSchedulesAndActions(pNode);
    } else if(nAction == kCCNodeOnEnterTransitionDidFinish) {
        crosswalkImpl->executeOnEnterTransitionDidFinishEvent();
    } else if(nAction == kCCNodeOnExitTransitionDidStart) {
        crosswalkImpl->executeOnExitTransitionDidStartEvent();
    } 
    return 0;
}

int ScriptingCore::executeSchedulerUpdate(void* _crosswalkImpl, float dt) {
    if (!_crosswalkImpl) return 0;
    blink::CCScheduler* crosswalkImpl = (blink::CCScheduler*)_crosswalkImpl;
    crosswalkImpl->executeSchedulerUpdate(dt);
    return 0;
}

int ScriptingCore::executeSchedulerPause(void* _crosswalkImpl, void* node) {
    if (!_crosswalkImpl) return 0;
    if (!node) return 0;
    blink::CCScheduler* crosswalkImpl = (blink::CCScheduler*)_crosswalkImpl;
    blink::CCNode* nodeCrosswalk = (blink::CCNode*) node;
    crosswalkImpl->executeSchedulerPause(nodeCrosswalk);
    return 0;
}

int ScriptingCore::executeSchedulerResume(void* _crosswalkImpl, void* node) {
    if (!_crosswalkImpl) return 0;
    if (!node) return 0;
    blink::CCScheduler* crosswalkImpl = (blink::CCScheduler*)_crosswalkImpl;
    blink::CCNode* nodeCrosswalk = (blink::CCNode*) node;
    crosswalkImpl->executeSchedulerResume(nodeCrosswalk);
    return 0;
}

int ScriptingCore::executeSchedulerUnschedule(void* _crosswalkImpl, void* node) {
    if (!_crosswalkImpl) return 0;
    if (!node) return 0;
    blink::CCScheduler* crosswalkImpl = (blink::CCScheduler*)_crosswalkImpl;
    blink::CCNode* nodeCrosswalk = (blink::CCNode*) node;
    crosswalkImpl->executeSchedulerUnschedule(nodeCrosswalk);
    return 0;
}

int ScriptingCore::executeMenuItemEvent(CCMenuItem* pMenuItem)
{
    if (!pMenuItem) return 0;
    blink::CCMenuItem* crosswalkImpl = (blink::CCMenuItem*)(pMenuItem->getCrosswalkImpl());
    crosswalkImpl->executeMenuItemEvent();
    return 0;
}

int ScriptingCore::executeNotificationEvent(CCNotificationCenter* pNotificationCenter, const char* pszName)
{
    return 1;
}

int ScriptingCore::executeCallFuncActionEvent(CCCallFunc* pAction, CCObject* pTarget/* = NULL*/)
{
    if (!pAction) return 0;
    blink::CCCallFunc* CCCallFuncCrosswalkImpl = (blink::CCCallFunc*)(pAction->getCrosswalkImpl());
    if (!CCCallFuncCrosswalkImpl) return 0;

    if (!pTarget) return 0;
    // The pTarget should be CCNode here.
    blink::CCNode* CCNodeCrosswalkImpl = (blink::CCNode*)(((CCNode*)pTarget)->getCrosswalkImpl());
    if (!CCNodeCrosswalkImpl) return 0;
    
    CCCallFuncCrosswalkImpl->executeCallFuncActionEvent(CCNodeCrosswalkImpl);
    
    return 0;
}

int ScriptingCore::executeSchedule(int nHandler, float dt, CCNode* pNode/* = NULL*/)
{
    return 0;
}

int ScriptingCore::executeLayerTouchesEvent(CCLayer* pLayer, int eventType, CCSet *pTouches)
{
    if (!pLayer) return 0;
    blink::CCLayer* CCLayerCrosswalkImpl = (blink::CCLayer*)(pLayer->getCrosswalkImpl());
    if (!CCLayerCrosswalkImpl) return 0;

    blink::TouchHeapVector touches;
    RefPtrWillBeRawPtr<blink::CCTouch> crosswalkImpl;

    for (CCSetIterator it = pTouches->begin(); it != pTouches->end(); ++it) {
        CCTouch* touch = (CCTouch*)(*it);
        if (!touch) return 0;
        crosswalkImpl = new blink::CCTouch();
        //crosswalkImpl->setTouchInfo(touch->getID(), touch->getLocation().x, touch->getLocation().y);
        crosswalkImpl->setCocos2dImpl(touch);
        touches.append(crosswalkImpl);
    }
    int result = CCLayerCrosswalkImpl->executeOnTouchesEvent(eventType, touches);
    touches.clear(); 
    return result;
}

int ScriptingCore::executeLayerTouchEvent(CCLayer* pLayer, int eventType, CCTouch *pTouch)
{
    if (!pLayer) return 0;
    blink::CCLayer* CCLayerCrosswalkImpl = (blink::CCLayer*)(pLayer->getCrosswalkImpl());
    if (!CCLayerCrosswalkImpl) return 0; 

    if (!pTouch) return 0;

    return CCLayerCrosswalkImpl->executeOnTouchEvent(eventType, pTouch);
}

int ScriptingCore::executeAccelerometerEvent(CCLayer *pLayer, CCAcceleration *pAccelerationValue) {
    return 0;
}

int ScriptingCore::executeLayerKeypadEvent(CCLayer* pLayer, int eventType)
{
    return 0;
}

bool ScriptingCore::parseConfig(ConfigType type, const std::string& str)
{
    return false;
}

int ScriptingCore::executeEvent(int nHandler, const char* pEventName, CCObject* pEventSource = NULL, const char* pEventSourceClassName = NULL)
{
    return 0;
}

void ScriptingCore::executeCustomTouchesEvent(int eventType, CCSet *pTouches, CCNode* obj)
{
    if (!obj) return;
    blink::CCNode* node = (blink::CCNode*)(obj->getCrosswalkImpl());

    blink::TouchHeapVector touches;
    RefPtrWillBeRawPtr<blink::CCTouch> crosswalkImpl; 
    for (CCSetIterator it = pTouches->begin(); it != pTouches->end(); ++it) {
        CCTouch* touch = (CCTouch*)(*it);
        if (!touch) return;
        crosswalkImpl = new blink::CCTouch();
        crosswalkImpl->setCocos2dImpl(touch);
        touches.append(crosswalkImpl);
    }
    node->executeOnTouchesEvent(eventType, touches);
    touches.clear();
}

void ScriptingCore::executeCustomTouchEvent(int eventType, CCTouch *pTouch, bool& result, CCNode* obj) {
    if (!obj || !pTouch) return;
    blink::CCNode* node = (blink::CCNode*)(obj->getCrosswalkImpl());
    result = node->executeOnTouchEvent(eventType, pTouch);
}

void ScriptingCore::executeCustomTouchEvent(int eventType, CCTouch *pTouch, CCNode* obj) {
    if (!obj || !pTouch) return;
    blink::CCNode* node = (blink::CCNode*)(obj->getCrosswalkImpl());
    node->executeOnTouchEvent(eventType, pTouch);
}

void ScriptingCore::executeScrollDidScroll(CCObject* obj) {
    if (obj == NULL) return;
    blink::CCScrollView* view = (blink::CCScrollView*)(obj->getCrosswalkImpl());
    view->executeDidScrollEvent();
}

void ScriptingCore::executeScrollDidZoom(CCObject* obj) {
    if (obj == NULL) return;
    blink::CCScrollView* view = (blink::CCScrollView*)(obj->getCrosswalkImpl());
    view->executeDidZoomEvent();
}

void ScriptingCore::executeTableCellTouched(CCObject* obj, CCObject* cell) {
    if (obj == NULL) return;
    if (cell == NULL) return;
    blink::CCTableView* tableView = (blink::CCTableView*)(obj->getCrosswalkImpl());
    blink::CCTableViewCell* tableCell = (blink::CCTableViewCell*)(cell->getCrosswalkImpl());
    tableView->executeTableCellTouched(tableCell);
}

void ScriptingCore::executeTableCellHighlight(CCObject* obj, CCObject* cell) {
    if (obj == NULL) return;
    if (cell == NULL) return;
    blink::CCTableView* tableView = (blink::CCTableView*)(obj->getCrosswalkImpl());
    blink::CCTableViewCell* tableCell = (blink::CCTableViewCell*)(cell->getCrosswalkImpl());
    tableView->executeTableCellHighlight(tableCell);
}

void ScriptingCore::executeTableCellUnhighlight(CCObject* obj, CCObject* cell) {
    if (obj == NULL) return;
    if (cell == NULL) return;
    blink::CCTableView* tableView = (blink::CCTableView*)(obj->getCrosswalkImpl());
    blink::CCTableViewCell* tableCell = (blink::CCTableViewCell*)(cell->getCrosswalkImpl());
    tableView->executeTableCellUnhighlight(tableCell);
}

void ScriptingCore::executeTableCellWillRecycle(CCObject* obj, CCObject* cell) {
    if (obj == NULL) return;
    if (cell == NULL) return;
    blink::CCTableView* tableView = (blink::CCTableView*)(obj->getCrosswalkImpl());
    blink::CCTableViewCell* tableCell = (blink::CCTableViewCell*)(cell->getCrosswalkImpl());
    tableView->executeTableCellWillRecycle(tableCell);
}

CCSize ScriptingCore::executeTableCellSizeForIndex(CCObject *obj, unsigned int idx) {
    if (obj == NULL) return CCSize(0, 0);
    blink::CCTableView* tableView = (blink::CCTableView*)(obj->getCrosswalkImpl());
    return tableView->executeTableCellSizeForIndex(idx);
}

extension::CCTableViewCell* ScriptingCore::executeTableCellAtIndex(CCObject *obj, unsigned int idx) {
    if (obj == NULL) return NULL;
    blink::CCTableView* tableView = (blink::CCTableView*)(obj->getCrosswalkImpl());
    return tableView->executeTableCellAtIndex(idx);
}

unsigned int ScriptingCore::executeNumberOfCellsInTableView(CCObject *obj) {
    if (obj == NULL) return 0;
    blink::CCTableView* tableView = (blink::CCTableView*)(obj->getCrosswalkImpl());
    return tableView->executeNumberOfCellsInTableView();
}

void ScriptingCore::holdHeapObject(unsigned int id, CCObject* cocosObj, void* p) {
    /*
    if (p == NULL) {
        return;
    }
    blink::CCObject* obj = (blink::CCObject*)p;
    if (m_heap_obj_map.contains(id)) {
        blink::CCObject* tmp = m_heap_obj_map.get(id);
        //tmp->setCocos2dImpl(NULL);
        tmp->deref();
        m_heap_obj_map.remove(id);
        LOGD("guangzhen: holdHeap contain: %d \t %p %d", id, tmp, tmp->refCount());
    }
    obj->ref();
    m_heap_obj_map.add(id, obj);
    LOGD("guangzhen: holdHeap: %d \t %p %d", id, p, obj->refCount());
    */
    if (p == NULL) {
        return;
    }
    blink::CCObject* obj = (blink::CCObject*)p;
    blink::CCObject* preObj = (blink::CCObject*)cocosObj->getCrosswalkImpl();
    if (preObj != NULL) {
        if (preObj->refCount() > 0) {
            preObj->deref();
        } else {
            // Do nothing, JS has already been garbage collected.
        }
    }
    obj->ref();
}

void ScriptingCore::releaseHeapObject(unsigned int id, void* crosswalkImpl) {
    /*
    if (m_heap_obj_map.contains(id)) {
        blink::CCObject* obj = m_heap_obj_map.get(id);
        //obj->setCocos2dImpl(NULL);
        obj->deref();
        m_heap_obj_map.remove(id);
        LOGD("guangzhen: releaseHeap: %d \t %p %d", id, obj, obj->refCount());
    } else {
        LOGD("guangzhen: releaseHeap Error: %d", id);
    }
    */
    blink::CCObject* preObj = (blink::CCObject*)crosswalkImpl;
    if (preObj != NULL) {
        if (preObj->m_cocos2d_impl != NULL) {
            preObj->m_cocos2d_impl->release();
        }
        preObj->m_cocos2d_impl = NULL;

        if (preObj->refCount() > 0) {
            preObj->deref();
        } else {
            // Do nothing, JS has already been garbage collected.
        }
    }
}

#define CREATE_WRAPPER(__class__) \
        PassRefPtrWillBeRawPtr<blink::__class__> ret = adoptRefWillBeNoop(new blink::__class__()); \
        ret->setCocos2dImpl((cocos2d::__class__*)obj); \
        return toV8(ret, scriptState->context()->Global(), isolate); 

#define CREATE_WRAPPER_EXTENSION(__class__) \
        PassRefPtrWillBeRawPtr<blink::__class__> ret = adoptRefWillBeNoop(new blink::__class__()); \
        ret->setCocos2dImpl((cocos2d::extension::__class__*)obj); \
        return toV8(ret, scriptState->context()->Global(), isolate); 

v8::Handle<v8::Value> ScriptingCore::getBindingWrapper(blink::ScriptState* scriptState, cocos2d::CCObject* obj) {
    v8::Isolate* isolate = scriptState->isolate();
    if (obj == NULL) {
        return v8::Null(isolate);
    }
    const char* name = obj->getTypeName(obj);
    String str = name;
    if (str == "N7cocos2d17CCSpriteBatchNodeE") {
        CREATE_WRAPPER(CCSpriteBatchNode)
    } else if (str == "N7cocos2d7CCLayerE") {
        CREATE_WRAPPER(CCLayer)
    } else if (str == "N7cocos2d10CCTMXLayerE") {
        CREATE_WRAPPER(CCTMXLayer)
    } else if (str == "N7cocos2d8CCSpriteE") {
        CREATE_WRAPPER(CCSprite)
    } else if (str == "N7cocos2d13CCSpriteFrameE") {
        CREATE_WRAPPER(CCSpriteFrame)
    } else if (str == "N7cocos2d10CCSequenceE") {
        CREATE_WRAPPER(CCSequence)
    } else if (str == "N7cocos2d9CCScaleByE") {
        CREATE_WRAPPER(CCScaleBy)
    } else if (str == "N7cocos2d7CCBlinkE") {
        CREATE_WRAPPER(CCBlink)
    } else if (str == "N7cocos2d8CCTintByE") {
        CREATE_WRAPPER(CCTintBy)
    } else if (str == "N7cocos2d8CCFadeInE") {
        CREATE_WRAPPER(CCFadeIn)
    } else if (str == "N7cocos2d9CCFadeOutE") {
        CREATE_WRAPPER(CCFadeOut)
    } else if (str == "N7cocos2d9CCAnimateE") {
        CREATE_WRAPPER(CCAnimate)
    } else if (str == "N7cocos2d11CCDelayTimeE") {
        CREATE_WRAPPER(CCDelayTime)
    } else if (str == "N7cocos2d10CCRotateByE") {
        CREATE_WRAPPER(CCRotateBy)
    } else if (str == "N7cocos2d8CCMoveByE") {
        CREATE_WRAPPER(CCMoveBy)
    } else if (str == "N7cocos2d10CCRotateToE") {
        CREATE_WRAPPER(CCRotateTo)
    } else if (str == "N7cocos2d15CCActionManagerE") {
        CREATE_WRAPPER(CCActionManager)
    } else if (str == "N7cocos2d8CCSkewByE") {
        CREATE_WRAPPER(CCSkewBy)
    } else if (str == "N7cocos2d8CCJumpByE") {
        CREATE_WRAPPER(CCJumpBy)
    } else if (str == "N7cocos2d10CCBezierByE") {
        CREATE_WRAPPER(CCBezierBy)
    } else if (str == "N7cocos2d10CCBezierToE") {
        CREATE_WRAPPER(CCBezierTo)
    } else if (str == "N7cocos2d12CCProgressToE") {
        CREATE_WRAPPER(CCProgressTo)
    } else if (str == "N7cocos2d15CCRepeatForeverE") {
        CREATE_WRAPPER(CCRepeatForever)
    } else if (str == "N7cocos2d7CCSpeedE") {
        CREATE_WRAPPER(CCSpeed)
    } else if (str == "N7cocos2d8CCEaseInE") {
        CREATE_WRAPPER(CCEaseIn)
    } else if (str == "N7cocos2d9CCEaseOutE") {
        CREATE_WRAPPER(CCEaseOut)
    } else if (str == "N7cocos2d11CCEaseInOutE") {
        CREATE_WRAPPER(CCEaseInOut)
    } else if (str == "N7cocos2d20CCEaseExponentialOutE") {
        CREATE_WRAPPER(CCEaseExponentialOut)
    } else if (str == "N7cocos2d19CCEaseExponentialInE") {
        CREATE_WRAPPER(CCEaseExponentialIn)
    } else if (str == "N7cocos2d22CCEaseExponentialInOutE") {
        CREATE_WRAPPER(CCEaseExponentialInOut)
    } else if (str == "N7cocos2d13CCEaseSineOutE") {
        CREATE_WRAPPER(CCEaseSineOut)
    } else if (str == "N7cocos2d12CCEaseSineInE") {
        CREATE_WRAPPER(CCEaseSineIn)
    } else if (str == "N7cocos2d15CCEaseSineInOutE") {
        CREATE_WRAPPER(CCEaseSineInOut)
    } else if (str == "N7cocos2d15CCEaseBounceOutE") {
        CREATE_WRAPPER(CCEaseBounceOut)
    } else if (str == "N7cocos2d14CCEaseBounceInE") {
        CREATE_WRAPPER(CCEaseBounceIn)
    } else if (str == "N7cocos2d17CCEaseBounceInOutE") {
        CREATE_WRAPPER(CCEaseBounceInOut)
    } else if (str == "N7cocos2d13CCEaseBackOutE") {
        CREATE_WRAPPER(CCEaseBackOut)
    } else if (str == "N7cocos2d12CCEaseBackInE") {
        CREATE_WRAPPER(CCEaseBackIn)
    } else if (str == "N7cocos2d15CCEaseBackInOutE") {
        CREATE_WRAPPER(CCEaseBackInOut)
    } else if (str == "N7cocos2d16CCEaseElasticOutE") {
        CREATE_WRAPPER(CCEaseElasticOut)
    } else if (str == "N7cocos2d15CCEaseElasticInE") {
        CREATE_WRAPPER(CCEaseElasticIn)
    } else if (str == "N7cocos2d18CCEaseElasticInOutE") {
        CREATE_WRAPPER(CCEaseElasticInOut)
    } else if (str == "N7cocos2d11CCAnimationE") {
        CREATE_WRAPPER(CCAnimation)
    } else if (str == "N7cocos2d18CCCardinalSplineByE") {
        CREATE_WRAPPER(CCCardinalSplineBy)
    } else if (str == "N7cocos2d18CCCardinalSplineToE") {
        CREATE_WRAPPER(CCCardinalSplineTo)
    } else if (str == "N7cocos2d16CCTargetedActionE") {
        CREATE_WRAPPER(CCTargetedAction)
    } else if (str == "N7cocos2d13CCReverseTimeE") {
        CREATE_WRAPPER(CCActionInterval)
    } else if (str == "N7cocos2d16CCAnimationFrameE") {
        CREATE_WRAPPER(CCAnimationFrame)
    } else if (str == "N7cocos2d9CCScaleToE") {
        CREATE_WRAPPER(CCScaleTo)
    } else if (str == "N7cocos2d8CCMoveToE") {
        CREATE_WRAPPER(CCMoveTo)
    } else if (str == "N7cocos2d20CCParticleSystemQuadE") {
        CREATE_WRAPPER(CCParticleSystemQuad)
    } else if (str == "N7cocos2d9extension19CCArmatureAnimationE") {
        CREATE_WRAPPER_EXTENSION(CCArmatureAnimation)
    } else if (str == "N7cocos2d8CCFadeToE") {
        CREATE_WRAPPER(CCFadeTo)
    } else if (str == "N7cocos2d9extension10CCArmatureE") {
        CREATE_WRAPPER_EXTENSION(CCArmature)
    } else if (str == "N7cocos2d7CCArrayE") {
        CREATE_WRAPPER(CCArray)
    } else if (str == "N7cocos2d18CCSpriteFrameCacheE") {
        CREATE_WRAPPER(CCSpriteFrameCache)
    } else if (str == "N7cocos2d14CCTextureCacheE") {
        CREATE_WRAPPER(CCTextureCache)
    } else if (str == "N7cocos2d12CCLayerColorE") {
        CREATE_WRAPPER(CCLayerColor)
    } else if (str == "N7cocos2d10CCLabelTTFE") {
        CREATE_WRAPPER(CCLabelTTF)
    } else if (str == "N7cocos2d9extension21CCArmatureDataManagerE") {
        CREATE_WRAPPER_EXTENSION(CCArmatureDataManager)
    } else if (str == "N7cocos2d11CCTexture2DE") {
        CREATE_WRAPPER(CCTexture2D)
    } else if (str == "N7cocos2d13CCTMXTiledMapE") {
        CREATE_WRAPPER(CCTMXTiledMap)
    } else if (str == "N7cocos2d16CCTMXObjectGroupE") {
        CREATE_WRAPPER(CCTMXObjectGroup)
    } else if (str == "N7cocos2d12CCLabelAtlasE") {
        CREATE_WRAPPER(CCLabelAtlas)
    } else if (str == "N7cocos2d15CCProgressTimerE") {
        CREATE_WRAPPER(CCProgressTimer)
    } else if (str == "N7cocos2d9extension14CCScale9SpriteE") {
        CREATE_WRAPPER_EXTENSION(CCScale9Sprite)
    } else if (str == "N7cocos2d12CCDictionaryE") {
        CREATE_WRAPPER(CCDictionary)
    } else if (str == "N7cocos2d10CCDrawNodeE") {
        CREATE_WRAPPER(CCDrawNode)
    } else if (str == "N7cocos2d16CCAnimationCacheE") {
        CREATE_WRAPPER(CCAnimationCache)
    } else if (str == "N7cocos2d8CCTintToE") {
        CREATE_WRAPPER(CCTintTo)
    } else if (str == "N7cocos2d6CCNodeE") {
        CREATE_WRAPPER(CCNode)
    } else if (str == "N7cocos2d8CCRepeatE") {
        CREATE_WRAPPER(CCRepeat)
    } else if (str == "N7cocos2d16CCProgressFromToE") {
        CREATE_WRAPPER(CCProgressFromTo)
    } else if (str == "N7cocos2d8CCJumpToE") {
        CREATE_WRAPPER(CCJumpTo)
    }
    else {
        //LOGD("getBindingWrapper2: No wrapper for %s", name);
    }
    return v8::Null(isolate);
}

