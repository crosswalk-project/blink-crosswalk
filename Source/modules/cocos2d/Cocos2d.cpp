// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"
#include "modules/cocos2d/Cocos2d.h"
#include "bindings/modules/v8/V8Cocos2d.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "wtf/ArrayBufferView.h"

#include "modules/cocos2d/CCGraphicsContext3DImpl.h"
#include "modules/cocos2d/cocos2d.hpp"

#include "core/html/canvas/WebGLRenderingContext.h"

#include "bindings/modules/v8/V8CCAction.h"
#include "bindings/modules/v8/V8CCFiniteTimeAction.h"
#include "bindings/modules/v8/V8CCActionInterval.h"
#include "bindings/modules/v8/V8CCActionCamera.h"
#include "bindings/modules/v8/V8CCFadeOutDownTiles.h"
#include "bindings/modules/v8/V8CCTintTo.h"
#include "bindings/modules/v8/V8CCActionEase.h"
#include "bindings/modules/v8/V8CCFadeOut.h"
#include "bindings/modules/v8/V8CCFadeOutTRTiles.h"
#include "bindings/modules/v8/V8CCActionInstant.h"
#include "bindings/modules/v8/V8CCFadeOutUpTiles.h"
#include "bindings/modules/v8/V8CCFadeTo.h"
#include "bindings/modules/v8/V8CCActionManager.h"
#include "bindings/modules/v8/V8CCActionTween.h"
#include "bindings/modules/v8/V8CCAnimate.h"
#include "bindings/modules/v8/V8CCFlipX3D.h"
#include "bindings/modules/v8/V8CCParticleSystemQuad.h"
#include "bindings/modules/v8/V8CCParticleFlower.h"
#include "bindings/modules/v8/V8CCParticleGalaxy.h"
#include "bindings/modules/v8/V8CCParticleMeteor.h"
#include "bindings/modules/v8/V8CCParticleSpiral.h"
#include "bindings/modules/v8/V8CCParticleExplosion.h"
#include "bindings/modules/v8/V8CCParticleSmoke.h"
#include "bindings/modules/v8/V8CCParticleSnow.h"
#include "bindings/modules/v8/V8CCParticleRain.h"
#include "bindings/modules/v8/V8CCParticleSun.h"
#include "bindings/modules/v8/V8CCParticleFire.h"
#include "bindings/modules/v8/V8CCParticleFireworks.h"
#include "bindings/modules/v8/V8CCToggleVisibility.h"
#include "bindings/modules/v8/V8CCAnimationCache.h"
#include "bindings/modules/v8/V8CCFlipX.h"
#include "bindings/modules/v8/V8CCTouch.h"
#include "bindings/modules/v8/V8CCAnimationFrame.h"
#include "bindings/modules/v8/V8CCFlipY3D.h"
#include "bindings/modules/v8/V8CCPlace.h"
#include "bindings/modules/v8/V8CCTransitionCrossFade.h"
#include "bindings/modules/v8/V8CCAnimation.h"
#include "bindings/modules/v8/V8CCFlipY.h"
#include "bindings/modules/v8/V8CCProgressFromTo.h"
#include "bindings/modules/v8/V8CCFollow.h"
#include "bindings/modules/v8/V8CCProgressTimer.h"
#include "bindings/modules/v8/V8CCTransitionFadeBL.h"
#include "bindings/modules/v8/V8CCAtlasNode.h"
#include "bindings/modules/v8/V8CCGLProgram.h"
#include "bindings/modules/v8/V8CCProgressTo.h"
#include "bindings/modules/v8/V8CCTransitionFadeDown.h"
#include "bindings/modules/v8/V8CCBezierBy.h"
#include "bindings/modules/v8/V8CCGrid3DAction.h"
#include "bindings/modules/v8/V8CCRenderTexture.h"
#include "bindings/modules/v8/V8CCTransitionFade.h"
#include "bindings/modules/v8/V8CCBezierTo.h"
#include "bindings/modules/v8/V8CCGrid3D.h"
#include "bindings/modules/v8/V8CCRepeatForever.h"
#include "bindings/modules/v8/V8CCTransitionFadeTR.h"
#include "bindings/modules/v8/V8CCBlink.h"
#include "bindings/modules/v8/V8CCGridAction.h"
#include "bindings/modules/v8/V8CCRepeat.h"
#include "bindings/modules/v8/V8CCTransitionFadeUp.h"
#include "bindings/modules/v8/V8CCCallFunc.h"
#include "bindings/modules/v8/V8CCGridBase.h"
#include "bindings/modules/v8/V8CCReuseGrid.h"
#include "bindings/modules/v8/V8CCTransitionFlipAngular.h"
#include "bindings/modules/v8/V8CCCamera.h"
#include "bindings/modules/v8/V8CCHide.h"
#include "bindings/modules/v8/V8CCRipple3D.h"
#include "bindings/modules/v8/V8CCTransitionFlipX.h"
#include "bindings/modules/v8/V8CCCardinalSplineBy.h"
#include "bindings/modules/v8/V8CCJumpBy.h"
#include "bindings/modules/v8/V8CCRotateBy.h"
#include "bindings/modules/v8/V8CCTransitionFlipY.h"
#include "bindings/modules/v8/V8CCCardinalSplineTo.h"
#include "bindings/modules/v8/V8CCJumpTiles3D.h"
#include "bindings/modules/v8/V8CCRotateTo.h"
#include "bindings/modules/v8/V8CCTransitionJumpZoom.h"
#include "bindings/modules/v8/V8CCCatmullRomBy.h"
#include "bindings/modules/v8/V8CCJumpTo.h"
#include "bindings/modules/v8/V8CCScaleBy.h"
#include "bindings/modules/v8/V8CCTransitionMoveInB.h"
#include "bindings/modules/v8/V8CCCatmullRomTo.h"
#include "bindings/modules/v8/V8CCScaleTo.h"
#include "bindings/modules/v8/V8CCTransitionMoveInL.h"
#include "bindings/modules/v8/V8CCLabelBMFont.h"
#include "bindings/modules/v8/V8CCScene.h"
#include "bindings/modules/v8/V8CCTransitionMoveInR.h"
#include "bindings/modules/v8/V8CCComponent.h"
#include "bindings/modules/v8/V8CCLabelTTF.h"
#include "bindings/modules/v8/V8CCScheduler.h"
#include "bindings/modules/v8/V8CCTransitionMoveInT.h"
#include "bindings/modules/v8/V8CCDelayTime.h"
#include "bindings/modules/v8/V8CCLayerColor.h"
#include "bindings/modules/v8/V8CCSequence.h"
#include "bindings/modules/v8/V8CCTransitionPageTurn.h"
#include "bindings/modules/v8/V8CCDirector.h"
#include "bindings/modules/v8/V8CCLayerGradient.h"
#include "bindings/modules/v8/V8CCSet.h"
#include "bindings/modules/v8/V8CCTransitionProgressHorizontal.h"
#include "bindings/modules/v8/V8CCLayer.h"
#include "bindings/modules/v8/V8CCShaderCache.h"
#include "bindings/modules/v8/V8CCTransitionProgress.h"
#include "bindings/modules/v8/V8CCEaseBackIn.h"
#include "bindings/modules/v8/V8CCLayerMultiplex.h"
#include "bindings/modules/v8/V8CCShaky3D.h"
#include "bindings/modules/v8/V8CCTransitionProgressInOut.h"
#include "bindings/modules/v8/V8CCEaseBackInOut.h"
#include "bindings/modules/v8/V8CCLayerRGBA.h"
#include "bindings/modules/v8/V8CCShakyTiles3D.h"
#include "bindings/modules/v8/V8CCTransitionProgressOutIn.h"
#include "bindings/modules/v8/V8CCEaseBackOut.h"
#include "bindings/modules/v8/V8CCLens3D.h"
#include "bindings/modules/v8/V8CCShatteredTiles3D.h"
#include "bindings/modules/v8/V8CCTransitionProgressRadialCCW.h"
#include "bindings/modules/v8/V8CCEaseBounce.h"
#include "bindings/modules/v8/V8CCLiquid.h"
#include "bindings/modules/v8/V8CCShow.h"
#include "bindings/modules/v8/V8CCTransitionProgressRadialCW.h"
#include "bindings/modules/v8/V8CCEaseBounceIn.h"
#include "bindings/modules/v8/V8CCMenu.h"
#include "bindings/modules/v8/V8CCShuffleTiles.h"
#include "bindings/modules/v8/V8CCTransitionProgressVertical.h"
#include "bindings/modules/v8/V8CCEaseBounceInOut.h"
#include "bindings/modules/v8/V8CCMenuItemAtlasFont.h"
#include "bindings/modules/v8/V8CCSkewBy.h"
#include "bindings/modules/v8/V8CCTransitionRotoZoom.h"
#include "bindings/modules/v8/V8CCEaseBounceOut.h"
#include "bindings/modules/v8/V8CCMenuItemFont.h"
#include "bindings/modules/v8/V8CCSkewTo.h"
#include "bindings/modules/v8/V8CCTransitionScene.h"
#include "bindings/modules/v8/V8CCEaseElastic.h"
#include "bindings/modules/v8/V8CCMenuItem.h"
#include "bindings/modules/v8/V8CCSpawn.h"
#include "bindings/modules/v8/V8CCTransitionSceneOriented.h"
#include "bindings/modules/v8/V8CCEaseElasticIn.h"
#include "bindings/modules/v8/V8CCMenuItemImage.h"
#include "bindings/modules/v8/V8CCSpeed.h"
#include "bindings/modules/v8/V8CCTransitionShrinkGrow.h"
#include "bindings/modules/v8/V8CCEaseElasticInOut.h"
#include "bindings/modules/v8/V8CCMenuItemLabel.h"
#include "bindings/modules/v8/V8CCSplitCols.h"
#include "bindings/modules/v8/V8CCTransitionSlideInB.h"
#include "bindings/modules/v8/V8CCEaseElasticOut.h"
#include "bindings/modules/v8/V8CCMenuItemSprite.h"
#include "bindings/modules/v8/V8CCSplitRows.h"
#include "bindings/modules/v8/V8CCTransitionSlideInL.h"
#include "bindings/modules/v8/V8CCEaseExponentialIn.h"
#include "bindings/modules/v8/V8CCMenuItemToggle.h"
#include "bindings/modules/v8/V8CCSpriteBatchNode.h"
#include "bindings/modules/v8/V8CCTransitionSlideInR.h"
#include "bindings/modules/v8/V8CCEaseExponentialInOut.h"
#include "bindings/modules/v8/V8CCMotionStreak.h"
#include "bindings/modules/v8/V8CCSpriteFrameCache.h"
#include "bindings/modules/v8/V8CCTransitionSlideInT.h"
#include "bindings/modules/v8/V8CCEaseExponentialOut.h"
#include "bindings/modules/v8/V8CCMoveBy.h"
#include "bindings/modules/v8/V8CCSpriteFrame.h"
#include "bindings/modules/v8/V8CCTransitionSplitCols.h"
#include "bindings/modules/v8/V8CCEaseIn.h"
#include "bindings/modules/v8/V8CCMoveTo.h"
#include "bindings/modules/v8/V8CCSprite.h"
#include "bindings/modules/v8/V8CCTransitionSplitRows.h"
#include "bindings/modules/v8/V8CCEaseInOut.h"
#include "bindings/modules/v8/V8CCNode.h"
#include "bindings/modules/v8/V8CCGLNode.h"
#include "bindings/modules/v8/V8CCStopGrid.h"
#include "bindings/modules/v8/V8CCTransitionTurnOffTiles.h"
#include "bindings/modules/v8/V8CCEaseOut.h"
#include "bindings/modules/v8/V8CCNodeRGBA.h"
#include "bindings/modules/v8/V8CCTargetedAction.h"
#include "bindings/modules/v8/V8CCTransitionZoomFlipAngular.h"
#include "bindings/modules/v8/V8CCEaseRateAction.h"
#include "bindings/modules/v8/V8CCOrbitCamera.h"
#include "bindings/modules/v8/V8CCTextFieldTTF.h"
#include "bindings/modules/v8/V8CCTransitionZoomFlipX.h"
#include "bindings/modules/v8/V8CCEaseSineIn.h"
#include "bindings/modules/v8/V8CCPageTurn3D.h"
#include "bindings/modules/v8/V8CCTexture2D.h"
#include "bindings/modules/v8/V8CCTransitionZoomFlipY.h"
#include "bindings/modules/v8/V8CCEaseSineInOut.h"
#include "bindings/modules/v8/V8CCTextureCache.h"
#include "bindings/modules/v8/V8CCTurnOffTiles.h"
#include "bindings/modules/v8/V8CCEaseSineOut.h"
#include "bindings/modules/v8/V8CCParticleBatchNode.h"
#include "bindings/modules/v8/V8CCTiledGrid3DAction.h"
#include "bindings/modules/v8/V8CCTwirl.h"
#include "bindings/modules/v8/V8CCEGLView.h"
#include "bindings/modules/v8/V8CCTiledGrid3D.h"
#include "bindings/modules/v8/V8CCWaves3D.h"
#include "bindings/modules/v8/V8CCEGLViewProtocol.h"
#include "bindings/modules/v8/V8CCWaves.h"
#include "bindings/modules/v8/V8CCFadeIn.h"
#include "bindings/modules/v8/V8CCTimer.h"
#include "bindings/modules/v8/V8CCWavesTiles3D.h"
#include "bindings/modules/v8/V8CCFadeOutBLTiles.h"
#include "bindings/modules/v8/V8CCTintBy.h"
#include "bindings/modules/v8/V8CCTMXMapInfo.h"
#include "bindings/modules/v8/V8CCTMXLayer.h"
#include "bindings/modules/v8/V8CCTMXLayerInfo.h"
#include "bindings/modules/v8/V8CCTMXObjectGroup.h"
#include "bindings/modules/v8/V8CCTMXTiledMap.h"
#include "bindings/modules/v8/V8CCTMXTilesetInfo.h"
#include "bindings/modules/v8/V8CCLabelAtlas.h"
#include "bindings/modules/v8/V8CCScale9Sprite.h"
#include "bindings/modules/v8/V8CCArmatureAnimation.h"
#include "bindings/modules/v8/V8CCArmature.h"
#include "bindings/modules/v8/V8CCArmatureDataManager.h"
#include "bindings/modules/v8/V8CCTouchDelegate.h"
#include "bindings/modules/v8/V8CCScrollView.h"
#include "bindings/modules/v8/V8CCClippingNode.h"
#include "bindings/modules/v8/V8CCTableViewCell.h"
#include "bindings/modules/v8/V8CCComController.h"
#include "bindings/modules/v8/V8CCTableView.h"

