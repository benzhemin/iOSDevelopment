/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class <PUFeedRecentsManagerDelegate>, NSMutableArray, NSOrderedSet, PLPhotoLibrary;

@interface PUFeedRecentsManager : NSObject <PLCloudFeedEntriesObserver, PLAssetChangeObserver, PLPhotoLibraryShouldReloadObserver> {
    NSOrderedSet *__cachedRecentAssets;
    int _count;
    <PUFeedRecentsManagerDelegate> *_delegate;
    NSMutableArray *_pendingAssetsChangeNotifications;
    NSMutableArray *_pendingFeedEntriesChangeNotifications;
    PLPhotoLibrary *_photoLibrary;
}

@property(setter=_setCachedRecentAssets:,copy) NSOrderedSet * _cachedRecentAssets;
@property int count;
@property <PUFeedRecentsManagerDelegate> * delegate;
@property(retain) PLPhotoLibrary * photoLibrary;
@property(copy,readonly) NSOrderedSet * recentAssets;

- (void).cxx_destruct;
- (id)_cachedRecentAssets;
- (void)_didFinishPostingNotifications:(id)arg1;
- (void)_invalidateCachedRecentAssets;
- (void)_setCachedRecentAssets:(id)arg1;
- (void)_setCount:(int)arg1;
- (void)_setPhotoLibrary:(id)arg1;
- (BOOL)_updateCachedRecentAssets;
- (void)assetsDidChange:(id)arg1;
- (void)cloudFeedEntriesDidChange:(id)arg1;
- (int)count;
- (void)dealloc;
- (id)delegate;
- (id)initWithPhotoLibrary:(id)arg1 count:(int)arg2;
- (id)photoLibrary;
- (id)recentAssets;
- (void)setDelegate:(id)arg1;
- (void)shouldReload:(id)arg1;

@end
