// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"
#include "bindings/modules/v8/V8CCScheduler.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/manual/CCScheduler.h"
#include "modules/cocos2d/events/OnScheduleUpdateCallback.h"
#include "modules/cocos2d/events/OnSchedulePauseCallback.h"
#include "modules/cocos2d/events/OnScheduleResumeCallback.h"
#include "modules/cocos2d/events/OnScheduleUnscheduleCallback.h"

namespace blink {

    void CCScheduler::setTimeScale(float arg0) {

        ((cocos2d::CCScheduler*)m_cocos2d_impl)->setTimeScale((float)(arg0));
    }

    float CCScheduler::getTimeScale() {

        float ret_impl = ((cocos2d::CCScheduler*)m_cocos2d_impl)->getTimeScale();
        
        
        return ret_impl;
    }
    cocos2d::CCScheduler* CCScheduler::getCocos2dImpl() {
        return (cocos2d::CCScheduler*)m_cocos2d_impl;
    }


    CCScheduler::CCScheduler() {
        m_cocos2d_impl = NULL;
        m_update_callback = nullptr;
    }

    PassRefPtrWillBeRawPtr<CCScheduler> CCScheduler::create()
    {
        RefPtrWillBeRawPtr<CCScheduler> ret = adoptRefWillBeNoop(new CCScheduler());
        cocos2d::CCScheduler* impl = cocos2d::CCDirector::sharedDirector()->getScheduler();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCScheduler::~CCScheduler() {
        m_update_callback = nullptr;
        m_pause_callback = nullptr;
        m_resume_callback = nullptr;
        m_unschedule_callback = nullptr;
    }

    void CCScheduler::setUpdateCallback(OnScheduleUpdateCallback* callback) {
        m_update_callback = callback;
    }

    void CCScheduler::setResumeCallback(OnScheduleResumeCallback* callback) {
        m_resume_callback = callback;
    }

    void CCScheduler::setPauseCallback(OnSchedulePauseCallback* callback) {
        m_pause_callback = callback;
    }

    void CCScheduler::setUnscheduleCallback(OnScheduleUnscheduleCallback* callback) {
        m_unschedule_callback = callback;
    }

    void CCScheduler::executeSchedulerUpdate(float dt) {
        if (m_update_callback) {
            m_update_callback->handleEvent(dt);
        }
    }

    void CCScheduler::executeSchedulerPause(CCNode* node) {
        if (m_pause_callback) {
            m_pause_callback->handleEvent(node);
    }
    }

    void CCScheduler::executeSchedulerResume(CCNode* node) {
        if (m_resume_callback) {
            m_resume_callback->handleEvent(node);
        }
    }

    void CCScheduler::executeSchedulerUnschedule(CCNode* node) {
        if (m_unschedule_callback) {
            m_unschedule_callback->handleEvent(node);
        }
    }

} // namespace blink
