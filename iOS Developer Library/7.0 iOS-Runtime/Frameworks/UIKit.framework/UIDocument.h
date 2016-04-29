/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDate, NSDocumentDifferenceSize, NSLock, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSOperationQueue, NSString, NSTimer, NSURL, NSUndoManager, NSUserActivity;

@interface UIDocument : NSObject <NSFilePresenter> {
    struct __docFlags { 
        unsigned int inClose : 1; 
        unsigned int isOpen : 1; 
        unsigned int inOpen : 1; 
        unsigned int isAutosavingBecauseOfTimer : 1; 
        unsigned int versionWithoutRecentChangesIsNotLastOpened : 1; 
        unsigned int ignoreUndoAndRedoNotifications : 1; 
        unsigned int editingDisabled : 1; 
        unsigned int isRegisteredAsFilePresenter : 1; 
        unsigned int movingFile : 1; 
        unsigned int savingError : 1; 
        unsigned int inConflict : 1; 
        unsigned int needToStopAccessingSecurityScopedResource : 1; 
    NSLock *_activityContinuationLock;
    id _alertPresenter;
    NSTimer *_autosavingTimer;
    NSUserActivity *_currentUserActivity;
    id _differenceDueToRecentChanges;
    id _differenceSincePreservingPreviousVersion;
    id _differenceSinceSaving;
    } _docFlags;
    NSLock *_documentPropertyLock;
    NSObject<OS_dispatch_queue> *_fileAccessQueue;
    NSObject<OS_dispatch_semaphore> *_fileAccessSemaphore;
    NSDate *_fileModificationDate;
    NSOperationQueue *_filePresenterQueue;
    NSString *_fileType;
    NSURL *_fileURL;
    double _lastPreservationTime;
    double _lastSaveTime;
    NSString *_localizedName;
    NSObject<OS_dispatch_queue> *_openingQueue;
    NSUndoManager *_undoManager;
    id _versionWithoutRecentChanges;
    NSMutableArray *_versions;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) NSDocumentDifferenceSize * differenceDueToRecentChanges;
@property(readonly) NSDocumentDifferenceSize * differenceSincePreservingPreviousVersion;
@property(readonly) NSDocumentDifferenceSize * differenceSinceSaving;
@property(readonly) unsigned int documentState;
@property(getter=_isEditingDisabled,setter=_setEditingDisabled:) BOOL editingDisabled;
@property(copy) NSDate * fileModificationDate;
@property(copy,readonly) NSString * fileType;
@property(readonly) NSURL * fileURL;
@property(readonly) unsigned int hash;
@property(copy,readonly) NSString * localizedName;
@property(retain,readonly) NSOperationQueue * presentedItemOperationQueue;
@property(copy,readonly) NSURL * presentedItemURL;
@property(copy,readonly) NSURL * primaryPresentedItemURL;
@property(readonly) Class superclass;
@property(retain) NSUndoManager * undoManager;

+ (void)_autosavingTimerDidFireSoContinue:(id)arg1;
+ (id)_customizationOfError:(id)arg1 withDescription:(id)arg2 recoverySuggestion:(id)arg3 recoveryAttempter:(id)arg4;
+ (id)_fileModificationDateForURL:(id)arg1;
+ (void)_finishWritingToURL:(id)arg1 withTemporaryDirectoryURL:(id)arg2 newContentsURL:(id)arg3 afterSuccess:(BOOL)arg4;
+ (id)_typeForContentsOfURL:(id)arg1 error:(id*)arg2;
+ (void)initialize;

