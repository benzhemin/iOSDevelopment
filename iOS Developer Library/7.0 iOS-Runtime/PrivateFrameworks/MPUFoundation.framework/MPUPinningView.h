/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@class CALayer, UIView;

@interface MPUPinningView : UIView {
    UIView *_containerView;
    UIView *_contentView;
    CALayer *_effectivePinningSourceLayer;
    UIView *_pinningSourceView;
}

@property(retain) UIView * contentView;
@property(retain) UIView * pinningSourceView;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_configureMatchMoveAnimation;
- (void)_prepareForDefaultImageSnapshotNotification:(id)arg1;
- (void)_registerKVOObserversForLayer:(id)arg1;
- (void)_unregisterKVOObserversForLayer:(id)arg1;
- (BOOL)_updateEffectivePinningSourceView;
- (id)contentView;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pinningSourceView;
- (void)setContentView:(id)arg1;
- (void)setPinningSourceView:(id)arg1;

@end
