/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class NSArray, NSObject<OS_dispatch_queue>;

@interface FBSSerialQueue : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_mainRunLoopModes;
    struct __CFRunLoopSource { } *_runLoopSource;
}

+ (id)queueWithDispatchQueue:(id)arg1;
+ (id)queueWithMainRunLoopModes:(id)arg1;

- (id)_initWithDispatchQueue:(id)arg1 mainRunLoopModes:(id)arg2;
- (void)assertOnQueue;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)performAsync:(id)arg1;

@end
