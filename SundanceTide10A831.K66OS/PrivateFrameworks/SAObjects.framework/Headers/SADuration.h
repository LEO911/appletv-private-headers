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
@property(copy, nonatomic) NSString *unit;	// G=0x3050e1ed; S=0x3050e209; 
@property(copy, nonatomic) NSString *units;	// G=0x3050e259; S=0x3050e275; 
@property(retain, nonatomic) NSNumber *value;	// G=0x3050e2c5; S=0x3050e2e1; 
+ (id)duration;	// 0x3050e15d
+ (id)durationWithDictionary:(id)dictionary context:(id)context;	// 0x3050e1a1
- (id)encodedClassName;	// 0x3050e151
- (id)groupIdentifier;	// 0x3050e141
// declared property setter: - (void)setUnit:(id)unit;	// 0x3050e209
// declared property setter: - (void)setUnits:(id)units;	// 0x3050e275
// declared property setter: - (void)setValue:(id)value;	// 0x3050e2e1
// declared property getter: - (id)unit;	// 0x3050e1ed
// declared property getter: - (id)units;	// 0x3050e259
// declared property getter: - (id)value;	// 0x3050e2c5
@end
