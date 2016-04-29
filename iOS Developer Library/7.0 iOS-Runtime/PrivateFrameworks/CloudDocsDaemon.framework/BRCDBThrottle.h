/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCLocalContainer, BRCThrottledScheduler, NSObject<OS_dispatch_source>, PQLNameInjection;

@interface BRCDBThrottle : BRCThrottleBase {
    BRCLocalContainer *_container;
    long long _lastRetryTimestamp;
    long long _nextRetryTimestamp;
    BOOL _scheduled;
    BRCThrottledScheduler *_scheduler;
    PQLNameInjection *_tableName;
    NSObject<OS_dispatch_source> *_timer;
}

@property(readonly) BRCLocalContainer * container;
@property long long lastRetryTimestamp;
@property long long nextRetryTimestamp;
@property BRCThrottledScheduler * scheduler;
@property(readonly) PQLNameInjection * tableName;

+ (id)applyChangesThrottleForContainer:(id)arg1;
+ (id)readerThrottleForContainer:(id)arg1;

- (void).cxx_destruct;
- (BOOL)canRetryThrottleID:(long long)arg1;
- (BOOL)cleanupStaleThrottles;
- (BOOL)clearThrottle:(long long)arg1;
- (BOOL)clearThrottles;
- (id)container;
- (BOOL)createTables;
- (void)deactivate;
- (void)doneScheduling;
- (BOOL)dumpToContext:(id)arg1 error:(id*)arg2;
- (id)initWithName:(id)arg1 parameters:(id)arg2 tableName:(id)arg3 container:(id)arg4;
- (long long)lastRetryTimestamp;
- (void)needsSchedule;
- (void)needsScheduleAt:(long long)arg1;
- (long long)nextRetryTimestamp;
- (void)reschedule;
- (void)retriedThrottleID:(long long)arg1 insertIfMissing:(BOOL)arg2;
- (void)retriedThrottleID:(long long)arg1;
- (id)scheduler;
- (void)setLastRetryTimestamp:(long long)arg1;
- (void)setNextRetryTimestamp:(long long)arg1;
- (void)setScheduler:(id)arg1;
- (id)tableName;
- (void)unschedule;

@end
