/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSMetricsEventTable;

@interface SSMetricsEventController : SSMetricsController {
    SSMetricsEventTable *_table;
}

- (id)_collectUnreportedPIDsFromDatabase:(id)arg1 matchingReportURLString:(id)arg2 since:(long long)arg3;
- (int)_maximumUnreportedToSelect;
- (void)_serialQueueInsertEvents:(id)arg1 withCompletionHandler:(id)arg2;
- (void)dealloc;
- (BOOL)deleteEventsInsertedBefore:(long long)arg1;
- (BOOL)deleteReportedEvents;
- (void)flushUnreportedEventsWithCompletionHandler:(id)arg1;
- (id)init;
- (BOOL)insertEventSummaries:(id)arg1 error:(id*)arg2;
- (BOOL)markEventsAsReported:(id)arg1;
- (id)newReportingSessionForURL:(id)arg1 since:(long long)arg2;
- (id)unreportedEventURLsSince:(long long)arg1;
- (id)unreportedEventsForURL:(id)arg1 since:(long long)arg2;

@end
