/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCopying.h"
#import "Foundation-Structs.h"
#import "NSMutableCopying.h"
#import "NSCharacterSet.h"


@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying> {
}
+ (id)alphanumericCharacterSet;	// 0x319afd55
+ (id)capitalizedLetterCharacterSet;	// 0x319afe75
+ (id)characterSetWithBitmapRepresentation:(id)bitmapRepresentation;	// 0x319aff4d
+ (id)characterSetWithCharactersInString:(id)string;	// 0x3198fd81
+ (id)characterSetWithContentsOfFile:(id)file;	// 0x319aff95
+ (id)characterSetWithRange:(NSRange)range;	// 0x319af8f5
+ (id)controlCharacterSet;	// 0x319afb5d
+ (id)decimalDigitCharacterSet;	// 0x3198c459
+ (id)decomposableCharacterSet;	// 0x319afd9d
+ (id)illegalCharacterSet;	// 0x319afde5
+ (id)letterCharacterSet;	// 0x319afc35
+ (id)lowercaseLetterCharacterSet;	// 0x319afc7d
+ (id)newlineCharacterSet;	// 0x319aff05
+ (id)nonBaseCharacterSet;	// 0x319afd0d
+ (id)punctuationCharacterSet;	// 0x319afe2d
+ (id)symbolCharacterSet;	// 0x319afebd
+ (id)uppercaseLetterCharacterSet;	// 0x319afcc5
+ (id)whitespaceAndNewlineCharacterSet;	// 0x319afbed
+ (id)whitespaceCharacterSet;	// 0x319afba5
- (id)init;	// 0x31995861
- (id)initWithCoder:(id)coder;	// 0x319affdd
- (void)addCharactersInRange:(NSRange)range;	// 0x319af999
- (void)addCharactersInString:(id)string;	// 0x319afa19
- (id)copyWithZone:(NSZone *)zone;	// 0x319af92d
- (void)formIntersectionWithCharacterSet:(id)characterSet;	// 0x319afad9
- (void)formUnionWithCharacterSet:(id)characterSet;	// 0x319afa99
- (void)invert;	// 0x319afb19
- (BOOL)isMutable;	// 0x319afb59
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x319af959
- (void)removeCharactersInRange:(NSRange)range;	// 0x319af9d9
- (void)removeCharactersInString:(id)string;	// 0x319afa59
@end
