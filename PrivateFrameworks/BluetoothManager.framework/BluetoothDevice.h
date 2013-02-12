/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
 */

@class NSString;

@interface BluetoothDevice : NSObject {
    NSString *_address;
    struct BTDeviceImpl { } *_device;
    NSString *_name;
}

- (void)_clearName;
- (BOOL)_isNameCached;
- (void)acceptSSP:(NSInteger)arg1;
- (id)address;
- (NSInteger)batteryLevel;
- (NSInteger)compare:(id)arg1;
- (void)connect;
- (BOOL)connected;
- (NSUInteger)connectedServices;
- (NSUInteger)connectedServicesCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (struct BTDeviceImpl { }*)device;
- (void)disconnect;
- (void)endVoiceCommand;
- (id)initWithDevice:(struct BTDeviceImpl { }*)arg1 address:(id)arg2;
- (BOOL)isAccessory;
- (BOOL)isServiceSupported:(NSUInteger)arg1;
- (NSUInteger)majorClass;
- (NSUInteger)minorClass;
- (id)name;
- (BOOL)paired;
- (id)scoUID;
- (void)setAuthorizedServices:(NSUInteger)arg1;
- (void)setDevice:(struct BTDeviceImpl { }*)arg1;
- (void)setPIN:(id)arg1;
- (void)setSyncGroup:(NSInteger)arg1 enabled:(BOOL)arg2;
- (void)setSyncSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; })arg1;
- (void)startVoiceCommand;
- (BOOL)supportsBatteryLevel;
- (id)syncGroups;
- (struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; })syncSettings;
- (NSInteger)type;
- (void)unpair;

@end
