// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "modules/cocos2d/CCAffineTransform.h"
#include "modules/cocos2d/ccColor3B.h"
#include "modules/cocos2d/ccColor4F.h"
#include "modules/cocos2d/CCDirectorDelegate.h"
#include "modules/cocos2d/ccFontDefinition.h"
#include "modules/cocos2d/CCPointArray.h"
#include "modules/cocos2d/CCRect.h"
#include "modules/cocos2d/tCCParticle.h"
#include "modules/cocos2d/CCArray.h"
#include "modules/cocos2d/ccColor4B.h"
#include "modules/cocos2d/CCDictionary.h"
#include "modules/cocos2d/CCEvent.h"
#include "modules/cocos2d/CCPoint.h"
#include "modules/cocos2d/CCSize.h"
#include "modules/cocos2d/CCImage.h"
#include "modules/cocos2d/CCString.h"
#include "modules/cocos2d/CCApplication.h"
#include "modules/cocos2d/ScriptingCore.h"

#include "modules/cocos2d/manual/CCEGLViewProtocol.h"
#include "modules/cocos2d/manual/CCTexture2D.h"

#include "modules/cocos2d/manual/CCGLProgram.h"
#include "modules/cocos2d/auto/CCComponent.h"
#include "modules/cocos2d/auto/CCTouch.h"
#include "modules/cocos2d/auto/CCAction.h"
#include "modules/cocos2d/manual/CCScheduler.h"
#include "modules/cocos2d/auto/CCActionManager.h"
#include "modules/cocos2d/auto/CCCamera.h"
#include "modules/cocos2d/auto/CCGridBase.h"
#include "modules/cocos2d/auto/CCSet.h"

#include "modules/cocos2d/auto/CCFiniteTimeAction.h"
#include "modules/cocos2d/auto/CCActionInterval.h"

#include "modules/cocos2d/manual/CCNode.h"
//#include "modules/cocos2d/manual/CCTouchDelegate.h"

#include "modules/cocos2d/auto/CCTextureCache.h"

#include "modules/cocos2d/auto/CCParticleSystem.h"
#include "modules/cocos2d/auto/CCParticleSystemQuad.h"
#include "modules/cocos2d/auto/CCParticleFlower.h"
#include "modules/cocos2d/auto/CCParticleGalaxy.h"
#include "modules/cocos2d/auto/CCParticleMeteor.h"
#include "modules/cocos2d/auto/CCParticleSpiral.h"
#include "modules/cocos2d/auto/CCParticleExplosion.h"
#include "modules/cocos2d/auto/CCParticleSmoke.h"
#include "modules/cocos2d/auto/CCParticleSnow.h"
#include "modules/cocos2d/auto/CCParticleRain.h"
#include "modules/cocos2d/auto/CCParticleSun.h"
#include "modules/cocos2d/auto/CCParticleFire.h"
#include "modules/cocos2d/auto/CCParticleFireworks.h"
#include "modules/cocos2d/auto/CCGridAction.h"
#include "modules/cocos2d/auto/CCTiledGrid3DAction.h"
#include "modules/cocos2d/auto/CCFadeOutTRTiles.h"
#include "modules/cocos2d/auto/CCFadeOutUpTiles.h"
#include "modules/cocos2d/auto/CCSpriteBatchNode.h"

#include "modules/cocos2d/auto/CCScene.h"
#include "modules/cocos2d/auto/CCTransitionScene.h"
#include "modules/cocos2d/auto/CCTransitionFadeTR.h"

#include "modules/cocos2d/auto/CCTMXObjectGroup.h"
#include "modules/cocos2d/auto/CCTMXLayer.h"

#include "modules/cocos2d/auto/CCActionInstant.h"

#include "modules/cocos2d/auto/CCNodeRGBA.h"
#include "modules/cocos2d/manual/CCDrawNode.h"

#include "modules/cocos2d/manual/CCAnimation.h"
#include "modules/cocos2d/auto/CCAnimationCache.h"
#include "modules/cocos2d/auto/CCSprite.h"
#include "modules/cocos2d/manual/CCAnimationFrame.h"
#include "modules/cocos2d/auto/CCSpriteFrame.h"
#include "modules/cocos2d/auto/CCSpriteFrameCache.h"

#include "modules/cocos2d/auto/CCParticleBatchNode.h"

#include "modules/cocos2d/auto/CCGrid3DAction.h"

