/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsVehicle : SCNPhysicsBehavior {
    SCNPhysicsBody *_chassisBody;
    float _speedKmHour;
    struct btRaycastVehicle { int (**x1)(); struct btAlignedObjectArray<btVector3> { struct btAlignedAllocator<btVector3, 16> { } x_2_1_1; int x_2_1_2; int x_2_1_3; struct btVector3 {} *x_2_1_4; boolx_2_1_5; } x2; struct btAlignedObjectArray<btVector3> { struct btAlignedAllocator<btVector3, 16> { } x_3_1_1; int x_3_1_2; int x_3_1_3; struct btVector3 {} *x_3_1_4; boolx_3_1_5; } x3; struct btAlignedObjectArray<float> { struct btAlignedAllocator<float, 16> { } x_4_1_1; int x_4_1_2; int x_4_1_3; float *x_4_1_4; boolx_4_1_5; } x4; struct btAlignedObjectArray<float> { struct btAlignedAllocator<float, 16> { } x_5_1_1; int x_5_1_2; int x_5_1_3; float *x_5_1_4; boolx_5_1_5; } x5; int x6; int x7; float x8; float x9; struct btVehicleRaycaster {} *x10; float x11; float x12; float x13; struct btRigidBody {} *x14; int x15; int x16; int x17; struct btAlignedObjectArray<btWheelInfo> { struct btAlignedAllocator<btWheelInfo, 16> { } x_18_1_1; int x_18_1_2; int x_18_1_3; struct btWheelInfo {} *x_18_1_4; boolx_18_1_5; } x18; } *_vehicle;
    NSArray *_wheels;
    SCNPhysicsWorld *_world;
}

@property(readonly) SCNPhysicsBody * chassisBody;
@property(readonly) float speedInKilometersPerHour;
@property(readonly) NSArray * wheels;

+ (id)SCNJSExportProtocol;
+ (BOOL)supportsSecureCoding;
+ (id)vehicleWithChassisBody:(id)arg1 wheels:(id)arg2;

- (struct btRaycastVehicle { int (**x1)(); struct btAlignedObjectArray<btVector3> { struct btAlignedAllocator<btVector3, 16> { } x_2_1_1; int x_2_1_2; int x_2_1_3; struct btVector3 {} *x_2_1_4; boolx_2_1_5; } x2; struct btAlignedObjectArray<btVector3> { struct btAlignedAllocator<btVector3, 16> { } x_3_1_1; int x_3_1_2; int x_3_1_3; struct btVector3 {} *x_3_1_4; boolx_3_1_5; } x3; struct btAlignedObjectArray<float> { struct btAlignedAllocator<float, 16> { } x_4_1_1; int x_4_1_2; int x_4_1_3; float *x_4_1_4; boolx_4_1_5; } x4; struct btAlignedObjectArray<float> { struct btAlignedAllocator<float, 16> { } x_5_1_1; int x_5_1_2; int x_5_1_3; float *x_5_1_4; boolx_5_1_5; } x5; int x6; int x7; float x8; float x9; struct btVehicleRaycaster {} *x10; float x11; float x12; float x13; struct btRigidBody {} *x14; int x15; int x16; int x17; struct btAlignedObjectArray<btWheelInfo> { struct btAlignedAllocator<btWheelInfo, 16> { } x_18_1_1; int x_18_1_2; int x_18_1_3; struct btWheelInfo {} *x_18_1_4; boolx_18_1_5; } x18; }*)btVehicle;
- (void)_addToPhysicsWorld:(id)arg1;
- (void)_createWheel:(id)arg1;
- (void)_customDecodingOfSCNPhysicsVehicle:(id)arg1;
- (void)_handleCreateIfNeeded:(BOOL)arg1;
- (void)_initializeWheelsArray;
- (void)_update;
- (void)_willRemoveFromPhysicsWorld:(id)arg1;
- (void)applyBrakingForce:(float)arg1 forWheelAtIndex:(int)arg2;
- (void)applyEngineForce:(float)arg1 forWheelAtIndex:(int)arg2;
- (id)chassisBody;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithChassisBody:(id)arg1 wheels:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)physicsWorld;
- (void)setSteeringAngle:(float)arg1 forWheelAtIndex:(int)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (float)speedInKilometersPerHour;
- (id)valueForKeyPath:(id)arg1;
- (id)wheelAtIndex:(unsigned int)arg1;
- (id)wheels;

@end
