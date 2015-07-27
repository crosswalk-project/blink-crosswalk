// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __SCRIPTING_CORE_H__
#define __SCRIPTING_CORE_H__

#include "core/cocos2d/cocos2dx/include/cocos2d.h"
#include "platform/heap/Handle.h"
#include "platform/heap/Handle.h"
#include "bindings/core/v8/ScriptWrappable.h"
#include "bindings/core/v8/V8Binding.h"
#include "CCObject.h"
#include "bindings/core/v8/ScopedPersistent.h"

using namespace cocos2d;
using namespace std;

NS_CC_BEGIN
class ScriptingCore : public CCScriptEngineProtocol
{
    ScriptingCore();
public:
    ~ScriptingCore();

    static ScriptingCore *getInstance() {
        static ScriptingCore* pInstance = NULL;
        if (pInstance == NULL) {
            pInstance = new ScriptingCore();
        }
        return pInstance;
    };

    virtual ccScriptType getScriptType() { return kScriptTypeJavascript; };

    /**
     @brief Remove CCObject from lua state
     @param object to remove
     */
    virtual void removeScriptObjectByCCObject(CCObject* pObj);

    /**
     @brief Execute script code contained in the given string.
     @param codes holding the valid script code that should be executed.
     @return 0 if the string is excuted correctly.
     @return other if the string is excuted wrongly.
     */
    virtual int executeString(const char* codes) { return 0; }

    /**
     @brief Execute a script file.
     @param filename String object holding the filename of the script file that is to be executed
     */
    virtual  int executeScriptFile(const char* filename) { return 0; }

    /**
     @brief Execute a scripted global function.
     @brief The function should not take any parameters and should return an integer.
     @param functionName String object holding the name of the function, in the global script environment, that is to be executed.
     @return The integer value returned from the script function.
     */
    virtual int executeGlobalFunction(const char* functionName) { return 0; }

    virtual int executeNodeEvent(CCNode* pNode, int nAction);
    virtual int executeMenuItemEvent(CCMenuItem* pMenuItem);
    virtual int executeNotificationEvent(CCNotificationCenter* pNotificationCenter, const char* pszName);
    virtual int executeCallFuncActionEvent(CCCallFunc* pAction, CCObject* pTarget = NULL);
    virtual int executeSchedule(int nHandler, float dt, CCNode* pNode = NULL);
    virtual int executeLayerTouchesEvent(CCLayer* pLayer, int eventType, CCSet *pTouches);
    virtual int executeLayerTouchEvent(CCLayer* pLayer, int eventType, CCTouch *pTouch);
    virtual int executeAccelerometerEvent(CCLayer* pLayer, CCAcceleration* pAccelerationValue);
    virtual int executeLayerKeypadEvent(CCLayer* pLayer, int eventType);
    virtual int executeEvent(int nHandler, const char* pEventName, CCObject* pEventSource, const char* pEventSourceClassName);
    virtual int executeSchedulerUpdate(void* crosswalkImpl, float dt);
    virtual int executeSchedulerPause(void* crosswalkImpl, void* node);
    virtual int executeSchedulerResume(void* crosswalkImpl, void* node);
    virtual int executeSchedulerUnschedule(void* crosswalkImpl, void* node);

    virtual void executeCustomTouchEvent(int eventType, CCTouch *pTouch, bool& result, CCNode* obj);
    virtual void executeCustomTouchEvent(int eventType, CCTouch *pTouch, CCNode* obj);
    virtual void executeCustomTouchesEvent(int eventType, CCSet *pTouches, CCNode* obj);

    virtual bool handleAssert(const char *msg) { return false; }
    
    virtual bool parseConfig(ConfigType type, const std::string& str);

    virtual void holdHeapObject(unsigned int id, CCObject* cocosObj, void* p);
    virtual void releaseHeapObject(unsigned int id, void* crosswalkImpl);

    virtual void executeScrollDidScroll(CCObject* obj);
    virtual void executeScrollDidZoom(CCObject* obj);

    virtual void executeTableCellTouched(CCObject* obj, CCObject* cell);
    virtual void executeTableCellHighlight(CCObject* obj, CCObject* cell);
    virtual void executeTableCellUnhighlight(CCObject* obj, CCObject* cell);
    virtual void executeTableCellWillRecycle(CCObject* obj, CCObject* cell);
    virtual CCSize executeTableCellSizeForIndex(CCObject *table, unsigned int idx);
    virtual extension::CCTableViewCell* executeTableCellAtIndex(CCObject *table, unsigned int idx);
    virtual unsigned int executeNumberOfCellsInTableView(CCObject *table);

    v8::Handle<v8::Value> getBindingWrapper(blink::ScriptState* scriptState, cocos2d::CCObject* obj);
    private:
    //WillBePersistentHeapHashMap<unsigned int, RefPtrWillBeRawPtr<blink::CCObject>> m_heap_obj_map;
};

NS_CC_END

#endif /* __SCRIPTING_CORE_H__ */
