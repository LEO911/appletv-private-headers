/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSMutableAttributedString.h"


__attribute__((visibility("hidden")))
@interface NSCFAttributedString : NSMutableAttributedString {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3166fd1d
- (BOOL)_isDeallocating;	// 0x3166fccd
- (BOOL)_tryRetain;	// 0x3166fcb9
- (void)addAttribute:(id)attribute value:(id)value range:(NSRange)range;	// 0x316700c5
- (void)addAttributes:(id)attributes range:(NSRange)range;	// 0x31670099
- (void)appendAttributedString:(id)string;	// 0x31670011
- (id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x3166fd31
- (id)attribute:(id)attribute atIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x3166fd85
- (id)attributedSubstringFromRange:(NSRange)range;	// 0x3166fd3d
- (id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x3166fd25
- (id)attributesAtIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range3;	// 0x3166fd69
- (Class)classForCoder;	// 0x3166fdf5
- (id)copyWithZone:(NSZone *)zone;	// 0x3166fdbd
- (void)deleteCharactersInRange:(NSRange)range;	// 0x31670041
- (void)finalize;	// 0x3166fcd9
- (void)insertAttributedString:(id)string atIndex:(unsigned)index;	// 0x3166ffe9
- (BOOL)isEqual:(id)equal;	// 0x3166fca1
- (BOOL)isEqualToAttributedString:(id)attributedString;	// 0x3166fda5
- (unsigned)length;	// 0x3166fd2d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3166fdd9
- (oneway void)release;	// 0x3166fc99
- (void)removeAttribute:(id)attribute range:(NSRange)range;	// 0x31670105
- (void)replaceCharactersInRange:(NSRange)range withAttributedString:(id)attributedString;	// 0x3166ffbd
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x3166fe35
- (id)retain;	// 0x3166fc89
- (unsigned)retainCount;	// 0x3166fc9d
- (void)setAttributedString:(id)string;	// 0x31670069
- (void)setAttributes:(id)attributes range:(NSRange)range;	// 0x3166ff91
- (id)string;	// 0x3166fd21
@end

