// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/manual/CCEGLView.h"

namespace blink {

    void CCEGLView::setIMEKeyboardState(bool arg0) {

        ((cocos2d::CCEGLView*)m_cocos2d_impl)->setIMEKeyboardState((bool)(arg0));
    }

    bool CCEGLView::isOpenGLReady() {

        bool ret_impl = ((cocos2d::CCEGLView*)m_cocos2d_impl)->isOpenGLReady();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCEGLView> CCEGLView::getInstance() {
        cocos2d::CCEGLView* ret_impl = cocos2d::CCEGLView::sharedOpenGLView();
        if (ret_impl == nullptr) { return nullptr; }
        RefPtr<CCEGLView>  ret = adoptRefWillBeNoop(new CCEGLView());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }
    cocos2d::CCEGLView* CCEGLView::getCocos2dImpl() {
        return (cocos2d::CCEGLView*)m_cocos2d_impl;
    }


    CCEGLView::CCEGLView() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCEGLView> CCEGLView::create()
    {
        RefPtrWillBeRawPtr<CCEGLView> ret = adoptRefWillBeNoop(new CCEGLView());
        return ret.release();
    }


    CCEGLView::~CCEGLView() {
    }
} // namespace blink