#include "modules/cocos2d/auto/CCFlipX3D.h"

#include "modules/cocos2d/auto/CCShaky3D.h"

#include "modules/cocos2d/manual/CCLayer.h"
#include "modules/cocos2d/manual/CCCallFunc.h"
#include "modules/cocos2d/auto/CCTransitionPageTurn.h"
#include "modules/cocos2d/auto/CCTransitionProgress.h"

#include "modules/cocos2d/manual/CCBezierBy.h"
#include "modules/cocos2d/manual/CCBezierTo.h"

#include "modules/cocos2d/auto/CCTransitionSceneOriented.h"

#include "modules/cocos2d/auto/CCHide.h"

#include "modules/cocos2d/auto/CCTransitionMoveInL.h"

#include "modules/cocos2d/manual/CCCardinalSplineTo.h"

#include "modules/cocos2d/auto/CCScaleTo.h"

#include "modules/cocos2d/auto/CCJumpBy.h"

#include "modules/cocos2d/auto/CCCardinalSplineBy.h"

#include "modules/cocos2d/auto/CCAtlasNode.h"

#include "modules/cocos2d/auto/CCLayerRGBA.h"

#include "modules/cocos2d/auto/CCTransitionProgressHorizontal.h"

#include "modules/cocos2d/auto/CCShaderCache.h"

#include "modules/cocos2d/auto/CCLayerColor.h"

#include "modules/cocos2d/manual/CCEGLView.h"

#include "modules/cocos2d/auto/CCActionEase.h"

#include "modules/cocos2d/auto/CCEaseBounce.h"

#include "modules/cocos2d/auto/CCSkewTo.h"
#include "modules/cocos2d/auto/CCSkewBy.h"



#include "modules/cocos2d/manual/CCMenuItem.h"
#include "modules/cocos2d/manual/CCMenuItemLabel.h"

#include "modules/cocos2d/manual/CCMenuItemSprite.h"

#include "modules/cocos2d/auto/CCTransitionSlideInL.h"

#include "modules/cocos2d/auto/CCEaseRateAction.h"

#include "modules/cocos2d/auto/CCEaseElastic.h"

#include "modules/cocos2d/auto/CCTransitionSplitCols.h"


#include "modules/cocos2d/auto/CCMoveBy.h"
#include "modules/cocos2d/auto/CCMoveTo.h"

#include "modules/cocos2d/auto/CCLabelAtlas.h"
#include "modules/cocos2d/auto/CCLabelTTF.h"
#include "modules/cocos2d/auto/CCLabelBMFont.h"

#include "modules/cocos2d/auto/CCActionCamera.h"
#include "modules/cocos2d/auto/CCActionManager.h"

#include "modules/cocos2d/manual/CCDirector.h"
#include "modules/cocos2d/auto/CCMenuItemToggle.h"
#include "modules/cocos2d/auto/CCLayerMultiplex.h"
#include "modules/cocos2d/manual/CCMenuItemFont.h"
#include "modules/cocos2d/auto/CCLayerGradient.h"

#include "modules/cocos2d/auto/CCTMXLayer.h"
#include "modules/cocos2d/auto/CCTMXLayerInfo.h"
#include "modules/cocos2d/auto/CCTMXMapInfo.h"
#include "modules/cocos2d/auto/CCTMXObjectGroup.h"
#include "modules/cocos2d/auto/CCTMXTiledMap.h"
#include "modules/cocos2d/auto/CCTMXTilesetInfo.h"

#include "modules/cocos2d/auto/CCRepeatForever.h"
#include "modules/cocos2d/auto/CCEaseIn.h"
#include "modules/cocos2d/auto/CCEaseOut.h"
#include "modules/cocos2d/auto/CCEaseInOut.h"
#include "modules/cocos2d/auto/CCEaseExponentialOut.h"
#include "modules/cocos2d/auto/CCEaseExponentialIn.h"
#include "modules/cocos2d/auto/CCEaseExponentialInOut.h"
#include "modules/cocos2d/auto/CCEaseSineOut.h"
#include "modules/cocos2d/auto/CCEaseSineIn.h"
#include "modules/cocos2d/auto/CCEaseSineInOut.h"
#include "modules/cocos2d/auto/CCEaseElasticOut.h"
#include "modules/cocos2d/auto/CCEaseElasticIn.h"
#include "modules/cocos2d/auto/CCEaseElasticInOut.h"
#include "modules/cocos2d/auto/CCEaseBounceOut.h"
#include "modules/cocos2d/auto/CCEaseBounceIn.h"
#include "modules/cocos2d/auto/CCEaseBounceInOut.h"
#include "modules/cocos2d/auto/CCEaseBackOut.h"
#include "modules/cocos2d/auto/CCEaseBackIn.h"
#include "modules/cocos2d/auto/CCEaseBackInOut.h"
#include "modules/cocos2d/auto/CCSpeed.h"

