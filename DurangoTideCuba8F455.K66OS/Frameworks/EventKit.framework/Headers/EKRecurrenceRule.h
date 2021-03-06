/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSDate, EKRecurrenceEnd, NSArray;

@interface EKRecurrenceRule : NSObject {
@private
	id _owner;	// 4 = 0x4
	NSArray *_monthsOfTheYear;	// 8 = 0x8
	NSArray *_daysOfTheMonth;	// 12 = 0xc
	NSArray *_daysOfTheWeek;	// 16 = 0x10
	NSArray *_setPositions;	// 20 = 0x14
	NSArray *_weeksOfTheYear;	// 24 = 0x18
	NSArray *_daysOfTheYear;	// 28 = 0x1c
	int _firstDayOfTheWeek;	// 32 = 0x20
	int _interval;	// 36 = 0x24
	int _frequency;	// 40 = 0x28
	EKRecurrenceEnd *_recurrenceEnd;	// 44 = 0x2c
	NSDate *_cachedEndDate;	// 48 = 0x30
	unsigned _dirtyFlags;	// 52 = 0x34
}
@property(retain) NSDate *cachedEndDate;	// G=0x32e82061; S=0x32e82025; converted property
@property(readonly, assign, nonatomic) NSString *calendarIdentifier;	// G=0x32e81f69; 
@property(readonly, assign, nonatomic) NSArray *daysOfTheMonth;	// G=0x32e81e75; 
@property(readonly, assign, nonatomic) NSArray *daysOfTheWeek;	// G=0x32e81ea5; 
@property(readonly, assign, nonatomic) NSArray *daysOfTheYear;	// G=0x32e81de5; 
@property(readonly, assign, nonatomic) int firstDayOfTheWeek;	// G=0x32e81765; 
@property(assign, nonatomic) int frequency;	// G=0x32e816f5; S=0x32e81705; 
@property(assign, nonatomic) int interval;	// G=0x32e8172d; S=0x32e8173d; 
@property(readonly, assign, nonatomic) NSArray *monthsOfTheYear;	// G=0x32e81e15; 
@property(retain) id owner;	// G=0x32e816d1; S=0x32e816c1; converted property
@property(copy, nonatomic) EKRecurrenceEnd *recurrenceEnd;	// G=0x32e81f39; S=0x32e81ed5; 
@property(readonly, assign, nonatomic) NSArray *setPositions;	// G=0x32e81e45; 
@property(readonly, assign, nonatomic) NSArray *weeksOfTheYear;	// G=0x32e81db5; 
+ (id)iCalendarValueFromDate:(id)date isDateOnly:(BOOL)only isFloating:(BOOL)floating;	// 0x32e81ccd
+ (id)iCalendarValueFromDayOfTheWeek:(unsigned)theWeek;	// 0x32e817b5
+ (id)iCalendarValueFromRecurrenceType:(int)recurrenceType;	// 0x32e81775
+ (id)recurrenceRuleWithType:(int)type interval:(unsigned)interval end:(id)end;	// 0x32e82589
- (id)init;	// 0x32e8301d
- (id)initRecurrenceWithFrequency:(int)frequency interval:(int)interval daysOfTheWeek:(id)theWeek daysOfTheMonth:(id)theMonth monthsOfTheYear:(id)theYear weeksOfTheYear:(id)theYear6 daysOfTheYear:(id)theYear7 setPositions:(id)positions end:(id)end;	// 0x32e82da5
- (id)initRecurrenceWithFrequency:(int)frequency interval:(unsigned)interval end:(id)end;	// 0x32e82549
- (id)initWithCoder:(id)coder;	// 0x32e82bc9
- (id)initWithRecurrenceRef:(void *)recurrenceRef;	// 0x32e83375
// converted property getter: - (id)cachedEndDate;	// 0x32e82061
// declared property getter: - (id)calendarIdentifier;	// 0x32e81f69
// declared property getter: - (id)daysOfTheMonth;	// 0x32e81e75
// declared property getter: - (id)daysOfTheWeek;	// 0x32e81ea5
// declared property getter: - (id)daysOfTheYear;	// 0x32e81de5
- (void)dealloc;	// 0x32e82b01
- (id)description;	// 0x32e82355
- (void)encodeWithCoder:(id)coder;	// 0x32e823ed
// declared property getter: - (int)firstDayOfTheWeek;	// 0x32e81765
// declared property getter: - (int)frequency;	// 0x32e816f5
- (XXStruct_qYfmJC)gregorianUnits;	// 0x32e81f99
- (unsigned)hash;	// 0x32e822a1
// declared property getter: - (int)interval;	// 0x32e8172d
- (BOOL)isDirty;	// 0x32e816e1
- (BOOL)isEqual:(id)equal;	// 0x32e82091
// declared property getter: - (id)monthsOfTheYear;	// 0x32e81e15
// converted property getter: - (id)owner;	// 0x32e816d1
// declared property getter: - (id)recurrenceEnd;	// 0x32e81f39
// converted property setter: - (void)setCachedEndDate:(id)date;	// 0x32e82025
// declared property setter: - (void)setFrequency:(int)frequency;	// 0x32e81705
// declared property setter: - (void)setInterval:(int)interval;	// 0x32e8173d
// converted property setter: - (void)setOwner:(id)owner;	// 0x32e816c1
// declared property getter: - (id)setPositions;	// 0x32e81e45
// declared property setter: - (void)setRecurrenceEnd:(id)end;	// 0x32e81ed5
- (BOOL)shouldPinMonthDays;	// 0x32e823bd
- (id)stringValueAsDateOnly:(BOOL)only isFloating:(BOOL)floating;	// 0x32e81819
- (void)updateRecurrenceRef:(void *)ref ignoreDirty:(BOOL)dirty;	// 0x32e83a09
// declared property getter: - (id)weeksOfTheYear;	// 0x32e81db5
@end

