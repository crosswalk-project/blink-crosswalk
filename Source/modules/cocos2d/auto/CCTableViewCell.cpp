// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTableViewCell.h"

namespace blink {

    void CCTableViewCell::reset() {

        ((cocos2d::extension::CCTableViewCell*)m_cocos2d_impl)->reset();
    }

    void CCTableViewCell::setIdx(unsigned int arg0) {

        ((cocos2d::extension::CCTableViewCell*)m_cocos2d_impl)->setIdx((unsigned int)(arg0));
    }

    void CCTableViewCell::setObjectID(unsigned int arg0) {

        ((cocos2d::extension::CCTableViewCell*)m_cocos2d_impl)->setObjectID((unsigned int)(arg0));
    }

    unsigned int CCTableViewCell::getObjectID() {

        unsigned int ret_impl = ((cocos2d::extension::CCTableViewCell*)m_cocos2d_impl)->getObjectID();
        
        
        return ret_impl;
    }

    unsigned int CCTableViewCell::getIdx() {

        unsigned int ret_impl = ((cocos2d::extension::CCTableViewCell*)m_cocos2d_impl)->getIdx();
        
        
        return ret_impl;
    }
    cocos2d::extension::CCTableViewCell* CCTableViewCell::getCocos2dImpl() {
        return (cocos2d::extension::CCTableViewCell*)m_cocos2d_impl;
    }


    CCTableViewCell::CCTableViewCell() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTableViewCell> CCTableViewCell::create()
    {
        RefPtrWillBeRawPtr<CCTableViewCell> ret = adoptRefWillBeNoop(new CCTableViewCell());
        cocos2d::extension::CCTableViewCell* impl = new cocos2d::extension::CCTableViewCell();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTableViewCell::~CCTableViewCell() {
    }
} // namespace blink
