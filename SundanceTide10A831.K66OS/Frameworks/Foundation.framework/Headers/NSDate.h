/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSDate.h> // Unknown library


@interface NSDate (NSCalendarDateStuff)
- (id)dateWithCalendarFormat:(id)calendarFormat timeZone:(id)zone;	// 0x325620b9
- (id)descriptionWithCalendarFormat:(id)calendarFormat timeZone:(id)zone locale:(id)locale;	// 0x32562121
@end

@interface NSDate (NSNaturalLanguageDate)
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString;	// 0x32563e4d
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString date:(id)date locale:(id)locale;	// 0x32563dc9
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString locale:(id)locale;	// 0x32563e6d
@end

@interface NSDate (NSDate)
- (id)initWithCoder:(id)coder;	// 0x32569b11
- (Class)classForCoder;	// 0x3253f5a1
- (void)encodeWithCoder:(id)coder;	// 0x3253f5bd
@end

@interface NSDate (NSURLExtras)
- (id)_web_RFC1123DateString;	// 0x325beed9
- (int)_web_compareDay:(id)day;	// 0x3254b5b9
- (BOOL)_web_isToday;	// 0x3254b575
@end

@interface NSDate (NSDatePortCoding)
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x32658491
@end

