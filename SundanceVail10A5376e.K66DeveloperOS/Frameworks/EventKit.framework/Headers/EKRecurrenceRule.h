/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "NSCopying.h"
#import "EKObject.h"

@class NSString, NSArray, EKRecurrenceEnd;

@interface EKRecurrenceRule : EKObject <NSCopying> {
	EKRecurrenceEnd *_cachedEnd;	// 36 = 0x24
}
@property(retain, nonatomic) EKRecurrenceEnd *cachedEnd;	// G=0x367f7419; S=0x367f7429; @synthesize=_cachedEnd
@property(readonly, assign, nonatomic) NSString *calendarIdentifier;	// G=0x367f6801; 
@property(readonly, assign, nonatomic) NSArray *daysOfTheMonth;	// G=0x367f6b0d; 
@property(readonly, assign, nonatomic) NSArray *daysOfTheWeek;	// G=0x367f6af1; 
@property(readonly, assign, nonatomic) NSArray *daysOfTheYear;	// G=0x367f6b29; 
@property(readonly, assign, nonatomic) int firstDayOfTheWeek;	// G=0x367f69e5; 
@property(readonly, assign, nonatomic) int frequency;	// G=0x367f6839; 
@property(readonly, assign, nonatomic) int interval;	// G=0x367f6899; 
@property(readonly, assign, nonatomic) NSArray *monthsOfTheYear;	// G=0x367f6b61; 
@property(copy, nonatomic) EKRecurrenceEnd *recurrenceEnd;	// G=0x367f68f9; S=0x367b48cd; 
@property(readonly, assign, nonatomic) NSArray *setPositions;	// G=0x367f6b7d; 
@property(readonly, assign, nonatomic) NSArray *weeksOfTheYear;	// G=0x367f6b45; 
+ (id)iCalendarValueFromDate:(id)date isDateOnly:(BOOL)only isFloating:(BOOL)floating;	// 0x367f6e35
+ (id)iCalendarValueFromDayOfTheWeek:(unsigned)theWeek;	// 0x367f6dc5
+ (id)iCalendarValueFromRecurrenceType:(int)recurrenceType;	// 0x367f6d7d
+ (id)recurrenceRuleWithType:(int)type interval:(unsigned)interval end:(id)end;	// 0x367f6431
- (id)init;	// 0x367b439d
- (id)initRecurrenceWithFrequency:(int)frequency interval:(int)interval daysOfTheWeek:(id)theWeek daysOfTheMonth:(id)theMonth monthsOfTheYear:(id)theYear weeksOfTheYear:(id)theYear6 daysOfTheYear:(id)theYear7 setPositions:(id)positions end:(id)end;	// 0x367b4265
- (id)initRecurrenceWithFrequency:(int)frequency interval:(int)interval end:(id)end;	// 0x367b4225
- (id)UUID;	// 0x367f6489
- (id)_persistentRule;	// 0x367f6479
// declared property getter: - (id)cachedEnd;	// 0x367f7419
- (id)cachedEndDate;	// 0x367f69bd
// declared property getter: - (id)calendarIdentifier;	// 0x367f6801
- (id)copyWithZone:(NSZone *)zone;	// 0x367f656d
// declared property getter: - (id)daysOfTheMonth;	// 0x367f6b0d
// declared property getter: - (id)daysOfTheWeek;	// 0x367f6af1
// declared property getter: - (id)daysOfTheYear;	// 0x367f6b29
- (void)dealloc;	// 0x367baca1
- (id)description;	// 0x367f6509
- (BOOL)dirtyStateMayAffectExceptionDates;	// 0x367f6bdd
// declared property getter: - (int)firstDayOfTheWeek;	// 0x367f69e5
// declared property getter: - (int)frequency;	// 0x367f6839
- (XXStruct_mY3THC)gregorianUnits;	// 0x367f673d
// declared property getter: - (int)interval;	// 0x367f6899
- (id)lazyLoadRelationForKey:(id)key;	// 0x367b4cf5
- (BOOL)mayOccurAfterDate:(id)date;	// 0x367f6cd5
// declared property getter: - (id)monthsOfTheYear;	// 0x367f6b61
- (id)owner;	// 0x367f67cd
// declared property getter: - (id)recurrenceEnd;	// 0x367f68f9
- (void)reset;	// 0x367f6b99
// declared property setter: - (void)setCachedEnd:(id)end;	// 0x367f7429
- (void)setDaysOfTheMonth:(id)theMonth;	// 0x367b4a49
- (void)setDaysOfTheWeek:(id)theWeek;	// 0x367b4a2d
- (void)setDaysOfTheYear:(id)theYear;	// 0x367b4a9d
- (void)setFirstDayOfTheWeek:(unsigned)theWeek;	// 0x367f6a1d
- (void)setFrequency:(int)frequency;	// 0x367b47c1
- (void)setInterval:(int)interval;	// 0x367b4805
- (void)setMonthsOfTheYear:(id)theYear;	// 0x367b4a81
// declared property getter: - (id)setPositions;	// 0x367f6b7d
// declared property setter: - (void)setRecurrenceEnd:(id)end;	// 0x367b48cd
- (void)setSetPositions:(id)positions;	// 0x367b4a65
- (void)setWeeksOfTheYear:(id)theYear;	// 0x367b4ab9
- (BOOL)shouldPinMonthDays;	// 0x367f64b1
- (id)stringValueAsDateOnly:(BOOL)only isFloating:(BOOL)floating;	// 0x367f6f31
// declared property getter: - (id)weeksOfTheYear;	// 0x367f6b45
@end

