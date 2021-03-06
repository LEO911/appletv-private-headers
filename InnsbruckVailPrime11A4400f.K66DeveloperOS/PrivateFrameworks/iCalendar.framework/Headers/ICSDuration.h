/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "NSCoding.h"
#import </libobjc.A.h>


@interface ICSDuration : NSObject <NSCoding> {
	double _duration;	// 4 = 0x4
}
+ (id)durationFromICSString:(id)icsstring;	// 0x33c51975
+ (id)durationFromRFC2445UTF8String:(const char *)rfc2445UTF8String;	// 0x33c51769
+ (id)generateDurationFromICSString:(id)icsstring;	// 0x33c4a4e1
- (id)initWithCoder:(id)coder;	// 0x33c4a57d
- (id)initWithWeeks:(int)weeks days:(int)days hours:(int)hours minutes:(int)minutes seconds:(int)seconds;	// 0x33c4a329
- (id)ICSStringWithOptions:(unsigned)options;	// 0x33c4a4fd
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x33c4ee45
- (int)days;	// 0x33c4a3ed
- (void)encodeWithCoder:(id)coder;	// 0x33c4a53d
- (int)hours;	// 0x33c4a429
- (BOOL)isNegative;	// 0x33c4a4bd
- (int)minutes;	// 0x33c4a461
- (int)seconds;	// 0x33c4a495
- (double)timeInterval;	// 0x33c4a3a5
- (int)weeks;	// 0x33c4a3bd
@end

