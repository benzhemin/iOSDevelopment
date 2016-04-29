/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDWiProxLeScanStopResult : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int type : 1; 
    } _has;
    NSString *_sessionId;
    unsigned long long _timestamp;
    int _type;
}

@property(readonly) BOOL hasSessionId;
@property BOOL hasTimestamp;
@property BOOL hasType;
@property(retain) NSString * sessionId;
@property unsigned long long timestamp;
@property int type;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasSessionId;
- (BOOL)hasTimestamp;
- (BOOL)hasType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sessionId;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(int)arg1;
- (unsigned long long)timestamp;
- (int)type;
- (void)writeTo:(id)arg1;

@end