#include "bindings/modules/v8/V8CCDictionary.h"
#include "bindings/modules/v8/V8CCPoint.h"
#include "bindings/modules/v8/V8CCArray.h"
#include "bindings/modules/v8/V8CCAffineTransform.h"
#include "bindings/modules/v8/V8CCRect.h"
#include "bindings/modules/v8/V8CCSize.h"
#include "bindings/modules/v8/V8ccColor3B.h"
#include "bindings/modules/v8/V8ccColor4B.h"
#include "bindings/modules/v8/V8ccColor4F.h"

#include "modules/cocos2d/ScriptingCore.h"

#define FUNC_NAME(a, b) a ## b
#define ATTRIBUTE_GETTER_CUSTOM(_class_) \
    void V8Cocos2d:: FUNC_NAME(_class_, AttributeGetterCustom) (v8::PropertyCallbackInfo<v8::Value> const& info) { \
        v8::Isolate* isolate = info.GetIsolate(); \
        v8::Handle<v8::FunctionTemplate> functionTemplate = V8CC##_class_::domTemplate(isolate); \
        v8::Handle<v8::Function> v8Function = functionTemplate->GetFunction(); \
        v8SetReturnValue(info, v8Function); \
    }

namespace blink {

Cocos2d::Cocos2d()
{
    m_pGraphicsContext3D = NULL;
    CCScriptEngineProtocol *pEngine = ScriptingCore::getInstance();
    CCScriptEngineManager::sharedManager()->setScriptEngine(pEngine);
}

Cocos2d::~Cocos2d()
{
    if(NULL != m_pGraphicsContext3D)
        delete m_pGraphicsContext3D;
}

void Cocos2d::trace(Visitor* visitor)
{
}

void Cocos2d::setContext(WebGLRenderingContext* context) {
    m_pGraphicsContext3D = CCGraphicsContext3DImpl::getInstance();
    if(m_pGraphicsContext3D)
        m_pGraphicsContext3D->setGLContext((void*)context);
    cocos2d::CCDirector::setWebGLContext((CCGraphicsContext3D*)m_pGraphicsContext3D);
}

void Cocos2d::glEnableVertexAttribs(unsigned int flags)
{
    cocos2d::ccGLEnableVertexAttribs(flags);
}


