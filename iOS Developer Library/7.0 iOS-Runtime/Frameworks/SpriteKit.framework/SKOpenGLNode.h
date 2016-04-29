/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKOpenGLNode : SKNode {
}

@property struct CGSize { float x1; float x2; } viewportSize;

+ (id)openGLNodeWithViewportSize:(struct CGSize { float x1; float x2; })arg1;

- (void)_renderForTime:(double)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewportSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)needsRenderForTime:(double)arg1;
- (void)renderForTime:(double)arg1;
- (void)setViewportSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })viewportSize;

@end
