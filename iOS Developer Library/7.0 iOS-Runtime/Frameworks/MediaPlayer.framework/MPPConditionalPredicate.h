/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPPMediaPredicate;

@interface MPPConditionalPredicate : PBCodable <NSCopying> {
    MPPMediaPredicate *_conditionalPredicate;
    MPPMediaPredicate *_elsePredicate;
    MPPMediaPredicate *_thenPredicate;
}

@property(retain) MPPMediaPredicate * conditionalPredicate;
@property(retain) MPPMediaPredicate * elsePredicate;
@property(readonly) BOOL hasConditionalPredicate;
@property(readonly) BOOL hasElsePredicate;
@property(readonly) BOOL hasThenPredicate;
@property(retain) MPPMediaPredicate * thenPredicate;

- (void).cxx_destruct;
- (id)conditionalPredicate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)elsePredicate;
- (BOOL)hasConditionalPredicate;
- (BOOL)hasElsePredicate;
- (BOOL)hasThenPredicate;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setConditionalPredicate:(id)arg1;
- (void)setElsePredicate:(id)arg1;
- (void)setThenPredicate:(id)arg1;
- (id)thenPredicate;
- (void)writeTo:(id)arg1;

@end
