// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCScheduler_h__
#define __CCScheduler_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"

namespace cocos2d {
    class CCScheduler;
}

namespace blink {
class OnScheduleUpdateCallback;
class OnScheduleResumeCallback;
class OnSchedulePauseCallback;
class OnScheduleUnscheduleCallback;

class CCScheduler : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCScheduler> create();
    
    void setTimeScale(float arg0);
    
    float getTimeScale();

    void setUpdateCallback(OnScheduleUpdateCallback* callback);
    void setResumeCallback(OnScheduleResumeCallback* callback);
    void setPauseCallback(OnSchedulePauseCallback* callback);
    void setUnscheduleCallback(OnScheduleUnscheduleCallback* callback);

    void executeSchedulerUpdate(float dt);
    void executeSchedulerPause(CCNode* node);
    void executeSchedulerResume(CCNode* node);
    void executeSchedulerUnschedule(CCNode* node);

    cocos2d::CCScheduler* getCocos2dImpl();
    ~CCScheduler();
protected:
    Persistent<OnScheduleUpdateCallback> m_update_callback;
    Persistent<OnSchedulePauseCallback> m_pause_callback;
    Persistent<OnScheduleResumeCallback> m_resume_callback;
    Persistent<OnScheduleUnscheduleCallback> m_unschedule_callback;
public:
    CCScheduler ();
};

DEFINE_TYPE_CASTS(CCScheduler, CCObject, pCCScheduler, true, true);

} // namespace blink

#endif
