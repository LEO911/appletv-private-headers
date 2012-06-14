/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString, NSArray, NSNumber;

@interface SAAlarmObject : SADomainObject {
}
@property(retain, nonatomic) NSNumber *enabled;	// G=0x32f35b61; S=0x32f35b7d; 
@property(copy, nonatomic) NSArray *frequency;	// G=0x32f35b99; S=0x32f35bb5; 
@property(retain, nonatomic) NSNumber *hour;	// G=0x32f35c05; S=0x32f35c21; 
@property(copy, nonatomic) NSString *label;	// G=0x32f35c3d; S=0x32f35c59; 
@property(retain, nonatomic) NSNumber *minute;	// G=0x32f35ca9; S=0x32f35cc5; 
@property(retain, nonatomic) NSNumber *relativeOffsetMinutes;	// G=0x32f35ce1; S=0x32f35cfd; 
+ (id)object;	// 0x32f35ad1
+ (id)objectWithDictionary:(id)dictionary context:(id)context;	// 0x32f35b15
// declared property getter: - (id)enabled;	// 0x32f35b61
- (id)encodedClassName;	// 0x32f35ac5
// declared property getter: - (id)frequency;	// 0x32f35b99
- (id)groupIdentifier;	// 0x32f35ab5
// declared property getter: - (id)hour;	// 0x32f35c05
// declared property getter: - (id)label;	// 0x32f35c3d
// declared property getter: - (id)minute;	// 0x32f35ca9
// declared property getter: - (id)relativeOffsetMinutes;	// 0x32f35ce1
// declared property setter: - (void)setEnabled:(id)enabled;	// 0x32f35b7d
// declared property setter: - (void)setFrequency:(id)frequency;	// 0x32f35bb5
// declared property setter: - (void)setHour:(id)hour;	// 0x32f35c21
// declared property setter: - (void)setLabel:(id)label;	// 0x32f35c59
// declared property setter: - (void)setMinute:(id)minute;	// 0x32f35cc5
// declared property setter: - (void)setRelativeOffsetMinutes:(id)minutes;	// 0x32f35cfd
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x32f35d19
@end
