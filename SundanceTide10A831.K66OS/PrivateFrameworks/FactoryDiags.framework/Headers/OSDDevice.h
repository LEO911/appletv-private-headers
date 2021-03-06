/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary, NSArray;

@interface OSDDevice : NSObject {
	NSString *_deviceName;	// 4 = 0x4
	NSString *_serialNumber;	// 8 = 0x8
	NSString *_socType;	// 12 = 0xc
	NSString *_batteryID;	// 16 = 0x10
	NSString *_buildVer;	// 20 = 0x14
	NSString *_buildTrain;	// 24 = 0x18
	NSString *_osVersion;	// 28 = 0x1c
	int _deviceType;	// 32 = 0x20
	NSDictionary *_properties;	// 36 = 0x24
	NSArray *_capabilities;	// 40 = 0x28
	NSArray *_pmuFaults;	// 44 = 0x2c
	int _ntcShutdown;	// 48 = 0x30
	NSString *name;	// 52 = 0x34
	NSString *modelName;	// 56 = 0x38
	int type;	// 60 = 0x3c
	NSString *buildVersion;	// 64 = 0x40
	NSString *bootArgs;	// 68 = 0x44
	NSString *serialNumber;	// 72 = 0x48
	BOOL iPxControlBits;	// 76 = 0x4c
	BOOL bonfireControlBits;	// 77 = 0x4d
	BOOL batteryLevelLockout;	// 78 = 0x4e
	float minBrickCurrent;	// 80 = 0x50
	NSArray *pmuFaultLog;	// 84 = 0x54
	BOOL wasNTCShutdown;	// 88 = 0x58
	BOOL prodFused;	// 89 = 0x59
	BOOL hasWiFi;	// 90 = 0x5a
	BOOL hasCompass;	// 91 = 0x5b
	BOOL hasGyro;	// 92 = 0x5c
	BOOL hasALS;	// 93 = 0x5d
	BOOL hasGPS;	// 94 = 0x5e
	BOOL hasBaseband;	// 95 = 0x5f
	BOOL hasGasGauge;	// 96 = 0x60
	BOOL hasTelephony;	// 97 = 0x61
	BOOL hasBackCamera;	// 98 = 0x62
	BOOL hasFrontCamera;	// 99 = 0x63
	BOOL hasAccelerometer;	// 100 = 0x64
	BOOL hasMicrophone;	// 101 = 0x65
	BOOL hasAudio;	// 102 = 0x66
	BOOL hasProximity;	// 103 = 0x67
	BOOL has3GProximity;	// 104 = 0x68
	BOOL hasVolumeButtons;	// 105 = 0x69
	BOOL hasRingerSwitch;	// 106 = 0x6a
	BOOL hasReceiver;	// 107 = 0x6b
	BOOL hasBluetooth;	// 108 = 0x6c
	BOOL hasStrobe;	// 109 = 0x6d
	BOOL hasLatch;	// 110 = 0x6e
	NSString *socType;	// 112 = 0x70
}
@property(readonly, assign, getter=_batteryID) NSString *batteryId;	// G=0x321cdb39; 
@property(readonly, assign, getter=_battLevelLockout) BOOL batteryLevelLockout;	// G=0x321cde15; @synthesize
@property(readonly, assign, getter=_bonfireControlBits) BOOL bonfireControlBits;	// G=0x321cddc9; @synthesize
@property(assign, getter=getBootArgs, setter=setBootArgs:) NSString *bootArgs;	// G=0x321ce841; S=0x321ce9e1; @synthesize
@property(readonly, assign, getter=_buildTrain) NSString *buildTrain;	// G=0x321cdcdd; 
@property(readonly, assign, getter=_productBuildVersion) NSString *buildVersion;	// G=0x321cdaa9; @synthesize
@property(readonly, assign, getter=_expectedAdapterID) int expectedAdapterID;	// G=0x321cdea1; 
@property(readonly, assign, getter=_has3GProximity) BOOL has3GProximity;	// G=0x321cd6ad; @synthesize
@property(readonly, assign, getter=_hasALS) BOOL hasALS;	// G=0x321cd49d; @synthesize
@property(readonly, assign, getter=_hasAccelerometer) BOOL hasAccelerometer;	// G=0x321cd5ed; @synthesize
@property(readonly, assign, getter=_hasAudio) BOOL hasAudio;	// G=0x321cd64d; @synthesize
@property(readonly, assign, getter=_hasBackCamera) BOOL hasBackCamera;	// G=0x321cd58d; @synthesize
@property(readonly, assign, getter=_hasBaseband) BOOL hasBaseband;	// G=0x321cd4fd; @synthesize
@property(readonly, assign, getter=_hasBluetooth) BOOL hasBluetooth;	// G=0x321cd76d; @synthesize
@property(readonly, assign, getter=_hasCompass) BOOL hasCompass;	// G=0x321cd43d; @synthesize
@property(readonly, assign, getter=_hasFrontCamera) BOOL hasFrontCamera;	// G=0x321cd5bd; @synthesize
@property(readonly, assign, getter=_hasGPS) BOOL hasGPS;	// G=0x321cd4cd; @synthesize
@property(readonly, assign, getter=_hasGasGauge) BOOL hasGasGauge;	// G=0x321cd52d; @synthesize
@property(readonly, assign, getter=_hasGyro) BOOL hasGyro;	// G=0x321cd46d; @synthesize
@property(readonly, assign, getter=_hasInvertedDisplay) BOOL hasInvertedDisplay;	// G=0x321ce0dd; 
@property(readonly, assign, getter=_hasLatch) BOOL hasLatch;	// G=0x321cd7cd; @synthesize
@property(readonly, assign, getter=_hasLatch_Flap1) BOOL hasLatchFlap1;	// G=0x321cd7fd; 
@property(readonly, assign, getter=_hasLatch_Flap2) BOOL hasLatchFlap2;	// G=0x321cd82d; 
@property(readonly, assign, getter=_hasLatch_Flap3) BOOL hasLatchFlap3;	// G=0x321cd85d; 
@property(readonly, assign, getter=_hasMicrophone) BOOL hasMicrophone;	// G=0x321cd61d; @synthesize
@property(readonly, assign, getter=_hasProximity) BOOL hasProximity;	// G=0x321cd67d; @synthesize
@property(readonly, assign, getter=_hasReceiver) BOOL hasReceiver;	// G=0x321cd73d; @synthesize
@property(readonly, assign, getter=_hasRingerSwitch) BOOL hasRingerSwitch;	// G=0x321cd70d; @synthesize
@property(readonly, assign, getter=_hasStrobe) BOOL hasStrobe;	// G=0x321cd79d; @synthesize
@property(readonly, assign, getter=_hasTelephony) BOOL hasTelephony;	// G=0x321cd55d; @synthesize
@property(readonly, assign, getter=_hasVolumeButtons) BOOL hasVolumeButtons;	// G=0x321cd6dd; @synthesize
@property(readonly, assign, getter=_hasWiFi) BOOL hasWiFi;	// G=0x321cd40d; @synthesize
@property(readonly, assign, getter=_iPxControlBits) BOOL iPxControlBits;	// G=0x321cdd7d; @synthesize
@property(readonly, assign, getter=_minBrickCurrent) float minBrickCurrent;	// G=0x321cde61; @synthesize
@property(readonly, assign, getter=_modelName) NSString *modelName;	// G=0x321cda19; @synthesize
@property(readonly, assign, getter=_deviceName) NSString *name;	// G=0x321cd989; @synthesize
@property(readonly, assign, getter=_osVersion) NSString *osVersion;	// G=0x321cdce9; 
@property(readonly, assign, getter=_pmuFaultLog) NSArray *pmuFaultLog;	// G=0x321cdee1; @synthesize
@property(readonly, assign, getter=_isProdFused) BOOL prodFused;	// G=0x321ce09d; @synthesize
@property(readonly, assign, getter=_serialNumber) NSString *serialNumber;	// G=0x321cdc4d; @synthesize
@property(readonly, assign, getter=_socType) NSString *socType;	// G=0x321cd341; @synthesize
@property(readonly, assign, getter=_deviceType) int type;	// G=0x321cd88d; @synthesize
@property(readonly, assign, getter=_wasNTCShutdown) BOOL wasNTCShutdown;	// G=0x321ce041; @synthesize
+ (void)initialize;	// 0x321ce10d
+ (id)sharedInstance;	// 0x321ce165
- (id)init;	// 0x321ce4bd
// declared property getter: - (BOOL)_battLevelLockout;	// 0x321cde15
// declared property getter: - (id)_batteryID;	// 0x321cdb39
// declared property getter: - (BOOL)_bonfireControlBits;	// 0x321cddc9
// declared property getter: - (id)_buildTrain;	// 0x321cdcdd
// declared property getter: - (id)_deviceName;	// 0x321cd989
// declared property getter: - (int)_deviceType;	// 0x321cd88d
// declared property getter: - (int)_expectedAdapterID;	// 0x321cdea1
// declared property getter: - (BOOL)_has3GProximity;	// 0x321cd6ad
// declared property getter: - (BOOL)_hasALS;	// 0x321cd49d
// declared property getter: - (BOOL)_hasAccelerometer;	// 0x321cd5ed
// declared property getter: - (BOOL)_hasAudio;	// 0x321cd64d
// declared property getter: - (BOOL)_hasBackCamera;	// 0x321cd58d
// declared property getter: - (BOOL)_hasBaseband;	// 0x321cd4fd
// declared property getter: - (BOOL)_hasBluetooth;	// 0x321cd76d
// declared property getter: - (BOOL)_hasCompass;	// 0x321cd43d
// declared property getter: - (BOOL)_hasFrontCamera;	// 0x321cd5bd
// declared property getter: - (BOOL)_hasGPS;	// 0x321cd4cd
// declared property getter: - (BOOL)_hasGasGauge;	// 0x321cd52d
// declared property getter: - (BOOL)_hasGyro;	// 0x321cd46d
// declared property getter: - (BOOL)_hasInvertedDisplay;	// 0x321ce0dd
// declared property getter: - (BOOL)_hasLatch;	// 0x321cd7cd
// declared property getter: - (BOOL)_hasLatch_Flap1;	// 0x321cd7fd
// declared property getter: - (BOOL)_hasLatch_Flap2;	// 0x321cd82d
// declared property getter: - (BOOL)_hasLatch_Flap3;	// 0x321cd85d
// declared property getter: - (BOOL)_hasMicrophone;	// 0x321cd61d
// declared property getter: - (BOOL)_hasProximity;	// 0x321cd67d
// declared property getter: - (BOOL)_hasReceiver;	// 0x321cd73d
// declared property getter: - (BOOL)_hasRingerSwitch;	// 0x321cd70d
// declared property getter: - (BOOL)_hasStrobe;	// 0x321cd79d
// declared property getter: - (BOOL)_hasTelephony;	// 0x321cd55d
// declared property getter: - (BOOL)_hasVolumeButtons;	// 0x321cd6dd
// declared property getter: - (BOOL)_hasWiFi;	// 0x321cd40d
// declared property getter: - (BOOL)_iPxControlBits;	// 0x321cdd7d
// declared property getter: - (BOOL)_isProdFused;	// 0x321ce09d
// declared property getter: - (float)_minBrickCurrent;	// 0x321cde61
// declared property getter: - (id)_modelName;	// 0x321cda19
// declared property getter: - (id)_osVersion;	// 0x321cdce9
// declared property getter: - (id)_pmuFaultLog;	// 0x321cdee1
- (id)_processDevicesPlist:(id)plist;	// 0x321ce449
- (void)_processDevicesPlistForAliases:(id)aliases;	// 0x321ce40d
- (void)_processForAliases:(id)aliases forDevice:(id)device withLoopTracker:(id)loopTracker;	// 0x321ce175
// declared property getter: - (id)_productBuildVersion;	// 0x321cdaa9
- (id)_properties;	// 0x321cd309
// declared property getter: - (id)_serialNumber;	// 0x321cdc4d
// declared property getter: - (id)_socType;	// 0x321cd341
// declared property getter: - (BOOL)_wasNTCShutdown;	// 0x321ce041
- (void)addBootArg:(id)arg;	// 0x321ce9fd
- (void)dealloc;	// 0x321ce6d9
- (id)getBootArgParams:(id)params;	// 0x321ce879
// declared property getter: - (id)getBootArgs;	// 0x321ce841
- (int)getControlBitStationID:(int)anId;	// 0x321ced9d
- (unsigned)getIOMasterPort;	// 0x321ce7cd
- (id)getNVRAMArgsForKey:(id)key;	// 0x321cec31
- (id)getSwitchBoardRowCol;	// 0x321cd319
- (BOOL)hasBootArg:(id)arg;	// 0x321ce85d
- (BOOL)hasNVRAMKey:(id)key;	// 0x321cec15
- (void)removeBootArg:(id)arg;	// 0x321cea95
- (void)removeNVRAMKey:(id)key;	// 0x321ced4d
// declared property setter: - (void)setBootArgs:(id)args;	// 0x321ce9e1
- (void)setNVRAMArgsForKey:(id)key arguments:(id)arguments;	// 0x321cecc9
@end

