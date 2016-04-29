/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCRetryCounter : NSObject {
    unsigned long long _latestRetry;
    unsigned int _retryCount;
    BOOL _scheduled;
    long long _throttleHash;
}

@property(readonly) unsigned long long latestRetry;
@property(readonly) unsigned int retryCount;
@property(readonly) long long throttleHash;

- (void)incrementRetry;
- (id)initWithThrottleHash:(long long)arg1;
- (unsigned long long)latestRetry;
- (unsigned int)retryCount;
- (void)schedule;
- (long long)throttleHash;

@end
