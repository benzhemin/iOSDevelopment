/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@class NSMutableDictionary, NSMutableSet, NSString, PLCFNotificationOperatorComposition, PLKQueue, PLNSNotificationOperatorComposition, PLNSTimerOperatorComposition, PLSQLiteConnection, PLStorageCache, PLStorageOperator, PLXPCResponderOperatorComposition;

@interface PLCoreStorage : NSObject {
    PLSQLiteConnection *_connection;
    PLKQueue *_crashReporterKQueue;
    PLNSNotificationOperatorComposition *_dailyTaskNotification;
    PLNSTimerOperatorComposition *_dailyTaskTimer;
    PLCFNotificationOperatorComposition *_keybagFirstUnlockNotification;
    PLStorageCache *_lastEntryCache;
    NSString *_mainDBInCRFolderUUIDString;
    PLNSTimerOperatorComposition *_periodicCheckpointTimer;
    NSMutableDictionary *_processIDCache;
    PLKQueue *_profileDefaultsKQueue;
    NSMutableSet *_safeCopyInProgress;
    PLXPCResponderOperatorComposition *_safeFileResponder;
    BOOL _storageLocked;
    PLStorageOperator *_storageOperator;
    BOOL _storageReady;
}

@property(retain) PLSQLiteConnection * connection;
@property(retain) PLKQueue * crashReporterKQueue;
@property(retain) PLNSNotificationOperatorComposition * dailyTaskNotification;
@property(retain) PLNSTimerOperatorComposition * dailyTaskTimer;
@property(retain) PLCFNotificationOperatorComposition * keybagFirstUnlockNotification;
@property(retain) PLStorageCache * lastEntryCache;
@property(retain) NSString * mainDBInCRFolderUUIDString;
@property(retain) PLNSTimerOperatorComposition * periodicCheckpointTimer;
@property(retain) NSMutableDictionary * processIDCache;
@property(retain) PLKQueue * profileDefaultsKQueue;
@property(retain) NSMutableSet * safeCopyInProgress;
@property(retain) PLXPCResponderOperatorComposition * safeFileResponder;
@property BOOL storageLocked;
@property(retain) PLStorageOperator * storageOperator;
@property BOOL storageReady;

+ (id)allOperatorTableFiltersForRolloverDate:(id)arg1;
+ (id)mainDBinCRFolderPath;
+ (id)storageQueueNameForClass:(id)arg1;

