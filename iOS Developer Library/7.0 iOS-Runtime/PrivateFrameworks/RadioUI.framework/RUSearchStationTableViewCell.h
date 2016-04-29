/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class MPUEmphasizedText, SKUICircleProgressIndicator, UIImageView, UILabel;

@interface RUSearchStationTableViewCell : RUTableViewCell {
    SKUICircleProgressIndicator *_activityIndicator;
    UIImageView *_imageView;
    BOOL _showActivityIndicator;
    MPUEmphasizedText *_stationDescriptionEmphasizedText;
    MPUEmphasizedText *_stationNameEmphasizedText;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
}

@property BOOL showActivityIndicator;
@property BOOL showsArtwork;
@property(copy) MPUEmphasizedText * stationDescriptionEmphasizedText;
@property(copy) MPUEmphasizedText * stationNameEmphasizedText;

+ (id)_emphasizedSubtitleLabelAttributesForTraitCollection:(id)arg1;
+ (id)_emphasizedTextColor;
+ (id)_emphasizedTitleLabelAttributesForTraitCollection:(id)arg1;
+ (id)_regularSubtitleLabelAttributesForTraitCollection:(id)arg1;
+ (id)_regularTextColor;
+ (id)_regularTitleLabelAttributesForTraitCollection:(id)arg1;
+ (id)_subtitleLabelFontForTraitCollection:(id)arg1 withEmphasis:(BOOL)arg2;
+ (id)_textAttributesWithFont:(id)arg1 textColor:(id)arg2;
+ (id)_titleLabelFont;
+ (struct CGSize { float x1; float x2; })artworkSize;
+ (float)defaultHeightForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (id)imageView;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setShowActivityIndicator:(BOOL)arg1;
- (void)setShowsArtwork:(BOOL)arg1;
- (void)setStationDescriptionEmphasizedText:(id)arg1;
- (void)setStationNameEmphasizedText:(id)arg1;
- (BOOL)showActivityIndicator;
- (BOOL)showsArtwork;
- (id)stationDescriptionEmphasizedText;
- (id)stationImage;
- (id)stationNameEmphasizedText;

@end
