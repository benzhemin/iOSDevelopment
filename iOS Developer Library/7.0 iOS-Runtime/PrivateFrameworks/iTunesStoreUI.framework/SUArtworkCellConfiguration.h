/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray, NSMutableDictionary, NSString;

@interface SUArtworkCellConfiguration : SUArrayCellConfiguration <ISStoreURLOperationDelegate> {
    NSMutableDictionary *_artworkByURL;
    NSMutableArray *_artworkLoadOperations;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)copyDefaultContext;

- (id)_artworkImageForURL:(id)arg1 dataProvider:(id)arg2;
- (id)artworkImageForItemImage:(id)arg1;
- (id)artworkImageForURL:(id)arg1;
- (void)cancelArtworkRequests;
- (id)copyImageDataProvider;
- (void)dealloc;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)reloadAfterArtworkLoad;
- (void)setRepresentedObject:(id)arg1;

@end