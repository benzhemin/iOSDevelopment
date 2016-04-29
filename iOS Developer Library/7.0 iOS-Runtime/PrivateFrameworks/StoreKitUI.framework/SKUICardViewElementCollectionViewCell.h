/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSMapTable, NSString, SKUICardLayout, SKUICardViewElement, SKUISizeValue, SKUIViewElement, UIView;

@interface SKUICardViewElementCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIViewElementView> {
    SKUISizeValue *_artworkBoundingSize;
    SKUICardViewElement *_cardElement;
    SKUICardLayout *_layout;
    SKUIViewElement *_productImageElement;
    UIView *_programmedCardBackgroundView;
    NSMapTable *_viewElements;
}

@property(copy) SKUISizeValue * artworkBoundingSize;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (float)_defaultWidthForLockupWithContext:(id)arg1;
+ (struct CGSize { float x1; float x2; })artworkBoundingSizeWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (struct CGSize { float x1; float x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (struct CGSize { float x1; float x2; })sizeThatFitsWidth:(float)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (void)_imageTapAction:(id)arg1;
- (void)_performDefaultActionForViewElement:(id)arg1;
- (id)artworkBoundingSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (void)setArtworkBoundingSize:(id)arg1;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
