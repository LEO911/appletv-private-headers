/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSString, NSMutableArray;

@interface GQNumberFormatter : NSObject {
	CFLocaleRef mLocale;	// 4 = 0x4
	CFArrayRef mDecimalFormatters;	// 8 = 0x8
	CFArrayRef mCurrencyFormatters;	// 12 = 0xc
	CFArrayRef mPercentageFormatters;	// 16 = 0x10
	CFArrayRef mScientificFormatters;	// 20 = 0x14
	CFNumberFormatterRef mFractionFormatter;	// 24 = 0x18
	NSMutableDictionary *mCurrencyCodeToSymbolMap;	// 28 = 0x1c
	NSMutableDictionary *mCurrencyCodeToHalfWidthSymbolMap;	// 32 = 0x20
	NSString *mCurrencyString;	// 36 = 0x24
	NSString *mPercentageString;	// 40 = 0x28
	NSString *mScientificString;	// 44 = 0x2c
	NSString *mDecimalString;	// 48 = 0x30
	NSString *mPercentSymbol;	// 52 = 0x34
	NSMutableArray *mTransformedDecimalStrings;	// 56 = 0x38
	NSMutableArray *mTransformedCurrencyStrings;	// 60 = 0x3c
	NSMutableArray *mTransformedPercentageStrings;	// 64 = 0x40
	NSMutableArray *mTransformedScientificStrings;	// 68 = 0x44
	CFStringRef mAdditionalCurrencyCode;	// 72 = 0x48
	CFArrayRef mAdditionalCurrencyCodeFormatters;	// 76 = 0x4c
}
+ (id)availableCurrencyCodes;	// 0x36b01879
+ (id)currencySymbolForCurrencyCode:(id)currencyCode;	// 0x36b018c5
+ (id)currentLocaleCurrencyCode;	// 0x36b01925
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)currencyCode;	// 0x36b018f5
+ (id)defaultFormatStringForValueType:(int)valueType;	// 0x36b019e1
+ (id)defaultFormatStringForValueType:(int)valueType negativeStyle:(int)style;	// 0x36b019ad
+ (id)displayNameForCurrencyCode:(id)currencyCode;	// 0x36b01895
+ (void)formatString:(id)string replaceOccurencesOfUnescapedString:(id)unescapedString withString:(id)string3;	// 0x36b01671
+ (id)formatString:(id)string transformedForNegativeStyle:(int)negativeStyle;	// 0x36b013b1
+ (id)formatterForLocale:(CFLocaleRef)locale;	// 0x36b01c51
+ (id)localizedPercentSymbol;	// 0x36b01a11
+ (id)numberFormatStringSpecialSymbols;	// 0x36b01951
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x36b0131d
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x36b01369
+ (int)positionOfSymbol:(id)symbol inNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x36b012c1
+ (id)userVisibleCurrencyCodes;	// 0x36b01a3d
- (id)initWithLocale:(CFLocaleRef)locale;	// 0x36b01cc9
- (BOOL)currencyFromString:(CFStringRef)string additionalCurrencyCode:(CFStringRef)code value:(double *)value formatString:(const CFStringRef *)string4 currencyCode:(const CFStringRef *)code5;	// 0x36b02299
- (id)currencySymbolForCurrencyCode:(id)currencyCode;	// 0x36b02a5d
- (id)currentLocaleCurrencyCode;	// 0x36b02bed
- (void)dealloc;	// 0x36b0208d
- (BOOL)decimalFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x36b0225d
- (id)defaultFormatStringForValueType:(int)valueType;	// 0x36b02c8d
- (id)defaultFormatStringForValueType:(int)valueType negativeStyle:(int)style;	// 0x36b02c35
- (id)displayNameForCurrencyCode:(id)currencyCode;	// 0x36b02a25
- (BOOL)findCurrencySymbolInString:(CFStringRef)string additionalCurrencyCode:(CFStringRef)code successfulString:(const CFStringRef *)string3;	// 0x36b02879
- (BOOL)fractionFromString:(CFStringRef)string value:(double *)value;	// 0x36b02449
- (id)halfWidthCurrencySymbolForCurrencyCode:(id)currencyCode;	// 0x36b02b5d
- (id)localizedPercentSymbol;	// 0x36b02cd1
- (void)numberPreferencesChanged:(id)changed;	// 0x36b0223d
- (BOOL)percentageFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x36b023cd
- (BOOL)scientificFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x36b02409
- (BOOL)valueFromString:(CFStringRef)string formatters:(CFArrayRef)formatters value:(double *)value formatString:(const CFStringRef *)string4 currencyCode:(const CFStringRef *)code;	// 0x36b027e1
@end
