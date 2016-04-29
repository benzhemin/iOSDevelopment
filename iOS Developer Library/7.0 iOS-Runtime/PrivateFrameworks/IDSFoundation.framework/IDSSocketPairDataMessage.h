/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class NSData, NSString;

@interface IDSSocketPairDataMessage : IDSSocketPairMessage {
    BOOL _compressed;
    NSData *_data;
    BOOL _expectsPeerResponse;
    NSString *_messageUUID;
    unsigned int _offset;
    NSString *_peerResponseIdentifier;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    BOOL _wantsAppAck;
}

@property BOOL compressed;
@property(retain,readonly) NSData * data;
@property(readonly) BOOL expectsPeerResponse;
@property(retain,readonly) NSString * messageUUID;
@property(retain,readonly) NSString * peerResponseIdentifier;
@property unsigned int sequenceNumber;
@property(readonly) unsigned short streamID;
@property(readonly) BOOL wantsAppAck;

- (id)_nonHeaderData;
- (unsigned char)command;
- (BOOL)compressed;
- (id)data;
- (void)dealloc;
- (BOOL)expectsPeerResponse;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)initWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 expectsPeerResponse:(BOOL)arg3 wantsAppAck:(BOOL)arg4 compressed:(BOOL)arg5 peerResponseIdentifier:(id)arg6 messageUUID:(id)arg7 data:(id)arg8;
- (id)messageUUID;
- (id)peerResponseIdentifier;
- (unsigned int)sequenceNumber;
- (void)setCompressed:(BOOL)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (unsigned short)streamID;
- (BOOL)wantsAppAck;

@end
