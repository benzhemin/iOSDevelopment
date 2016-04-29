/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray;

@interface SUDelayedQuitController : NSObject {
    int _delayTerminateCount;
    NSMutableArray *_longLivedViewControllers;
}

+ (void)beginDelayingTerminate;
+ (void)checkInLongLivedViewController:(id)arg1;
+ (void)checkOutLongLivedViewController:(id)arg1;
+ (id)checkedInViewControllerOfClass:(Class)arg1;
+ (void)endDelayingTerminate;
+ (BOOL)isDelayingTerminate;
+ (id)sharedInstance;
+ (BOOL)viewControllerIsLongLived:(id)arg1;

- (void)_beginDelayingTerminate;
- (void)_checkInLongLivedViewController:(id)arg1;
- (void)_checkOutLongLivedViewController:(id)arg1;
- (id)_checkedInViewControllerOfClass:(Class)arg1;
- (void)_endDelayingTerminate;
- (BOOL)_isDelayingTerminate;
- (BOOL)_viewControllerIsLongLived:(id)arg1;
- (void)dealloc;

@end
