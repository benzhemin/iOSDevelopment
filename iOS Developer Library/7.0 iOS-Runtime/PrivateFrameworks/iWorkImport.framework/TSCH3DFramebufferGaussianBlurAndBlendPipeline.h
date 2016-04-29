/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DGLFramebuffer;

@interface TSCH3DFramebufferGaussianBlurAndBlendPipeline : TSCH3DFramebufferGaussianBlurPipeline {
    float mBlendFactor;
    TSCH3DGLFramebuffer *mBlendTexture;
}

@property float blendFactor;
@property(retain) TSCH3DGLFramebuffer * blendTexture;

+ (id)effectsArray;

- (float)blendFactor;
- (id)blendTexture;
- (void)dealloc;
- (void)setBlendFactor:(float)arg1;
- (void)setBlendTexture:(id)arg1;
- (void)updateShaderEffectsStates;

@end
