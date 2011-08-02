/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"


@interface NSDateComponents : NSObject <NSCopying, NSCoding> {
}
@property(retain) id calendar;	// G=0x342726e1; S=0x342726ed; converted property
@property(assign) int day;	// G=0x3426ef8d; S=0x342700b5; converted property
@property(assign) int era;	// G=0x3426ef39; S=0x34270095; converted property
@property(assign) int hour;	// G=0x3426b111; S=0x3426b0e1; converted property
@property(assign) int minute;	// G=0x3426ef99; S=0x3426b0f1; converted property
@property(assign) int month;	// G=0x3426ef81; S=0x342700a5; converted property
@property(assign) int nanosecond;	// G=0x3426efb1; S=0x342727f9; converted property
@property(assign) int quarter;	// G=0x3426ef51; S=0x342727e9; converted property
@property(assign) int second;	// G=0x3426efa5; S=0x3426b101; converted property
@property(retain) id timeZone;	// G=0x3426efbd; S=0x34272769; converted property
@property(assign) int week;	// G=0x3426ef5d; S=0x34272809; converted property
@property(assign) int weekday;	// G=0x3426ef69; S=0x342700c5; converted property
@property(assign) int weekdayOrdinal;	// G=0x3426ef75; S=0x34272819; converted property
@property(assign) int year;	// G=0x3426ef45; S=0x3426eab9; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x3426b0a1
- (id)init;	// 0x3426b0ad
- (id)initWithCoder:(id)coder;	// 0x342c9395
// converted property getter: - (id)calendar;	// 0x342726e1
- (id)copyWithZone:(NSZone *)zone;	// 0x342724ad
- (id)date;	// 0x342c9525
// converted property getter: - (int)day;	// 0x3426ef8d
- (void)dealloc;	// 0x3426b11d
- (void)encodeWithCoder:(id)coder;	// 0x342c9399
// converted property getter: - (int)era;	// 0x3426ef39
- (unsigned)hash;	// 0x342c9809
// converted property getter: - (int)hour;	// 0x3426b111
- (BOOL)isEqual:(id)equal;	// 0x342c9581
// converted property getter: - (int)minute;	// 0x3426ef99
// converted property getter: - (int)month;	// 0x3426ef81
// converted property getter: - (int)nanosecond;	// 0x3426efb1
// converted property getter: - (int)quarter;	// 0x3426ef51
// converted property getter: - (int)second;	// 0x3426efa5
// converted property setter: - (void)setCalendar:(id)calendar;	// 0x342726ed
// converted property setter: - (void)setDay:(int)day;	// 0x342700b5
// converted property setter: - (void)setEra:(int)era;	// 0x34270095
// converted property setter: - (void)setHour:(int)hour;	// 0x3426b0e1
// converted property setter: - (void)setMinute:(int)minute;	// 0x3426b0f1
// converted property setter: - (void)setMonth:(int)month;	// 0x342700a5
// converted property setter: - (void)setNanosecond:(int)nanosecond;	// 0x342727f9
// converted property setter: - (void)setQuarter:(int)quarter;	// 0x342727e9
// converted property setter: - (void)setSecond:(int)second;	// 0x3426b101
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x34272769
// converted property setter: - (void)setWeek:(int)week;	// 0x34272809
// converted property setter: - (void)setWeekday:(int)weekday;	// 0x342700c5
// converted property setter: - (void)setWeekdayOrdinal:(int)ordinal;	// 0x34272819
// converted property setter: - (void)setYear:(int)year;	// 0x3426eab9
// converted property getter: - (id)timeZone;	// 0x3426efbd
// converted property getter: - (int)week;	// 0x3426ef5d
// converted property getter: - (int)weekday;	// 0x3426ef69
// converted property getter: - (int)weekdayOrdinal;	// 0x3426ef75
// converted property getter: - (int)year;	// 0x3426ef45
@end
