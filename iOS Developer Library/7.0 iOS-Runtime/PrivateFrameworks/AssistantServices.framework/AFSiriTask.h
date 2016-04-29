/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class AFSiriRequest, NSString, NSXPCListenerEndpoint;

@interface AFSiriTask : NSObject <BSXPCCoding, NSSecureCoding> {
    NSXPCListenerEndpoint *_remoteResponseListenerEndpoint;
    AFSiriRequest *_request;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithRequest:(id)arg1 remoteResponseListenerEndpoint:(id)arg2;
- (id)_responseHandlerProxyWithErrorHandler:(id)arg1;
- (void)completeWithResponse:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)failWithError:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)request;

@end