////////////////////////

#include "core/cocos2d/extensions/cocos-ext.h"
#include "modules/cocos2d/auto/CCBaseData.h"
#include "modules/cocos2d/auto/CCTween.h"
#include "modules/cocos2d/auto/CCBatchNode.h"
#include "modules/cocos2d/auto/CCBAnimationManager.h"
#include "modules/cocos2d/auto/CCDisplayManager.h"
#include "modules/cocos2d/auto/CCBone.h"
#include "modules/cocos2d/auto/CCArmatureAnimation.h"
#include "modules/cocos2d/auto/CCArmature.h"
#include "modules/cocos2d/manual/CCScrollView.h"
#include "modules/cocos2d/auto/CCTableViewCell.h"
#include "modules/cocos2d/manual/CCTableView.h"

////////////////////////

#include "bindings/core/v8/ScriptValue.h"

#include "bindings/modules/v8/V8CCActionCamera.h"
#include "bindings/modules/v8/V8CCActionEase.h"
#include "bindings/modules/v8/V8CCAction.h"
#include "bindings/modules/v8/V8CCActionInstant.h"
#include "bindings/modules/v8/V8CCActionInterval.h"
#include "bindings/modules/v8/V8CCActionManager.h"
#include "bindings/modules/v8/V8CCActionTween.h"
#include "bindings/modules/v8/V8CCAffineTransform.h"
#include "bindings/modules/v8/V8CCAnimate.h"
#include "bindings/modules/v8/V8CCAnimationCache.h"
#include "bindings/modules/v8/V8CCAnimationFrame.h"
#include "bindings/modules/v8/V8CCAnimation.h"
#include "bindings/modules/v8/V8CCApplication.h"
#include "bindings/modules/v8/V8CCArmatureAnimation.h"
#include "bindings/modules/v8/V8CCArmatureDataManager.h"
#include "bindings/modules/v8/V8CCArmature.h"
#include "bindings/modules/v8/V8CCArray.h"
#include "bindings/modules/v8/V8CCAtlasNode.h"
#include "bindings/modules/v8/V8CCBAnimationManager.h"
#include "bindings/modules/v8/V8CCBaseData.h"
#include "bindings/modules/v8/V8CCBatchNode.h"
#include "bindings/modules/v8/V8CCBezierBy.h"
#include "bindings/modules/v8/V8CCBezierTo.h"
#include "bindings/modules/v8/V8CCBlink.h"
#include "bindings/modules/v8/V8CCBone.h"
#include "bindings/modules/v8/V8CCBReader.h"
#include "bindings/modules/v8/V8CCCallFunc.h"
#include "bindings/modules/v8/V8CCCamera.h"
#include "bindings/modules/v8/V8CCCardinalSplineBy.h"
#include "bindings/modules/v8/V8CCCardinalSplineTo.h"
#include "bindings/modules/v8/V8CCCatmullRomBy.h"
#include "bindings/modules/v8/V8CCCatmullRomTo.h"
#include "bindings/modules/v8/V8CCClippingNode.h"
#include "bindings/modules/v8/V8CCComController.h"
#include "bindings/modules/v8/V8CCComponent.h"
#include "bindings/modules/v8/V8CCDelayTime.h"
#include "bindings/modules/v8/V8CCDictionary.h"
#include "bindings/modules/v8/V8CCDirectorDelegate.h"
#include "bindings/modules/v8/V8CCDirector.h"
#include "bindings/modules/v8/V8CCDisplayManager.h"
#include "bindings/modules/v8/V8CCDrawNode.h"
#include "bindings/modules/v8/V8CCEaseBackIn.h"
#include "bindings/modules/v8/V8CCEaseBackInOut.h"
#include "bindings/modules/v8/V8CCEaseBackOut.h"
#include "bindings/modules/v8/V8CCEaseBounce.h"
#include "bindings/modules/v8/V8CCEaseBounceIn.h"
#include "bindings/modules/v8/V8CCEaseBounceInOut.h"
#include "bindings/modules/v8/V8CCEaseBounceOut.h"
#include "bindings/modules/v8/V8CCEaseElastic.h"
#include "bindings/modules/v8/V8CCEaseElasticIn.h"
#include "bindings/modules/v8/V8CCEaseElasticInOut.h"
#include "bindings/modules/v8/V8CCEaseElasticOut.h"
#include "bindings/modules/v8/V8CCEaseExponentialIn.h"
#include "bindings/modules/v8/V8CCEaseExponentialInOut.h"
#include "bindings/modules/v8/V8CCEaseExponentialOut.h"
#include "bindings/modules/v8/V8CCEaseIn.h"
#include "bindings/modules/v8/V8CCEaseInOut.h"
#include "bindings/modules/v8/V8CCEaseOut.h"
#include "bindings/modules/v8/V8CCEaseRateAction.h"
#include "bindings/modules/v8/V8CCEaseSineIn.h"
#include "bindings/modules/v8/V8CCEaseSineInOut.h"
#include "bindings/modules/v8/V8CCEaseSineOut.h"
#include "bindings/modules/v8/V8CCEGLView.h"
#include "bindings/modules/v8/V8CCEGLViewProtocol.h"
#include "bindings/modules/v8/V8CCEvent.h"
#include "bindings/modules/v8/V8CCFadeIn.h"
#include "bindings/modules/v8/V8CCFadeOutBLTiles.h"
#include "bindings/modules/v8/V8CCFadeOutDownTiles.h"
#include "bindings/modules/v8/V8CCFadeOut.h"
#include "bindings/modules/v8/V8CCFadeOutTRTiles.h"
#include "bindings/modules/v8/V8CCFadeOutUpTiles.h"
#include "bindings/modules/v8/V8CCFadeTo.h"
#include "bindings/modules/v8/V8CCFiniteTimeAction.h"
#include "bindings/modules/v8/V8CCFlipX3D.h"
#include "bindings/modules/v8/V8CCFlipX.h"
#include "bindings/modules/v8/V8CCFlipY3D.h"
#include "bindings/modules/v8/V8CCFlipY.h"
#include "bindings/modules/v8/V8CCFollow.h"
#include "bindings/modules/v8/V8CCGLNode.h"
#include "bindings/modules/v8/V8CCGLProgram.h"
#include "bindings/modules/v8/V8CCGrid3DAction.h"
#include "bindings/modules/v8/V8CCGrid3D.h"
#include "bindings/modules/v8/V8CCGridAction.h"
#include "bindings/modules/v8/V8CCGridBase.h"
#include "bindings/modules/v8/V8CCHide.h"
#include "bindings/modules/v8/V8CCImage.h"
#include "bindings/modules/v8/V8CCJumpBy.h"
#include "bindings/modules/v8/V8CCJumpTiles3D.h"
#include "bindings/modules/v8/V8CCJumpTo.h"
#include "bindings/modules/v8/V8CCLabelAtlas.h"
#include "bindings/modules/v8/V8CCLabelBMFont.h"
#include "bindings/modules/v8/V8CCLabelTTF.h"
#include "bindings/modules/v8/V8CCLayerColor.h"
#include "bindings/modules/v8/V8CCLayerGradient.h"
#include "bindings/modules/v8/V8CCLayer.h"
#include "bindings/modules/v8/V8CCLayerMultiplex.h"
#include "bindings/modules/v8/V8CCLayerRGBA.h"
#include "bindings/modules/v8/V8CCLens3D.h"
#include "bindings/modules/v8/V8CCLiquid.h"
#include "bindings/modules/v8/V8CCMenu.h"
#include "bindings/modules/v8/V8CCMenuItemAtlasFont.h"
#include "bindings/modules/v8/V8CCMenuItemFont.h"
#include "bindings/modules/v8/V8CCMenuItem.h"
#include "bindings/modules/v8/V8CCMenuItemImage.h"
#include "bindings/modules/v8/V8CCMenuItemLabel.h"
#include "bindings/modules/v8/V8CCMenuItemSprite.h"
#include "bindings/modules/v8/V8CCMenuItemToggle.h"
#include "bindings/modules/v8/V8CCMotionStreak.h"
#include "bindings/modules/v8/V8CCMoveBy.h"
#include "bindings/modules/v8/V8CCMoveTo.h"
#include "bindings/modules/v8/V8CCNode.h"
#include "bindings/modules/v8/V8CCNodeRGBA.h"
#include "bindings/modules/v8/V8CCObject.h"
#include "bindings/modules/v8/V8CCOrbitCamera.h"
#include "bindings/modules/v8/V8CCPageTurn3D.h"
#include "bindings/modules/v8/V8CCParticleBatchNode.h"
#include "bindings/modules/v8/V8CCParticleExplosion.h"
#include "bindings/modules/v8/V8CCParticleFire.h"
#include "bindings/modules/v8/V8CCParticleFireworks.h"
#include "bindings/modules/v8/V8CCParticleFlower.h"
#include "bindings/modules/v8/V8CCParticleGalaxy.h"
#include "bindings/modules/v8/V8CCParticleMeteor.h"
#include "bindings/modules/v8/V8CCParticleRain.h"
#include "bindings/modules/v8/V8CCParticleSmoke.h"
#include "bindings/modules/v8/V8CCParticleSnow.h"
#include "bindings/modules/v8/V8CCParticleSpiral.h"
#include "bindings/modules/v8/V8CCParticleSun.h"
#include "bindings/modules/v8/V8CCParticleSystem.h"
#include "bindings/modules/v8/V8CCParticleSystemQuad.h"
#include "bindings/modules/v8/V8CCPlace.h"
#include "bindings/modules/v8/V8CCPointArray.h"
#include "bindings/modules/v8/V8CCPoint.h"
#include "bindings/modules/v8/V8CCProgressFromTo.h"
#include "bindings/modules/v8/V8CCProgressTimer.h"
#include "bindings/modules/v8/V8CCProgressTo.h"
#include "bindings/modules/v8/V8CCRect.h"
#include "bindings/modules/v8/V8CCRenderTexture.h"
#include "bindings/modules/v8/V8CCRepeatForever.h"
#include "bindings/modules/v8/V8CCRepeat.h"
#include "bindings/modules/v8/V8CCReuseGrid.h"
#include "bindings/modules/v8/V8CCRipple3D.h"
#include "bindings/modules/v8/V8CCRotateBy.h"
#include "bindings/modules/v8/V8CCRotateTo.h"
#include "bindings/modules/v8/V8CCScale9Sprite.h"
#include "bindings/modules/v8/V8CCScaleBy.h"
#include "bindings/modules/v8/V8CCScaleTo.h"
#include "bindings/modules/v8/V8CCScene.h"
#include "bindings/modules/v8/V8CCScheduler.h"
#include "bindings/modules/v8/V8CCScrollView.h"
#include "bindings/modules/v8/V8CCSequence.h"
#include "bindings/modules/v8/V8CCSet.h"
#include "bindings/modules/v8/V8CCShaderCache.h"
#include "bindings/modules/v8/V8CCShaky3D.h"
#include "bindings/modules/v8/V8CCShakyTiles3D.h"
#include "bindings/modules/v8/V8CCShatteredTiles3D.h"
#include "bindings/modules/v8/V8CCShow.h"
#include "bindings/modules/v8/V8CCShuffleTiles.h"
#include "bindings/modules/v8/V8CCSize.h"
#include "bindings/modules/v8/V8CCSkewBy.h"
#include "bindings/modules/v8/V8CCSkewTo.h"
#include "bindings/modules/v8/V8CCSpawn.h"
#include "bindings/modules/v8/V8CCSpeed.h"
#include "bindings/modules/v8/V8CCSplitCols.h"
#include "bindings/modules/v8/V8CCSplitRows.h"
#include "bindings/modules/v8/V8CCSpriteBatchNode.h"
#include "bindings/modules/v8/V8CCSpriteFrameCache.h"
#include "bindings/modules/v8/V8CCSpriteFrame.h"
#include "bindings/modules/v8/V8CCSprite.h"
#include "bindings/modules/v8/V8CCStopGrid.h"
#include "bindings/modules/v8/V8CCString.h"
#include "bindings/modules/v8/V8CCTableViewCell.h"
#include "bindings/modules/v8/V8CCTableView.h"
#include "bindings/modules/v8/V8CCTargetedAction.h"
#include "bindings/modules/v8/V8CCTextFieldTTF.h"
#include "bindings/modules/v8/V8CCTexture2D.h"
#include "bindings/modules/v8/V8CCTextureCache.h"
#include "bindings/modules/v8/V8CCTiledGrid3DAction.h"
#include "bindings/modules/v8/V8CCTiledGrid3D.h"
#include "bindings/modules/v8/V8CCTimer.h"
#include "bindings/modules/v8/V8CCTintBy.h"
#include "bindings/modules/v8/V8CCTintTo.h"
#include "bindings/modules/v8/V8CCTMXLayer.h"
#include "bindings/modules/v8/V8CCTMXLayerInfo.h"
#include "bindings/modules/v8/V8CCTMXMapInfo.h"
#include "bindings/modules/v8/V8CCTMXObjectGroup.h"
#include "bindings/modules/v8/V8CCTMXTiledMap.h"
#include "bindings/modules/v8/V8CCTMXTilesetInfo.h"
#include "bindings/modules/v8/V8CCToggleVisibility.h"
#include "bindings/modules/v8/V8CCTouchDelegate.h"
#include "bindings/modules/v8/V8CCTouch.h"
#include "bindings/modules/v8/V8CCTransitionCrossFade.h"
#include "bindings/modules/v8/V8CCTransitionFadeBL.h"
#include "bindings/modules/v8/V8CCTransitionFadeDown.h"
#include "bindings/modules/v8/V8CCTransitionFade.h"
#include "bindings/modules/v8/V8CCTransitionFadeTR.h"
#include "bindings/modules/v8/V8CCTransitionFadeUp.h"
#include "bindings/modules/v8/V8CCTransitionFlipAngular.h"
#include "bindings/modules/v8/V8CCTransitionFlipX.h"
#include "bindings/modules/v8/V8CCTransitionFlipY.h"
#include "bindings/modules/v8/V8CCTransitionJumpZoom.h"
#include "bindings/modules/v8/V8CCTransitionMoveInB.h"
#include "bindings/modules/v8/V8CCTransitionMoveInL.h"
#include "bindings/modules/v8/V8CCTransitionMoveInR.h"
#include "bindings/modules/v8/V8CCTransitionMoveInT.h"
#include "bindings/modules/v8/V8CCTransitionPageTurn.h"
#include "bindings/modules/v8/V8CCTransitionProgress.h"
#include "bindings/modules/v8/V8CCTransitionProgressHorizontal.h"
#include "bindings/modules/v8/V8CCTransitionProgressInOut.h"
#include "bindings/modules/v8/V8CCTransitionProgressOutIn.h"
#include "bindings/modules/v8/V8CCTransitionProgressRadialCCW.h"
#include "bindings/modules/v8/V8CCTransitionProgressRadialCW.h"
#include "bindings/modules/v8/V8CCTransitionProgressVertical.h"
#include "bindings/modules/v8/V8CCTransitionRotoZoom.h"
#include "bindings/modules/v8/V8CCTransitionScene.h"
#include "bindings/modules/v8/V8CCTransitionSceneOriented.h"
#include "bindings/modules/v8/V8CCTransitionShrinkGrow.h"
#include "bindings/modules/v8/V8CCTransitionSlideInB.h"
#include "bindings/modules/v8/V8CCTransitionSlideInL.h"
#include "bindings/modules/v8/V8CCTransitionSlideInR.h"
#include "bindings/modules/v8/V8CCTransitionSlideInT.h"
#include "bindings/modules/v8/V8CCTransitionSplitCols.h"
#include "bindings/modules/v8/V8CCTransitionSplitRows.h"
#include "bindings/modules/v8/V8CCTransitionTurnOffTiles.h"
#include "bindings/modules/v8/V8CCTransitionZoomFlipAngular.h"
#include "bindings/modules/v8/V8CCTransitionZoomFlipX.h"
#include "bindings/modules/v8/V8CCTransitionZoomFlipY.h"
#include "bindings/modules/v8/V8CCTurnOffTiles.h"
#include "bindings/modules/v8/V8CCTween.h"
#include "bindings/modules/v8/V8CCTwirl.h"
#include "bindings/modules/v8/V8CCWaves3D.h"
#include "bindings/modules/v8/V8CCWaves.h"
#include "bindings/modules/v8/V8CCWavesTiles3D.h"
#include "bindings/modules/v8/V8ccColor3B.h"
#include "bindings/modules/v8/V8ccColor4B.h"
#include "bindings/modules/v8/V8ccColor4F.h"
#include "bindings/modules/v8/V8ccFontDefinition.h"

