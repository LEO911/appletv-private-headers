/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import </libobjc.A.h>

@class CBPeripheral, CBUUID, NSArray, NSNumber;

@interface CBService : NSObject {
	CBPeripheral *_peripheral;	// 4 = 0x4
	CBUUID *_UUID;	// 8 = 0x8
	BOOL _isPrimary;	// 12 = 0xc
	NSArray *_includedServices;	// 16 = 0x10
	NSArray *_characteristics;	// 20 = 0x14
	NSNumber *_startHandle;	// 24 = 0x18
	NSNumber *_endHandle;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) CBUUID *UUID;	// G=0x2d0352e5; @synthesize=_UUID
@property(retain) NSArray *characteristics;	// G=0x2d035329; S=0x2d03533d; @synthesize=_characteristics
@property(readonly, assign, nonatomic) NSNumber *endHandle;	// G=0x2d03535d; @synthesize=_endHandle
@property(retain) NSArray *includedServices;	// G=0x2d035305; S=0x2d035319; @synthesize=_includedServices
@property(readonly, assign, nonatomic) BOOL isPrimary;	// G=0x2d0352f5; @synthesize=_isPrimary
@property(readonly, assign, nonatomic) CBPeripheral *peripheral;	// G=0x2d0352d5; @synthesize=_peripheral
@property(readonly, assign, nonatomic) NSNumber *startHandle;	// G=0x2d03534d; @synthesize=_startHandle
- (id)initWithPeripheral:(id)peripheral dictionary:(id)dictionary;	// 0x2d034add
// declared property getter: - (id)UUID;	// 0x2d0352e5
// declared property getter: - (id)characteristics;	// 0x2d035329
- (void)dealloc;	// 0x2d034c05
// declared property getter: - (id)endHandle;	// 0x2d03535d
- (id)handleCharacteristicsDiscovered:(id)discovered;	// 0x2d03508d
- (id)handleIncludedServicesDiscovered:(id)discovered;	// 0x2d034e5d
// declared property getter: - (id)includedServices;	// 0x2d035305
- (void)invalidate;	// 0x2d034ca5
// declared property getter: - (BOOL)isPrimary;	// 0x2d0352f5
// declared property getter: - (id)peripheral;	// 0x2d0352d5
// declared property setter: - (void)setCharacteristics:(id)characteristics;	// 0x2d03533d
// declared property setter: - (void)setIncludedServices:(id)services;	// 0x2d035319
// declared property getter: - (id)startHandle;	// 0x2d03534d
@end
