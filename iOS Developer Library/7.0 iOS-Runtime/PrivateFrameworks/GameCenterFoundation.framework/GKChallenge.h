/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKChallengeInternal, GKGame, GKPlayer, NSDate, NSOrderedSet, NSString;

@interface GKChallenge : NSObject <NSCoding, NSSecureCoding> {
    GKChallengeInternal *_internal;
}

@property(copy,readonly) NSString * bundleID;
@property(copy,readonly) NSString * challengeID;
@property(copy,readonly) NSOrderedSet * compatibleBundleIDs;
@property(retain,readonly) NSDate * completionDate;
@property(readonly) BOOL detailsLoaded;
@property(readonly) GKGame * game;
@property(retain) GKChallengeInternal * internal;
@property(retain,readonly) NSDate * issueDate;
@property(copy,readonly) GKPlayer * issuingPlayer;
@property(copy,readonly) NSString * issuingPlayerID;
@property(copy,readonly) NSString * message;
@property(copy,readonly) GKPlayer * receivingPlayer;
@property(copy,readonly) NSString * receivingPlayerID;
@property(readonly) int state;

+ (id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withAchievement:(id)arg3;
+ (id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withScore:(id)arg3;
+ (id)challengeForInternalRepresentation:(id)arg1;
+ (void)getCountOfChallenges:(id)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (void)loadChallengesForGame:(id)arg1 receivingPlayer:(id)arg2 withCompletionHandler:(id)arg3;
+ (void)loadChallengesForReceivingPlayer:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadReceivedChallengesWithCompletionHandler:(id)arg1;
+ (id)stringForState:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (id)alertGoalText;
- (id)composeGoalText;
- (void)dealloc;
- (void)decline;
- (void)declineWithCompletionHandler:(id)arg1;
- (id)detailFromText;
- (id)detailGoalText;
- (BOOL)detailsLoaded;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)game;
- (BOOL)hasLoadedUIDetails;
- (unsigned int)hash;
- (id)iconSource;
- (id)iconURLString;
- (id)infoTextForIssuingPlayer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (BOOL)isEqual:(id)arg1;
- (void)issueToPlayers:(id)arg1 message:(id)arg2;
- (id)issuingPlayer;
- (id)issuingPlayerID;
- (id)listGoalText;
- (id)listTitleText;
- (void)loadBannerImageWithHandler:(id)arg1;
- (void)loadDetailsWithCompletionHandler:(id)arg1;
- (void)loadImageWithCompletionHandler:(id)arg1;
- (void)loadImageWithSource:(id)arg1 URLString:(id)arg2 withHandler:(id)arg3;
- (void)loadUIDetailsWithHandler:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)receivingPlayer;
- (id)receivingPlayerID;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setInternal:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)smallIconURLString;
- (id)valueForUndefinedKey:(id)arg1;

@end