/*
#include "bindings/modules/v8/V8.h"
#include "bindings/modules/v8/V8.h"
*/
//#include "bindings/modules/v8/V8.h"

#define SCRIPT_VALUE_WRAPPER(_class_, arg_wrapper, arg_ret) \
        _class_* arg_ret = V8##_class_::toImplWithTypeCheck(arg_wrapper.isolate(), arg_wrapper.v8Value()); \
        if (arg_ret == nullptr) { \
            v8::Handle<v8::Value> v8Value = arg_wrapper.v8Value(); \
            if (v8Value->IsObject()) { \
                v8::Handle<v8::Object> v8Obj = v8::Handle<v8::Object>::Cast(v8Value); \
                v8::Handle<v8::String> name = v8AtomicString(arg_wrapper.isolate(), "__native_obj__"); \
                v8::Handle<v8::Value> value = v8Obj->Get(name); \
                if (value->IsNull()) { \
                    arg_ret = nullptr; \
                } else if (value->IsObject()) { \
                    arg_ret = static_cast<_class_*>(blink::toScriptWrappableBase(V8##_class_::findInstanceInPrototypeChain(value, arg_wrapper.isolate()))->toImpl<_class_>()); \
                } \
	    } \
        }


/*
        _class_* arg_ret = static_cast<_class_*>(V8##_class_::fromInternalPointer(V8##_class_::findInstanceInPrototypeChain(arg_wrapper.v8Value(), arg_wrapper.isolate())->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex)));

         fromInternalPointer(v8::Handle<v8::Object>::Cast(value)->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex));
	 blink::toScriptWrappableBase(v8::Handle<v8::Object>::Cast(value))->toImpl<CCNode>()*/

#define RET_V8_WRAPPER(ret_impl, _class_)	  \
        v8::Handle<v8::Value> v8_wrapper; \
        ScriptState::Scope scope(scriptState); \
        v8::Isolate* isolate = scriptState->isolate(); \
        CCObject* ret_crosswalk_impl = (CCObject*)ret_impl->getCrosswalkImpl(); \
        if (ret_crosswalk_impl != NULL) { \
            v8_wrapper = DOMDataStore::getWrapper<V8CCObject>(ret_crosswalk_impl, isolate); \
            if (!v8_wrapper.IsEmpty()) { \
                return ScriptValue(scriptState, v8_wrapper); \
            } else { \
                return ScriptValue(scriptState, toV8(ret_crosswalk_impl, scriptState->context()->Global(), isolate)); \
	    } \
        } \
        v8_wrapper = ScriptingCore::getInstance()->getBindingWrapper(scriptState, ret_impl); \
        if (!v8_wrapper->IsNull()) { \
            return ScriptValue(scriptState, v8_wrapper); \
        } \
        PassRefPtrWillBeRawPtr<_class_> ret = adoptRefWillBeNoop(new _class_()); \
        ret->setCocos2dImpl(ret_impl); \
        v8_wrapper = toV8(ret, scriptState->context()->Global(), isolate); \
        return ScriptValue(scriptState, v8_wrapper);
/*
        v8::Handle<v8::Value> v8_wrapper;
        ScriptState::Scope scope(scriptState);
        v8::Isolate* isolate = scriptState->isolate();
        CCObject* ret_crosswalk_impl = (CCObject*)ret_impl->getCrosswalkImpl();
        if (ret_crosswalk_impl != NULL) {
            //TODO: If the value returned from native is extended JS objects, need return the real JS Object.
            //      There is no usecase currently in the game.
            //if (ret_crosswalk_impl->m_js_obj != nullptr) {
            //    return ScriptValue(scriptState, ret_crosswalk_impl->m_js_obj->newLocal(isolate));
            //}

            // If there are wrapper in the DOMDataStore, return the wrapper
            v8_wrapper = DOMDataStore::getWrapper<V8CCObject>(ret_crosswalk_impl, isolate);
            if (!v8_wrapper.IsEmpty()) {
                return ScriptValue(scriptState, v8_wrapper);
            } else {
                // Create a new wrapper and return.
                return ScriptValue(scriptState, toV8(ret_crosswalk_impl, scriptState->context()->Global(), isolate));
	    }
        }
        // New obj created from native, create real binding wrapper by typeid
	v8_wrapper = ScriptingCore::getInstance()->getBindingWrapper(scriptState, ret_impl);
 */
