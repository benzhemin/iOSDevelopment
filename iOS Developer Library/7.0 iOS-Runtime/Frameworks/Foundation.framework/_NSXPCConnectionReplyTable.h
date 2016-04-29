/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSObject<OS_xpc_object>;

@interface _NSXPCConnectionReplyTable : NSObject {
    struct __CFDictionary { } *_progressTable;
    NSObject<OS_xpc_object> *_replyTable;
    int _replyTableLock;
    unsigned long long _sequence;
}

- (id)copyReplyDictionaryForSequence:(unsigned long long)arg1;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)progressForSequence:(unsigned long long)arg1;
- (void)removeProgressSequence:(unsigned long long)arg1;
- (unsigned long long)sequenceForEvent:(id)arg1;
- (unsigned long long)sequenceForProgress:(id)arg1;

@end
