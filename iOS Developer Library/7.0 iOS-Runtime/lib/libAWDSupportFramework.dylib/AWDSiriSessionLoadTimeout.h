/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDSiriSessionLoadTimeout : PBCodable <NSCopying> {
    struct { 
        unsigned int connectionTechnology : 1; 
        unsigned int interfaceIndex : 1; 
        unsigned int sendBufferSize : 1; 
        unsigned int timestamp : 1; 
        unsigned int wwanPreferred : 1; 
    unsigned long long _connectionTechnology;
    NSString *_connectionURL;
    } _has;
    unsigned long long _interfaceIndex;
    unsigned long long _sendBufferSize;
    unsigned long long _timestamp;
    BOOL _wwanPreferred;
}

@property unsigned long long connectionTechnology;
@property(retain) NSString * connectionURL;
@property BOOL hasConnectionTechnology;
@property(readonly) BOOL hasConnectionURL;
@property BOOL hasInterfaceIndex;
@property BOOL hasSendBufferSize;
@property BOOL hasTimestamp;
@property BOOL hasWwanPreferred;
@property unsigned long long interfaceIndex;
@property unsigned long long sendBufferSize;
@property unsigned long long timestamp;
@property BOOL wwanPreferred;

- (unsigned long long)connectionTechnology;
- (id)connectionURL;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasConnectionTechnology;
- (BOOL)hasConnectionURL;
- (BOOL)hasInterfaceIndex;
- (BOOL)hasSendBufferSize;
- (BOOL)hasTimestamp;
- (BOOL)hasWwanPreferred;
- (unsigned int)hash;
- (unsigned long long)interfaceIndex;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned long long)sendBufferSize;
- (void)setConnectionTechnology:(unsigned long long)arg1;
- (void)setConnectionURL:(id)arg1;
- (void)setHasConnectionTechnology:(BOOL)arg1;
- (void)setHasInterfaceIndex:(BOOL)arg1;
- (void)setHasSendBufferSize:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasWwanPreferred:(BOOL)arg1;
- (void)setInterfaceIndex:(unsigned long long)arg1;
- (void)setSendBufferSize:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWwanPreferred:(BOOL)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;
- (BOOL)wwanPreferred;

@end
