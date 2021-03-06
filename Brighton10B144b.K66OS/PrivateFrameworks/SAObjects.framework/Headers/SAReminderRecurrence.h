/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSArray;

@interface SAReminderRecurrence : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSArray *daysOfTheMonth;	// G=0x353d4a19; S=0x353d4a35; 
@property(copy, nonatomic) NSArray *daysOfTheWeek;	// G=0x353d4a85; S=0x353d4aa1; 
@property(copy, nonatomic) NSArray *daysOfTheYear;	// G=0x353d4af1; S=0x353d4b0d; 
@property(copy, nonatomic) NSString *frequencyTimeUnit;	// G=0x353d4b5d; S=0x353d4b79; 
@property(assign, nonatomic) int interval;	// G=0x353d4bc9; S=0x353d4c39; 
@property(copy, nonatomic) NSArray *monthsOfTheYear;	// G=0x353d4c7d; S=0x353d4c99; 
@property(copy, nonatomic) NSArray *weeksOfTheYear;	// G=0x353d4ce9; S=0x353d4d05; 
+ (id)recurrence;	// 0x353d4989
+ (id)recurrenceWithDictionary:(id)dictionary context:(id)context;	// 0x353d49cd
// declared property getter: - (id)daysOfTheMonth;	// 0x353d4a19
// declared property getter: - (id)daysOfTheWeek;	// 0x353d4a85
// declared property getter: - (id)daysOfTheYear;	// 0x353d4af1
- (id)encodedClassName;	// 0x353d497d
// declared property getter: - (id)frequencyTimeUnit;	// 0x353d4b5d
- (id)groupIdentifier;	// 0x353d496d
// declared property getter: - (int)interval;	// 0x353d4bc9
// declared property getter: - (id)monthsOfTheYear;	// 0x353d4c7d
// declared property setter: - (void)setDaysOfTheMonth:(id)theMonth;	// 0x353d4a35
// declared property setter: - (void)setDaysOfTheWeek:(id)theWeek;	// 0x353d4aa1
// declared property setter: - (void)setDaysOfTheYear:(id)theYear;	// 0x353d4b0d
// declared property setter: - (void)setFrequencyTimeUnit:(id)unit;	// 0x353d4b79
// declared property setter: - (void)setInterval:(int)interval;	// 0x353d4c39
// declared property setter: - (void)setMonthsOfTheYear:(id)theYear;	// 0x353d4c99
// declared property setter: - (void)setWeeksOfTheYear:(id)theYear;	// 0x353d4d05
// declared property getter: - (id)weeksOfTheYear;	// 0x353d4ce9
@end

