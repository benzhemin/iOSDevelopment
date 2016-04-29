/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableDictionary;

@interface IMChatHistoryController : NSObject {
    NSMutableDictionary *_runningQueries;
}

@property(retain) NSMutableDictionary * _runningQueries;

+ (id)sharedInstance;

- (id)_runningQueries;
- (void)databaseFull;
- (void)databaseNoLongerFull;
- (void)dealloc;
- (id)init;
- (void)loadMessageWithGUID:(id)arg1 completionBlock:(id)arg2;
- (void)messageQuery:(id)arg1 finishedWithResult:(id)arg2 chatGUIDs:(id)arg3;
- (void)set_runningQueries:(id)arg1;

@end
