/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAReminderTrigger.h"

@class SAReminderDateTimeTrigger, SAReminderLocationTrigger;

@interface SAReminderCompositeTrigger : SAReminderTrigger {
}
@property(retain, nonatomic) SAReminderDateTimeTrigger *dateTimeTrigger;	// G=0x3662b399; S=0x3662b3ed; 
@property(retain, nonatomic) SAReminderLocationTrigger *locationTrigger;	// G=0x3662b429; S=0x3662b47d; 
+ (id)compositeTrigger;	// 0x3662b309
+ (id)compositeTriggerWithDictionary:(id)dictionary context:(id)context;	// 0x3662b34d
// declared property getter: - (id)dateTimeTrigger;	// 0x3662b399
- (id)encodedClassName;	// 0x3662b2fd
- (id)groupIdentifier;	// 0x3662b2ed
// declared property getter: - (id)locationTrigger;	// 0x3662b429
// declared property setter: - (void)setDateTimeTrigger:(id)trigger;	// 0x3662b3ed
// declared property setter: - (void)setLocationTrigger:(id)trigger;	// 0x3662b47d
@end

