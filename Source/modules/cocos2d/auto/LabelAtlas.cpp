// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/LabelAtlas.h"

namespace blink {

    ScriptValue LabelAtlas::getVirtualRenderer(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = ((cocos2d::gui::LabelAtlas*)m_cocos2d_impl)->getVirtualRenderer();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    String LabelAtlas::getStringValue() {

        const String ret_impl = ((cocos2d::gui::LabelAtlas*)m_cocos2d_impl)->getStringValue();
        
        
        return ret_impl;
    }

    String LabelAtlas::getDescription() {

        String ret_impl = String(((cocos2d::gui::LabelAtlas*)m_cocos2d_impl)->getDescription().c_str());
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCSize> LabelAtlas::getContentSize() {

        const cocos2d::CCSize ret_impl = ((cocos2d::gui::LabelAtlas*)m_cocos2d_impl)->getContentSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void LabelAtlas::setProperty(String arg0_wrapper, String arg1_wrapper, int arg2, int arg3, String arg4_wrapper) {
        std::string arg0 = std::string(arg0_wrapper.utf8().data());        std::string arg1 = std::string(arg1_wrapper.utf8().data());        std::string arg4 = std::string(arg4_wrapper.utf8().data());
        ((cocos2d::gui::LabelAtlas*)m_cocos2d_impl)->setProperty((std::string)(arg0), (std::string)(arg1), (int)(arg2), (int)(arg3), (std::string)(arg4));
    }

    void LabelAtlas::setStringValue(String arg0_wrapper) {
        std::string arg0 = std::string(arg0_wrapper.utf8().data());
        ((cocos2d::gui::LabelAtlas*)m_cocos2d_impl)->setStringValue((std::string)(arg0));
    }

    ScriptValue LabelAtlas::createInternal(ScriptState* scriptState) {

        cocos2d::gui::LabelAtlas* ret_impl = cocos2d::gui::LabelAtlas::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, LabelAtlas)
        
    }
    cocos2d::gui::LabelAtlas* LabelAtlas::getCocos2dImpl() {
        return (cocos2d::gui::LabelAtlas*)m_cocos2d_impl;
    }


    LabelAtlas::LabelAtlas() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<LabelAtlas> LabelAtlas::create()
    {
        RefPtrWillBeRawPtr<LabelAtlas> ret = adoptRefWillBeNoop(new LabelAtlas());
        cocos2d::gui::LabelAtlas* impl = new cocos2d::gui::LabelAtlas();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    LabelAtlas::~LabelAtlas() {
    }
} // namespace blink
