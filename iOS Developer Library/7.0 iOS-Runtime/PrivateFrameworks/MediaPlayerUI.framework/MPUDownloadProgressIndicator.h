/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class CADisplayLink, UIImageView;

@interface MPUDownloadProgressIndicator : UIButton {
    float _animatedStartValue;
    float _animatedValue;
    BOOL _animating;
    double _animationEndTime;
    double _animationStartTime;
    BOOL _canCancel;
    UIImageView *_centerImageView;
    CADisplayLink *_displayLink;
    BOOL _mpExternalHidden;
    BOOL _mpInternalHidden;
    int _style;
    float _value;
}

@property BOOL canCancel;
@property(readonly) int style;
@property float value;

+ (void)_drawModernGradientInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (BOOL)_isStyleModernShimmer:(int)arg1;
+ (id)_nonstopImageForStyle:(int)arg1;
+ (struct CGSize { float x1; float x2; })_sizeForStyle:(int)arg1;
+ (id)_stopImageForStyle:(int)arg1;

- (void).cxx_destruct;
- (void)_animateValueOnDisplayLink:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_baseFrameForSize:(struct CGSize { float x1; float x2; })arg1 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_centerImageViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 forStyle:(int)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_fillFrameForSize:(struct CGSize { float x1; float x2; })arg1 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_setInternalHidden:(BOOL)arg1;
- (BOOL)canCancel;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(int)arg1;
- (void)layoutSubviews;
- (void)setCanCancel:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (void)setValue:(float)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)style;
- (void)updateFromObserver:(id)arg1 animated:(BOOL)arg2;
- (void)updateFromObserver:(id)arg1;
- (float)value;

@end
