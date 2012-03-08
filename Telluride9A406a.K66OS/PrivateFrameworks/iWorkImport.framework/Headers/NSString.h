/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSString.h> // Unknown library


@interface NSString (GQCustomNumberFormatAdditions)
+ (id)customNumberFormatDecimalFormatStringWithDigits:(unsigned)digits digitString:(id)string includeDecimalSeparator:(BOOL)separator;	// 0x33c11c11
+ (id)customNumberFormatDecimalTokenDisplayStringWithDigits:(unsigned)digits digitString:(id)string;	// 0x33c11b0d
+ (id)customNumberFormatDecimalTokenRepresentedStringWithDigits:(unsigned)digits digitString:(id)string;	// 0x33c11ba5
+ (id)customNumberFormatIntegerFormatStringWithDigits:(unsigned)digits digitString:(id)string;	// 0x33c11abd
+ (id)customNumberFormatIntegerTokenDisplayStringWithDigits:(unsigned)digits separator:(BOOL)separator digitString:(id)string;	// 0x33c130e9
+ (id)customNumberFormatIntegerTokenRepresentedStringWithDigits:(unsigned)digits separator:(BOOL)separator digitString:(id)string;	// 0x33c11a31
+ (id)customNumberFormatTokenStringOfType:(int)type content:(id)content;	// 0x33c119d1
- (id)currencyCodeFromCustomNumberFormatCurrencyToken;	// 0x33c11911
- (BOOL)customFormatIntegerTokenUsesSeparator;	// 0x33c118c1
- (id)digitPlaceholderStringInDigitToken;	// 0x33c13ed9
- (id)formatStringFromCustomNumberFormatScaleToken;	// 0x33c1198d
- (int)fractionAccuracyFromCustomNumberFormatFractionToken;	// 0x33c11961
- (BOOL)isSpecialCustomNumberFormatToken;	// 0x33c117ad
- (BOOL)isSpecialCustomNumberFormatTokenOfType:(int)type;	// 0x33c117f5
- (unsigned)numberOfDigitsInCustomNumberFormatDecimalToken;	// 0x33c118f9
- (unsigned)numberOfDigitsInCustomNumberFormatIntegerToken;	// 0x33c11861
- (unsigned short)scaleCharacterInCustomNumberFormatScaleToken;	// 0x33c119a1
- (unsigned short)spaceCharacterInCustomNumberFormatSpaceToken;	// 0x33c119b9
- (id)stringByInsertingGroupingSeparators;	// 0x33c12fc1
@end

@interface NSString (GQFormatStringUtilities)
+ (id)numberSymbols;	// 0x33c74e05
- (id)createRangesOfEscapedCharactersInNumberFormatPattern;	// 0x33c75ec9
- (id)createStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;	// 0x33c75b85
- (int)indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;	// 0x33c76325
- (int)indexOfLastNonSuffixCharacterInNumberFormatSubpattern;	// 0x33c7626d
- (int)indexOfNumberFormatSubpatternSeparator;	// 0x33c761a5
- (BOOL)isNumberFormatPattern;	// 0x33c75e5d
- (id)negativeSubpatternOfNumberFormatPattern;	// 0x33c74d1d
- (id)numberPortionOfNumberFormatSubpattern;	// 0x33c74d5d
- (id)positiveSubpatternOfNumberFormatPattern;	// 0x33c74ce5
- (id)prefixOfNumberFormatSubpattern;	// 0x33c74dd5
- (id)stringByRemovingEscapedCharactersFromNumberFormatPattern;	// 0x33c76011
- (id)suffixOfNumberFormatSubpattern;	// 0x33c74da5
@end
