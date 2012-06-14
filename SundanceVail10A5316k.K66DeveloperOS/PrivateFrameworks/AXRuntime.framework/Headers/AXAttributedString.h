/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

#import "AXRuntime-Structs.h"
#import <NSString.h> // Unknown library


@interface AXAttributedString : NSString {
	CFAttributedStringRef _string;	// 4 = 0x4
}
+ (id)axAttributedStringWithString:(id)string;	// 0x30dd83f1
+ (id)string;	// 0x30dd843d
- (id)initWithCFAttributedString:(CFAttributedStringRef)cfattributedString;	// 0x30dd84e1
- (id)initWithString:(id)string;	// 0x30dd8459
- (void)appendAXAttributedString:(id)string;	// 0x30dd88ed
- (void)appendString:(id)string;	// 0x30dd8889
- (id)attributedSubstringFromRange:(NSRange)range;	// 0x30dd8989
- (id)attributesAtIndex:(int)index effectiveRange:(NSRange *)range;	// 0x30dd8929
- (id)axAttributedStringDescription;	// 0x30dd8ec9
- (CFAttributedStringRef)cfAttributedString;	// 0x30dd865d
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x30dd85fd
- (id)coalescedFontAttributes;	// 0x30dd8a79
- (id)copyWithZone:(NSZone *)zone;	// 0x30dd8555
- (void)dealloc;	// 0x30dd85a1
- (id)description;	// 0x30dd8ef1
- (BOOL)hasAttribute:(id)attribute;	// 0x30dd8cf1
- (BOOL)isAXAttributedString;	// 0x30dd8971
- (unsigned)length;	// 0x30dd85e9
- (void)replaceString:(CFStringRef)string;	// 0x30dd8629
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x30dd8741
- (void)setAttribute:(id)attribute forKey:(id)key withRange:(NSRange)range;	// 0x30dd8781
- (void)setAttributes:(id)attributes;	// 0x30dd866d
- (void)setAttributes:(id)attributes withRange:(NSRange)range;	// 0x30dd8841
- (id)string;	// 0x30dd8975
- (id)substringFromIndex:(unsigned)index;	// 0x30dd8db9
@end
