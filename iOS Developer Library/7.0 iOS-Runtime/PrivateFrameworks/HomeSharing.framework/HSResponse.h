/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSData, NSDictionary, NSError, NSString;

@interface HSResponse : NSObject {
    NSString *_MIMEType;
    NSError *_error;
    unsigned int _responseCode;
    NSData *_responseData;
    NSDictionary *_responseHeaderFields;
}

@property(readonly) NSString * MIMEType;
@property(readonly) NSError * error;
@property(readonly) unsigned int responseCode;
@property(readonly) NSData * responseData;
@property(readonly) NSDictionary * responseHeaderFields;

+ (id)responseWithCode:(unsigned int)arg1 headerFields:(id)arg2 data:(id)arg3 MIMEType:(id)arg4 error:(id)arg5;
+ (id)responseWithResponse:(id)arg1;

- (void).cxx_destruct;
- (id)MIMEType;
- (id)description;
- (id)error;
- (id)initWithCode:(unsigned int)arg1 headerFields:(id)arg2 data:(id)arg3 MIMEType:(id)arg4 error:(id)arg5;
- (unsigned int)responseCode;
- (id)responseData;
- (id)responseHeaderFields;

@end
