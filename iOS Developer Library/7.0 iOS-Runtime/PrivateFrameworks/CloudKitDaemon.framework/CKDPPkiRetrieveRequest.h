/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSMutableArray;

@interface CKDPPkiRetrieveRequest : PBRequest <NSCopying> {
    NSMutableArray *_userIds;
}

@property(retain) NSMutableArray * userIds;

+ (id)options;

- (void).cxx_destruct;
- (void)addUserId:(id)arg1;
- (void)clearUserIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setUserIds:(id)arg1;
- (id)userIdAtIndex:(unsigned int)arg1;
- (id)userIds;
- (unsigned int)userIdsCount;
- (void)writeTo:(id)arg1;

@end
