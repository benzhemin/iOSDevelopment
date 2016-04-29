/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@class NSString;

@interface MCPeerIDInternal : NSObject {
    NSString *_displayName;
    NSString *_idString;
    unsigned long long _pid64;
}

@property(readonly) NSString * displayName;
@property(readonly) NSString * idString;
@property(readonly) unsigned long long pid64;

- (void)dealloc;
- (id)displayName;
- (id)idString;
- (id)initWithIDString:(id)arg1 pid64:(unsigned long long)arg2 displayName:(id)arg3;
- (unsigned long long)pid64;

@end
