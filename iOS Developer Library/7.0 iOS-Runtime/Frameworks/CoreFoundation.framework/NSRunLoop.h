/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSRunLoop : NSObject {
    id _dperf;
    id _info;
    id _perft;
    id _ports;
    void *_reserved[6];
    id _rl;
}

+ (id)_mapkit_networkIORunLoop;
+ (id)_new:(id)arg1;
+ (id)currentRunLoop;
+ (id)mainRunLoop;
+ (void)set_mapkit_networkIORunLoop:(id)arg1;

- (void)_addPort:(id)arg1 forMode:(id)arg2;
- (BOOL)_containsPort:(id)arg1 forMode:(id)arg2;
- (void)_enumerateInfoPairsWithBlock:(id)arg1;
- (void)_invalidateTimers;
- (void)_portInvalidated:(id)arg1;
- (void)_removePort:(id)arg1 forMode:(id)arg2;
- (void)_wakeup;
- (void)acceptInputForMode:(id)arg1 beforeDate:(id)arg2;
- (void)addPort:(id)arg1 forMode:(id)arg2;
- (void)addTimer:(id)arg1 forMode:(id)arg2;
- (id)allModes;
- (void)cancelPerformSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3;
- (void)cancelPerformSelectorsWithTarget:(id)arg1;
- (BOOL)containsPort:(id)arg1 forMode:(id)arg2;
- (BOOL)containsTimer:(id)arg1 forMode:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentMode;
- (void)dealloc;
- (id)description;
- (struct __CFRunLoop { }*)getCFRunLoop;
- (id)init;
- (id)limitDateForMode:(id)arg1;
- (void)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 order:(unsigned int)arg4 modes:(id)arg5;
- (id)portsForMode:(id)arg1;
- (void)removePort:(id)arg1 forMode:(id)arg2;
- (void)removeTimer:(id)arg1 forMode:(id)arg2;
- (void)run;
- (BOOL)runBeforeDate:(id)arg1;
- (BOOL)runMode:(id)arg1 beforeDate:(id)arg2;
- (BOOL)runMode:(id)arg1 untilDate:(id)arg2;
- (void)runUntilDate:(id)arg1;
- (id)timersForMode:(id)arg1;

@end
