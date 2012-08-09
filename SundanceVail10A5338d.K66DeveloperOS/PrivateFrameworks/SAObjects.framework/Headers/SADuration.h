/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString, NSNumber;

@interface SADuration : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *unit;	// G=0x37985745; S=0x37985761; 
@property(copy, nonatomic) NSString *units;	// G=0x379857b1; S=0x379857cd; 
@property(retain, nonatomic) NSNumber *value;	// G=0x3798581d; S=0x37985839; 
+ (id)duration;	// 0x379856b5
+ (id)durationWithDictionary:(id)dictionary context:(id)context;	// 0x379856f9
- (id)encodedClassName;	// 0x379856a9
- (id)groupIdentifier;	// 0x37985699
// declared property setter: - (void)setUnit:(id)unit;	// 0x37985761
// declared property setter: - (void)setUnits:(id)units;	// 0x379857cd
// declared property setter: - (void)setValue:(id)value;	// 0x37985839
// declared property getter: - (id)unit;	// 0x37985745
// declared property getter: - (id)units;	// 0x379857b1
// declared property getter: - (id)value;	// 0x3798581d
@end
