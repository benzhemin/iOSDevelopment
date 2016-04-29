/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSString, UIImageView, UILabel;

@interface PUTextBannerView : UIView {
    UIImageView *_backgroundView;
    BOOL _destructiveText;
    NSString *_text;
    int _textAlignment;
    UILabel *_textLabel;
}

@property(getter=isDestructiveText) BOOL destructiveText;
@property(copy) NSString * text;
@property int textAlignment;

- (void).cxx_destruct;
- (void)_updateSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isDestructiveText;
- (void)layoutSubviews;
- (void)setDestructiveText:(BOOL)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)text;
- (int)textAlignment;

@end
