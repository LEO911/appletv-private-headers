/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface TVPeripheralManager : XXUnknownSuperclass {
}
+ (id)sharedInstance;	// 0x40afb9
- (void)_bluetoothBatteryNotification:(id)notification;	// 0x40b371
- (void)_bluetoothDeviceConnectedSuccessfullyNotification:(id)notification;	// 0x40b375
- (void)_bluetoothDeviceConnectionFailedNotification:(id)notification;	// 0x40b3b1
- (void)_bluetoothDeviceDisconnectedSuccessfullyNotification:(id)notification;	// 0x40b3b5
- (void)_bluetoothDeviceDisconnectionFailedNotification:(id)notification;	// 0x40b3b9
- (void)_startBluetoothManagement;	// 0x40b229
- (void)infraredRemoteLowBatteryEventReceived;	// 0x40b189
- (void)infraredRemotePairEventReceived;	// 0x40b041
- (void)infraredRemoteUnpairEventReceived;	// 0x40b0e5
- (void)startManagement;	// 0x40b031
@end

