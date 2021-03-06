/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
 */

#import "BluetoothManager-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface BluetoothManager : NSObject {
	BTLocalDeviceImplRef _localDevice;	// 4 = 0x4
	BTSessionImplRef _session;	// 8 = 0x8
	int _available;	// 12 = 0xc
	BOOL _audioConnected;	// 16 = 0x10
	BOOL _scanningEnabled;	// 17 = 0x11
	BOOL _scanningInProgress;	// 18 = 0x12
	unsigned _scanningServiceMask;	// 20 = 0x14
	BTDiscoveryAgentImplRef _discoveryAgent;	// 24 = 0x18
	BTPairingAgentImplRef _pairingAgent;	// 28 = 0x1c
	BTAccessoryManagerImplRef _accessoryManager;	// 32 = 0x20
	NSMutableDictionary *_btAddrDict;	// 36 = 0x24
	NSMutableDictionary *_btDeviceDict;	// 40 = 0x28
}
@property(assign) BOOL audioConnected;	// G=0x3741c90d; S=0x3741c91d; converted property
@property(assign) BOOL connectable;	// G=0x3741c4e9; S=0x3741c529; converted property
@property(assign) BOOL devicePairingEnabled;	// G=0x3741c0b9; S=0x3741c0d1; converted property
@property(assign) BOOL deviceScanningEnabled;	// G=0x3741bd95; S=0x3741bea5; converted property
@property(assign, getter=isDiscoverable) BOOL discoverable;	// G=0x3741bffd; S=0x3741c03d; converted property
+ (int)lastInitError;	// 0x3741ad09
+ (id)sharedInstance;	// 0x3741ac99
- (id)init;	// 0x3741ad31
- (BTAccessoryManagerImplRef)_accessoryManager;	// 0x3741ac21
- (void)_advertisingChanged;	// 0x3741bfe1
- (BOOL)_attach:(id)attach;	// 0x3741ad95
- (void)_cleanup:(BOOL)cleanup;	// 0x3741b4dd
- (void)_connectabilityChanged;	// 0x3741c8f1
- (void)_connectedStatusChanged;	// 0x3741c8d5
- (void)_discoveryStateChanged;	// 0x3741bfc5
- (BOOL)_onlySensorsConnected;	// 0x3741c7bd
- (void)_postNotification:(id)notification;	// 0x3741b779
- (void)_postNotificationWithArray:(id)array;	// 0x3741b691
- (void)_powerChanged;	// 0x3741b9c5
- (void)_removeDevice:(id)device;	// 0x3741bc35
- (void)_restartScan;	// 0x3741bf35
- (void)_scanForServices:(unsigned)services withMode:(int)mode;	// 0x3741bddd
- (void)_setScanState:(int)state;	// 0x3741bfad
- (BOOL)_setup:(BTSessionImplRef)setup;	// 0x3741af09
- (void)acceptSSP:(int)ssp forDevice:(id)device;	// 0x3741c429
- (id)addDeviceIfNeeded:(BTDeviceImplRef)needed;	// 0x3741bac9
// converted property getter: - (BOOL)audioConnected;	// 0x3741c90d
- (BOOL)available;	// 0x3741ad19
- (void)cancelPairing;	// 0x3741c1ad
- (void)connectDevice:(id)device;	// 0x3741c4d5
- (void)connectDevice:(id)device withServices:(unsigned)services;	// 0x3741c489
// converted property getter: - (BOOL)connectable;	// 0x3741c4e9
- (BOOL)connected;	// 0x3741c871
- (id)connectedDevices;	// 0x3741c795
- (id)connectedDevices:(BOOL)devices;	// 0x3741c679
- (id)connectedLEDevices;	// 0x3741c7a9
- (id)connectingDevices;	// 0x3741c581
- (void)dealloc;	// 0x3741b64d
// converted property getter: - (BOOL)devicePairingEnabled;	// 0x3741c0b9
// converted property getter: - (BOOL)deviceScanningEnabled;	// 0x3741bd95
- (BOOL)deviceScanningInProgress;	// 0x3741bda5
- (void)enableTestMode;	// 0x3741ca19
- (BOOL)enabled;	// 0x3741b915
- (void)endVoiceCommand:(id)command;	// 0x3741c985
- (BOOL)isAnyoneAdvertising;	// 0x3741ba89
- (BOOL)isAnyoneScanning;	// 0x3741ba49
// converted property getter: - (BOOL)isDiscoverable;	// 0x3741bffd
- (BOOL)isServiceSupported:(unsigned)supported;	// 0x3741c9d1
- (id)pairedDevices;	// 0x3741c395
- (id)pairedDevices:(BOOL)devices;	// 0x3741c279
- (id)pairedLEDevices;	// 0x3741c3a9
- (void)postNotification:(id)notification;	// 0x3741b7b5
- (void)postNotificationName:(id)name object:(id)object;	// 0x3741b7e5
- (void)postNotificationName:(id)name object:(id)object error:(id)error;	// 0x3741b835
- (int)powerState;	// 0x3741b8b1
- (BOOL)powered;	// 0x3741b8f5
- (void)resetDeviceScanning;	// 0x3741bdb5
- (void)scanForConnectableDevices:(unsigned)connectableDevices;	// 0x3741be91
- (void)scanForServices:(unsigned)services;	// 0x3741be7d
// converted property setter: - (void)setAudioConnected:(BOOL)connected;	// 0x3741c91d
// converted property setter: - (void)setConnectable:(BOOL)connectable;	// 0x3741c529
// converted property setter: - (void)setDevicePairingEnabled:(BOOL)enabled;	// 0x3741c0d1
// converted property setter: - (void)setDeviceScanningEnabled:(BOOL)enabled;	// 0x3741bea5
// converted property setter: - (void)setDiscoverable:(BOOL)discoverable;	// 0x3741c03d
- (BOOL)setEnabled:(BOOL)enabled;	// 0x3741b98d
- (void)setPincode:(id)pincode forDevice:(id)device;	// 0x3741c3bd
- (BOOL)setPowered:(BOOL)powered;	// 0x3741b92d
- (void)showPowerPrompt;	// 0x3741b899
- (void)startVoiceCommand:(id)command;	// 0x3741c939
- (void)unpairDevice:(id)device;	// 0x3741c1dd
- (BOOL)wasDeviceDiscovered:(id)discovered;	// 0x3741bced
@end

