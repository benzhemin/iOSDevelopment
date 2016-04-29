/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKBInputBackdropView, UIKBRenderConfig, UIKeyboardCornerView;

@interface UIPeripheralHostView : UIView {
    UIKeyboardCornerView *_cornerViewLeft;
    UIKeyboardCornerView *_cornerViewRight;
    int _explicitLayoutCount;
    UIKBInputBackdropView *_inputAccessoryBackdropView;
    UIKBInputBackdropView *_inputBackdropView;
    UIKBRenderConfig *_renderConfig;
}

@property(readonly) UIKeyboardCornerView * cornerViewLeft;
@property(readonly) UIKeyboardCornerView * cornerViewRight;
@property(readonly) UIKBInputBackdropView * inputAccessoryBackdropView;
@property(readonly) UIKBInputBackdropView * inputBackdropView;

- (int)_clipCornersOfView:(id)arg1;
- (id)_inheritedRenderConfig;
- (void)_resizeForKeyplaneSize:(struct CGSize { float x1; float x2; })arg1 splitWidthsChanged:(BOOL)arg2;
- (void)_setBaseRenderConfig:(id)arg1;
- (void)_setRenderConfig:(id)arg1 updateKeyboard:(BOOL)arg2;
- (void)_setRenderConfig:(id)arg1;
- (void)beginExplicitLayout;
- (id)cornerViewLeft;
- (id)cornerViewRight;
- (void)dealloc;
- (void)didAddSubview:(id)arg1;
- (void)endExplicitLayout;
- (BOOL)explicitLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)inputAccessoryBackdropView;
- (id)inputBackdropView;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)removeFromSuperview;
- (void)syncInputAccessoryViewBackdropToFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)syncInputViewBackdropToFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)textEffectsVisibilityLevel;
- (void)updateBackdropViewForInputAccessoryView:(BOOL)arg1;

@end