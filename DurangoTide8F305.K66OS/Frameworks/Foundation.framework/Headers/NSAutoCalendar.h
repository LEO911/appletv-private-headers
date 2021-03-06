/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSCalendar.h> // Unknown library
#import "Foundation-Structs.h"

@class NSLocale, NSTimeZone, NSDate;

__attribute__((visibility("hidden")))
@interface NSAutoCalendar : NSCalendar {
@private
	NSCalendar *cal;	// 4 = 0x4
	NSLocale *changedLocale;	// 8 = 0x8
	NSTimeZone *changedTimeZone;	// 12 = 0xc
	unsigned changedFirstWeekday;	// 16 = 0x10
	unsigned changedMinimumDaysinFirstWeek;	// 20 = 0x14
	NSDate *changedGregorianStartDate;	// 24 = 0x18
}
@property(assign) unsigned firstWeekday;	// G=0x3277f1c9; S=0x3277f1e9; converted property
@property(retain) id gregorianStartDate;	// G=0x3277f105; S=0x3277f125; converted property
@property(retain) id locale;	// G=0x3277f28d; S=0x3277f2ad; converted property
@property(assign) unsigned minimumDaysInFirstWeek;	// G=0x3277f17d; S=0x3277f19d; converted property
@property(retain) id timeZone;	// G=0x3277f215; S=0x3277f235; converted property
- (id)init;	// 0x3277f339
- (id)initWithCalendarIdentifier:(id)calendarIdentifier;	// 0x3277f325
- (id)initWithCoder:(id)coder;	// 0x3277ebc1
- (void)_update:(id)update;	// 0x3277f419
- (id)calendarIdentifier;	// 0x3277f305
- (Class)classForCoder;	// 0x3277eba1
- (id)components:(unsigned)components fromDate:(id)date;	// 0x3277f05d
- (id)components:(unsigned)components fromDate:(id)date toDate:(id)date3 options:(unsigned)options;	// 0x3277eff5
- (id)copyWithZone:(NSZone *)zone;	// 0x3277ef21
- (id)dateByAddingComponents:(id)components toDate:(id)date options:(unsigned)options;	// 0x3277f02d
- (id)dateFromComponents:(id)components;	// 0x3277f07d
- (void)dealloc;	// 0x3277ffe5
- (id)description;	// 0x3277ff79
- (void)encodeWithCoder:(id)coder;	// 0x3277ed99
// converted property getter: - (unsigned)firstWeekday;	// 0x3277f1c9
// converted property getter: - (id)gregorianStartDate;	// 0x3277f105
// converted property getter: - (id)locale;	// 0x3277f28d
- (NSRange)maximumRangeOfUnit:(unsigned)unit;	// 0x327800c1
// converted property getter: - (unsigned)minimumDaysInFirstWeek;	// 0x3277f17d
- (NSRange)minimumRangeOfUnit:(unsigned)unit;	// 0x327800e5
- (unsigned)ordinalityOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forDate:(id)date;	// 0x3277f0d5
- (NSRange)rangeOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forDate:(id)date;	// 0x3278008d
- (BOOL)rangeOfUnit:(unsigned)unit startDate:(id *)date interval:(double *)interval forDate:(id)date4;	// 0x3277f09d
// converted property setter: - (void)setFirstWeekday:(unsigned)weekday;	// 0x3277f1e9
// converted property setter: - (void)setGregorianStartDate:(id)date;	// 0x3277f125
// converted property setter: - (void)setLocale:(id)locale;	// 0x3277f2ad
// converted property setter: - (void)setMinimumDaysInFirstWeek:(unsigned)firstWeek;	// 0x3277f19d
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x3277f235
// converted property getter: - (id)timeZone;	// 0x3277f215
@end

