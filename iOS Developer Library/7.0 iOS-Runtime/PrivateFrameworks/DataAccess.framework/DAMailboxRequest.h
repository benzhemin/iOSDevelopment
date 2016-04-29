/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface DAMailboxRequest : NSObject {
    int _bodyFormat;
    NSString *_messageID;
    int _requestType;
}

@property int bodyFormat;
@property(copy) NSString * messageID;
@property int requestType;

- (void).cxx_destruct;
- (int)bodyFormat;
- (id)init;
- (id)messageID;
- (BOOL)mf_alwaysReportFailures;
- (int)requestType;
- (void)setBodyFormat:(int)arg1;
- (void)setMessageID:(id)arg1;
- (void)setRequestType:(int)arg1;

@end
