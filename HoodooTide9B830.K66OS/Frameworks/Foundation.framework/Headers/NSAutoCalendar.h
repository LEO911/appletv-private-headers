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
@property(assign) unsigned firstWeekday;	// G=0x315c884d; S=0x315c8821; converted property
@property(retain) id gregorianStartDate;	// G=0x315c891d; S=0x315c88b9; converted property
@property(retain) id locale;	// G=0x315c877d; S=0x315c8719; converted property
@property(assign) unsigned minimumDaysInFirstWeek;	// G=0x315c8899; S=0x315c886d; converted property
@property(retain) id timeZone;	// G=0x315c8801; S=0x315c879d; converted property
- (id)init;	// 0x315c8549
- (id)initWithCalendarIdentifier:(id)calendarIdentifier;	// 0x315c8631
- (id)initWithCoder:(id)coder;	// 0x315c8dbd
- (void)_update:(id)update;	// 0x315c8431
- (id)calendarIdentifier;	// 0x315c86f9
- (Class)classForCoder;	// 0x315c8fcd
- (id)components:(unsigned)components fromDate:(id)date;	// 0x315c8a55
- (id)components:(unsigned)components fromDate:(id)date toDate:(id)date3 options:(unsigned)options;	// 0x315c8a95
- (id)copyWithZone:(NSZone *)zone;	// 0x315c8b1d
- (id)dateByAddingComponents:(id)components toDate:(id)date options:(unsigned)options;	// 0x315c8a75
- (id)dateFromComponents:(id)components;	// 0x315c8a35
- (void)dealloc;	// 0x315c8641
- (id)description;	// 0x315c8ab5
- (void)encodeWithCoder:(id)coder;	// 0x315c8c09
// converted property getter: - (unsigned)firstWeekday;	// 0x315c884d
// converted property getter: - (id)gregorianStartDate;	// 0x315c891d
// converted property getter: - (id)locale;	// 0x315c877d
- (NSRange)maximumRangeOfUnit:(unsigned)unit;	// 0x315c896d
// converted property getter: - (unsigned)minimumDaysInFirstWeek;	// 0x315c8899
- (NSRange)minimumRangeOfUnit:(unsigned)unit;	// 0x315c893d
- (unsigned)ordinalityOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forDate:(id)date;	// 0x315c89d9
- (NSRange)rangeOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forDate:(id)date;	// 0x315c899d
- (BOOL)rangeOfUnit:(unsigned)unit startDate:(id *)date interval:(double *)interval forDate:(id)date4;	// 0x315c89f9
// converted property setter: - (void)setFirstWeekday:(unsigned)weekday;	// 0x315c8821
// converted property setter: - (void)setGregorianStartDate:(id)date;	// 0x315c88b9
// converted property setter: - (void)setLocale:(id)locale;	// 0x315c8719
// converted property setter: - (void)setMinimumDaysInFirstWeek:(unsigned)firstWeek;	// 0x315c886d
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x315c879d
// converted property getter: - (id)timeZone;	// 0x315c8801
@end
