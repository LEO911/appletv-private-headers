/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSObject.h"
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"


@interface NSDateComponents : NSObject <NSCopying, NSCoding> {
}
@property(retain) id calendar;	// G=0x30d2ee05; S=0x30d2ee11; converted property
@property(assign) int day;	// G=0x30d2ef71; S=0x30d2eb2d; converted property
@property(assign) int era;	// G=0x30d2ef31; S=0x30d2eafd; converted property
@property(assign) int hour;	// G=0x30d2ef7d; S=0x30d2ef89; converted property
@property(assign) int minute;	// G=0x30d2ef99; S=0x30d2efa5; converted property
@property(assign) int month;	// G=0x30d2ef65; S=0x30d2eb1d; converted property
@property(assign) int nanosecond;	// G=0x30d2efd1; S=0x30d2efdd; converted property
@property(assign) int quarter;	// G=0x30d2ef49; S=0x30d2ef55; converted property
@property(assign) int second;	// G=0x30d2efb5; S=0x30d2efc1; converted property
@property(retain) id timeZone;	// G=0x30d2ee99; S=0x30d2eea5; converted property
@property(assign) int week;	// G=0x30d2efed; S=0x30d2eff9; converted property
@property(assign) int weekOfMonth;	// G=0x30d2f025; S=0x30d2f031; converted property
@property(assign) int weekOfYear;	// G=0x30d2f009; S=0x30d2f015; converted property
@property(assign) int weekday;	// G=0x30d2f05d; S=0x30d2f069; converted property
@property(assign) int weekdayOrdinal;	// G=0x30d2f079; S=0x30d2f085; converted property
@property(assign) int year;	// G=0x30d2ef3d; S=0x30d2eb0d; converted property
@property(assign) int yearForWeekOfYear;	// G=0x30d2f041; S=0x30d2f04d; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x30d2eab5
- (id)init;	// 0x30d2eabd
- (id)initWithCoder:(id)coder;	// 0x30da2869
// converted property getter: - (id)calendar;	// 0x30d2ee05
- (id)copyWithZone:(NSZone *)zone;	// 0x30d2eb3d
- (id)date;	// 0x30da2871
// converted property getter: - (int)day;	// 0x30d2ef71
- (void)dealloc;	// 0x30d2f495
- (id)description;	// 0x30da28d9
- (void)encodeWithCoder:(id)coder;	// 0x30da286d
// converted property getter: - (int)era;	// 0x30d2ef31
- (unsigned)hash;	// 0x30da2705
// converted property getter: - (int)hour;	// 0x30d2ef7d
- (BOOL)isEqual:(id)equal;	// 0x30d2f7e5
// converted property getter: - (int)minute;	// 0x30d2ef99
// converted property getter: - (int)month;	// 0x30d2ef65
// converted property getter: - (int)nanosecond;	// 0x30d2efd1
// converted property getter: - (int)quarter;	// 0x30d2ef49
// converted property getter: - (int)second;	// 0x30d2efb5
// converted property setter: - (void)setCalendar:(id)calendar;	// 0x30d2ee11
// converted property setter: - (void)setDay:(int)day;	// 0x30d2eb2d
// converted property setter: - (void)setEra:(int)era;	// 0x30d2eafd
// converted property setter: - (void)setHour:(int)hour;	// 0x30d2ef89
// converted property setter: - (void)setMinute:(int)minute;	// 0x30d2efa5
// converted property setter: - (void)setMonth:(int)month;	// 0x30d2eb1d
// converted property setter: - (void)setNanosecond:(int)nanosecond;	// 0x30d2efdd
// converted property setter: - (void)setQuarter:(int)quarter;	// 0x30d2ef55
// converted property setter: - (void)setSecond:(int)second;	// 0x30d2efc1
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x30d2eea5
// converted property setter: - (void)setWeek:(int)week;	// 0x30d2eff9
// converted property setter: - (void)setWeekOfMonth:(int)month;	// 0x30d2f031
// converted property setter: - (void)setWeekOfYear:(int)year;	// 0x30d2f015
// converted property setter: - (void)setWeekday:(int)weekday;	// 0x30d2f069
// converted property setter: - (void)setWeekdayOrdinal:(int)ordinal;	// 0x30d2f085
// converted property setter: - (void)setYear:(int)year;	// 0x30d2eb0d
// converted property setter: - (void)setYearForWeekOfYear:(int)year;	// 0x30d2f04d
// converted property getter: - (id)timeZone;	// 0x30d2ee99
// converted property getter: - (int)week;	// 0x30d2efed
// converted property getter: - (int)weekOfMonth;	// 0x30d2f025
// converted property getter: - (int)weekOfYear;	// 0x30d2f009
// converted property getter: - (int)weekday;	// 0x30d2f05d
// converted property getter: - (int)weekdayOrdinal;	// 0x30d2f079
// converted property getter: - (int)year;	// 0x30d2ef3d
// converted property getter: - (int)yearForWeekOfYear;	// 0x30d2f041
@end
