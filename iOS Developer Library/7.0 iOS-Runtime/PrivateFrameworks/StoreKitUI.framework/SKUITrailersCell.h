/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, UIImage, UIImageView, UILabel;

@interface SKUITrailersCell : UICollectionViewCell {
    UIImageView *_imageView;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
}

@property(retain) UIImage * image;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } imageFrame;
@property(copy) NSString * subtitle;
@property(copy) NSString * title;

- (void).cxx_destruct;
- (id)image;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageFrame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBackgroundColor:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
