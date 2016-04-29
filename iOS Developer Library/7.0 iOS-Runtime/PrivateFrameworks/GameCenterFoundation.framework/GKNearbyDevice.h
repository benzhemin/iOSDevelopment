/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKDiscovery, GKPlayer, NSDictionary, NSString;

@interface GKNearbyDevice : NSObject {
    NSString *_deviceID;
    GKDiscovery *_discovery;
    NSDictionary *_pendingInvite;
    GKPlayer *_player;
    int _state;
}

@property(retain) NSString * deviceID;
@property(retain) GKDiscovery * discovery;
@property(retain) NSDictionary * pendingInvite;
@property(retain) GKPlayer * player;
@property int state;

+ (id)nearbyDeviceWithID:(id)arg1 discovery:(id)arg2;

- (void)dealloc;
- (id)deviceID;
- (id)discovery;
- (id)pendingInvite;
- (id)player;
- (void)sendDictionary:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setDiscovery:(id)arg1;
- (void)setPendingInvite:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;

@end
