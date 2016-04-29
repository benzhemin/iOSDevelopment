/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDFaceTimeCallDeclineSent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int declineCode : 1; 
        unsigned int errorCode : 1; 
        unsigned int isVideo : 1; 
        unsigned int onLockScreen : 1; 
        unsigned int sendDuration : 1; 
    unsigned int _declineCode;
    int _errorCode;
    NSString *_guid;
    } _has;
    unsigned int _isVideo;
    unsigned int _onLockScreen;
    unsigned int _sendDuration;
    unsigned long long _timestamp;
}

@property unsigned int declineCode;
@property int errorCode;
@property(retain) NSString * guid;
@property BOOL hasDeclineCode;
@property BOOL hasErrorCode;
@property(readonly) BOOL hasGuid;
@property BOOL hasIsVideo;
@property BOOL hasOnLockScreen;
@property BOOL hasSendDuration;
@property BOOL hasTimestamp;
@property unsigned int isVideo;
@property unsigned int onLockScreen;
@property unsigned int sendDuration;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)declineCode;
- (id)description;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (id)guid;
- (BOOL)hasDeclineCode;
- (BOOL)hasErrorCode;
- (BOOL)hasGuid;
- (BOOL)hasIsVideo;
- (BOOL)hasOnLockScreen;
- (BOOL)hasSendDuration;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)isVideo;
- (void)mergeFrom:(id)arg1;
- (unsigned int)onLockScreen;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)sendDuration;
- (void)setDeclineCode:(unsigned int)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasDeclineCode:(BOOL)arg1;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)setHasIsVideo:(BOOL)arg1;
- (void)setHasOnLockScreen:(BOOL)arg1;
- (void)setHasSendDuration:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setIsVideo:(unsigned int)arg1;
- (void)setOnLockScreen:(unsigned int)arg1;
- (void)setSendDuration:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
