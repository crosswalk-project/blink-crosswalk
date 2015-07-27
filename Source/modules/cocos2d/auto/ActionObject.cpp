// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/ActionObject.h"

namespace blink {

    void ActionObject::setCurrentTime(float arg0) {

        ((cocos2d::extension::ActionObject*)m_cocos2d_impl)->setCurrentTime((float)(arg0));
    }

    void ActionObject::pause() {

        ((cocos2d::extension::ActionObject*)m_cocos2d_impl)->pause();
    }

    void ActionObject::setName(String arg0) {

        ((cocos2d::extension::ActionObject*)m_cocos2d_impl)->setName((char*)(arg0.utf8().data()));
    }

    void ActionObject::setUnitTime(float arg0) {

        ((cocos2d::extension::ActionObject*)m_cocos2d_impl)->setUnitTime((float)(arg0));
    }

    float ActionObject::getTotalTime() {

        float ret_impl = ((cocos2d::extension::ActionObject*)m_cocos2d_impl)->getTotalTime();
        
        
        return ret_impl;
    }

    String ActionObject::getName() {

        const String ret_impl = ((cocos2d::extension::ActionObject*)m_cocos2d_impl)->getName();
        
        
        return ret_impl;
    }

    void ActionObject::stop() {

        ((cocos2d::extension::ActionObject*)m_cocos2d_impl)->stop();
    }

    void ActionObject::play(CCCallFunc* arg0) {
        cocos2d::CCCallFunc* _arg0 = (cocos2d::CCCallFunc*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::ActionObject*)m_cocos2d_impl)->play( _arg0);
    }

    void ActionObject::play() {

        ((cocos2d::extension::ActionObject*)m_cocos2d_impl)->play();
    }

    float ActionObject::getCurrentTime() {

        float ret_impl = ((cocos2d::extension::ActionObject*)m_cocos2d_impl)->getCurrentTime();
        
        
        return ret_impl;
    }

    void ActionObject::removeActionNode(PassRefPtr<Uint8Array> arg0) {

        ((cocos2d::extension::ActionObject*)m_cocos2d_impl)->removeActionNode((cocos2d::extension::ActionNode*)(arg0.get()->data()));
    }

    bool ActionObject::getLoop() {

        bool ret_impl = ((cocos2d::extension::ActionObject*)m_cocos2d_impl)->getLoop();
        
        
        return ret_impl;
    }

    void ActionObject::addActionNode(PassRefPtr<Uint8Array> arg0) {

        ((cocos2d::extension::ActionObject*)m_cocos2d_impl)->addActionNode((cocos2d::extension::ActionNode*)(arg0.get()->data()));
    }

    float ActionObject::getUnitTime() {

        float ret_impl = ((cocos2d::extension::ActionObject*)m_cocos2d_impl)->getUnitTime();
        
        
        return ret_impl;
    }

    bool ActionObject::isPlaying() {

        bool ret_impl = ((cocos2d::extension::ActionObject*)m_cocos2d_impl)->isPlaying();
        
        
        return ret_impl;
    }

    void ActionObject::updateToFrameByTime(float arg0) {

        ((cocos2d::extension::ActionObject*)m_cocos2d_impl)->updateToFrameByTime((float)(arg0));
    }

    void ActionObject::setLoop(bool arg0) {

        ((cocos2d::extension::ActionObject*)m_cocos2d_impl)->setLoop((bool)(arg0));
    }

    void ActionObject::simulationActionUpdate(float arg0) {

        ((cocos2d::extension::ActionObject*)m_cocos2d_impl)->simulationActionUpdate((float)(arg0));
    }
    cocos2d::extension::ActionObject* ActionObject::getCocos2dImpl() {
        return (cocos2d::extension::ActionObject*)m_cocos2d_impl;
    }


    ActionObject::ActionObject() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<ActionObject> ActionObject::create()
    {
        RefPtrWillBeRawPtr<ActionObject> ret = adoptRefWillBeNoop(new ActionObject());
        cocos2d::extension::ActionObject* impl = new cocos2d::extension::ActionObject();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    ActionObject::~ActionObject() {
    }
} // namespace blink
