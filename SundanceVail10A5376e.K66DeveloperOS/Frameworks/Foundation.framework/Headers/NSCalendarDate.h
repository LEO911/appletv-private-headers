/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSDate.h> // Unknown library

@class NSString, NSTimeZone;

@interface NSCalendarDate : NSDate {
	unsigned refCount;	// 4 = 0x4
	double _timeIntervalSinceReferenceDate;	// 8 = 0x8
	NSTimeZone *_timeZone;	// 16 = 0x10
	NSString *_formatString;	// 20 = 0x14
	void *_reserved;	// 24 = 0x18
}
@property(retain) id calendarFormat;	// G=0x34d8bce9; S=0x34d38719; converted property
@property(readonly, assign) double timeIntervalSinceReferenceDate;	// G=0x34d2a92d; converted property
@property(retain) NSTimeZone *timeZone;	// G=0x34d8bcd5; S=0x34d386bd; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x34d2a771
+ (id)calendarDate;	// 0x34d38595
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString date:(id)date locale:(id)locale;	// 0x34d8d211
+ (id)dateWithString:(id)string calendarFormat:(id)format;	// 0x34d8c3c5
+ (id)dateWithString:(id)string calendarFormat:(id)format locale:(id)locale;	// 0x34d8c411
+ (id)dateWithYear:(int)year month:(unsigned)month day:(unsigned)day hour:(unsigned)hour minute:(unsigned)minute second:(unsigned)second timeZone:(id)zone;	// 0x34d8bf81
+ (id)distantFuture;	// 0x34d8bbe1
+ (id)distantPast;	// 0x34d8bc51
- (id)init;	// 0x34d2a7f1
- (id)initWithCoder:(id)coder;	// 0x34d8c245
- (id)initWithString:(id)string;	// 0x34d8bbb1
- (id)initWithString:(id)string calendarFormat:(id)format;	// 0x34d3ee39
- (id)initWithString:(id)string calendarFormat:(id)format locale:(id)locale;	// 0x34d3ee61
- (id)initWithTimeIntervalSinceReferenceDate:(double)timeIntervalSinceReferenceDate;	// 0x34d2a819
- (id)initWithYear:(int)year month:(unsigned)month day:(unsigned)day hour:(unsigned)hour minute:(unsigned)minute second:(unsigned)second timeZone:(id)zone;	// 0x34d406fd
- (id)addTimeInterval:(double)interval;	// 0x34d4c539
// converted property getter: - (id)calendarFormat;	// 0x34d8bce9
- (Class)classForCoder;	// 0x34d8c121
- (id)copyWithZone:(NSZone *)zone;	// 0x34d40c81
- (id)dateByAddingYears:(int)years months:(int)months days:(int)days hours:(int)hours minutes:(int)minutes seconds:(int)seconds;	// 0x34d385d5
- (int)dayOfCommonEra;	// 0x34d8bcf9
- (int)dayOfMonth;	// 0x34d8bde1
- (int)dayOfWeek;	// 0x34d8be19
- (int)dayOfYear;	// 0x34d8be61
- (void)dealloc;	// 0x34d2a9fd
- (id)description;	// 0x34d8c36d
- (id)descriptionWithCalendarFormat:(id)calendarFormat;	// 0x34d8c3ad
- (id)descriptionWithCalendarFormat:(id)calendarFormat locale:(id)locale;	// 0x34d8c461
- (id)descriptionWithLocale:(id)locale;	// 0x34d8c38d
- (void)encodeWithCoder:(id)coder;	// 0x34d8c125
- (int)hourOfDay;	// 0x34d8be91
- (int)microsecondOfSecond;	// 0x34d8bf31
- (int)minuteOfHour;	// 0x34d4c4a1
- (int)monthOfYear;	// 0x34d8bda9
- (oneway void)release;	// 0x34d2a949
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x34e833d5
- (int)secondOfMinute;	// 0x34d2a891
// converted property setter: - (void)setCalendarFormat:(id)format;	// 0x34d38719
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x34d386bd
// converted property getter: - (double)timeIntervalSinceReferenceDate;	// 0x34d2a92d
// converted property getter: - (id)timeZone;	// 0x34d8bcd5
- (id)timeZoneDetail;	// 0x34d8bcc5
- (int)yearOfCommonEra;	// 0x34d8bd71
- (void)years:(int *)years months:(int *)months days:(int *)days hours:(int *)hours minutes:(int *)minutes seconds:(int *)seconds sinceDate:(id)date;	// 0x34d8bfe9
@end