- (id)_activityTypeIdentifierForCloudDocument;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_autosaveWithCompletionHandler:(id)arg1;
- (void)_autosavingCompletedSuccessfully:(BOOL)arg1;
- (double)_autosavingDelay;
- (void)_changeWasDone:(id)arg1;
- (void)_changeWasRedone:(id)arg1;
- (void)_changeWasUndone:(id)arg1;
- (void)_clearActivityForCloudDocument;
- (BOOL)_coordinateWritingItemAtURL:(id)arg1 error:(id*)arg2 byAccessor:(id)arg3;
- (BOOL)_documentIsUbiquitous;
- (id)_fileOpeningQueue;
- (void)_finishSavingToURL:(id)arg1 forSaveOperation:(int)arg2 changeCount:(id)arg3;
- (BOOL)_hasSavingError;
- (BOOL)_hasUnsavedChanges;
- (void)_invalidateCurrentUserActivity;
- (BOOL)_isEditingDisabled;
- (BOOL)_isInConflict;
- (BOOL)_isInOpen;
- (BOOL)_isOpen;
- (void)_lockFileAccessQueueAndPerformBlock:(id)arg1;
- (void)_performBlock:(id)arg1 synchronouslyOnQueue:(id)arg2;
- (void)_performBlockSynchronouslyOnMainThread:(id)arg1;
- (id)_presentableFileNameForSaveOperation:(int)arg1 url:(id)arg2;
- (void)_registerAsFilePresenterIfNecessary;
- (void)_releaseUndoManager;
- (void)_rescheduleAutosaving;
- (void)_saveActivityForCloudDocumentIfAppropriate;
- (void)_saveUnsavedChangesWithCompletionHandler:(id)arg1;
- (void)_scheduleAutosaving;
- (void)_scheduleAutosavingAfterDelay:(double)arg1 reset:(BOOL)arg2;
- (void)_sendStateChangedNotification;
- (void)_setEditingDisabled:(BOOL)arg1;
- (void)_setFileURL:(id)arg1;
- (void)_setHasSavingError:(BOOL)arg1;
- (void)_setInConflict:(BOOL)arg1;
- (void)_setInOpen:(BOOL)arg1;
- (void)_setOpen:(BOOL)arg1;
- (void)_setUserActivity:(id)arg1;
- (BOOL)_shouldAllowWritingInResponseToPresenterMessage;
- (void)_unlockFileAccessQueue;
- (void)_unregisterAsFilePresenterIfNecessary;
- (void)_updateConflictState;
- (void)_updateLocalizedName;
- (id)_userActivityWithActivityType:(id)arg1;
- (id)_userInfoForActivityContinuation;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg1;
- (void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(id)arg2;
- (void)autosaveWithCompletionHandler:(id)arg1;
- (id)changeCountTokenForSaveOperation:(int)arg1;
- (void)closeWithCompletionHandler:(id)arg1;
- (id)contentsForType:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)description;
- (id)differenceDueToRecentChanges;
- (id)differenceSincePreservingPreviousVersion;
- (id)differenceSinceSaving;
- (void)disableEditing;
- (unsigned int)documentState;
- (void)enableEditing;
- (id)fileAttributesToWriteToURL:(id)arg1 forSaveOperation:(int)arg2 error:(id*)arg3;
- (id)fileModificationDate;
- (id)fileNameExtensionForType:(id)arg1 saveOperation:(int)arg2;
- (id)fileType;
- (id)fileURL;
- (void)finishedHandlingError:(id)arg1 recovered:(BOOL)arg2;
- (void)handleError:(id)arg1 userInteractionPermitted:(BOOL)arg2;
- (BOOL)hasUnsavedChanges;
- (id)init;
- (id)initWithFileURL:(id)arg1;
- (BOOL)loadFromContents:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (id)localizedName;
- (void)openWithCompletionHandler:(id)arg1;
- (void)performAsynchronousFileAccessUsingBlock:(id)arg1;
- (void)presentedItemDidChange;
- (void)presentedItemDidGainVersion:(id)arg1;
- (void)presentedItemDidLoseVersion:(id)arg1;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)presentedItemDidResolveConflictVersion:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)presentedSubitemAtURL:(id)arg1 didGainVersion:(id)arg2;
- (void)presentedSubitemAtURL:(id)arg1 didLoseVersion:(id)arg2;
- (void)presentedSubitemAtURL:(id)arg1 didMoveToURL:(id)arg2;
- (void)presentedSubitemAtURL:(id)arg1 didResolveConflictVersion:(id)arg2;
- (void)presentedSubitemDidAppearAtURL:(id)arg1;
- (void)presentedSubitemDidChangeAtURL:(id)arg1;
- (BOOL)readFromURL:(id)arg1 error:(id*)arg2;
- (void)relinquishPresentedItemToReader:(id)arg1;
- (void)relinquishPresentedItemToWriter:(id)arg1;
- (void)restoreUserActivityState:(id)arg1;
- (void)revertToContentsOfURL:(id)arg1 completionHandler:(id)arg2;
- (void)savePresentedItemChangesWithCompletionHandler:(id)arg1;
- (void)saveToURL:(id)arg1 forSaveOperation:(int)arg2 completionHandler:(id)arg3;
- (id)savingFileType;
- (void)setFileModificationDate:(id)arg1;
- (void)setFileType:(id)arg1;
- (void)setUndoManager:(id)arg1;
- (void)setUserActivity:(id)arg1;
- (id)undoManager;
- (void)updateChangeCount:(int)arg1;
- (void)updateChangeCountWithToken:(id)arg1 forSaveOperation:(int)arg2;
- (void)updateUserActivityState:(id)arg1;
- (id)userActivity;
- (void)userInteractionNoLongerPermittedForError:(id)arg1;
- (BOOL)writeContents:(id)arg1 andAttributes:(id)arg2 safelyToURL:(id)arg3 forSaveOperation:(int)arg4 error:(id*)arg5;
- (BOOL)writeContents:(id)arg1 toURL:(id)arg2 forSaveOperation:(int)arg3 originalContentsURL:(id)arg4 error:(id*)arg5;

@end
