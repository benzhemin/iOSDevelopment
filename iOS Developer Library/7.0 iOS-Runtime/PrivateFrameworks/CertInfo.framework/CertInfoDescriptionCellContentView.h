/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@class NSArray;

@interface CertInfoDescriptionCellContentView : UIView {
    float _idealHeight;
    NSArray *_labelsAndValues;
    struct CGSize { float x1; float x2; } *_sizes;
    int _sizesCount;
}

- (void).cxx_destruct;
- (id)_labelFont;
- (void)_recalculateIdealHeight;
- (id)_valueFont;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (float)rowHeight;
- (void)setLabelsAndValues:(id)arg1;

@end
