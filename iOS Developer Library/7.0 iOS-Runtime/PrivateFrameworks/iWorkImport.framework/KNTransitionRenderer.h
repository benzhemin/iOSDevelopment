/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class CALayer, NSDictionary, NSMutableArray, TSDFPSCounter;

@interface KNTransitionRenderer : KNAnimationRenderer {
    NSDictionary *mAnimatedLayers;
    BOOL mAnimationsRanToCompletion;
    NSDictionary *mAttributes;
    CALayer *mBackgroundLayer;
    TSDFPSCounter *mFPSCounter;
    int mNumberOfAnimationsStarted;
    BOOL mOutgoingSlideRendered;
    BOOL mShouldAnimateTransition;
    NSMutableArray *mTextures;
    SEL mTransitionEndCallbackSelector;
    id mTransitionEndCallbackTarget;
    SEL mTransitionImmediateEndCallbackSelector;
    id mTransitionImmediateEndCallbackTarget;
}

- (BOOL)addAnimationsAtTime:(double)arg1 relativeToCurrentMediaTime:(BOOL)arg2;
- (void)animateWithDelay:(double)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;
- (id)description;
- (void)forceRemoveAnimations;
- (id)initWithEffectClass:(Class)arg1 direction:(unsigned int)arg2 duration:(double)arg3 session:(id)arg4 attributes:(id)arg5 animatedSlideView:(id)arg6;
- (BOOL)p_addAnimations:(id)arg1 atTime:(double)arg2 relativeToCurrentMediaTime:(BOOL)arg3;
- (void)p_checkForNullTransitions:(Class)arg1;
- (void)p_generateLayers;
- (void)p_removeAnimationsOnAnimatedLayers;
- (void)p_reset;
- (void)pauseAnimationsAtTime:(double)arg1;
- (id)plugin;
- (void)registerForTransitionEndCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForTransitionImmediateEndCallback:(SEL)arg1 target:(id)arg2;
- (void)removeAnimationsAndFinish:(BOOL)arg1;
- (void)renderOutgoingSlideAndPrecacheIncomingSlide;
- (void)renderSlideIndex:(unsigned int)arg1;
- (void)resumeAnimationsIfPausedAtTime:(double)arg1;
- (void)setupLayerTreeForTransition;
- (void)setupPluginContext;
- (void)stopAnimations;
- (void)teardown;
- (void)teardownTransitionIsExitingShow:(BOOL)arg1;
- (void)updateAnimationsForLayerTime:(double)arg1;

@end
