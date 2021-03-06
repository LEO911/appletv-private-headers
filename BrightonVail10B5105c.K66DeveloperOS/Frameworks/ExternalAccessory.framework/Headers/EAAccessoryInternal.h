/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

#import <NSObject.h> // Unknown library
#import "ExternalAccessory-Structs.h"

@class NSMutableArray, NSDictionary, NSString, NSArray;
@protocol EAAccessoryDelegate;

@interface EAAccessoryInternal : NSObject {
	BOOL _connected;	// 4 = 0x4
@private
	unsigned _connectionID;	// 8 = 0x8
@protected
	NSString *_name;	// 12 = 0xc
@private
	NSString *_manufacturer;	// 16 = 0x10
@protected
	NSString *_modelNumber;	// 20 = 0x14
	NSString *_serialNumber;	// 24 = 0x18
@private
	NSString *_firmwareRevision;	// 28 = 0x1c
@protected
	NSString *_hardwareRevision;	// 32 = 0x20
	NSString *_macAddress;	// 36 = 0x24
	NSString *_preferredApp;	// 40 = 0x28
@private
	int _classType;	// 44 = 0x2c
	NSDictionary *_audioPorts;	// 48 = 0x30
@protected
	unsigned _capabilities;	// 52 = 0x34
	BOOL _notPresentInIAPAccessoriesArray;	// 56 = 0x38
	NSMutableArray *_sessionsList;	// 60 = 0x3c
	NSArray *_eqNames;	// 64 = 0x40
	int _iPodOutOptionsMask;	// 68 = 0x44
	CFAccessoryRef _cfAccessory;	// 72 = 0x48
	/*function-pointer*/ void *_cfAccessoryPortPropertyCallback;	// 76 = 0x4c
@private
	void *_cfAccessoryPortPropertyContext;	// 80 = 0x50
@protected
	NSDictionary *_protocols;	// 84 = 0x54
	id<EAAccessoryDelegate> _delegate;	// 88 = 0x58
	unsigned _eqIndex;	// 92 = 0x5c
}
@property(retain, nonatomic) NSDictionary *audioPorts;	// G=0x3042f4b1; S=0x3042f4c1; @synthesize=_audioPorts
@property(assign, nonatomic) unsigned capabilities;	// G=0x3042f4d1; S=0x3042f4e1; @synthesize=_capabilities
@property(assign, nonatomic) CFAccessoryRef cfAccessory;	// G=0x3042f571; S=0x3042f581; @synthesize=_cfAccessory
@property(assign, nonatomic) /*function-pointer*/ void *cfAccessoryPortPropertyCallback;	// G=0x3042f591; S=0x3042f5a1; @synthesize=_cfAccessoryPortPropertyCallback
@property(assign, nonatomic) void *cfAccessoryPortPropertyContext;	// G=0x3042f5b1; S=0x3042f5c1; @synthesize=_cfAccessoryPortPropertyContext
@property(assign, nonatomic) int classType;	// G=0x3042f491; S=0x3042f4a1; @synthesize=_classType
@property(assign, nonatomic) BOOL connected;	// G=0x3042f331; S=0x3042f341; @synthesize=_connected
@property(assign, nonatomic) unsigned connectionID;	// G=0x3042f351; S=0x3042f361; @synthesize=_connectionID
@property(assign, nonatomic) id<EAAccessoryDelegate> delegate;	// G=0x3042f5f1; S=0x3042f601; @synthesize=_delegate
@property(assign, nonatomic) unsigned eqIndex;	// G=0x3042f531; S=0x3042f541; @synthesize=_eqIndex
@property(retain, nonatomic) NSArray *eqNames;	// G=0x3042f511; S=0x3042f521; @synthesize=_eqNames
@property(copy, nonatomic) NSString *firmwareRevision;	// G=0x3042f401; S=0x3042f415; @synthesize=_firmwareRevision
@property(copy, nonatomic) NSString *hardwareRevision;	// G=0x3042f425; S=0x3042f439; @synthesize=_hardwareRevision
@property(assign, nonatomic) int iPodOutOptionsMask;	// G=0x3042f551; S=0x3042f561; @synthesize=_iPodOutOptionsMask
@property(copy, nonatomic) NSString *macAddress;	// G=0x3042f449; S=0x3042f45d; @synthesize=_macAddress
@property(copy, nonatomic) NSString *manufacturer;	// G=0x3042f371; S=0x3042f385; @synthesize=_manufacturer
@property(copy, nonatomic) NSString *modelNumber;	// G=0x3042f3b9; S=0x3042f3cd; @synthesize=_modelNumber
@property(copy, nonatomic) NSString *name;	// G=0x3042f395; S=0x3042f3a9; @synthesize=_name
@property(assign, nonatomic) BOOL notPresentInIAPAccessoriesArray;	// G=0x3042f4f1; S=0x3042f501; @synthesize=_notPresentInIAPAccessoriesArray
@property(copy, nonatomic) NSString *preferredApp;	// G=0x3042f46d; S=0x3042f481; @synthesize=_preferredApp
@property(retain, nonatomic) NSDictionary *protocols;	// G=0x3042f5d1; S=0x3042f5e1; @synthesize=_protocols
@property(copy, nonatomic) NSString *serialNumber;	// G=0x3042f3dd; S=0x3042f3f1; @synthesize=_serialNumber
@property(readonly, assign, nonatomic) NSArray *sessionsList;	// G=0x3042f321; 
- (id)init;	// 0x3042f069
- (void)addSession:(id)session;	// 0x3042f261
// declared property getter: - (id)audioPorts;	// 0x3042f4b1
// declared property getter: - (unsigned)capabilities;	// 0x3042f4d1
// declared property getter: - (CFAccessoryRef)cfAccessory;	// 0x3042f571
// declared property getter: - (/*function-pointer*/ void *)cfAccessoryPortPropertyCallback;	// 0x3042f591
// declared property getter: - (void *)cfAccessoryPortPropertyContext;	// 0x3042f5b1
// declared property getter: - (int)classType;	// 0x3042f491
// declared property getter: - (BOOL)connected;	// 0x3042f331
// declared property getter: - (unsigned)connectionID;	// 0x3042f351
- (void)dealloc;	// 0x3042f0e1
// declared property getter: - (id)delegate;	// 0x3042f5f1
// declared property getter: - (unsigned)eqIndex;	// 0x3042f531
// declared property getter: - (id)eqNames;	// 0x3042f511
// declared property getter: - (id)firmwareRevision;	// 0x3042f401
// declared property getter: - (id)hardwareRevision;	// 0x3042f425
// declared property getter: - (int)iPodOutOptionsMask;	// 0x3042f551
// declared property getter: - (id)macAddress;	// 0x3042f449
// declared property getter: - (id)manufacturer;	// 0x3042f371
// declared property getter: - (id)modelNumber;	// 0x3042f3b9
// declared property getter: - (id)name;	// 0x3042f395
// declared property getter: - (BOOL)notPresentInIAPAccessoriesArray;	// 0x3042f4f1
// declared property getter: - (id)preferredApp;	// 0x3042f46d
// declared property getter: - (id)protocols;	// 0x3042f5d1
- (void)removeSession:(id)session;	// 0x3042f2cd
// declared property getter: - (id)serialNumber;	// 0x3042f3dd
// declared property getter: - (id)sessionsList;	// 0x3042f321
// declared property setter: - (void)setAudioPorts:(id)ports;	// 0x3042f4c1
// declared property setter: - (void)setCapabilities:(unsigned)capabilities;	// 0x3042f4e1
// declared property setter: - (void)setCfAccessory:(CFAccessoryRef)accessory;	// 0x3042f581
// declared property setter: - (void)setCfAccessoryPortPropertyCallback:(/*function-pointer*/ void *)callback;	// 0x3042f5a1
// declared property setter: - (void)setCfAccessoryPortPropertyContext:(void *)context;	// 0x3042f5c1
// declared property setter: - (void)setClassType:(int)type;	// 0x3042f4a1
// declared property setter: - (void)setConnected:(BOOL)connected;	// 0x3042f341
// declared property setter: - (void)setConnectionID:(unsigned)anId;	// 0x3042f361
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3042f601
// declared property setter: - (void)setEqIndex:(unsigned)index;	// 0x3042f541
// declared property setter: - (void)setEqNames:(id)names;	// 0x3042f521
// declared property setter: - (void)setFirmwareRevision:(id)revision;	// 0x3042f415
// declared property setter: - (void)setHardwareRevision:(id)revision;	// 0x3042f439
// declared property setter: - (void)setIPodOutOptionsMask:(int)mask;	// 0x3042f561
// declared property setter: - (void)setMacAddress:(id)address;	// 0x3042f45d
// declared property setter: - (void)setManufacturer:(id)manufacturer;	// 0x3042f385
// declared property setter: - (void)setModelNumber:(id)number;	// 0x3042f3cd
// declared property setter: - (void)setName:(id)name;	// 0x3042f3a9
// declared property setter: - (void)setNotPresentInIAPAccessoriesArray:(BOOL)iapaccessoriesArray;	// 0x3042f501
// declared property setter: - (void)setPreferredApp:(id)app;	// 0x3042f481
// declared property setter: - (void)setProtocols:(id)protocols;	// 0x3042f5e1
// declared property setter: - (void)setSerialNumber:(id)number;	// 0x3042f3f1
@end

