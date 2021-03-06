/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSString;

@interface TSUDateFormatter : NSObject {
	NSString *mDateOnlyFormatString;	// 4 = 0x4
	NSString *mTimeOnlyFormatString;	// 8 = 0x8
	CFDateFormatterRef mFullDateFormatter;	// 12 = 0xc
}
+ (id)dateFormatStringSpecialSymbols;	// 0x34cb02dd
+ (id)datePortionOfDateTimeFormatString:(id)dateTimeFormatString;	// 0x34cb0305
+ (id)defaultDateTimeFormat;	// 0x34cafc61
+ (id)shortMonthNamesForNonCachedCurrentLocale;	// 0x34cb0451
+ (id)supportedDateFormats;	// 0x34cafc89
+ (id)supportedTimeFormats;	// 0x34caff31
+ (id)timePortionOfDateTimeFormatString:(id)dateTimeFormatString;	// 0x34cb03b1
- (id)init;	// 0x34cb04b1
- (id)appropriateOutputFormatStringForInputFormatString:(id)inputFormatString;	// 0x34cb0649
- (void)dealloc;	// 0x34cb05a1
- (id)fullDateString:(id)string;	// 0x34cb0615
- (id)stringFromDate:(id)date format:(id)format;	// 0x34cb0765
@end

