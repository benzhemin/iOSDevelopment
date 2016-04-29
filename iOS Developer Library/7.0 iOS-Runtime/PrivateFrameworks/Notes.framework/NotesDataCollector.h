/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@class ACAccountStore, NSDictionary, NSObject<OS_dispatch_group>, NotesDataCollectorLogger;

@interface NotesDataCollector : NSObject {
    ACAccountStore *_accountStore;
    NSDictionary *_accountTypesPerIdentifierCache;
    BOOL _automaticCollectionOn;
    NSObject<OS_dispatch_group> *_logDispatchGroup;
    NotesDataCollectorLogger *_logger;
}

@property(retain) ACAccountStore * accountStore;
@property(copy) NSDictionary * accountTypesPerIdentifierCache;
@property(getter=isAutomaticCollectionOn) BOOL automaticCollectionOn;
@property(retain) NSObject<OS_dispatch_group> * logDispatchGroup;
@property(retain) NotesDataCollectorLogger * logger;

+ (void)clearSharedCollector;
+ (id)sharedCollector;

- (void).cxx_destruct;
- (id)accountStore;
- (id)accountTypesPerIdentifierCache;
- (void)browseAddedAndDeletedObjectsWithEntity:(id)arg1 inManagedObjectContext:(id)arg2 objectHandler:(id)arg3;
- (id)classifyStoresByType:(id)arg1;
- (void)dealloc;
- (id)existingAccountForStore:(id)arg1;
- (id)existingStoreForNote:(id)arg1;
- (id)freshContext;
- (id)init;
- (BOOL)isAppleAccountIdentifier:(id)arg1;
- (BOOL)isAutomaticCollectionOn;
- (void)logChanges:(id)arg1;
- (void)logDeltaCountForChangedNotesInContext:(id)arg1;
- (void)logDeltaCountForChangedStoresInContext:(id)arg1;
- (id)logDispatchGroup;
- (void)logNoteActivityType:(id)arg1;
- (void)logNoteCountPerStore;
- (void)logNoteCreationDeltaCountWithAppIdentifier:(int)arg1;
- (void)logNoteDeltaCount:(int)arg1 forStoreType:(id)arg2;
- (void)logNoteDeltaCount:(int)arg1;
- (void)logStoreCount;
- (void)logStoreDeltaCount:(int)arg1 forType:(id)arg2;
- (void)logTotalNoteCount;
- (id)logger;
- (void)noteContextWillSaveNotification:(id)arg1;
- (void)performInitialCollectionIfNeeded;
- (void)setAccountStore:(id)arg1;
- (void)setAccountTypesPerIdentifierCache:(id)arg1;
- (void)setAutomaticCollectionOn:(BOOL)arg1;
- (void)setLogDispatchGroup:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)startAutomaticCollection;
- (void)stopAutomaticCollection;
- (id)storeTypeForAccountType:(int)arg1 accountIdentifier:(id)arg2;

@end
