/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, PLXPCTransaction;

@interface PLBBBulletinsManager : NSObject <PLBBPendingBulletinsBatchDelegate> {
    void *_addressBook;
    int _alertFiltrationEnabled;
    BOOL _badgeCountIsInvalid;
    NSMutableDictionary *_dirtyPlist;
    BOOL _enableTemporaryDebugMode;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMutableArray *_pendingBatches;
    NSMutableArray *_pendingBulletins;
    NSObject<OS_dispatch_source> *_pendingChangesTimerSource;
    PLXPCTransaction *_pendingChangesTimerTransaction;
    NSMutableIndexSet *_pendingDeleteRecordIDs;
    NSObject<OS_dispatch_source> *_saveTimerSource;
    PLXPCTransaction *_saveTimerTransaction;
}

@property(readonly) NSArray * currentBulletinDictionaries;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)sharedManager;

- (void)_addPendingBulletins:(id)arg1;
- (BOOL)_alertFiltrationEnabled;
- (BOOL)_bulletinType:(long long)arg1 matchesCommentsOrLikeBulletins:(BOOL)arg2 andPhotosAddedToAlbumBulletins:(BOOL)arg3;
- (id)_currentPendingBatch;
- (id)_currentPlistContents;
- (void)_deleteBulletinsForAlbumWithUUID:(id)arg1 bulletinTypes:(id)arg2;
- (void)_deleteBulletinsForAssetWithUUID:(id)arg1 shouldDeleteCommentsOrLikeBulletins:(BOOL)arg2 shouldDeletePhotosAddedToAlbumBulletins:(BOOL)arg3;
- (id)_editablePlistContents;
- (unsigned int)_generateUniqueRecordID;
- (id)_initSharedInstance;
- (BOOL)_invitationBulletinExistsForAlbum:(id)arg1;
- (id)_plistFilePath;
- (void)_processPendingChanges;
- (void)_resetAlertFiltration;
- (void)_saveDirtyChanges;
- (void)_scheduleProcessPendingChanges;
- (void)_setNeedsSaving;
- (BOOL)_shouldAllowAlertsFromContactWithEmail:(id)arg1;
- (void*)addressBook;
- (id)bulletinsBatch:(id)arg1 bulletinByMergingPersistedListWithBulletin:(id)arg2;
- (void)bulletinsBatch:(id)arg1 didProcessReadyBulletins:(id)arg2 stillPending:(BOOL)arg3;
- (BOOL)bulletinsBatch:(id)arg1 shouldAllowAlertsFromContactWithEmail:(id)arg2;
- (void)calculateCurrentBadgeCountWithCompletionHandler:(id)arg1;
- (void)clearAllBulletinsUpToRecordID:(unsigned long long)arg1;
- (id)currentBulletinDictionaries;
- (void)dealloc;
- (void)discardAllBulletins;
- (BOOL)enableTemporaryDebugMode;
- (void)forceWriteUnsavedChanges;
- (void)getThumbnailImageDataForBulletinWithRecordID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (id)init;
- (void)noteDidChangePlaceholderKindForAsset:(id)arg1 fromOldKind:(short)arg2 forSharedAlbum:(id)arg3 mstreamdInfo:(id)arg4;
- (void)noteDidDeleteSharedAlbum:(id)arg1;
- (void)noteDidDeleteSharedAssetsWithUUIDs:(id)arg1;
- (void)noteDidReceiveAsset:(id)arg1 atIndex:(unsigned int)arg2 forSharedAlbum:(id)arg3 mstreamdInfo:(id)arg4;
- (void)noteDidReceiveComment:(id)arg1 mstreamdInfo:(id)arg2;
- (void)noteDidReceiveInvitationForSharedAlbum:(id)arg1;
- (void)noteDidReceiveLike:(id)arg1 mstreamdInfo:(id)arg2;
- (void)noteInvitationRecordStatusChanged:(id)arg1 fromOldState:(int)arg2 mstreamdInfo:(id)arg3;
- (void)noteMultipleContributorStatusChangedForAlbum:(id)arg1 mstreamdInfo:(id)arg2;
- (void)noteSharedAlbumUnseenStatusDidChange:(id)arg1;
- (void)noteSharedAssetCommentsUnreadStatusDidChange:(id)arg1;
- (void)noteUserDidDeleteSharedAlbumWithUUID:(id)arg1;
- (void)noteUserDidDeleteSharedAssetsWithUUIDs:(id)arg1;
- (void)noteUserDidLeavePhotosApplication;
- (void)noteUserDidNavigateAwayFromSharedAlbum:(id)arg1;
- (void)noteUserDidNavigateIntoSharedAlbum:(id)arg1;
- (void)noteUserDidReadCommentOnSharedAsset:(id)arg1;
- (void)noteUserDidViewCloudFeedContent:(int)arg1;
- (void)setEnableTemporaryDebugMode:(BOOL)arg1;

@end
