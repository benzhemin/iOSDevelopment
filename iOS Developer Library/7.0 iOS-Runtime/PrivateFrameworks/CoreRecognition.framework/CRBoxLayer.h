/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@class CAShapeLayer, CATextLayer, NSMutableArray;

@interface CRBoxLayer : CAReplicatorLayer {
    CATextLayer *_codeLayer;
    NSMutableArray *_completionBlocks;
    float _demoSpeed;
    CAShapeLayer *_reticleLayer;
}

@property(retain) CATextLayer * codeLayer;
@property(retain) NSMutableArray * completionBlocks;
@property float demoSpeed;
@property(retain) CAShapeLayer * reticleLayer;

+ (id)layer;

- (void).cxx_destruct;
- (void)addCompletionBlock:(id)arg1;
- (void)animateConceal;
- (void)animatePulseColor:(id)arg1;
- (void)animateReveal;
- (void)animateToPosition:(struct CGPoint { float x1; float x2; })arg1 transform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg2 opacity:(float)arg3 type:(int)arg4;
- (id)codeLayer;
- (id)completionBlocks;
- (void)dealloc;
- (float)demoSpeed;
- (id)init;
- (id)initWithCodeFrameRatio:(float)arg1;
- (void)layoutSublayers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)positionForCodeBoxPoints:(id)arg1;
- (id)reticleLayer;
- (void)setCodeLayer:(id)arg1;
- (void)setCompletionBlocks:(id)arg1;
- (void)setDemoSpeed:(float)arg1;
- (void)setReticleLayer:(id)arg1;
- (void)setString:(id)arg1 mirrored:(BOOL)arg2 inverted:(BOOL)arg3;

@end
