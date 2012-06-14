/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSDate.h> // Unknown library

@class NSTimeZone, NSString;

@interface NSCalendarDate : NSDate {
@private
	unsigned refCount;	// 4 = 0x4
	double _timeIntervalSinceReferenceDate;	// 8 = 0x8
	NSTimeZone *_timeZone;	// 16 = 0x10
	NSString *_formatString;	// 20 = 0x14
	void *_reserved;	// 24 = 0x18
}
@property(retain) id calendarFormat;	// G=0x315c9171; S=0x31592ced; converted property
@property(readonly, assign) double timeIntervalSinceReferenceDate;	// G=0x3156d169; converted property
@property(retain) NSTimeZone *timeZone;	// G=0x315c9161; S=0x31592c8d; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x3156cfc5
+ (id)calendarDate;	// 0x315af3c1
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString date:(id)date locale:(id)locale;	// 0x315ca711
+ (id)dateWithString:(id)string calendarFormat:(id)format;	// 0x315c9715
+ (id)dateWithString:(id)string calendarFormat:(id)format locale:(id)locale;	// 0x315c9761
+ (id)dateWithYear:(int)year month:(unsigned)month day:(unsigned)day hour:(unsigned)hour minute:(unsigned)minute second:(unsigned)second timeZone:(id)zone;	// 0x315aaed9
+ (id)distantFuture;	// 0x315c9071
+ (id)distantPast;	// 0x315c90e1
- (id)init;	// 0x3156d049
- (id)initWithCoder:(id)coder;	// 0x315c9599
- (id)initWithString:(id)string;	// 0x315c9045
- (id)initWithString:(id)string calendarFormat:(id)format;	// 0x315bc489
- (id)initWithString:(id)string calendarFormat:(id)format locale:(id)locale;	// 0x315bc4ad
- (id)initWithTimeIntervalSinceReferenceDate:(double)timeIntervalSinceReferenceDate;	// 0x3156d06d
- (id)initWithYear:(int)year month:(unsigned)month day:(unsigned)day hour:(unsigned)hour minute:(unsigned)minute second:(unsigned)second timeZone:(id)zone;	// 0x315aaf3d
- (id)addTimeInterval:(double)interval;	// 0x31592bfd
// converted property getter: - (id)calendarFormat;	// 0x315c9171
- (Class)classForCoder;	// 0x315c947d
- (id)copyWithZone:(NSZone *)zone;	// 0x315bc055
- (id)dateByAddingYears:(int)years months:(int)months days:(int)days hours:(int)hours minutes:(int)minutes seconds:(int)seconds;	// 0x315af3fd
- (int)dayOfCommonEra;	// 0x315c9181
- (int)dayOfMonth;	// 0x315c922d
- (int)dayOfWeek;	// 0x315c9265
- (int)dayOfYear;	// 0x315c92b1
- (void)dealloc;	// 0x3156d231
- (id)description;	// 0x315c96bd
- (id)descriptionWithCalendarFormat:(id)calendarFormat;	// 0x315c9701
- (id)descriptionWithCalendarFormat:(id)calendarFormat locale:(id)locale;	// 0x315c97ad
- (id)descriptionWithLocale:(id)locale;	// 0x315c96dd
- (void)encodeWithCoder:(id)coder;	// 0x315c9481
- (int)hourOfDay;	// 0x315b1dd9
- (int)microsecondOfSecond;	// 0x315c92dd
- (int)minuteOfHour;	// 0x31592b75
- (int)monthOfYear;	// 0x315c91f5
- (oneway void)release;	// 0x3156d181
- (int)secondOfMinute;	// 0x3156d0e5
// converted property setter: - (void)setCalendarFormat:(id)format;	// 0x31592ced
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x31592c8d
// converted property getter: - (double)timeIntervalSinceReferenceDate;	// 0x3156d169
// converted property getter: - (id)timeZone;	// 0x315c9161
- (id)timeZoneDetail;	// 0x315c9151
- (int)yearOfCommonEra;	// 0x315aaea1
- (void)years:(int *)years months:(int *)months days:(int *)days hours:(int *)hours minutes:(int *)minutes seconds:(int *)seconds sinceDate:(id)date;	// 0x315c932d
@end
