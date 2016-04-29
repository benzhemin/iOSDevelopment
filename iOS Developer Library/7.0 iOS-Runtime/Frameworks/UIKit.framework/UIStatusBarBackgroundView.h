/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UIStatusBarCorners, UIStatusBarStyleAttributes;

@interface UIStatusBarBackgroundView : UIView {
    BOOL _glowEnabled;
    UIImageView *_glowView;
    UIStatusBarStyleAttributes *_style;
    BOOL _suppressGlow;
    UIStatusBarCorners *_topCorners;
}

- (id)_backgroundImageName;
- (id)_baseImage;
- (id)_glowImage;
- (void)_setGlowAnimationEnabled:(BOOL)arg1 waitForNextCycle:(BOOL)arg2;
- (void)_startGlowAnimationWaitForNextCycle:(BOOL)arg1;
- (void)_stopGlowAnimation;
- (BOOL)_styleCanGlow;
- (BOOL)_topCornersAreRounded;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(id)arg2 backgroundColor:(id)arg3;
- (void)setGlowAnimationEnabled:(BOOL)arg1;
- (void)setSuppressesGlow:(BOOL)arg1;
- (id)style;

@end
