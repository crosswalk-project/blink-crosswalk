// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/GUIReader.h"

namespace blink {

    ScriptValue GUIReader::widgetFromJsonFile(ScriptState* scriptState, String arg0) {

        cocos2d::gui::Widget* ret_impl = ((cocos2d::extension::GUIReader*)m_cocos2d_impl)->widgetFromJsonFile((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, Widget)
        
    }

    void GUIReader::purge() {

        cocos2d::extension::GUIReader::purge();
    }

    ScriptValue GUIReader::getInstance(ScriptState* scriptState) {

        cocos2d::extension::GUIReader* ret_impl = cocos2d::extension::GUIReader::shareReader();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, GUIReader)
        
    }
    cocos2d::extension::GUIReader* GUIReader::getCocos2dImpl() {
        return (cocos2d::extension::GUIReader*)m_cocos2d_impl;
    }


    GUIReader::GUIReader() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<GUIReader> GUIReader::create()
    {
        RefPtrWillBeRawPtr<GUIReader> ret = adoptRefWillBeNoop(new GUIReader());
        return ret.release();
    }


    GUIReader::~GUIReader() {
    }
} // namespace blink
