// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/LabelBMFont.h"

namespace blink {

    ScriptValue LabelBMFont::getVirtualRenderer(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = ((cocos2d::gui::LabelBMFont*)m_cocos2d_impl)->getVirtualRenderer();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    String LabelBMFont::getStringValue() {

        const String ret_impl = ((cocos2d::gui::LabelBMFont*)m_cocos2d_impl)->getStringValue();
        
        
        return ret_impl;
    }

    void LabelBMFont::setText(String arg0) {

        ((cocos2d::gui::LabelBMFont*)m_cocos2d_impl)->setText((char*)(arg0.utf8().data()));
    }

    String LabelBMFont::getDescription() {

        String ret_impl = String(((cocos2d::gui::LabelBMFont*)m_cocos2d_impl)->getDescription().c_str());
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCSize> LabelBMFont::getContentSize() {

        const cocos2d::CCSize ret_impl = ((cocos2d::gui::LabelBMFont*)m_cocos2d_impl)->getContentSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void LabelBMFont::setFntFile(String arg0) {

        ((cocos2d::gui::LabelBMFont*)m_cocos2d_impl)->setFntFile((char*)(arg0.utf8().data()));
    }

    ScriptValue LabelBMFont::createInternal(ScriptState* scriptState) {

        cocos2d::gui::LabelBMFont* ret_impl = cocos2d::gui::LabelBMFont::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, LabelBMFont)
        
    }
    cocos2d::gui::LabelBMFont* LabelBMFont::getCocos2dImpl() {
        return (cocos2d::gui::LabelBMFont*)m_cocos2d_impl;
    }


    LabelBMFont::LabelBMFont() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<LabelBMFont> LabelBMFont::create()
    {
        RefPtrWillBeRawPtr<LabelBMFont> ret = adoptRefWillBeNoop(new LabelBMFont());
        cocos2d::gui::LabelBMFont* impl = new cocos2d::gui::LabelBMFont();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    LabelBMFont::~LabelBMFont() {
    }
} // namespace blink
