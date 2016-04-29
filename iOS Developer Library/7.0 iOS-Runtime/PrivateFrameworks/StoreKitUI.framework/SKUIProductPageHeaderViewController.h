/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIProductPageHeaderViewDelegate>, NSOperationQueue, NSString, SKUIClientContext, SKUIContentRatingArtworkResourceLoader, SKUIItem, SKUIItemArtworkContext, SKUIItemOffer, SKUIProductPage, SKUIProductPageHeaderFloatingView, SKUIProductPageHeaderView, SSVLoadURLOperation, UIImage, UIPopoverController;

@interface SKUIProductPageHeaderViewController : UIViewController <SKUIItemStateCenterObserver, UIPopoverControllerDelegate> {
    UIPopoverController *_activityPopoverController;
    SKUIItemArtworkContext *_artworkContext;
    BOOL _askPermission;
    SKUIClientContext *_clientContext;
    SKUIContentRatingArtworkResourceLoader *_contentRatingArtworkLoader;
    <SKUIProductPageHeaderViewDelegate> *_delegate;
    SKUIProductPageHeaderFloatingView *_floatingView;
    SKUIProductPageHeaderView *_headerView;
    UIImage *_iconImage;
    SKUIItem *_item;
    long long _itemIdentifier;
    SSVLoadURLOperation *_loadIconOperation;
    SSVLoadURLOperation *_loadUberOperation;
    NSOperationQueue *_operationQueue;
    BOOL _performArtistActionOnLoad;
    int _personalizationState;
    SKUIItemOffer *_personalizedOffer;
    UIImage *_placeholderImage;
    SKUIProductPage *_productPage;
    UIImage *_uberImage;
    BOOL _wantsActivityViewController;
}

@property BOOL askPermission;
@property(retain) SKUIClientContext * clientContext;
@property(copy,readonly) NSString * debugDescription;
@property <SKUIProductPageHeaderViewDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) SKUIProductPageHeaderFloatingView * floatingView;
@property(readonly) unsigned int hash;
@property(readonly) UIImage * iconImage;
@property(readonly) SKUIItem * item;
@property(retain) NSOperationQueue * operationQueue;
@property int selectedSectionIndex;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeItem;
- (id)_ageBandString;
- (void)_artistButtonAction:(id)arg1;
- (id)_artworkContext;
- (id)_contentRatingResourceLoader;
- (void)_destroyPopoverController;
- (void)_disableItemOfferButtonWithTitle:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_isRestricted;
- (void)_itemOfferButtonAction:(id)arg1;
- (void)_loadUberImageIfAvailable;
- (void)_reloadItemStateAnimated:(BOOL)arg1;
- (void)_sectionControlAction:(id)arg1;
- (id)_segmentedControlTitles;
- (void)_sendDidReloadOffer;
- (void)_setArtworkWithImage:(id)arg1 error:(id)arg2;
- (void)_setItemState:(id)arg1 animated:(BOOL)arg2;
- (void)_setPersonalizedOffer:(id)arg1;
- (void)_setUberWithImage:(id)arg1 error:(id)arg2;
- (void)_shareButtonAction:(id)arg1;
- (void)_showActivityViewControllerFromView:(id)arg1;
- (void)_showAskPermissionBanner;
- (void)_showSynthesizedItemStateWithFlag:(unsigned int)arg1 animated:(BOOL)arg2;
- (BOOL)askPermission;
- (id)clientContext;
- (void)dealloc;
- (id)delegate;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (id)floatingView;
- (id)iconImage;
- (id)initWithItem:(id)arg1;
- (id)item;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (void)loadView;
- (id)operationQueue;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)reloadData;
- (int)selectedSectionIndex;
- (void)setAskPermission:(BOOL)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setProductPage:(id)arg1;
- (void)setSelectedSectionIndex:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
