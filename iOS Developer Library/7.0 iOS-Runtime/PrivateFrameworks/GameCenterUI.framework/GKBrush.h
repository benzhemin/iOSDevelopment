/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKBrush : NSObject <NSCopying> {
}

+ (id)brush;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;
- (id)drawnImageForSize:(struct CGSize { float x1; float x2; })arg1 opaque:(BOOL)arg2 input:(id)arg3;
- (float)scaleForInput:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeForInput:(id)arg1;

@end