  ATTRIBUTE_GETTER_CUSTOM(DrawNode)
  ATTRIBUTE_GETTER_CUSTOM(ScrollView)
  ATTRIBUTE_GETTER_CUSTOM(EaseSineIn)
  ATTRIBUTE_GETTER_CUSTOM(ProgressTo)
  ATTRIBUTE_GETTER_CUSTOM(Hide)
  ATTRIBUTE_GETTER_CUSTOM(TransitionMoveInB)
  ATTRIBUTE_GETTER_CUSTOM(TransitionMoveInL)
  ATTRIBUTE_GETTER_CUSTOM(EGLView)
  ATTRIBUTE_GETTER_CUSTOM(TransitionMoveInR)
  ATTRIBUTE_GETTER_CUSTOM(Scheduler)
  ATTRIBUTE_GETTER_CUSTOM(TransitionProgressHorizontal)
  ATTRIBUTE_GETTER_CUSTOM(MoveTo)
  ATTRIBUTE_GETTER_CUSTOM(JumpBy)
  ATTRIBUTE_GETTER_CUSTOM(AnimationFrame)
  ATTRIBUTE_GETTER_CUSTOM(EaseBounceIn)
  ATTRIBUTE_GETTER_CUSTOM(TransitionRotoZoom)
  ATTRIBUTE_GETTER_CUSTOM(Director)
  ATTRIBUTE_GETTER_CUSTOM(Texture2D)
  ATTRIBUTE_GETTER_CUSTOM(EaseElasticOut)
  ATTRIBUTE_GETTER_CUSTOM(EaseBackOut)
  ATTRIBUTE_GETTER_CUSTOM(TransitionFlipX)
  ATTRIBUTE_GETTER_CUSTOM(StopGrid)
  ATTRIBUTE_GETTER_CUSTOM(TransitionScene)
  ATTRIBUTE_GETTER_CUSTOM(SkewBy)
  ATTRIBUTE_GETTER_CUSTOM(TransitionProgressVertical)
  ATTRIBUTE_GETTER_CUSTOM(Layer)
  ATTRIBUTE_GETTER_CUSTOM(EaseElastic)
  ATTRIBUTE_GETTER_CUSTOM(Grid3DAction)
  ATTRIBUTE_GETTER_CUSTOM(FadeIn)
  ATTRIBUTE_GETTER_CUSTOM(NodeRGBA)
  ATTRIBUTE_GETTER_CUSTOM(AnimationCache)
  ATTRIBUTE_GETTER_CUSTOM(FlipY3D)
  ATTRIBUTE_GETTER_CUSTOM(EaseSineInOut)
  ATTRIBUTE_GETTER_CUSTOM(TransitionFlipAngular)
  ATTRIBUTE_GETTER_CUSTOM(TransitionMoveInT)
  ATTRIBUTE_GETTER_CUSTOM(EaseElasticInOut)
  ATTRIBUTE_GETTER_CUSTOM(EaseBounce)
  ATTRIBUTE_GETTER_CUSTOM(Show)
  ATTRIBUTE_GETTER_CUSTOM(FadeOut)
  ATTRIBUTE_GETTER_CUSTOM(CallFunc)
  ATTRIBUTE_GETTER_CUSTOM(Waves3D)
  ATTRIBUTE_GETTER_CUSTOM(Touch)
  ATTRIBUTE_GETTER_CUSTOM(MenuItemImage)
  ATTRIBUTE_GETTER_CUSTOM(MenuItem)
  ATTRIBUTE_GETTER_CUSTOM(ActionEase)
  ATTRIBUTE_GETTER_CUSTOM(TransitionSceneOriented)
  ATTRIBUTE_GETTER_CUSTOM(TransitionZoomFlipAngular)
  ATTRIBUTE_GETTER_CUSTOM(EaseIn)
  ATTRIBUTE_GETTER_CUSTOM(EaseExponentialInOut)
  ATTRIBUTE_GETTER_CUSTOM(EaseBackInOut)
  ATTRIBUTE_GETTER_CUSTOM(EaseExponentialOut)
  ATTRIBUTE_GETTER_CUSTOM(FlipX3D)
  ATTRIBUTE_GETTER_CUSTOM(DelayTime)
  ATTRIBUTE_GETTER_CUSTOM(ProgressTimer)
  ATTRIBUTE_GETTER_CUSTOM(LabelBMFont)
  ATTRIBUTE_GETTER_CUSTOM(TransitionFadeBL)
  ATTRIBUTE_GETTER_CUSTOM(EaseElasticIn)
  ATTRIBUTE_GETTER_CUSTOM(TransitionFadeTR)
  ATTRIBUTE_GETTER_CUSTOM(FiniteTimeAction)
  ATTRIBUTE_GETTER_CUSTOM(FadeOutDownTiles)
  ATTRIBUTE_GETTER_CUSTOM(JumpTiles3D)
  ATTRIBUTE_GETTER_CUSTOM(EaseBackIn)
  ATTRIBUTE_GETTER_CUSTOM(SpriteBatchNode)
  ATTRIBUTE_GETTER_CUSTOM(ActionCamera)
  ATTRIBUTE_GETTER_CUSTOM(ActionTween)
  ATTRIBUTE_GETTER_CUSTOM(TransitionFadeDown)
  ATTRIBUTE_GETTER_CUSTOM(ProgressFromTo)
  ATTRIBUTE_GETTER_CUSTOM(ActionManager)
  ATTRIBUTE_GETTER_CUSTOM(FlipX)
  ATTRIBUTE_GETTER_CUSTOM(FlipY)
  ATTRIBUTE_GETTER_CUSTOM(TransitionSplitCols)
  ATTRIBUTE_GETTER_CUSTOM(Timer)
  ATTRIBUTE_GETTER_CUSTOM(FadeTo)
  ATTRIBUTE_GETTER_CUSTOM(RepeatForever)
  ATTRIBUTE_GETTER_CUSTOM(Place)
  ATTRIBUTE_GETTER_CUSTOM(TiledGrid3D)
  ATTRIBUTE_GETTER_CUSTOM(MenuItemLabel)
  ATTRIBUTE_GETTER_CUSTOM(RenderTexture)
  ATTRIBUTE_GETTER_CUSTOM(Animate)
  ATTRIBUTE_GETTER_CUSTOM(TransitionShrinkGrow)
  ATTRIBUTE_GETTER_CUSTOM(LabelTTF)
  ATTRIBUTE_GETTER_CUSTOM(LayerMultiplex)
  ATTRIBUTE_GETTER_CUSTOM(Blink)
  ATTRIBUTE_GETTER_CUSTOM(ShaderCache)
  ATTRIBUTE_GETTER_CUSTOM(JumpTo)
  ATTRIBUTE_GETTER_CUSTOM(AtlasNode)
  ATTRIBUTE_GETTER_CUSTOM(TransitionJumpZoom)
  ATTRIBUTE_GETTER_CUSTOM(SpriteFrameCache)
  ATTRIBUTE_GETTER_CUSTOM(CatmullRomBy)
  ATTRIBUTE_GETTER_CUSTOM(TiledGrid3DAction)
  ATTRIBUTE_GETTER_CUSTOM(GLProgram)
  ATTRIBUTE_GETTER_CUSTOM(Twirl)
  ATTRIBUTE_GETTER_CUSTOM(LayerColor)
  ATTRIBUTE_GETTER_CUSTOM(FadeOutBLTiles)
  ATTRIBUTE_GETTER_CUSTOM(TransitionProgress)
  ATTRIBUTE_GETTER_CUSTOM(EaseRateAction)
  ATTRIBUTE_GETTER_CUSTOM(LayerGradient)
  ATTRIBUTE_GETTER_CUSTOM(MenuItemSprite)
  ATTRIBUTE_GETTER_CUSTOM(Node)
  ATTRIBUTE_GETTER_CUSTOM(GLNode)
  ATTRIBUTE_GETTER_CUSTOM(ToggleVisibility)
  ATTRIBUTE_GETTER_CUSTOM(Repeat)
  ATTRIBUTE_GETTER_CUSTOM(CardinalSplineBy)
  ATTRIBUTE_GETTER_CUSTOM(TransitionFlipY)
  ATTRIBUTE_GETTER_CUSTOM(TurnOffTiles)
  ATTRIBUTE_GETTER_CUSTOM(TintTo)
  ATTRIBUTE_GETTER_CUSTOM(CatmullRomTo)
  ATTRIBUTE_GETTER_CUSTOM(ActionInstant)
  ATTRIBUTE_GETTER_CUSTOM(TargetedAction)
  ATTRIBUTE_GETTER_CUSTOM(TransitionTurnOffTiles)
  ATTRIBUTE_GETTER_CUSTOM(RotateTo)
  ATTRIBUTE_GETTER_CUSTOM(TransitionSplitRows)
  ATTRIBUTE_GETTER_CUSTOM(TransitionProgressRadialCCW)
  ATTRIBUTE_GETTER_CUSTOM(ScaleTo)
  ATTRIBUTE_GETTER_CUSTOM(TransitionPageTurn)
  ATTRIBUTE_GETTER_CUSTOM(SplitRows)
  ATTRIBUTE_GETTER_CUSTOM(SpriteFrame)
  ATTRIBUTE_GETTER_CUSTOM(Liquid)
  ATTRIBUTE_GETTER_CUSTOM(ParticleFlower)
  ATTRIBUTE_GETTER_CUSTOM(ParticleGalaxy)
  ATTRIBUTE_GETTER_CUSTOM(ParticleMeteor)
  ATTRIBUTE_GETTER_CUSTOM(ParticleSpiral)
  ATTRIBUTE_GETTER_CUSTOM(ParticleExplosion)
  ATTRIBUTE_GETTER_CUSTOM(ParticleSmoke)
  ATTRIBUTE_GETTER_CUSTOM(ParticleSnow)
  ATTRIBUTE_GETTER_CUSTOM(ParticleRain)
  ATTRIBUTE_GETTER_CUSTOM(ParticleSun)
  ATTRIBUTE_GETTER_CUSTOM(ParticleFire)
  ATTRIBUTE_GETTER_CUSTOM(ParticleFireworks)
  ATTRIBUTE_GETTER_CUSTOM(ParticleBatchNode)
  ATTRIBUTE_GETTER_CUSTOM(TransitionZoomFlipX)
  ATTRIBUTE_GETTER_CUSTOM(TransitionCrossFade)
  ATTRIBUTE_GETTER_CUSTOM(Ripple3D)
  ATTRIBUTE_GETTER_CUSTOM(Action)
  ATTRIBUTE_GETTER_CUSTOM(GridBase)
  ATTRIBUTE_GETTER_CUSTOM(Animation)
  ATTRIBUTE_GETTER_CUSTOM(Spawn)
  ATTRIBUTE_GETTER_CUSTOM(Set)
  ATTRIBUTE_GETTER_CUSTOM(ShakyTiles3D)
  ATTRIBUTE_GETTER_CUSTOM(PageTurn3D)
  ATTRIBUTE_GETTER_CUSTOM(Grid3D)
  ATTRIBUTE_GETTER_CUSTOM(TransitionProgressInOut)
  ATTRIBUTE_GETTER_CUSTOM(TransitionFadeUp)
  ATTRIBUTE_GETTER_CUSTOM(Camera)
  ATTRIBUTE_GETTER_CUSTOM(LayerRGBA)
  ATTRIBUTE_GETTER_CUSTOM(BezierTo)
  ATTRIBUTE_GETTER_CUSTOM(Follow)
  ATTRIBUTE_GETTER_CUSTOM(TintBy)
  ATTRIBUTE_GETTER_CUSTOM(ActionInterval)
  ATTRIBUTE_GETTER_CUSTOM(EaseBounceInOut)
  ATTRIBUTE_GETTER_CUSTOM(Menu)
  ATTRIBUTE_GETTER_CUSTOM(EaseInOut)
  ATTRIBUTE_GETTER_CUSTOM(TransitionZoomFlipY)
  ATTRIBUTE_GETTER_CUSTOM(ScaleBy)
  ATTRIBUTE_GETTER_CUSTOM(Lens3D)
  ATTRIBUTE_GETTER_CUSTOM(SkewTo)
  ATTRIBUTE_GETTER_CUSTOM(CardinalSplineTo)
  ATTRIBUTE_GETTER_CUSTOM(EaseExponentialIn)
  ATTRIBUTE_GETTER_CUSTOM(ReuseGrid)
  ATTRIBUTE_GETTER_CUSTOM(MenuItemAtlasFont)
  ATTRIBUTE_GETTER_CUSTOM(Sprite)
  ATTRIBUTE_GETTER_CUSTOM(OrbitCamera)
  ATTRIBUTE_GETTER_CUSTOM(Component)
  ATTRIBUTE_GETTER_CUSTOM(FadeOutUpTiles)
  ATTRIBUTE_GETTER_CUSTOM(TextFieldTTF)
  ATTRIBUTE_GETTER_CUSTOM(Waves)
  ATTRIBUTE_GETTER_CUSTOM(EaseOut)
  ATTRIBUTE_GETTER_CUSTOM(MenuItemFont)
  ATTRIBUTE_GETTER_CUSTOM(EaseSineOut)
  ATTRIBUTE_GETTER_CUSTOM(TextureCache)
  ATTRIBUTE_GETTER_CUSTOM(MenuItemToggle)
  ATTRIBUTE_GETTER_CUSTOM(SplitCols)
  ATTRIBUTE_GETTER_CUSTOM(EGLViewProtocol)
  ATTRIBUTE_GETTER_CUSTOM(MoveBy)
  ATTRIBUTE_GETTER_CUSTOM(MotionStreak)
  ATTRIBUTE_GETTER_CUSTOM(RotateBy)
  ATTRIBUTE_GETTER_CUSTOM(BezierBy)
  ATTRIBUTE_GETTER_CUSTOM(FadeOutTRTiles)
  ATTRIBUTE_GETTER_CUSTOM(Scene)
  ATTRIBUTE_GETTER_CUSTOM(TransitionFade)
  ATTRIBUTE_GETTER_CUSTOM(TransitionProgressOutIn)
  ATTRIBUTE_GETTER_CUSTOM(EaseBounceOut)
  ATTRIBUTE_GETTER_CUSTOM(GridAction)
  ATTRIBUTE_GETTER_CUSTOM(Sequence)
  ATTRIBUTE_GETTER_CUSTOM(Shaky3D)
  ATTRIBUTE_GETTER_CUSTOM(TransitionProgressRadialCW)
  ATTRIBUTE_GETTER_CUSTOM(ShuffleTiles)
  ATTRIBUTE_GETTER_CUSTOM(TransitionSlideInR)
  ATTRIBUTE_GETTER_CUSTOM(TransitionSlideInT)
  ATTRIBUTE_GETTER_CUSTOM(TransitionSlideInL)
  ATTRIBUTE_GETTER_CUSTOM(WavesTiles3D)
  ATTRIBUTE_GETTER_CUSTOM(TransitionSlideInB)
  ATTRIBUTE_GETTER_CUSTOM(Speed)
  ATTRIBUTE_GETTER_CUSTOM(ShatteredTiles3D)
  ATTRIBUTE_GETTER_CUSTOM(TMXLayer)
  ATTRIBUTE_GETTER_CUSTOM(TMXLayerInfo)
  ATTRIBUTE_GETTER_CUSTOM(TMXMapInfo)
  ATTRIBUTE_GETTER_CUSTOM(TMXObjectGroup)
  ATTRIBUTE_GETTER_CUSTOM(TMXTiledMap)
  ATTRIBUTE_GETTER_CUSTOM(TMXTilesetInfo)
  ATTRIBUTE_GETTER_CUSTOM(LabelAtlas)
  ATTRIBUTE_GETTER_CUSTOM(Scale9Sprite)
  ATTRIBUTE_GETTER_CUSTOM(Armature)
  ATTRIBUTE_GETTER_CUSTOM(ArmatureAnimation)
  ATTRIBUTE_GETTER_CUSTOM(ArmatureDataManager)
  ATTRIBUTE_GETTER_CUSTOM(TouchDelegate)
  ATTRIBUTE_GETTER_CUSTOM(ClippingNode)
  ATTRIBUTE_GETTER_CUSTOM(TableViewCell)
  ATTRIBUTE_GETTER_CUSTOM(ComController)
  ATTRIBUTE_GETTER_CUSTOM(TableView)

