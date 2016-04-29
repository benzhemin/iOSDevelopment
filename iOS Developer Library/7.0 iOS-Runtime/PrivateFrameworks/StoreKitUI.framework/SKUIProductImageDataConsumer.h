/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIColorScheme, UIColor;

@interface SKUIProductImageDataConsumer : SKUIImageDataConsumer <NSCopying> {
    struct CGSize { 
        float width; 
        float height; 
    UIColor *_backgroundColor;
    SKUIColorScheme *_colorScheme;
    } _iconSize;
}

@property(retain) UIColor * backgroundColor;
@property(retain) SKUIColorScheme * colorScheme;
@property(readonly) struct CGSize { float x1; float x2; } iconSize;
@property(readonly) struct CGSize { float x1; float x2; } imageSize;

+ (id)cardConsumer;
+ (id)chartsConsumer;
+ (id)consumerWithSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)giftComposeConsumer;
+ (id)giftComposeLetterboxConsumer;
+ (id)giftComposePosterConsumer;
+ (id)giftResultConsumer;
+ (id)giftThemeConsumer;
+ (id)giftThemeLetterboxConsumer;
+ (id)giftThemePosterConsumer;
+ (id)gridConsumer;
+ (id)lockupConsumerWithSize:(int)arg1 itemKind:(int)arg2;
+ (id)productPageConsumer;
+ (id)purchasedConsumer;
+ (id)smartBannerConsumer;
+ (id)swooshConsumer;
+ (id)updatesConsumer;
+ (id)wishlistConsumer;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)colorScheme;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { float x1; float x2; })iconSize;
- (id)imageForColor:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)imageForColor:(id)arg1;
- (id)imageForImage:(id)arg1;
- (struct CGSize { float x1; float x2; })imageSize;
- (void)setBackgroundColor:(id)arg1;
- (void)setColorScheme:(id)arg1;

@end
