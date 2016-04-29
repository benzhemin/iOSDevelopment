/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@class NSDate, NSMutableArray, NSString;

@interface AXHearingAidFakeDevice : AXHearingAidDevice {
    BOOL _connected;
    NSString *_deviceUUID;
    BOOL _isConnecting;
    float _leftBatteryLevel;
    NSDate *_leftBatteryLowDate;
    NSMutableArray *_leftFakePrograms;
    NSString *_leftFirmwareVersion;
    NSString *_leftHardwareVersion;
    NSString *_leftUUID;
    NSString *_manufacturer;
    NSString *_model;
    NSString *_name;
    float _rightBatteryLevel;
    NSDate *_rightBatteryLowDate;
    NSMutableArray *_rightFakePrograms;
    NSString *_rightFirmwareVersion;
    NSString *_rightHardwareVersion;
    NSString *_rightUUID;
    int _type;
}

@property BOOL connected;
@property(retain) NSString * deviceUUID;
@property BOOL isConnecting;
@property BOOL isPaired;
@property float leftBatteryLevel;
@property(retain) NSDate * leftBatteryLowDate;
@property(retain) NSString * leftFirmwareVersion;
@property(retain) NSString * leftHardwareVersion;
@property(retain) NSString * leftUUID;
@property(retain) NSString * manufacturer;
@property(retain) NSString * model;
@property(retain) NSString * name;
@property float rightBatteryLevel;
@property(retain) NSDate * rightBatteryLowDate;
@property(retain) NSString * rightFirmwareVersion;
@property(retain) NSString * rightHardwareVersion;
@property(retain) NSString * rightUUID;
@property int type;

- (void)connect;
- (BOOL)connected;
- (void)createPrograms;
- (void)dealloc;
- (id)deviceUUID;
- (BOOL)didLoadBasicProperties;
- (BOOL)didLoadRequiredProperties;
- (void)disconnect;
- (BOOL)hasConnection;
- (id)initWithDeviceType:(int)arg1;
- (BOOL)isConnected;
- (BOOL)isConnecting;
- (BOOL)isPaired;
- (BOOL)isPersistent;
- (BOOL)leftAvailable;
- (float)leftBatteryLevel;
- (id)leftBatteryLowDate;
- (id)leftFirmwareVersion;
- (id)leftHardwareVersion;
- (id)leftPrograms;
- (id)leftUUID;
- (id)manufacturer;
- (id)manufacturerForType;
- (id)model;
- (id)modelForType;
- (id)name;
- (void)persist;
- (id)persistentRepresentation;
- (BOOL)rightAvailable;
- (float)rightBatteryLevel;
- (id)rightBatteryLowDate;
- (id)rightFirmwareVersion;
- (id)rightHardwareVersion;
- (id)rightPrograms;
- (id)rightUUID;
- (void)setConnected:(BOOL)arg1;
- (void)setDeviceUUID:(id)arg1;
- (void)setIsConnecting:(BOOL)arg1;
- (void)setLeftBatteryLevel:(float)arg1;
- (void)setLeftBatteryLowDate:(id)arg1;
- (void)setLeftFirmwareVersion:(id)arg1;
- (void)setLeftHardwareVersion:(id)arg1;
- (void)setLeftUUID:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRightBatteryLevel:(float)arg1;
- (void)setRightBatteryLowDate:(id)arg1;
- (void)setRightFirmwareVersion:(id)arg1;
- (void)setRightHardwareVersion:(id)arg1;
- (void)setRightUUID:(id)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(id)arg1 forProperty:(int)arg2;
- (int)type;
- (id)valueForProperty:(int)arg1;
- (void)writeInt:(unsigned char)arg1 toPeripheral:(id)arg2 forProperty:(int)arg3;

@end