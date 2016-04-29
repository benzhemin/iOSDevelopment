/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class NSHashTable, NSString, UIView;

@interface FBRootWindow : FBWindow <FBSceneTransformTarget> {
    BOOL _mainDisplay;
    UIView *_sceneContainerView;
    NSHashTable *_transforms;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (BOOL)_isSecure;

- (BOOL)_appearsInLoupe;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)_isClippedByScreenJail;
- (BOOL)_isConstrainedByScreenJail;
- (BOOL)_isOffsetByScreenJail;
- (BOOL)_isRotatedByScreenJail;
- (BOOL)_isScaledByScreenJail;
- (BOOL)_isWindowServerHostingManaged;
- (void)_noteScreenDidChangeMode:(id)arg1;
- (BOOL)_shouldApplyHorizontalPixelScaleTransform;
- (BOOL)_shouldPrepareScreenForWindow;
- (void)_updateTransforms;
- (BOOL)_usesWindowServerHitTesting;
- (void)attachSceneTransform:(id)arg1;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithDisplay:(id)arg1;
- (void)removeSceneTransform:(id)arg1;
- (id)sceneContainerView;
- (void)setScreen:(id)arg1;
- (void)transformDidInvalidate:(id)arg1;
- (void)transformDidUpdate:(id)arg1;
- (void)updateSceneSettings;

@end
