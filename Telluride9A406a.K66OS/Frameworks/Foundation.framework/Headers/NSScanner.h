/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


@interface NSScanner : NSObject <NSCopying> {
}
@property(assign) BOOL caseSensitive;	// G=0x35e6e791; S=0x35e6e829; converted property
@property(retain) id charactersToBeSkipped;	// G=0x35e6e749; S=0x35e6e805; converted property
@property(retain) id locale;	// G=0x35e6e795; S=0x35e6e84d; converted property
@property(assign) unsigned scanLocation;	// G=0x35e6e7e1; S=0x35e6e7bd; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x35e15a1d
+ (id)localizedScannerWithString:(id)string;	// 0x35e6d9e5
+ (id)scannerWithString:(id)string;	// 0x35e159d1
- (id)initWithString:(id)string;	// 0x35e15b41
- (id)_invertedSkipSet;	// 0x35e6db4d
- (id)_remainingString;	// 0x35e30ff9
- (BOOL)_scanDecimal:(unsigned)decimal into:(int *)into;	// 0x35e25779
// converted property getter: - (BOOL)caseSensitive;	// 0x35e6e791
// converted property getter: - (id)charactersToBeSkipped;	// 0x35e6e749
- (id)copyWithZone:(NSZone *)zone;	// 0x35e6da61
- (BOOL)isAtEnd;	// 0x35e15b6d
// converted property getter: - (id)locale;	// 0x35e6e795
- (BOOL)scanCharactersFromSet:(id)set intoString:(id *)string;	// 0x35e255ed
- (BOOL)scanDecimal:(XXStruct_9isexA *)decimal;	// 0x35e8511d
- (BOOL)scanDouble:(double *)aDouble;	// 0x35e20275
- (BOOL)scanFloat:(float *)aFloat;	// 0x35e6decd
- (BOOL)scanHexDouble:(double *)aDouble;	// 0x35e6df7d
- (BOOL)scanHexFloat:(float *)aFloat;	// 0x35e6e011
- (BOOL)scanHexInt:(unsigned *)int;	// 0x35e6e5a1
- (BOOL)scanHexLongLong:(unsigned long long *)aLong;	// 0x35e6e1a9
- (BOOL)scanInt:(int *)int;	// 0x35e6e135
- (BOOL)scanInteger:(int *)integer;	// 0x35e200e1
// converted property getter: - (unsigned)scanLocation;	// 0x35e6e7e1
- (BOOL)scanLongLong:(long long *)aLong;	// 0x35e6e0c1
- (BOOL)scanString:(id)string intoString:(id *)string2;	// 0x35e20135
- (BOOL)scanUpToCharactersFromSet:(id)set intoString:(id *)string;	// 0x35e15d5d
- (BOOL)scanUpToString:(id)string intoString:(id *)string2;	// 0x35e6e609
// converted property setter: - (void)setCaseSensitive:(BOOL)sensitive;	// 0x35e6e829
// converted property setter: - (void)setCharactersToBeSkipped:(id)beSkipped;	// 0x35e6e805
// converted property setter: - (void)setLocale:(id)locale;	// 0x35e6e84d
// converted property setter: - (void)setScanLocation:(unsigned)location;	// 0x35e6e7bd
- (id)string;	// 0x35e6e799
@end
