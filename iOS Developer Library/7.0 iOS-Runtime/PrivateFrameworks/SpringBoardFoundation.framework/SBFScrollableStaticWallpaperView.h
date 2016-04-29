/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class <SBFCancelable>, NSString, SBFLockScreenWallpaperParallaxSettings, SBFSubject, UIColor, UIImageView, UIScrollView;

@interface SBFScrollableStaticWallpaperView : SBFStaticWallpaperView <UIScrollViewDelegate> {
    UIColor *_averageColor;
    <SBFCancelable> *_colorBoxCancelToken;
    UIImageView *_imageView;
    float _minimumZoomScale;
    float _minimumZoomScaleForParallax;
    BOOL _parallaxCanBeEnabledAutomatically;
    <SBFCancelable> *_parallaxCancelToken;
    SBFLockScreenWallpaperParallaxSettings *_parallaxSettings;
    UIScrollView *_scrollView;
    SBFSubject *_scrollViewObserver;
}

@property(readonly) UIColor * averageColor;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (BOOL)_shouldScaleForParallax;

- (struct CGPoint { float x1; float x2; })_boundedContentOffsetForOverhang;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_cropRect;
- (struct CGSize { float x1; float x2; })_imageSize;
- (struct CGPoint { float x1; float x2; })_maximumContentOffsetForOverhang;
- (struct CGPoint { float x1; float x2; })_minimumContentOffsetForOverhang;
- (float)_parallaxFactorWithZoomScale:(float)arg1 contentOffset:(struct CGPoint { float x1; float x2; })arg2;
- (float)_scrollViewParallaxFactor;
- (void)_setupColorBoxObserver;
- (void)_setupContentView;
- (void)_setupParallaxObserver;
- (void)_setupScrollView;
- (void)_setupScrollViewObserver;
- (float)_throttleDuration;
- (void)_updateParallaxForScroll;
- (void)_updateScrollViewZoomScales;
- (id)_wallpaperImageForAnalysis;
- (id)averageColor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cropRect;
- (float)cropZoomScale;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 wallpaperImage:(id)arg2 variant:(int)arg3;
- (void)layoutSubviews;
- (float)parallaxFactor;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)setCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 zoomScale:(float)arg2;
- (void)setParallaxEnabled:(BOOL)arg1;
- (BOOL)supportsCropping;
- (id)viewForZoomingInScrollView:(id)arg1;

@end
