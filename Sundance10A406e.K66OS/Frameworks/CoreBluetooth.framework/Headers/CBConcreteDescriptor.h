/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import "CBDescriptor.h"

@class CBConcretePeripheral, NSNumber;

@interface CBConcreteDescriptor : CBDescriptor {
	CBConcretePeripheral *_peripheral;	// 16 = 0x10
	NSNumber *_handle;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSNumber *handle;	// G=0x32e3ee11; @synthesize=_handle
@property(readonly, assign, nonatomic) CBConcretePeripheral *peripheral;	// G=0x32e3ee01; @synthesize=_peripheral
- (id)initWithCharacteristic:(id)characteristic UUID:(id)uuid peripheral:(id)peripheral handle:(id)handle;	// 0x32e3ec35
- (void)dealloc;	// 0x32e3ece9
// declared property getter: - (id)handle;	// 0x32e3ee11
- (id)handleValueUpdated:(id)updated;	// 0x32e3ed89
- (id)handleValueWritten:(id)written;	// 0x32e3edc5
- (void)invalidate;	// 0x32e3ed65
// declared property getter: - (id)peripheral;	// 0x32e3ee01
@end
