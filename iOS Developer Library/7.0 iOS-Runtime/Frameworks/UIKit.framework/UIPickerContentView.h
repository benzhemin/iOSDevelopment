/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UILabel;

@interface UIPickerContentView : UIView {
    struct { 
        unsigned int checked : 1; 
        unsigned int highlighted : 1; 
    UIImageView *_checkView;
    } _pickerContentViewFlags;
    UILabel *_titleLabel;
}

@property(getter=isChecked) BOOL checked;
@property(readonly) UILabel * titleLabel;

+ (float)_checkmarkOffset;

- (BOOL)_isSelectable;
- (id)checkedColor;
- (void)dealloc;
- (BOOL)isChecked;
- (BOOL)isHighlighted;
- (float)labelWidthForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setChecked:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)titleLabel;

@end
