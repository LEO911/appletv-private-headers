/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "NSCopying.h"
#import "EKPersistentObject.h"

@class NSString, NSArray, EKPersistentCalendarItem, EKRecurrenceEnd, NSDate;

@interface EKPersistentRecurrenceRule : EKPersistentObject <NSCopying> {
	id _helper;	// 32 = 0x20
	EKRecurrenceEnd *_recurrenceEnd;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x3186c559; 
@property(readonly, assign, nonatomic) NSDate *cachedEndDate;	// G=0x3186ca25; 
@property(readonly, assign, nonatomic) NSString *calendarIdentifier;	// G=0x3186c95d; 
@property(assign, nonatomic) unsigned count;	// G=0x3186ca09; S=0x31800945; 
@property(copy, nonatomic) NSArray *daysOfTheMonth;	// G=0x3186ca95; S=0x31800771; 
@property(copy, nonatomic) NSArray *daysOfTheWeek;	// G=0x3186ca6d; S=0x317ffe51; 
@property(copy, nonatomic) NSArray *daysOfTheYear;	// G=0x3186cabd; S=0x3180084d; 
@property(copy, nonatomic) NSDate *endDate;	// G=0x3186c9ed; S=0x318004d9; 
@property(assign, nonatomic) int firstDayOfTheWeek;	// G=0x3186ca41; S=0x317fc8f9; 
@property(assign, nonatomic) int frequency;	// G=0x3186c995; S=0x317fc739; 
@property(assign, nonatomic) int interval;	// G=0x3186c9d1; S=0x317fc851; 
@property(copy, nonatomic) NSArray *monthsOfTheYear;	// G=0x3186cb0d; S=0x318005b9; 
@property(retain, nonatomic) EKPersistentCalendarItem *owner;	// G=0x31801f35; S=0x31800929; 
@property(copy, nonatomic) NSArray *setPositions;	// G=0x3186cb35; S=0x318003fd; 
@property(readonly, assign, nonatomic) BOOL shouldPinMonthDays;	// G=0x3186c575; 
@property(copy, nonatomic) NSArray *weeksOfTheYear;	// G=0x3186cae5; S=0x31800695; 
+ (id)relations;	// 0x317fc6a5
- (id)init;	// 0x317fc615
// declared property getter: - (id)UUID;	// 0x3186c559
- (id)_helper;	// 0x317ffe7d
// declared property getter: - (id)cachedEndDate;	// 0x3186ca25
// declared property getter: - (id)calendarIdentifier;	// 0x3186c95d
- (id)copyWithZone:(NSZone *)zone;	// 0x3186c6b1
// declared property getter: - (unsigned)count;	// 0x3186ca09
// declared property getter: - (id)daysOfTheMonth;	// 0x3186ca95
// declared property getter: - (id)daysOfTheWeek;	// 0x3186ca6d
// declared property getter: - (id)daysOfTheYear;	// 0x3186cabd
- (void)dealloc;	// 0x3186c811
- (id)description;	// 0x3186c5cd
// declared property getter: - (id)endDate;	// 0x3186c9ed
- (int)entityType;	// 0x317ffda5
// declared property getter: - (int)firstDayOfTheWeek;	// 0x3186ca41
// declared property getter: - (int)frequency;	// 0x3186c995
- (XXStruct_mY3THC)gregorianUnits;	// 0x3186c8cd
// declared property getter: - (int)interval;	// 0x3186c9d1
- (BOOL)isDirty;	// 0x3186c875
// declared property getter: - (id)monthsOfTheYear;	// 0x3186cb0d
// declared property getter: - (id)owner;	// 0x31801f35
// declared property setter: - (void)setCount:(unsigned)count;	// 0x31800945
// declared property setter: - (void)setDaysOfTheMonth:(id)theMonth;	// 0x31800771
// declared property setter: - (void)setDaysOfTheWeek:(id)theWeek;	// 0x317ffe51
// declared property setter: - (void)setDaysOfTheYear:(id)theYear;	// 0x3180084d
// declared property setter: - (void)setEndDate:(id)date;	// 0x318004d9
// declared property setter: - (void)setFirstDayOfTheWeek:(int)theWeek;	// 0x317fc8f9
// declared property setter: - (void)setFrequency:(int)frequency;	// 0x317fc739
// declared property setter: - (void)setInterval:(int)interval;	// 0x317fc851
// declared property setter: - (void)setMonthsOfTheYear:(id)theYear;	// 0x318005b9
// declared property setter: - (void)setOwner:(id)owner;	// 0x31800929
// declared property getter: - (id)setPositions;	// 0x3186cb35
// declared property setter: - (void)setSetPositions:(id)positions;	// 0x318003fd
// declared property setter: - (void)setWeeksOfTheYear:(id)theYear;	// 0x31800695
// declared property getter: - (BOOL)shouldPinMonthDays;	// 0x3186c575
- (BOOL)validate:(id *)validate;	// 0x31801e85
// declared property getter: - (id)weeksOfTheYear;	// 0x3186cae5
@end

