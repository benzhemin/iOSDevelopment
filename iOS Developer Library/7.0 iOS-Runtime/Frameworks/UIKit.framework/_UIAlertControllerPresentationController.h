/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIView, _UIKeyboardLayoutAlignmentView;

@interface _UIAlertControllerPresentationController : UIPresentationController <UIAdaptivePresentationControllerDelegate> {
    BOOL __isCurrentContext;
    BOOL __shouldRespectNearestCurrentContextPresenter;
    UIView *_dimmingView;
    BOOL constraintsPrepared;
    UIView *keyboardLayoutAlignmentAvailableSpaceView;
    _UIKeyboardLayoutAlignmentView *keyboardLayoutAlignmentView;
}

@property(readonly) UIView * _dimmingView;
@property(setter=_setIsCurrentContext:) BOOL _isCurrentContext;
@property(setter=_setShouldRespectNearestCurrentContextPresenter:) BOOL _shouldRespectNearestCurrentContextPresenter;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (id)_dimmingView;
- (BOOL)_isCurrentContext;
- (void)_occludePresentingWindow:(BOOL)arg1;
- (void)_prepareConstraintsIfNecessary;
- (id)_presentedAlertController;
- (BOOL)_preserveResponderAcrossWindows;
- (void)_setIsCurrentContext:(BOOL)arg1;
- (void)_setShouldRespectNearestCurrentContextPresenter:(BOOL)arg1;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (BOOL)_shouldRespectNearestCurrentContextPresenter;
- (int)adaptivePresentationStyle;
- (int)adaptivePresentationStyleForPresentationController:(id)arg1;
- (int)attributeToAlignAlertControllerViewBy;
- (float)constantForAligningAlertControllerToAvailableSpace;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (void)dealloc;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(int)arg2;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionWillBegin;
- (id)presentedView;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldPresentInFullscreen;
- (BOOL)shouldRemovePresentersView;

@end
