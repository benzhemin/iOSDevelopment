/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class CALayer, NSString;

@interface PKMicaView : UIView <PKMicaResizableView> {
    CALayer *_micaLayer;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) CALayer * micaLayer;
@property(readonly) Class superclass;

- (struct CGSize { float x1; float x2; })boundsSizeToMatchPointScale:(float)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 package:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)micaLayer;
- (float)pointScaleToMatchBoundsSize:(struct CGSize { float x1; float x2; })arg1;

@end
