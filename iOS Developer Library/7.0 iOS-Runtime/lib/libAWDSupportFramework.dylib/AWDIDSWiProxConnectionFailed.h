/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSWiProxConnectionFailed : PBCodable <NSCopying> {
    struct { 
        unsigned int timeToFail : 1; 
        unsigned int timestamp : 1; 
    } _has;
    long long _timeToFail;
    unsigned long long _timestamp;
}

@property BOOL hasTimeToFail;
@property BOOL hasTimestamp;
@property long long timeToFail;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasTimeToFail;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTimeToFail:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimeToFail:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (long long)timeToFail;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
