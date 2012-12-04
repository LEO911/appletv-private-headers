/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString, NSNumber;

@interface SATimerObject : SADomainObject {
}
@property(copy, nonatomic) NSString *state;	// G=0x355a85b9; S=0x355a85d5; 
@property(copy, nonatomic) NSNumber *timerValue;	// G=0x355a8625; S=0x355a8641; 
+ (id)object;	// 0x355a8529
+ (id)objectWithDictionary:(id)dictionary context:(id)context;	// 0x355a856d
- (id)encodedClassName;	// 0x355a851d
- (id)groupIdentifier;	// 0x355a850d
// declared property setter: - (void)setState:(id)state;	// 0x355a85d5
// declared property setter: - (void)setTimerValue:(id)value;	// 0x355a8641
// declared property getter: - (id)state;	// 0x355a85b9
// declared property getter: - (id)timerValue;	// 0x355a8625
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x355a8691
@end
