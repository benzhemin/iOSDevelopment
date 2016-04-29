/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, UILabel, UIView;

@interface SKUIGroupedHeaderView : UIView {
    UIView *_botBorder;
    UILabel *_titleLabel;
    UIView *_topBorder;
}

@property BOOL hasBottomBorder;
@property BOOL hasTopBorder;
@property(copy) NSString * title;

- (void).cxx_destruct;
- (BOOL)hasBottomBorder;
- (BOOL)hasTopBorder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setHasBottomBorder:(BOOL)arg1;
- (void)setHasTopBorder:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)title;

@end
