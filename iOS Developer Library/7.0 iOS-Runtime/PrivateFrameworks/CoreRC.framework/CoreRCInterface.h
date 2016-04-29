/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@class CoreRCInterfaceListener;

@interface CoreRCInterface : NSObject {
    CoreRCInterfaceListener *_listener;
    id _testProperty;
}

@property CoreRCInterfaceListener * listener;
@property(copy) id testProperty;

- (void)dealloc;
- (BOOL)doesNotImplement:(SEL)arg1 error:(id*)arg2;
- (id)listener;
- (id)propertyForKey:(id)arg1 error:(id*)arg2;
- (void)scheduleWithDispatchQueue:(id)arg1;
- (void)setListener:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setTestProperty:(id)arg1;
- (id)testProperty;
- (void)unscheduleFromDispatchQueue:(id)arg1;

@end
