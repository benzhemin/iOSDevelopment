/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIInputViewSetPlacement, UIView;

@interface UIInputViewAnimationControllerSlideContext : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    UIInputViewSetPlacement *_endPlacement;
    UIView *_snapshot;
    } _snapshotEndFrame;
}

@property(retain) UIInputViewSetPlacement * endPlacement;
@property(retain) UIView * snapshot;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } snapshotEndFrame;

- (void)dealloc;
- (id)endPlacement;
- (void)setEndPlacement:(id)arg1;
- (void)setSnapshot:(id)arg1;
- (void)setSnapshotEndFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)snapshot;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })snapshotEndFrame;

@end
