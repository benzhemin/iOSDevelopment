/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNMotionBlurAnimationPluginWrapper, NSMutableArray, NSString;

@interface KNTransitionMosaic : KNAnimationEffect <KNTransitionAnimator, KNAnimationPluginArchiving> {
    NSMutableArray *_addedLayers;
    KNMotionBlurAnimationPluginWrapper *_motionBlurWrapper;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (int)animationCategory;
+ (id)animationFilter;
+ (id)animationName;
+ (id)defaultAttributes;
+ (unsigned int)directionType;
+ (void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6;

- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (id)animationsWithContext:(id)arg1;
- (id)generateParticles:(int)arg1 withBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 direction:(unsigned int)arg3;
- (id)layersFromParticles:(id)arg1 mainLayer:(id)arg2;
- (void)renderFrameWithContext:(id)arg1;
- (id)shuffleParticles:(id)arg1 direction:(unsigned int)arg2;

@end
