/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
 */

@class <NSCoding>, NSData, XPCRequest;

@interface XPCNSRequest : NSObject {
    NSData *_data;
    <NSCoding> *_message;
    XPCRequest *_request;
}

@property(retain,readonly) NSData * data;
@property(retain,readonly) <NSCoding> * message;
@property(retain,readonly) XPCRequest * request;

- (void).cxx_destruct;
- (id)data;
- (id)initWithXPCRequest:(id)arg1;
- (id)message;
- (id)request;
- (void)sendReply:(id)arg1;

@end
