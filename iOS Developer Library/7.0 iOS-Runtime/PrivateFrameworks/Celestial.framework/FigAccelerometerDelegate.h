/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSString, SBSAccelerometer;

@interface FigAccelerometerDelegate : NSObject <SBSAccelerometerDelegate> {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    int ringIndex;
    } ringMutex;
    double ringTime[64];
    float ringX[64];
    float ringY[64];
    float ringZ[64];
    SBSAccelerometer *sbsaccel;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)dealloc;
- (void)deferOnRunloop_accelerometerEventsEnable;
- (void)getVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4;
- (id)init;

@end
