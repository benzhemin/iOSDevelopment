/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageInfo : NSObject {
    unsigned int _flagged : 1;
    unsigned int _read : 1;
    unsigned int _deleted : 1;
    unsigned int _uidIsLibraryID : 1;
    unsigned int _hasAttachments : 1;
    unsigned int _isVIP : 1;
    long long _conversationHash;
    unsigned int _dateReceivedInterval;
    unsigned int _dateSentInterval;
    long long _generationNumber;
    unsigned int _mailboxID;
    unsigned int _uid;
}

@property long long conversationHash;
@property unsigned int dateReceivedInterval;
@property unsigned int dateSentInterval;
@property BOOL deleted;
@property BOOL flagged;
@property(readonly) long long generationNumber;
@property BOOL isVIP;
@property(getter=isKnownToHaveAttachments) BOOL knownToHaveAttachments;
@property unsigned int mailboxID;
@property BOOL read;
@property unsigned int uid;
@property BOOL uidIsLibraryID;

+ (long long)newGenerationNumber;

- (long long)conversationHash;
- (unsigned int)dateReceivedInterval;
- (unsigned int)dateSentInterval;
- (BOOL)deleted;
- (id)description;
- (BOOL)flagged;
- (int)generationCompare:(id)arg1;
- (long long)generationNumber;
- (unsigned int)hash;
- (id)init;
- (id)initWithUid:(unsigned int)arg1 mailboxID:(unsigned int)arg2 dateReceivedInterval:(unsigned int)arg3 dateSentInterval:(unsigned int)arg4 conversationHash:(long long)arg5 read:(BOOL)arg6 knownToHaveAttachments:(BOOL)arg7 flagged:(BOOL)arg8 isVIP:(BOOL)arg9;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isKnownToHaveAttachments;
- (BOOL)isVIP;
- (unsigned int)mailboxID;
- (BOOL)read;
- (void)setConversationHash:(long long)arg1;
- (void)setDateReceivedInterval:(unsigned int)arg1;
- (void)setDateSentInterval:(unsigned int)arg1;
- (void)setDeleted:(BOOL)arg1;
- (void)setFlagged:(BOOL)arg1;
- (void)setIsVIP:(BOOL)arg1;
- (void)setKnownToHaveAttachments:(BOOL)arg1;
- (void)setMailboxID:(unsigned int)arg1;
- (void)setRead:(BOOL)arg1;
- (void)setUid:(unsigned int)arg1;
- (void)setUidIsLibraryID:(BOOL)arg1;
- (unsigned int)uid;
- (BOOL)uidIsLibraryID;

@end
