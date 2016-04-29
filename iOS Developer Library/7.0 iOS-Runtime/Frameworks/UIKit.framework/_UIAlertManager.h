/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAlertManager : NSObject {
}

+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_alertTranslationForInterfaceOrientation:(int)arg1 andTranslation:(float)arg2;
+ (void)_applyAlertTransforms;
+ (void)addToStack:(id)arg1 dontDimBackground:(BOOL)arg2;
+ (void)alertPopoutCompleted;
+ (void)alertWindowAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
+ (void)applyClientWindowTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
+ (void)applyInternalWindowTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })calculatedAlertTransform;
+ (BOOL)cancelAlertsAnimated:(BOOL)arg1;
+ (BOOL)cancelTopMostAlertAnimated:(BOOL)arg1;
+ (void)createAlertWindowIfNeeded:(BOOL)arg1 deferDisplay:(BOOL)arg2;
+ (void)createAlertWindowIfNeeded:(BOOL)arg1;
+ (void)hideAlertsForTermination;
+ (void)hideDimmingViewAnimated:(BOOL)arg1;
+ (BOOL)hideTopMostAlertAnimated:(BOOL)arg1;
+ (void)hideTopmostMiniAlert;
+ (void)initialize;
+ (void)noteOrientationChangingTo:(int)arg1 animated:(BOOL)arg2;
+ (void)noteOrientationChangingTo:(int)arg1;
+ (void)removeFromStack:(id)arg1;
+ (void)reorientAlertWindowTo:(int)arg1 animated:(BOOL)arg2 keyboard:(id)arg3;
+ (void)showDimmingViewAnimated:(BOOL)arg1;
+ (void)showTopmostMiniAlertWithSynchronizationPort:(unsigned int)arg1;
+ (void)sizeAlertWindowForCurrentOrientation;
+ (BOOL)stackContainsAlert:(id)arg1;
+ (void)tellSpringboardHidingAlert:(id)arg1 animated:(BOOL)arg2 forSpringBoardAlertTransition:(BOOL)arg3;
+ (void)tellSpringboardShowingAlert:(id)arg1 animated:(BOOL)arg2 forSpringBoardAlertTransition:(BOOL)arg3;
+ (id)topMostAlert;
+ (id)visibleAlert;

- (void)_didHideDimmingView:(id)arg1 finished:(id)arg2;

@end
