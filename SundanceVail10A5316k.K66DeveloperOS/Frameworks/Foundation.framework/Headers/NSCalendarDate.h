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
@private
	unsigned refCount;	// 4 = 0x4
	double _timeIntervalSinceReferenceDate;	// 8 = 0x8
	NSTimeZone *_timeZone;	// 16 = 0x10
	NSString *_formatString;	// 20 = 0x14
	void *_reserved;	// 24 = 0x18
}
@property(retain) id calendarFormat;	// G=0x31a41b71; S=0x31a08b31; converted property
@property(readonly, assign) double timeIntervalSinceReferenceDate;	// G=0x319e2cfd; converted property
@property(retain) NSTimeZone *timeZone;	// G=0x31a41b5d; S=0x31a08ad5; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x319e2b41
+ (id)calendarDate;	// 0x31a2522d
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString date:(id)date locale:(id)locale;	// 0x31a42f59
+ (id)dateWithString:(id)string calendarFormat:(id)format;	// 0x31a4210d
+ (id)dateWithString:(id)string calendarFormat:(id)format locale:(id)locale;	// 0x31a42159
+ (id)dateWithYear:(int)year month:(unsigned)month day:(unsigned)day hour:(unsigned)hour minute:(unsigned)minute second:(unsigned)second timeZone:(id)zone;	// 0x31a20f89
+ (id)distantFuture;	// 0x31a41a69
+ (id)distantPast;	// 0x31a41ad9
- (id)init;	// 0x319e2bc1
- (id)initWithCoder:(id)coder;	// 0x31a41f8d
- (id)initWithString:(id)string;	// 0x31a41a39
- (id)initWithString:(id)string calendarFormat:(id)format;	// 0x31a324d1
- (id)initWithString:(id)string calendarFormat:(id)format locale:(id)locale;	// 0x31a324f9
- (id)initWithTimeIntervalSinceReferenceDate:(double)timeIntervalSinceReferenceDate;	// 0x319e2be9
- (id)initWithYear:(int)year month:(unsigned)month day:(unsigned)day hour:(unsigned)hour minute:(unsigned)minute second:(unsigned)second timeZone:(id)zone;	// 0x31a20fed
- (id)addTimeInterval:(double)interval;	// 0x31a08a41
// converted property getter: - (id)calendarFormat;	// 0x31a41b71
- (Class)classForCoder;	// 0x31a41e69
- (id)copyWithZone:(NSZone *)zone;	// 0x31a32021
- (id)dateByAddingYears:(int)years months:(int)months days:(int)days hours:(int)hours minutes:(int)minutes seconds:(int)seconds;	// 0x31a2526d
- (int)dayOfCommonEra;	// 0x31a41b81
- (int)dayOfMonth;	// 0x31a41c31
- (int)dayOfWeek;	// 0x31a41c69
- (int)dayOfYear;	// 0x31a41cb1
- (void)dealloc;	// 0x319e2dcd
- (id)description;	// 0x31a420b5
- (id)descriptionWithCalendarFormat:(id)calendarFormat;	// 0x31a420f5
- (id)descriptionWithCalendarFormat:(id)calendarFormat locale:(id)locale;	// 0x31a421a9
- (id)descriptionWithLocale:(id)locale;	// 0x31a420d5
- (void)encodeWithCoder:(id)coder;	// 0x31a41e6d
- (int)hourOfDay;	// 0x31a27d39
- (int)microsecondOfSecond;	// 0x31a41ce1
- (int)minuteOfHour;	// 0x31a089a9
- (int)monthOfYear;	// 0x31a41bf9
- (oneway void)release;	// 0x319e2d19
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x31b33615
- (int)secondOfMinute;	// 0x319e2c61
// converted property setter: - (void)setCalendarFormat:(id)format;	// 0x31a08b31
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x31a08ad5
// converted property getter: - (double)timeIntervalSinceReferenceDate;	// 0x319e2cfd
// converted property getter: - (id)timeZone;	// 0x31a41b5d
- (id)timeZoneDetail;	// 0x31a41b4d
- (int)yearOfCommonEra;	// 0x31a20f51
- (void)years:(int *)years months:(int *)months days:(int *)days hours:(int *)hours minutes:(int *)minutes seconds:(int *)seconds sinceDate:(id)date;	// 0x31a41d31
@end

