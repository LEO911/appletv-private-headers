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
@property(assign) unsigned firstWeekday;	// G=0x35e3085d; S=0x35e30831; converted property
@property(retain) id gregorianStartDate;	// G=0x35e3092d; S=0x35e308c9; converted property
@property(retain) id locale;	// G=0x35e3078d; S=0x35e30729; converted property
@property(assign) unsigned minimumDaysInFirstWeek;	// G=0x35e308a9; S=0x35e3087d; converted property
@property(retain) id timeZone;	// G=0x35e30811; S=0x35e307ad; converted property
- (id)init;	// 0x35e30559
- (id)initWithCalendarIdentifier:(id)calendarIdentifier;	// 0x35e30641
- (id)initWithCoder:(id)coder;	// 0x35e30dcd
- (void)_update:(id)update;	// 0x35e30441
- (id)calendarIdentifier;	// 0x35e30709
- (Class)classForCoder;	// 0x35e30fdd
- (id)components:(unsigned)components fromDate:(id)date;	// 0x35e30a65
- (id)components:(unsigned)components fromDate:(id)date toDate:(id)date3 options:(unsigned)options;	// 0x35e30aa5
- (id)copyWithZone:(NSZone *)zone;	// 0x35e30b2d
- (id)dateByAddingComponents:(id)components toDate:(id)date options:(unsigned)options;	// 0x35e30a85
- (id)dateFromComponents:(id)components;	// 0x35e30a45
- (void)dealloc;	// 0x35e30651
- (id)description;	// 0x35e30ac5
- (void)encodeWithCoder:(id)coder;	// 0x35e30c19
// converted property getter: - (unsigned)firstWeekday;	// 0x35e3085d
// converted property getter: - (id)gregorianStartDate;	// 0x35e3092d
// converted property getter: - (id)locale;	// 0x35e3078d
- (NSRange)maximumRangeOfUnit:(unsigned)unit;	// 0x35e3097d
// converted property getter: - (unsigned)minimumDaysInFirstWeek;	// 0x35e308a9
- (NSRange)minimumRangeOfUnit:(unsigned)unit;	// 0x35e3094d
- (unsigned)ordinalityOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forDate:(id)date;	// 0x35e309e9
- (NSRange)rangeOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forDate:(id)date;	// 0x35e309ad
- (BOOL)rangeOfUnit:(unsigned)unit startDate:(id *)date interval:(double *)interval forDate:(id)date4;	// 0x35e30a09
// converted property setter: - (void)setFirstWeekday:(unsigned)weekday;	// 0x35e30831
// converted property setter: - (void)setGregorianStartDate:(id)date;	// 0x35e308c9
// converted property setter: - (void)setLocale:(id)locale;	// 0x35e30729
// converted property setter: - (void)setMinimumDaysInFirstWeek:(unsigned)firstWeek;	// 0x35e3087d
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x35e307ad
// converted property getter: - (id)timeZone;	// 0x35e30811
@end
