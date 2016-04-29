/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class <WBSCloudHistorySyncThrottlerDataStore>, NSArray, NSMutableArray;

@interface WBSCloudHistorySyncThrottler : NSObject {
    <WBSCloudHistorySyncThrottlerDataStore> *_dataStore;
    unsigned int _maximumNumberOfOperationWithinMonitoredPeriod;
    double _numberOfSecondsToMonitor;
    NSMutableArray *_syncOperationsWithinMonitoredPeriod;
    NSArray *_throttlingDistribution;
}

@property(retain) <WBSCloudHistorySyncThrottlerDataStore> * dataStore;

+ (id)_distributionBucketsFromConfiguration:(id)arg1;
+ (BOOL)policyStringRepresentsValidPolicy:(id)arg1;

- (void).cxx_destruct;
- (void)_addSyncOperationAtDate:(id)arg1;
- (double)_currentMinimumTimeIntervalBetweenSyncOperations;
- (id)_dateOfNextPermittedSyncAttemptWithNormalPriority;
- (BOOL)_loadDistributionConfiguration:(id)arg1;
- (void)_loadRecordOfPastSyncOperations;
- (double)_minimumTimeBetweenSyncOperationsForSyncOperations:(id)arg1;
- (void)_pruneExpiredOrInvalidSyncEntries;
- (void)_saveRecordOfPastSyncOperations;
- (unsigned int)_test_maximumNumberOfOperationWithinMonitoredPeriod;
- (double)_test_numberOfSecondsToMonitor;
- (BOOL)_throttlerIsActive;
- (double)_timeIntervalUntilNextPermittedSyncAttemptWithNormalPriority;
- (double)_timeIntervalUntilSyncOperationShouldBePruned:(id)arg1;
- (id)dataStore;
- (id)dateOfNextPermittedSyncAttemptWithPriority:(int)arg1;
- (id)description;
- (id)init;
- (id)initWithPolicyString:(id)arg1;
- (void)setDataStore:(id)arg1;
- (void)setPolicyString:(id)arg1;
- (void)syncAttemptWithPriority:(int)arg1 didCompleteWithResult:(int)arg2;
- (BOOL)throttlingPolicyPermitsSyncAttemptWithPriority:(int)arg1;

@end
