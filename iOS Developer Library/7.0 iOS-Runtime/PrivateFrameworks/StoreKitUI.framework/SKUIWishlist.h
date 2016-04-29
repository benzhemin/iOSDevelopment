/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, SSWishlist;

@interface SKUIWishlist : NSObject {
    SSWishlist *_database;
}

@property(readonly) long long accountIdentifier;
@property(copy,readonly) NSArray * items;

+ (id)activeWishlist;

- (void).cxx_destruct;
- (long long)accountIdentifier;
- (void)addItem:(id)arg1;
- (BOOL)containsItemWithIdentifier:(long long)arg1;
- (unsigned int)hash;
- (id)initWithAccountIdentifier:(long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)items;
- (void)postChangeNotification;
- (void)removeItemsWithItemIdentifiers:(id)arg1;

@end
