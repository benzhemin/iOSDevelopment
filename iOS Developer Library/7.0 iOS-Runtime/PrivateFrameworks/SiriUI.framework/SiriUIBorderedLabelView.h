/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@class UIFont, UIImageView, UILabel;

@interface SiriUIBorderedLabelView : UIView {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    UIImageView *_borderImageView;
    } _edgeInsets;
    UIFont *_font;
    UILabel *_ratingLabel;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;

+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_defaultEdgeInsets;

- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })_borderSize;
- (float)baselineOffsetFromTopOfFrame;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (id)initWithText:(id)arg1 font:(id)arg2 borderColor:(id)arg3;
- (void)layoutSubviews;
- (void)setEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
