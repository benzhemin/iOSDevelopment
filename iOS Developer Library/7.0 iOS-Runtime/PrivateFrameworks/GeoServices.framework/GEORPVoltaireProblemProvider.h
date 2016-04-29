/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GEORequester, NSString;

@interface GEORPVoltaireProblemProvider : GEORPProblemProvider <PBRequesterDelegate> {
    id _notificationAvailabilityErrorHandler;
    id _notificationAvailabilityFinishedHandler;
    GEORequester *_notificationAvailabilityRequester;
    id _statusErrorHandler;
    id _statusFinishedHandler;
    GEORequester *_statusRequester;
    id _submissionErrorHandler;
    id _submissionFinishedHandler;
    GEORequester *_submissionRequester;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)cancelRequest;
- (void)dealloc;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)startNotificationAvailabilityRequest:(id)arg1 finished:(id)arg2 error:(id)arg3;
- (void)startStatusRequest:(id)arg1 finished:(id)arg2 error:(id)arg3;
- (void)startSubmissionRequest:(id)arg1 finished:(id)arg2 error:(id)arg3;

@end
