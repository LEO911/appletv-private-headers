/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSNumber, NSString;

@interface SATimerObject : SADomainObject {
}
@property(copy, nonatomic) NSString *state;	// G=0x326b2fd1; S=0x326b2fed; 
@property(copy, nonatomic) NSNumber *timerValue;	// G=0x326b303d; S=0x326b3059; 
+ (id)object;	// 0x326b2f41
+ (id)objectWithDictionary:(id)dictionary context:(id)context;	// 0x326b2f85
- (id)encodedClassName;	// 0x326b2f35
- (id)groupIdentifier;	// 0x326b2f25
// declared property setter: - (void)setState:(id)state;	// 0x326b2fed
// declared property setter: - (void)setTimerValue:(id)value;	// 0x326b3059
// declared property getter: - (id)state;	// 0x326b2fd1
// declared property getter: - (id)timerValue;	// 0x326b303d
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x326b30a9
@end

