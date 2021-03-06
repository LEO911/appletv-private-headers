/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSCalendar, NSArray, NSDate, NSTimeZone;

@interface EKRecurrenceGenerator : NSObject {
	NSCalendar *_calendar;	// 4 = 0x4
	NSDate *_eventStartDate;	// 8 = 0x8
	NSDate *_eventEndDate;	// 12 = 0xc
	NSTimeZone *_eventTimeZone;	// 16 = 0x10
	unsigned _duration;	// 20 = 0x14
	BOOL _allDay;	// 24 = 0x18
	int _interval;	// 28 = 0x1c
	int _frequency;	// 32 = 0x20
	NSDate *_endDate;	// 36 = 0x24
	int _weekStart;	// 40 = 0x28
	BOOL _shouldPinMonthDays;	// 44 = 0x2c
	NSArray *_daysOfTheWeek;	// 48 = 0x30
	NSArray *_daysOfTheMonth;	// 52 = 0x34
	NSArray *_daysOfTheYear;	// 56 = 0x38
	NSArray *_weeksOfTheYear;	// 60 = 0x3c
	NSArray *_monthsOfTheYear;	// 64 = 0x40
	NSArray *_setPositions;	// 68 = 0x44
}
@property(assign, nonatomic) BOOL allDay;	// G=0x318fa839; S=0x318fa849; @synthesize=_allDay
@property(copy, nonatomic) NSArray *daysOfTheMonth;	// G=0x318fa8a1; S=0x318fa8b5; @synthesize=_daysOfTheMonth
@property(copy, nonatomic) NSArray *daysOfTheWeek;	// G=0x318fa87d; S=0x318fa891; @synthesize=_daysOfTheWeek
@property(copy, nonatomic) NSArray *daysOfTheYear;	// G=0x318fa8c5; S=0x318fa8d9; @synthesize=_daysOfTheYear
@property(copy, nonatomic) NSDate *endDate;	// G=0x318fa859; S=0x318fa86d; @synthesize=_endDate
@property(copy, nonatomic) NSDate *eventEndDate;	// G=0x318fa7f1; S=0x318fa805; @synthesize=_eventEndDate
@property(copy, nonatomic) NSDate *eventStartDate;	// G=0x318fa7cd; S=0x318fa7e1; @synthesize=_eventStartDate
@property(copy, nonatomic) NSTimeZone *eventTimeZone;	// G=0x318fa815; S=0x318fa829; @synthesize=_eventTimeZone
@property(copy, nonatomic) NSArray *monthsOfTheYear;	// G=0x318fa90d; S=0x318fa921; @synthesize=_monthsOfTheYear
@property(copy, nonatomic) NSArray *setPositions;	// G=0x318fa931; S=0x318fa945; @synthesize=_setPositions
@property(copy, nonatomic) NSArray *weeksOfTheYear;	// G=0x318fa8e9; S=0x318fa8fd; @synthesize=_weeksOfTheYear
+ (id)generator;	// 0x318f51b9
- (id)init;	// 0x318f51f1
- (id)_computeRecurrenceEndDate:(int)date;	// 0x318f7661
- (double)_convertAbsoluteTime:(double)time fromTimeZone:(id)timeZone toTimeZone:(id)timeZone3;	// 0x318f7801
- (id)_copyDailyOccurrencesWithInitialDate:(id)initialDate startDate:(id)date endDate:(id)date3 count:(unsigned)count;	// 0x318f7e09
- (id)_copyMonthlyOccurrencesWithInitialDate:(id)initialDate startDate:(id)date endDate:(id)date3 count:(unsigned)count;	// 0x318f8dc1
- (id)_copyOccurrenceDatesBetweenStartDate:(XXStruct_lQVxyC)date endDate:(XXStruct_lQVxyC)date2 timeZone:(id)zone limit:(int)limit;	// 0x318f782d
- (id)_copySimpleYearlyOccurrencesWithInitialDate:(id)initialDate startDate:(id)date endDate:(id)date3 count:(unsigned)count;	// 0x318f99c5
- (id)_copyWeeklyOccurrencesWithInitialDate:(id)initialDate startDate:(id)date endDate:(id)date3 count:(unsigned)count;	// 0x318f84b9
- (id)_copyYearlyOccurrencesWithInitialDate:(id)initialDate startDate:(id)date endDate:(id)date3 count:(unsigned)count;	// 0x318f9ba1
- (BOOL)_isSimpleYearlyRecurrence;	// 0x318f7751
- (void)_prepareForCalRecurrence:(void *)calRecurrence locked:(BOOL)locked;	// 0x318f6f41
- (void)_prepareForEKRecurrence:(id)ekrecurrence;	// 0x318f6b21
- (void)_prepareForPersistentRecurrence:(id)persistentRecurrence;	// 0x318f6d41
- (void)_setupForCalEvent:(void *)calEvent locked:(BOOL)locked;	// 0x318f5665
- (void)_setupForEKEvent:(id)ekevent;	// 0x318f5385
- (void)_setupForPersistentEvent:(id)persistentEvent;	// 0x318f5551
- (BOOL)_validateCalDate:(XXStruct_lQVxyC)date pinned:(BOOL)pinned;	// 0x318f9999
// declared property getter: - (BOOL)allDay;	// 0x318fa839
- (id)copyOccurrenceDatesWithCalEvent:(void *)calEvent startDate:(XXStruct_lQVxyC)date endDate:(XXStruct_lQVxyC)date3 timeZone:(id)zone limit:(int)limit locked:(BOOL)locked;	// 0x318f5981
- (id)copyOccurrenceDatesWithEKEvent:(id)ekevent recurrenceRule:(id)rule startDate:(XXStruct_lQVxyC)date endDate:(XXStruct_lQVxyC)date4 timeZone:(id)zone exceptionDates:(id)dates limit:(int)limit;	// 0x318f5b61
- (id)copyOccurrenceDatesWithEKEvent:(id)ekevent recurrenceRule:(id)rule startDate:(XXStruct_lQVxyC)date endDate:(XXStruct_lQVxyC)date4 timeZone:(id)zone limit:(int)limit;	// 0x318f5afd
- (id)copyOccurrenceDatesWithEKEvent:(id)ekevent startDate:(XXStruct_lQVxyC)date endDate:(XXStruct_lQVxyC)date3 timeZone:(id)zone limit:(int)limit;	// 0x318f57bd
- (id)copyOccurrenceDatesWithEvent:(id)event recurrenceRule:(id)rule startDate:(XXStruct_lQVxyC)date endDate:(XXStruct_lQVxyC)date4 timeZone:(id)zone limit:(int)limit;	// 0x318f5ed1
- (id)copyOccurrenceDatesWithEvent:(id)event startDate:(XXStruct_lQVxyC)date endDate:(XXStruct_lQVxyC)date3 timeZone:(id)zone limit:(int)limit;	// 0x318f5d0d
- (id)copyOccurrenceDatesWithInitialDate:(id)initialDate calRecurrences:(id)recurrences rangeStart:(id)start rangeEnd:(id)end timeZone:(id)zone;	// 0x318f5fd5
// declared property getter: - (id)daysOfTheMonth;	// 0x318fa8a1
// declared property getter: - (id)daysOfTheWeek;	// 0x318fa87d
// declared property getter: - (id)daysOfTheYear;	// 0x318fa8c5
- (void)dealloc;	// 0x318f526d
// declared property getter: - (id)endDate;	// 0x318fa859
// declared property getter: - (id)eventEndDate;	// 0x318fa7f1
// declared property getter: - (id)eventStartDate;	// 0x318fa7cd
// declared property getter: - (id)eventTimeZone;	// 0x318fa815
- (BOOL)isOccurrenceDate:(id)date validForEvent:(id)event;	// 0x318f6301
// declared property getter: - (id)monthsOfTheYear;	// 0x318fa90d
- (id)nextOccurrenceDateWithEKRecurrences:(id)ekrecurrences exceptionDates:(id)dates initialDate:(id)date afterDate:(id)date4;	// 0x318f66b1
- (id)nextOccurrenceDateWithEKRecurrences:(id)ekrecurrences initialDate:(id)date afterDate:(id)date3;	// 0x318f668d
- (BOOL)occurrenceDate:(id)date matchesRecurrenceRule:(id)rule forEvent:(id)event includeDetachedEventsInSeries:(BOOL)series;	// 0x318f63e5
// declared property setter: - (void)setAllDay:(BOOL)day;	// 0x318fa849
// declared property setter: - (void)setDaysOfTheMonth:(id)theMonth;	// 0x318fa8b5
// declared property setter: - (void)setDaysOfTheWeek:(id)theWeek;	// 0x318fa891
// declared property setter: - (void)setDaysOfTheYear:(id)theYear;	// 0x318fa8d9
// declared property setter: - (void)setEndDate:(id)date;	// 0x318fa86d
// declared property setter: - (void)setEventEndDate:(id)date;	// 0x318fa805
// declared property setter: - (void)setEventStartDate:(id)date;	// 0x318fa7e1
// declared property setter: - (void)setEventTimeZone:(id)zone;	// 0x318fa829
// declared property setter: - (void)setMonthsOfTheYear:(id)theYear;	// 0x318fa921
// declared property getter: - (id)setPositions;	// 0x318fa931
// declared property setter: - (void)setSetPositions:(id)positions;	// 0x318fa945
// declared property setter: - (void)setWeeksOfTheYear:(id)theYear;	// 0x318fa8fd
// declared property getter: - (id)weeksOfTheYear;	// 0x318fa8e9
@end

