/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_xpc_object>, NSString, NSURLRequest;

@interface IDSRemoteURLConnection : NSObject {
    id _block;
    NSString *_bundleIdentifierForDataUsage;
    BOOL _cancelled;
    NSObject<OS_xpc_object> *_connection;
    BOOL _forceCellularIfPossible;
    BOOL _loading;
    NSURLRequest *_request;
    BOOL _requiresIDSHost;
    int _retries;
}

@property(retain) NSString * bundleIdentifierForDataUsage;
@property BOOL forceCellularIfPossible;
@property BOOL requiresIDSHost;

- (BOOL)_connect;
- (BOOL)_disconnect;
- (void)_disconnected;
- (id)bundleIdentifierForDataUsage;
- (void)cancel;
- (void)dealloc;
- (BOOL)forceCellularIfPossible;
- (id)initWithURLRequest:(id)arg1 completionBlock:(id)arg2;
- (void)load;
- (BOOL)requiresIDSHost;
- (void)setBundleIdentifierForDataUsage:(id)arg1;
- (void)setForceCellularIfPossible:(BOOL)arg1;
- (void)setRequiresIDSHost:(BOOL)arg1;

@end