- (void).cxx_destruct;
- (id)accountingBoundariesInTimeRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1 forAccountingGroups:(id)arg2;
- (id)aggregateEntriesForKey:(id)arg1 withBucketLength:(double)arg2 inTimeIntervalRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg3;
- (long long)blockingWriteEntry:(id)arg1 withCompletionBlock:(id)arg2;
- (void)cacheProcessIDEntry:(id)arg1;
- (void)cleanupTmp;
- (id)connection;
- (id)crashReporterKQueue;
- (BOOL)createAndChownDirectory:(id)arg1;
- (id)dailyTaskNotification;
- (id)dailyTaskTimer;
- (void)dailyTasks;
- (void)dealloc;
- (void)deleteAllEntriesForKey:(id)arg1 beforeTimestamp:(id)arg2 withFilters:(id)arg3;
- (void)deleteAllEntriesForKey:(id)arg1 beforeTimestamp:(id)arg2;
- (void)deleteAllEntriesForKey:(id)arg1 withFilters:(id)arg2;
- (void)deleteAllEntriesForKey:(id)arg1;
- (void)deleteAllLinksInCRFolder;
- (void)deleteEntry:(id)arg1;
- (void)deleteEntryForKey:(id)arg1 WithRowID:(long long)arg2;
- (void)deleteOldCRPowerlogLink;
- (void)dispatchAsyncForEntrykey:(id)arg1 withBlock:(id)arg2;
- (void)dispatchSyncForEntrykey:(id)arg1 withBlock:(id)arg2;
- (id)entriesForKey:(id)arg1 before:(BOOL)arg2 timeInterval:(double)arg3 count:(long long)arg4 withFilters:(id)arg5;
- (id)entriesForKey:(id)arg1 inTimeRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg2 withCountOfEntriesBefore:(long long)arg3 withCountOfEntriesAfter:(long long)arg4 withFilters:(id)arg5;
- (id)entriesForKey:(id)arg1 inTimeRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg2 withFilters:(id)arg3;
- (id)entriesForKey:(id)arg1 startingFromRowID:(long long)arg2 count:(long long)arg3 withFilters:(id)arg4;
- (id)entriesForKey:(id)arg1 startingFromRowID:(long long)arg2 endingWithRowID:(long long)arg3 withFilters:(id)arg4;
- (id)entriesForKey:(id)arg1 withIDs:(id)arg2;
- (id)entriesForKey:(id)arg1 withProperties:(id)arg2;
- (id)entryForKey:(id)arg1 withID:(long long)arg2;
- (id)entryIntervalsForEntryKey:(id)arg1 inTimeRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg2 withIntervalStartKey:(id)arg3 withIntervalEndKey:(id)arg4 withFilters:(id)arg5;
- (void)enumerateProcessIDCacheWithBlock:(id)arg1;
- (void)handleSchemaMismatchForTable:(id)arg1 expectedVersion:(double)arg2 schemaMatch:(short)arg3;
- (id)init;
- (void)initOperatorDependancies;
- (id)keybagFirstUnlockNotification;
- (id)lastEntriesForKey:(id)arg1 count:(long long)arg2 withFilters:(id)arg3;
- (id)lastEntryCache;
- (id)lastEntryForKey:(id)arg1 withFilters:(id)arg2;
- (id)lastEntryForKey:(id)arg1;
- (void)linkMainDBToCRFolderWithUUID:(id)arg1;
- (void)loadDynamicValuesIntoEntry:(id)arg1;
- (void)loadLookupTableValuesIntoEntry:(id)arg1;
- (id)lookupValueForEntryKey:(id)arg1 forKey:(id)arg2 forNumberValue:(long)arg3;
- (id)mainDBInCRFolderUUIDString;
- (void)maintainAggregateStorageForEntryKey:(id)arg1;
- (void)mergeTempDBFile;
- (void)moveOldAnonFilesToCR;
- (id)periodicCheckpointTimer;
- (id)portMappingEntryForPort:(id)arg1;
- (id)powerModelForOperatorName:(id)arg1;
- (id)processIDCache;
- (id)processIDEntryForPid:(int)arg1;
- (id)profileDefaultsKQueue;
- (void)releaseMemory;
- (void)removeOldPowerlogFiles;
- (void)removeProcessIDCacheForPid:(int)arg1;
- (void)removeProcessIDCacheForPidNumber:(id)arg1;
- (void)removeStorageForEntryKey:(id)arg1;
- (void)resetLinksInCRFolder;
- (id)safeCopyInProgress;
- (id)safeFileResponder;
- (void)setAllNullValuesForEntryKey:(id)arg1 forKey:(id)arg2 toValue:(id)arg3 withFilters:(id)arg4;
- (void)setConnection:(id)arg1;
- (void)setCrashReporterKQueue:(id)arg1;
- (void)setDailyTaskNotification:(id)arg1;
- (void)setDailyTaskTimer:(id)arg1;
- (BOOL)setFileProtectionForPath:(id)arg1 withLevel:(id)arg2;
- (void)setKeybagFirstUnlockNotification:(id)arg1;
- (void)setLastEntryCache:(id)arg1;
- (void)setLookupValueForEntryKey:(id)arg1 forKey:(id)arg2 forNumberValue:(long)arg3 withStringValue:(id)arg4;
- (void)setMainDBInCRFolderUUIDString:(id)arg1;
- (void)setPeriodicCheckpointTimer:(id)arg1;
- (void)setProcessIDCache:(id)arg1;
- (void)setProfileDefaultsKQueue:(id)arg1;
- (void)setSafeCopyInProgress:(id)arg1;
- (void)setSafeFileResponder:(id)arg1;
- (void)setStorageLocked:(BOOL)arg1;
- (void)setStorageOperator:(id)arg1;
- (void)setStorageReady:(BOOL)arg1;
- (void)setupArrayForTableName:(id)arg1 forColumnNamed:(id)arg2 withValueType:(short)arg3;
- (void)setupCoveringIndexOnTable:(id)arg1 withColumns:(id)arg2;
- (void)setupStorageForEntryKey:(id)arg1;
- (void)setupStorageForOperator:(id)arg1;
- (void)setupStorageForOperatorClass:(Class)arg1;
- (void)setupStorageForOperatorName:(id)arg1;
- (void)setupTableName:(id)arg1 withEntryKeyConfig:(id)arg2 withKeyOrder:(id)arg3 isDynamic:(BOOL)arg4;
- (void)startStorage;
- (void)stopStorage;
- (BOOL)storageLocked;
- (id)storageOperator;
- (BOOL)storageReady;
- (void)updateEntry:(id)arg1 withCompletionBlock:(id)arg2;
- (short)verifySchemaVersionOfTable:(id)arg1 matchesExpectedVersion:(double)arg2;
- (id)whiteBlackListForOperatorName:(id)arg1;
- (void)writeAggregateEntry:(id)arg1;
- (void)writeEntries:(id)arg1 withCompletionBlock:(id)arg2;
- (void)writeEntry:(id)arg1 withCompletionBlock:(id)arg2;

@end
