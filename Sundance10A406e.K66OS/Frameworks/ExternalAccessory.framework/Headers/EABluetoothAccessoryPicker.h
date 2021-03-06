/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

#import <NSObject.h> // Unknown library
#import "BTDevicePickerDelegate.h"

@class BTDevicePicker;
@protocol EABluetoothAccessoryPickerDelegate;

@interface EABluetoothAccessoryPicker : NSObject <BTDevicePickerDelegate> {
	BTDevicePicker *_picker;	// 4 = 0x4
	id<EABluetoothAccessoryPickerDelegate> _delegate;	// 8 = 0x8
}
@property(assign, nonatomic) id<EABluetoothAccessoryPickerDelegate> delegate;	// G=0x32e13c0d; S=0x32e13c1d; @synthesize=_delegate
+ (void)wakeSelectedBluetoothAccessories:(id)accessories;	// 0x32e1388d
- (id)initWithPredicate:(id)predicate;	// 0x32e1399d
- (void)dealloc;	// 0x32e13ac1
// declared property getter: - (id)delegate;	// 0x32e13c0d
- (void)devicePicker:(id)picker didDismissWithResult:(int)result device:(id)device;	// 0x32e13b75
- (void)dismissPicker;	// 0x32e13b35
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32e13c1d
- (void)show;	// 0x32e13b15
@end