  ATTRIBUTE_GETTER_CUSTOM(Dictionary)
  ATTRIBUTE_GETTER_CUSTOM(Point)
  ATTRIBUTE_GETTER_CUSTOM(Array)
  ATTRIBUTE_GETTER_CUSTOM(AffineTransform)
  ATTRIBUTE_GETTER_CUSTOM(Rect)
  ATTRIBUTE_GETTER_CUSTOM(Size)

    void V8Cocos2d:: Color3BAttributeGetterCustom(v8::PropertyCallbackInfo<v8::Value> const& info) { \
        v8::Isolate* isolate = info.GetIsolate();
        v8::Handle<v8::FunctionTemplate> functionTemplate = V8ccColor3B::domTemplate(isolate);
        v8::Handle<v8::Function> v8Function = functionTemplate->GetFunction();
        v8SetReturnValue(info, v8Function);
    }

    void V8Cocos2d:: Color4BAttributeGetterCustom(v8::PropertyCallbackInfo<v8::Value> const& info) { \
        v8::Isolate* isolate = info.GetIsolate();
        v8::Handle<v8::FunctionTemplate> functionTemplate = V8ccColor4B::domTemplate(isolate);
        v8::Handle<v8::Function> v8Function = functionTemplate->GetFunction();
        v8SetReturnValue(info, v8Function);
    }

    void V8Cocos2d:: Color4FAttributeGetterCustom(v8::PropertyCallbackInfo<v8::Value> const& info) { \
        v8::Isolate* isolate = info.GetIsolate();
        v8::Handle<v8::FunctionTemplate> functionTemplate = V8ccColor4F::domTemplate(isolate);
        v8::Handle<v8::Function> v8Function = functionTemplate->GetFunction();
        v8SetReturnValue(info, v8Function);
    }

    void V8Cocos2d:: ParticleSystemAttributeGetterCustom(v8::PropertyCallbackInfo<v8::Value> const& info) {
        v8::Isolate* isolate = info.GetIsolate();
        v8::Handle<v8::FunctionTemplate> functionTemplate = V8CCParticleSystemQuad::domTemplate(isolate);
        v8::Handle<v8::Function> v8Function = functionTemplate->GetFunction();
        v8SetReturnValue(info, v8Function);
    }

    void Cocos2d::forceGC() {
        v8::Isolate::GetCurrent()->LowMemoryNotification();
    }
}
