// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTMXObjectGroup.h"

namespace blink {

    void CCTMXObjectGroup::setPositionOffset(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTMXObjectGroup*)m_cocos2d_impl)->setPositionOffset( *_arg0);
    }

    ScriptValue CCTMXObjectGroup::objectNamed(ScriptState* scriptState, String arg0) {

        cocos2d::CCDictionary* ret_impl = ((cocos2d::CCTMXObjectGroup*)m_cocos2d_impl)->objectNamed((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCDictionary)
        
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCTMXObjectGroup::getPositionOffset() {

        const cocos2d::CCPoint ret_impl = ((cocos2d::CCTMXObjectGroup*)m_cocos2d_impl)->getPositionOffset();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    ScriptValue CCTMXObjectGroup::getObjects(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::CCTMXObjectGroup*)m_cocos2d_impl)->getObjects();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    void CCTMXObjectGroup::setGroupName(String arg0) {

        ((cocos2d::CCTMXObjectGroup*)m_cocos2d_impl)->setGroupName((char*)(arg0.utf8().data()));
    }

    ScriptValue CCTMXObjectGroup::getProperties(ScriptState* scriptState) {

        cocos2d::CCDictionary* ret_impl = ((cocos2d::CCTMXObjectGroup*)m_cocos2d_impl)->getProperties();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCDictionary)
        
    }

    String CCTMXObjectGroup::getGroupName() {

        const String ret_impl = ((cocos2d::CCTMXObjectGroup*)m_cocos2d_impl)->getGroupName();
        
        
        return ret_impl;
    }

    void CCTMXObjectGroup::setProperties(CCDictionary* arg0) {
        cocos2d::CCDictionary* _arg0 = (cocos2d::CCDictionary*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTMXObjectGroup*)m_cocos2d_impl)->setProperties( _arg0);
    }

    ScriptValue CCTMXObjectGroup::propertyNamed(ScriptState* scriptState, String arg0) {

        cocos2d::CCString* ret_impl = ((cocos2d::CCTMXObjectGroup*)m_cocos2d_impl)->propertyNamed((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCString)
        
    }

    void CCTMXObjectGroup::setObjects(CCArray* arg0) {
        cocos2d::CCArray* _arg0 = (cocos2d::CCArray*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTMXObjectGroup*)m_cocos2d_impl)->setObjects( _arg0);
    }
    cocos2d::CCTMXObjectGroup* CCTMXObjectGroup::getCocos2dImpl() {
        return (cocos2d::CCTMXObjectGroup*)m_cocos2d_impl;
    }


    CCTMXObjectGroup::CCTMXObjectGroup() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTMXObjectGroup> CCTMXObjectGroup::create()
    {
        RefPtrWillBeRawPtr<CCTMXObjectGroup> ret = adoptRefWillBeNoop(new CCTMXObjectGroup());
        cocos2d::CCTMXObjectGroup* impl = new cocos2d::CCTMXObjectGroup();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTMXObjectGroup::~CCTMXObjectGroup() {
    }
} // namespace blink
