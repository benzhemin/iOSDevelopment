/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@class <NSStreamDelegate>, NSError;

@interface NSStream : NSObject {
}

@property <NSStreamDelegate> * delegate;
@property(copy,readonly) NSError * streamError;
@property(readonly) unsigned int streamStatus;

+ (void)createBoundInputStream:(id*)arg1 outputStream:(id*)arg2 bufferSize:(unsigned int)arg3;
+ (void)getBoundStreamsWithBufferSize:(unsigned int)arg1 inputStream:(id*)arg2 outputStream:(id*)arg3;
+ (void)getStreamsToHost:(id)arg1 port:(int)arg2 inputStream:(id*)arg3 outputStream:(id*)arg4;
+ (void)getStreamsToHostWithName:(id)arg1 port:(int)arg2 inputStream:(id*)arg3 outputStream:(id*)arg4;

- (void)close;
- (id)delegate;
- (void)open;
- (id)propertyForKey:(id)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)streamError;
- (unsigned int)streamStatus;

@end
