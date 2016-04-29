/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIArtworkList, SKUILink;

@interface SKUIMediaComponent : SKUIPageComponent <SSMetricsEventFieldProvider> {
    NSString *_accessibilityLabel;
    int _alignment;
    double _duration;
    SKUILink *_link;
    int _mediaAppearance;
    long long _mediaIdentifier;
    int _mediaType;
    NSString *_mediaURLString;
    SKUIArtworkList *_thumbnailArtworkList;
    NSString *_title;
    float _titleFontSize;
    int _titleFontWeight;
}

@property(readonly) NSString * accessibilityLabel;
@property(readonly) int alignment;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) double duration;
@property(readonly) unsigned int hash;
@property(readonly) SKUILink * link;
@property(readonly) int mediaAppearance;
@property(readonly) long long mediaIdentifier;
@property(readonly) int mediaType;
@property(readonly) NSString * mediaURLString;
@property(readonly) Class superclass;
@property(readonly) SKUIArtworkList * thumbnailArtworkList;
@property(readonly) NSString * title;
@property(readonly) float titleFontSize;
@property(readonly) int titleFontWeight;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (int)alignment;
- (id)bestThumbnailArtwork;
- (id)bestThumbnailForWidth:(float)arg1;
- (int)componentType;
- (double)duration;
- (id)initWithArtwork:(id)arg1;
- (id)initWithArtworkList:(id)arg1 appearance:(int)arg2;
- (id)initWithArtworkList:(id)arg1;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(int)arg2;
- (id)link;
- (int)mediaAppearance;
- (long long)mediaIdentifier;
- (int)mediaType;
- (id)mediaURLString;
- (id)metricsElementName;
- (id)thumbnailArtworkList;
- (id)title;
- (float)titleFontSize;
- (int)titleFontWeight;
- (id)valueForMetricsField:(id)arg1;

@end
