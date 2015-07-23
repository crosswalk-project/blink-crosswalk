// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"
#include "bindings/modules/v8/V8CCEGLViewProtocol.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/manual/CCEGLViewProtocol.h"

namespace blink {

    PassRefPtrWillBeRawPtr<CCPoint> CCEGLViewProtocol::getVisibleOrigin() {

        cocos2d::CCPoint ret_impl = ((cocos2d::CCEGLViewProtocol*)m_cocos2d_impl)->getVisibleOrigin();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    PassRefPtrWillBeRawPtr<CCSize> CCEGLViewProtocol::getVisibleSize() {

        cocos2d::CCSize ret_impl = ((cocos2d::CCEGLViewProtocol*)m_cocos2d_impl)->getVisibleSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCEGLViewProtocol::setDesignResolutionSize(float arg0, float arg1, int arg2) {

        ((cocos2d::CCEGLViewProtocol*)m_cocos2d_impl)->setDesignResolutionSize((float)(arg0), (float)(arg1), (ResolutionPolicy)(arg2));
    }
    cocos2d::CCEGLViewProtocol* CCEGLViewProtocol::getCocos2dImpl() {
        return (cocos2d::CCEGLViewProtocol*)m_cocos2d_impl;
    }

    void CCEGLViewProtocol::setCocos2dImpl(cocos2d::CCEGLViewProtocol* impl) {
        m_cocos2d_impl = impl;
        if (impl != NULL) {
            impl->retain();
        }
    }

    CCEGLViewProtocol::CCEGLViewProtocol() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCEGLViewProtocol> CCEGLViewProtocol::create()
    {
        RefPtrWillBeRawPtr<CCEGLViewProtocol> ret = adoptRefWillBeNoop(new CCEGLViewProtocol());
        return ret.release();
    }


    CCEGLViewProtocol::~CCEGLViewProtocol() {
        if (m_cocos2d_impl != NULL) {
             m_cocos2d_impl->release();
             m_cocos2d_impl = NULL;
        }
    }

    void CCEGLViewProtocol::handleTouchesBegin(int num, Vector<int> ids, Vector<float> xs, Vector<float> ys) {
        int size = ids.size();
        int id[size];
        float x[size];
        float y[size];
        for (int i = 0; i < size; i++) {
            id[i] = ids[i];
            x[i] = xs[i];
            y[i] = ys[i];
        }

        ((cocos2d::CCEGLViewProtocol*)(m_cocos2d_impl))->handleTouchesBegin(size, id, x, y);
    }

    void CCEGLViewProtocol::handleTouchesMove(int num, Vector<int> ids, Vector<float> xs, Vector<float> ys) {
        int size = ids.size();
        int id[size];
        float x[size];
        float y[size];
        for (int i = 0; i < size; i++) {
            id[i] = ids[i];
            x[i] = xs[i];
            y[i] = ys[i];
        }

        ((cocos2d::CCEGLViewProtocol*)(m_cocos2d_impl))->handleTouchesMove(size, id, x, y);
    }

    void CCEGLViewProtocol::handleTouchesEnd(int num, Vector<int> ids, Vector<float> xs, Vector<float> ys) {
        int size = ids.size();
        int id[size];
        float x[size];
        float y[size];
        for (int i = 0; i < size; i++) {
            id[i] = ids[i];
            x[i] = xs[i];
            y[i] = ys[i];
        }

        ((cocos2d::CCEGLViewProtocol*)(m_cocos2d_impl))->handleTouchesEnd(size, id, x, y);
    }

    void CCEGLViewProtocol::handleTouchesCancel(int num, Vector<int> ids, Vector<float> xs, Vector<float> ys) {
        int size = ids.size();
        int id[size];
        float x[size];
        float y[size];
        for (int i = 0; i < size; i++) {
            id[i] = ids[i];
            x[i] = xs[i];
            y[i] = ys[i];
        }

        ((cocos2d::CCEGLViewProtocol*)(m_cocos2d_impl))->handleTouchesCancel(size, id, x, y);
    }
} // namespace blink
