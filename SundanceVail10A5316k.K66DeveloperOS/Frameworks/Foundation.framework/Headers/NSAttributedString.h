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
+ (void)_setAttributedDictionaryClass:(Class)aClass;	// 0x31ac89a5
+ (id)allocWithZone:(NSZone *)zone;	// 0x31a02c4d
- (id)initWithCoder:(id)coder;	// 0x31a04749
- (unsigned long)_cfTypeID;	// 0x31aed28d
- (id)_createAttributedSubstringWithRange:(NSRange)range;	// 0x31aed291
- (id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x31ac89fd
- (id)attribute:(id)attribute atIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x31ac8ebd
- (id)attributedStringByWeaklyAddingAttributes:(id)attributes;	// 0x31ac8b55
- (id)attributedSubstringFromRange:(NSRange)range;	// 0x31a08685
- (id)attributedSubstringFromRange:(NSRange)range replacingCharactersInRanges:(const NSRange *)ranges numberOfRanges:(int)ranges3 withString:(id)string;	// 0x31ac8a31
- (id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x31ac89d9
- (id)attributesAtIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range3;	// 0x31a06e39
- (Class)classForCoder;	// 0x31ac91c5
- (id)copyWithZone:(NSZone *)zone;	// 0x31a08811
- (id)description;	// 0x31ac8db1
- (void)encodeWithCoder:(id)coder;	// 0x31ac91e1
- (void)enumerateAttribute:(id)attribute inRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x31ac90a9
- (void)enumerateAttributesInRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x31ac8f99
- (unsigned)hash;	// 0x31ac8c05
- (BOOL)isEqual:(id)equal;	// 0x31ac8c2d
- (BOOL)isEqualToAttributedString:(id)attributedString;	// 0x31ac8c89
- (unsigned)length;	// 0x31ac8bdd
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31ac8d79
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x31b33611
- (id)string;	// 0x31ac89b5
@end
