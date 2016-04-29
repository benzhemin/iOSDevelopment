/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class <NSNetServiceDelegate>, NSArray, NSString;

@interface NSNetService : NSObject {
    id _delegate;
    id _netService;
    id _reserved;
}

@property(copy,readonly) NSArray * addresses;
@property <NSNetServiceDelegate> * delegate;
@property(copy,readonly) NSString * domain;
@property(copy,readonly) NSString * hostName;
@property BOOL includesPeerToPeer;
@property(copy,readonly) NSString * name;
@property(readonly) int port;
@property(copy,readonly) NSString * type;

+ (id)dataFromTXTRecordDictionary:(id)arg1;
+ (id)dictionaryFromTXTRecordData:(id)arg1;

- (id)TXTRecordData;
- (void)_dispatchCallBackWithError:(struct { int x1; int x2; })arg1;
- (BOOL)_includesAWDL;
- (struct __CFNetService { }*)_internalNetService;
- (void)_internal_publishWithOptions:(unsigned int)arg1;
- (id)_monitors;
- (void)_scheduleInDefaultRunLoopForMode:(id)arg1;
- (void)_setIncludesAWDL:(BOOL)arg1;
- (id)addresses;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)domain;
- (void)finalize;
- (BOOL)getInputStream:(out id*)arg1 outputStream:(out id*)arg2;
- (unsigned int)hash;
- (id)hostName;
- (BOOL)includesPeerToPeer;
- (id)initWithCFNetService:(struct __CFNetService { }*)arg1;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 port:(int)arg4;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (id)normalizedType;
- (int)port;
- (void)publish;
- (void)publishWithOptions:(unsigned int)arg1;
- (void)publishWithServer:(unsigned int)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)resolve;
- (void)resolveWithTimeout:(double)arg1;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setIncludesPeerToPeer:(BOOL)arg1;
- (BOOL)setTXTRecordData:(id)arg1;
- (void)startMonitoring;
- (void)stop;
- (void)stopMonitoring;
- (id)type;

@end
