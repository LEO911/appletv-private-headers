/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import <NSObject.h> // Unknown library

@class CBUUID, NSData, NSArray, CBService;

@interface CBCharacteristic : NSObject {
	CBService *_service;	// 4 = 0x4
	CBUUID *_UUID;	// 8 = 0x8
	int _properties;	// 12 = 0xc
	NSData *_value;	// 16 = 0x10
	NSArray *_descriptors;	// 20 = 0x14
	BOOL _isBroadcasted;	// 24 = 0x18
	BOOL _isNotifying;	// 25 = 0x19
}
@property(readonly, assign, nonatomic) CBUUID *UUID;	// G=0x375133dd; @synthesize=_UUID
@property(retain) NSArray *descriptors;	// G=0x37513421; S=0x37513435; @synthesize=_descriptors
@property(readonly, assign) BOOL isBroadcasted;	// G=0x37513445; @synthesize=_isBroadcasted
@property(readonly, assign) BOOL isNotifying;	// G=0x3751345d; @synthesize=_isNotifying
@property(readonly, assign, nonatomic) int properties;	// G=0x375133ed; @synthesize=_properties
@property(assign, nonatomic) CBService *service;	// G=0x375133bd; S=0x375133cd; @synthesize=_service
@property(retain) NSData *value;	// G=0x375133fd; S=0x37513411; @synthesize=_value
// declared property getter: - (id)UUID;	// 0x375133dd
// declared property getter: - (id)descriptors;	// 0x37513421
// declared property getter: - (BOOL)isBroadcasted;	// 0x37513445
// declared property getter: - (BOOL)isNotifying;	// 0x3751345d
// declared property getter: - (int)properties;	// 0x375133ed
// declared property getter: - (id)service;	// 0x375133bd
// declared property setter: - (void)setDescriptors:(id)descriptors;	// 0x37513435
// declared property setter: - (void)setService:(id)service;	// 0x375133cd
// declared property setter: - (void)setValue:(id)value;	// 0x37513411
// declared property getter: - (id)value;	// 0x375133fd
@end

