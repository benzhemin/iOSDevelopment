/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDictionary, NSObject<OS_dispatch_queue>, NSString, PLKeywordManager, PLPhotoLibrary, PLSearchIndexDateFormatter, PLThrottleTimer, PLXPCTransaction, PSIDatabase;

@interface PLSearchIndexManager : NSObject {
    BOOL __indexing;
    id __inqAfterIndexingDidIterate;
    PLSearchIndexDateFormatter *_dateFormatter;
    PSIDatabase *_db;
    BOOL _hasValidSearchIndex;
    BOOL _indexingPaused;
    PLKeywordManager *_keywordManager;
    PLPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _receivedUpdatesWhileIndexing;
    NSString *_searchIndexDirectory;
    NSDictionary *_searchMetadata;
    PLThrottleTimer *_throttleTimer;
    NSDictionary *_uuidsToProcess;
    PLXPCTransaction *_xpcTransaction;
}

@property(getter=_isIndexing,setter=_setIndexing:) BOOL _indexing;
@property(setter=_setInqAfterIndexingDidIterate:,copy) id _inqAfterIndexingDidIterate;
@property(readonly) unsigned int enqueuedUUIDsCount;
@property(getter=isIndexingPaused,setter=setIndexingPaused:) BOOL indexingPaused;

+ (id)_databasePathInDirectory:(id)arg1;
+ (id)_defaultDatabaseDirectory;
+ (id)defaultDatabasePath;
+ (id)sharedInstance;

- (id)_cxindexProgressPath;
- (id)_dbMetadataPath;
- (id)_dbPath;
- (void)_dropXPCTransactionIfNeeded;
- (void)_inqAddUpdatesWithUUIDs:(id)arg1 forKey:(id)arg2;
- (void)_inqAddUpdatesWithUUIDsArray:(id)arg1 forKey:(id)arg2;
- (id)_inqAfterIndexingDidIterate;
- (void)_inqCloseIndexIfAbleOrForce:(BOOL)arg1 isDelete:(BOOL)arg2;
- (void)_inqCloseSearchIndexAndDelete:(BOOL)arg1 withCompletion:(id)arg2;
- (unsigned int)_inqEnqueuedUUIDsCountForceLoad:(BOOL)arg1;
- (void)_inqEnsureSearchIndexExists;
- (void)_inqEnsureSearchMetadataExists;
- (void)_inqEnsureSearchProgressExists;
- (BOOL)_inqHasValidSearchIndex;
- (BOOL)_inqIsIndexingPaused;
- (id)_inqPhotoLibrary;
- (void)_inqResumeIndexingIfNeeded;
- (void)_inqSetIndexingPaused:(BOOL)arg1;
- (BOOL)_inqUpdateLocale;
- (BOOL)_isIndexing;
- (void)_localeDidChange:(id)arg1;
- (id)_moc:(id)arg1 fetchAlbumsWithUUIDs:(id)arg2;
- (id)_moc:(id)arg1 fetchAssetsWithUUIDs:(id)arg2;
- (id)_oldDbPath;
- (BOOL)_removeFileAtPath:(id)arg1 description:(id)arg2;
- (void)_scheduleCloseIndex;
- (void)_setIndexing:(BOOL)arg1;
- (void)_setInqAfterIndexingDidIterate:(id)arg1;
- (void)_takeXPCTransactionIfNeeded;
- (void)_throttleTimerFire:(id)arg1;
- (void)applyUpdates:(id)arg1 completion:(id)arg2;
- (void)closeSearchIndexWithCompletion:(id)arg1;
- (void)dealloc;
- (void)dropSearchIndexDatabase;
- (void)dropSearchIndexWithCompletion:(id)arg1;
- (unsigned int)enqueuedUUIDsCount;
- (id)initWithSearchIndexDirectory:(id)arg1;
- (BOOL)isIndexingPaused;
- (void)setIndexingPaused:(BOOL)arg1;

@end
