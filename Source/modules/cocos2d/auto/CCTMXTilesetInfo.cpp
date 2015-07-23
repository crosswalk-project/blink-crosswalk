// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTMXTilesetInfo.h"

namespace blink {

    PassRefPtrWillBeRawPtr<CCRect> CCTMXTilesetInfo::rectForGID(unsigned int arg0) {

        cocos2d::CCRect ret_impl = ((cocos2d::CCTMXTilesetInfo*)m_cocos2d_impl)->rectForGID((unsigned int)(arg0));
        
        RefPtr<CCRect> ret = adoptRefWillBeNoop(new CCRect());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }
    cocos2d::CCTMXTilesetInfo* CCTMXTilesetInfo::getCocos2dImpl() {
        return (cocos2d::CCTMXTilesetInfo*)m_cocos2d_impl;
    }


    CCTMXTilesetInfo::CCTMXTilesetInfo() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTMXTilesetInfo> CCTMXTilesetInfo::create()
    {
        RefPtrWillBeRawPtr<CCTMXTilesetInfo> ret = adoptRefWillBeNoop(new CCTMXTilesetInfo());
        cocos2d::CCTMXTilesetInfo* impl = new cocos2d::CCTMXTilesetInfo();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTMXTilesetInfo::~CCTMXTilesetInfo() {
    }
} // namespace blink
