/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_source>;

@interface CalSignalSensor : NSObject {
    id _fireBlock;
    int _signal;
    NSObject<OS_dispatch_source> *_signalSource;
}

@property(copy) id fireBlock;
@property int signal;

- (void).cxx_destruct;
- (void)_shutDownSource;
- (void)dealloc;
- (id)description;
- (id)fireBlock;
- (id)initWithSignal:(int)arg1;
- (void)setFireBlock:(id)arg1;
- (void)setSignal:(int)arg1;
- (int)signal;
- (void)startSensor;
- (void)stopSensor;

@end
