/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPDateStatistics, CKDPRecord, NSString;

@interface CKDPRecordSaveResponse : PBCodable <NSCopying> {
    NSString *_etag;
    CKDPRecord *_serverFields;
    CKDPDateStatistics *_timeStatistics;
}

@property(retain) NSString * etag;
@property(readonly) BOOL hasEtag;
@property(readonly) BOOL hasServerFields;
@property(readonly) BOOL hasTimeStatistics;
@property(retain) CKDPRecord * serverFields;
@property(retain) CKDPDateStatistics * timeStatistics;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (BOOL)hasEtag;
- (BOOL)hasServerFields;
- (BOOL)hasTimeStatistics;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)serverFields;
- (void)setEtag:(id)arg1;
- (void)setServerFields:(id)arg1;
- (void)setTimeStatistics:(id)arg1;
- (id)timeStatistics;
- (void)writeTo:(id)arg1;

@end
