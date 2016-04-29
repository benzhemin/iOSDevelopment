/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSData;

@interface GKMatchPacket : NSObject {
    unsigned short _checksum;
    NSData *_data;
    unsigned char _packetType;
    unsigned int _sequenceNumber;
    unsigned int _totalLength;
    BOOL _valid;
    unsigned char _version;
}

@property unsigned short checksum;
@property(retain) NSData * data;
@property unsigned char packetType;
@property unsigned int sequenceNumber;
@property unsigned int totalLength;
@property BOOL valid;
@property unsigned char version;

- (unsigned short)checksum;
- (id)data;
- (void)dealloc;
- (id)init;
- (id)initWithMessage:(id)arg1;
- (id)message;
- (unsigned char)packetType;
- (unsigned int)sequenceNumber;
- (void)setChecksum:(unsigned short)arg1;
- (void)setData:(id)arg1;
- (void)setPacketType:(unsigned char)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setTotalLength:(unsigned int)arg1;
- (void)setValid:(BOOL)arg1;
- (void)setVersion:(unsigned char)arg1;
- (unsigned int)totalLength;
- (BOOL)valid;
- (unsigned char)version;

@end
