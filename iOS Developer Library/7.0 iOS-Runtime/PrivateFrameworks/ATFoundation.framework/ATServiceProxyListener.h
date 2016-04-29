/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@class ATService, NSString, NSXPCListener;

@interface ATServiceProxyListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    ATService *_service;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property ATService * service;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithService:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)service;
- (void)setService:(id)arg1;
- (void)start;
- (void)stop;

@end
