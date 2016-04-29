/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDIMessageAttachmentDownload : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int attachmentSize : 1; 
        unsigned int connectionType : 1; 
        unsigned int downloadDuration : 1; 
        unsigned int fzError : 1; 
        unsigned int genericError : 1; 
        unsigned int linkQuality : 1; 
        unsigned int messageError : 1; 
        unsigned int tokenError : 1; 
    unsigned int _attachmentSize;
    unsigned int _connectionType;
    unsigned int _downloadDuration;
    int _fzError;
    int _genericError;
    NSString *_guid;
    } _has;
    int _linkQuality;
    unsigned int _messageError;
    unsigned long long _timestamp;
    unsigned int _tokenError;
}

@property unsigned int attachmentSize;
@property unsigned int connectionType;
@property unsigned int downloadDuration;
@property int fzError;
@property int genericError;
@property(retain) NSString * guid;
@property BOOL hasAttachmentSize;
@property BOOL hasConnectionType;
@property BOOL hasDownloadDuration;
@property BOOL hasFzError;
@property BOOL hasGenericError;
@property(readonly) BOOL hasGuid;
@property BOOL hasLinkQuality;
@property BOOL hasMessageError;
@property BOOL hasTimestamp;
@property BOOL hasTokenError;
@property int linkQuality;
@property unsigned int messageError;
@property unsigned long long timestamp;
@property unsigned int tokenError;

- (unsigned int)attachmentSize;
- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)downloadDuration;
- (int)fzError;
- (int)genericError;
- (id)guid;
- (BOOL)hasAttachmentSize;
- (BOOL)hasConnectionType;
- (BOOL)hasDownloadDuration;
- (BOOL)hasFzError;
- (BOOL)hasGenericError;
- (BOOL)hasGuid;
- (BOOL)hasLinkQuality;
- (BOOL)hasMessageError;
- (BOOL)hasTimestamp;
- (BOOL)hasTokenError;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)linkQuality;
- (void)mergeFrom:(id)arg1;
- (unsigned int)messageError;
- (BOOL)readFrom:(id)arg1;
- (void)setAttachmentSize:(unsigned int)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setDownloadDuration:(unsigned int)arg1;
- (void)setFzError:(int)arg1;
- (void)setGenericError:(int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasAttachmentSize:(BOOL)arg1;
- (void)setHasConnectionType:(BOOL)arg1;
- (void)setHasDownloadDuration:(BOOL)arg1;
- (void)setHasFzError:(BOOL)arg1;
- (void)setHasGenericError:(BOOL)arg1;
- (void)setHasLinkQuality:(BOOL)arg1;
- (void)setHasMessageError:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTokenError:(BOOL)arg1;
- (void)setLinkQuality:(int)arg1;
- (void)setMessageError:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTokenError:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)tokenError;
- (void)writeTo:(id)arg1;

@end
