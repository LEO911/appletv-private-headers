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
@property(retain) id calendarFormat;	// G=0x32060181; S=0x32029cfd; converted property
@property(readonly, assign) double timeIntervalSinceReferenceDate;	// G=0x32004179; converted property
@property(retain) NSTimeZone *timeZone;	// G=0x32060171; S=0x32029c9d; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x32003fd5
+ (id)calendarDate;	// 0x320463d1
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString date:(id)date locale:(id)locale;	// 0x32061721
+ (id)dateWithString:(id)string calendarFormat:(id)format;	// 0x32060725
+ (id)dateWithString:(id)string calendarFormat:(id)format locale:(id)locale;	// 0x32060771
+ (id)dateWithYear:(int)year month:(unsigned)month day:(unsigned)day hour:(unsigned)hour minute:(unsigned)minute second:(unsigned)second timeZone:(id)zone;	// 0x32041ee9
+ (id)distantFuture;	// 0x32060081
+ (id)distantPast;	// 0x320600f1
- (id)init;	// 0x32004059
- (id)initWithCoder:(id)coder;	// 0x320605a9
- (id)initWithString:(id)string;	// 0x32060055
- (id)initWithString:(id)string calendarFormat:(id)format;	// 0x32053499
- (id)initWithString:(id)string calendarFormat:(id)format locale:(id)locale;	// 0x320534bd
- (id)initWithTimeIntervalSinceReferenceDate:(double)timeIntervalSinceReferenceDate;	// 0x3200407d
- (id)initWithYear:(int)year month:(unsigned)month day:(unsigned)day hour:(unsigned)hour minute:(unsigned)minute second:(unsigned)second timeZone:(id)zone;	// 0x32041f4d
- (id)addTimeInterval:(double)interval;	// 0x32029c0d
// converted property getter: - (id)calendarFormat;	// 0x32060181
- (Class)classForCoder;	// 0x3206048d
- (id)copyWithZone:(NSZone *)zone;	// 0x32053065
- (id)dateByAddingYears:(int)years months:(int)months days:(int)days hours:(int)hours minutes:(int)minutes seconds:(int)seconds;	// 0x3204640d
- (int)dayOfCommonEra;	// 0x32060191
- (int)dayOfMonth;	// 0x3206023d
- (int)dayOfWeek;	// 0x32060275
- (int)dayOfYear;	// 0x320602c1
- (void)dealloc;	// 0x32004241
- (id)description;	// 0x320606cd
- (id)descriptionWithCalendarFormat:(id)calendarFormat;	// 0x32060711
- (id)descriptionWithCalendarFormat:(id)calendarFormat locale:(id)locale;	// 0x320607bd
- (id)descriptionWithLocale:(id)locale;	// 0x320606ed
- (void)encodeWithCoder:(id)coder;	// 0x32060491
- (int)hourOfDay;	// 0x32048de9
- (int)microsecondOfSecond;	// 0x320602ed
- (int)minuteOfHour;	// 0x32029b85
- (int)monthOfYear;	// 0x32060205
- (oneway void)release;	// 0x32004191
- (int)secondOfMinute;	// 0x320040f5
// converted property setter: - (void)setCalendarFormat:(id)format;	// 0x32029cfd
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x32029c9d
// converted property getter: - (double)timeIntervalSinceReferenceDate;	// 0x32004179
// converted property getter: - (id)timeZone;	// 0x32060171
- (id)timeZoneDetail;	// 0x32060161
- (int)yearOfCommonEra;	// 0x32041eb1
- (void)years:(int *)years months:(int *)months days:(int *)days hours:(int *)hours minutes:(int *)minutes seconds:(int *)seconds sinceDate:(id)date;	// 0x3206033d
@end

