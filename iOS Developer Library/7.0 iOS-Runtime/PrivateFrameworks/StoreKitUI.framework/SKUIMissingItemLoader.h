/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIMissingItemDelegate>, NSMutableDictionary, NSString, SKUIResourceLoader;

@interface SKUIMissingItemLoader : NSObject <SKUIItemRequestDelegate> {
    int _batchSize;
    <SKUIMissingItemDelegate> *_delegate;
    NSString *_imageProfile;
    NSString *_keyProfile;
    SKUIResourceLoader *_loader;
    NSMutableDictionary *_requests;
}

@property int batchSize;
@property(copy,readonly) NSString * debugDescription;
@property <SKUIMissingItemDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSString * imageProfile;
@property(copy) NSString * keyProfile;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)_existingRequestIDForItemID:(id)arg1;
- (void)_requestItems:(id)arg1 withReason:(int)arg2;
- (int)batchSize;
- (id)delegate;
- (id)imageProfile;
- (id)init;
- (id)initWithResourceLoader:(id)arg1;
- (void)itemRequest:(id)arg1 didFinishWithItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (id)keyProfile;
- (void)loadItemsForPageComponent:(id)arg1 startIndex:(int)arg2 reason:(int)arg3;
- (void)loadItemsWithIdentifiers:(id)arg1 reason:(int)arg2;
- (void)setBatchSize:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImageProfile:(id)arg1;
- (void)setKeyProfile:(id)arg1;

@end
