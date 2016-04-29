/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OITSUFlushingManager;

@interface OITSUMemoryWatcher : NSObject {
    OITSUFlushingManager *_flushingManager;
    BOOL _going;
    BOOL _stop;
}

- (void)_periodicallySimulateMemoryWarning:(id)arg1;
- (void)_simulateMemoryWarning:(id)arg1;
- (void)beginObserving;
- (void)dealloc;
- (id)initWithFlushingManager:(id)arg1;
- (void)stopObserving;

@end
