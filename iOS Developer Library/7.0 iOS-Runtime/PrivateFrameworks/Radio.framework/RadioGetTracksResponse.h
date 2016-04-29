/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface RadioGetTracksResponse : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDate *_expirationDate;
    NSDictionary *_responseDictionary;
    NSMutableDictionary *_tracksByStationKey;
}

@property(copy,readonly) NSDictionary * dialogDictionary;
@property(retain) NSDate * expirationDate;
@property(readonly) unsigned long long globalVersion;
@property(copy,readonly) NSDictionary * responseDictionary;
@property(readonly) BOOL shouldIncrementSkipCount;
@property(readonly) NSDate * skipDate;
@property(readonly) int tracklistActionType;
@property(copy,readonly) NSArray * unusedKBSyncStrings;

- (void).cxx_destruct;
- (id)_tracksForStationKey:(id)arg1;
- (id)dialogDictionary;
- (id)expirationDate;
- (unsigned long long)globalVersion;
- (id)init;
- (id)initWithResponseDictionary:(id)arg1;
- (id)responseDictionary;
- (void)setExpirationDate:(id)arg1;
- (BOOL)shouldIncrementSkipCount;
- (id)skipDate;
- (int)tracklistActionType;
- (id)tracksForStation:(id)arg1;
- (id)tracksForStationHash:(id)arg1;
- (id)tracksForStationID:(long long)arg1;
- (id)unusedKBSyncStrings;

@end
