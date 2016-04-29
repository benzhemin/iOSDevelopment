/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface CPLStatistics : NSObject <CPLEngineComponent> {
    struct { 
        int period; 
        struct { 
            long long batches; 
            long long errors; 
            long long assets; 
            long long masters; 
            long long retries; 
            long long bytesCount; 
            long long resourcesCount; 
        } upstream; 
        struct { 
            long long batches; 
            long long errors; 
            long long assets; 
            long long masters; 
            long long retries; 
            long long bytesCount; 
            long long resourcesCount; 
        } downstream; 
        struct { 
            long long setupErrors; 
            long long pushErrors; 
            long long pullErrors; 
            long long managementErrors; 
        } syncerrors; 
    BOOL _closed;
    } _currentSnapshot;
    long _lastServedAggregationWindow;
    NSURL *_logfileURL;
    NSObject<OS_dispatch_queue> *_persistanceQueue;
    BOOL _statisticsEnabled;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL statisticsEnabled;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)attachToDownloadCompletionHandler:(id)arg1 forResource:(id)arg2;
- (id)attachToDownloadProgressHandler:(id)arg1 forResource:(id)arg2;
- (id)attachToDownloadStartHandler:(id)arg1 forResource:(id)arg2;
- (id)attachToUploadRecordSaveHandler:(id)arg1;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(id)arg2;
- (id)componentName;
- (id)initWithEngineLibrary:(id)arg1;
- (void)markAggregationWindowAsDirtyNow:(BOOL)arg1;
- (void)openWithCompletionHandler:(id)arg1;
- (void)recordDownloadedBatchWithError:(id)arg1;
- (void)recordDownloadedResource:(id)arg1 withPotentialError:(id)arg2;
- (void)recordDownloadingResource:(id)arg1 progress:(float)arg2;
- (void)recordDownloadingResource:(id)arg1;
- (void)recordSyncErrorForState:(unsigned int)arg1;
- (void)recordUploadedBatchWithError:(id)arg1;
- (void)recordUploadedResource:(id)arg1 withPotentialError:(id)arg2;
- (void)recordUploadingResource:(id)arg1 progress:(float)arg2;
- (void)recordUploadingResource:(id)arg1;
- (void)setStatisticsEnabled:(BOOL)arg1;
- (BOOL)statisticsEnabled;
- (id)statisticsSnapshotSinceDate:(id)arg1;

@end
