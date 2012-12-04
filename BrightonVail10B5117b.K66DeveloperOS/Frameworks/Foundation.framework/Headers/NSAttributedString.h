/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"
#import "Foundation-Structs.h"


@interface NSAttributedString : NSObject <NSCopying, NSMutableCopying, NSCoding> {
}
+ (void)_setAttributedDictionaryClass:(Class)aClass;	// 0x31a39875
+ (id)allocWithZone:(NSZone *)zone;	// 0x3194f6bd
- (id)initWithCoder:(id)coder;	// 0x31a3a0e9
- (unsigned long)_cfTypeID;	// 0x31a5afcd
- (id)_createAttributedSubstringWithRange:(NSRange)range;	// 0x31a5afd1
- (id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x319990d9
- (id)attribute:(id)attribute atIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x3196cb45
- (id)attributedStringByWeaklyAddingAttributes:(id)attributes;	// 0x31a39b7d
- (id)attributedSubstringFromRange:(NSRange)range;	// 0x31a398cd
- (id)attributedSubstringFromRange:(NSRange)range replacingCharactersInRanges:(const NSRange *)ranges numberOfRanges:(int)ranges3 withString:(id)string;	// 0x31a39a59
- (id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x31a398a9
- (id)attributesAtIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range3;	// 0x3196c699
- (Class)classForCoder;	// 0x31a39d39
- (id)copyWithZone:(NSZone *)zone;	// 0x3196c7d5
- (id)description;	// 0x31a39c2d
- (void)encodeWithCoder:(id)coder;	// 0x31a39d55
- (void)enumerateAttribute:(id)attribute inRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x3196ca29
- (void)enumerateAttributesInRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x3196c589
- (unsigned)hash;	// 0x31999231
- (BOOL)isEqual:(id)equal;	// 0x31999259
- (BOOL)isEqualToAttributedString:(id)attributedString;	// 0x31980e25
- (unsigned)length;	// 0x31a39c05
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3196b461
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x31aa33d1
- (id)string;	// 0x31a39885
@end
