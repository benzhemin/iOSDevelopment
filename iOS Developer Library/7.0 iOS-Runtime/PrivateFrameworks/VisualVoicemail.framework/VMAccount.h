/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface VMAccount : NSObject {
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSMutableArray *_voicemailSummaries[256];
}

@property(readonly) NSString * identifier;

- (id)_bucketSummary;
- (void)_forceUpdateCache;
- (unsigned int)_lockedCountOfVoicemailsWithFlags:(unsigned int)arg1 withoutFlags:(unsigned int)arg2;
- (void)_updateCache;
- (void)_updateCacheDoWork;
- (void)_updateVoicemailFlagsIndexFromCache;
- (id)_voicemailSummariesBucketsWithFlags:(unsigned int)arg1 withoutFlags:(unsigned int)arg2;
- (id)allVoicemailsWithFlags:(unsigned int)arg1 withoutFlags:(unsigned int)arg2 sinceIdentifier:(long long)arg3;
- (id)allVoicemailsWithFlags:(unsigned int)arg1 withoutFlags:(unsigned int)arg2;
- (unsigned int)capabilities;
- (void)changePassword:(id)arg1 fromPassword:(id)arg2;
- (void)clearActivationError;
- (unsigned int)countOfVoicemailsWithFlags:(unsigned int)arg1 withoutFlags:(unsigned int)arg2;
- (BOOL)dataForVoicemailPending:(id)arg1 progressiveLoadInProgress:(BOOL*)arg2;
- (void)dealloc;
- (void)displayPasswordRequestIfNecessary;
- (BOOL)greetingAvailable;
- (BOOL)greetingFetchExistsProgressiveLoadInProgress:(BOOL*)arg1;
- (id)greetingPath;
- (void)handlePasswordNotificationResponse:(id)arg1;
- (void)handlePasswordRequestCancellation;
- (void)handleSignificantChange:(id)arg1;
- (void)handleStoreChanged:(id)arg1;
- (void)handleVoicemailFlagsChanged:(id)arg1;
- (BOOL)headerChangesPending;
- (id)identifier;
- (long long)identifierOfLastInsert;
- (id)initForLegacyVisualVoicemail;
- (BOOL)isMessageWaiting;
- (BOOL)isOfflineDueToRoaming;
- (BOOL)isOnline;
- (BOOL)isSubscribed;
- (int)mailboxGreetingType;
- (BOOL)mailboxRequiresSetup;
- (int)mailboxUsage;
- (int)maximumGreetingDuration;
- (int)maximumPasswordLength;
- (int)minimumPasswordLength;
- (void)moveVoicemailFromTrash:(id)arg1;
- (void)moveVoicemailToTrash:(id)arg1;
- (BOOL)passwordChangeRequiresEnteringOldPassword;
- (void)progressiveDataLengthsForVoicemail:(id)arg1 expected:(unsigned int*)arg2 current:(unsigned int*)arg3;
- (id)provisionalPassword;
- (void)retrieveDataForVoicemail:(id)arg1;
- (void)retrieveGreeting;
- (void)setGreetingType:(int)arg1 withData:(id)arg2 duration:(unsigned int)arg3;
- (void)setProvisionalPassword:(id)arg1;
- (BOOL)synchronizationPending;
- (void)synchronize:(BOOL)arg1;
- (BOOL)taskOfTypeExists:(int)arg1;
- (unsigned int)trashedCount;
- (unsigned int)unreadCount;
- (void)updateLoggingSettings;
- (id)voicemailWithIdentifier:(long long)arg1 creating:(BOOL)arg2;
- (id)voicemailWithIdentifier:(long long)arg1;
- (BOOL)willBroadcastNotificationName:(id)arg1 userInfo:(id)arg2;

@end
