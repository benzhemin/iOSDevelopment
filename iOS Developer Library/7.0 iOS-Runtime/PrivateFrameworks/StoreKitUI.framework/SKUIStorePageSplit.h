/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, SKUIStorePageSectionContext, UIColor;

@interface SKUIStorePageSplit : NSObject <NSCopying> {
    UIColor *_dividerColor;
    int _numberOfPageSections;
    NSArray *_pageComponents;
    SKUIStorePageSectionContext *_sectionContext;
    float _widthFraction;
}

@property(copy) UIColor * dividerColor;
@property int numberOfPageSections;
@property(copy) NSArray * pageComponents;
@property(retain) SKUIStorePageSectionContext * sectionContext;
@property float widthFraction;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dividerColor;
- (int)numberOfPageSections;
- (id)pageComponents;
- (id)sectionContext;
- (void)setDividerColor:(id)arg1;
- (void)setNumberOfPageSections:(int)arg1;
- (void)setPageComponents:(id)arg1;
- (void)setSectionContext:(id)arg1;
- (void)setWidthFraction:(float)arg1;
- (float)widthFraction;

@end
