/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKGameInternal, GKPlayerInternal, NSDate, NSOrderedSet, NSString;

@interface GKChallengeInternal : GKInternalRepresentation {
    NSString *_bundleID;
    NSString *_challengeID;
    NSOrderedSet *_compatibleBundleIDs;
    NSDate *_completionDate;
    GKGameInternal *_game;
    NSDate *_issueDate;
    GKPlayerInternal *_issuingPlayer;
    NSString *_message;
    GKPlayerInternal *_receivingPlayer;
    int _state;
}

@property(retain) NSString * bundleID;
@property(retain) NSString * challengeID;
@property(retain) NSOrderedSet * compatibleBundleIDs;
@property(retain) NSDate * completionDate;
@property(retain) GKGameInternal * game;
@property(retain) NSDate * issueDate;
@property(retain) GKPlayerInternal * issuingPlayer;
@property(retain) NSString * message;
@property(retain) GKPlayerInternal * receivingPlayer;
@property int state;
@property(readonly) unsigned int type;

+ (id)internalRepresentation;
+ (id)secureCodedPropertyKeys;

- (id)bundleID;
- (id)challengeID;
- (id)compatibleBundleIDs;
- (id)completionDate;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)findLocalGameBundleID;
- (id)game;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)issueDate;
- (id)issuingPlayer;
- (id)message;
- (id)receivingPlayer;
- (id)serverRepresentation;
- (id)serverRepresentationForReceivingPlayer:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setChallengeID:(id)arg1;
- (void)setCompatibleBundleIDs:(id)arg1;
- (void)setCompletionDate:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setIssueDate:(id)arg1;
- (void)setIssuingPlayer:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setReceivingPlayer:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (unsigned int)type;

@end
