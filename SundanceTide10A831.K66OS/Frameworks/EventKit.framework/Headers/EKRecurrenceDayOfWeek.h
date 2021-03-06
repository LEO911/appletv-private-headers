/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"
#import "NSCopying.h"


@interface EKRecurrenceDayOfWeek : NSObject <NSCopying> {
	int _dayOfTheWeek;	// 4 = 0x4
	int _weekNumber;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) int dayOfTheWeek;	// G=0x34f3a369; @synthesize=_dayOfTheWeek
@property(readonly, assign, nonatomic) int weekNumber;	// G=0x34f3a379; @synthesize=_weekNumber
+ (id)dayOfWeek:(int)week;	// 0x34f39f55
+ (id)dayOfWeek:(int)week weekNumber:(int)number;	// 0x34f39f95
- (id)initWithCoder:(id)coder;	// 0x34f3a071
- (id)initWithDayOfTheWeek:(int)theWeek weekNumber:(int)number;	// 0x34f39fd5
- (id)copyWithZone:(NSZone *)zone;	// 0x34f3a359
// declared property getter: - (int)dayOfTheWeek;	// 0x34f3a369
- (id)description;	// 0x34f3a241
- (void)encodeWithCoder:(id)coder;	// 0x34f3a0f1
- (unsigned)hash;	// 0x34f3a2a1
- (id)iCalendarDescription;	// 0x34f3a1b9
- (id)iCalendarValueFromDayOfTheWeek:(unsigned)theWeek;	// 0x34f3a149
- (BOOL)isEqual:(id)equal;	// 0x34f3a2d1
// declared property getter: - (int)weekNumber;	// 0x34f3a379
@end

