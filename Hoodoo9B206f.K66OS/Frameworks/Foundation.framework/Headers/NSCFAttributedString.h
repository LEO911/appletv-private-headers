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
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31defd1d
- (BOOL)_isDeallocating;	// 0x31defccd
- (BOOL)_tryRetain;	// 0x31defcb9
- (void)addAttribute:(id)attribute value:(id)value range:(NSRange)range;	// 0x31df00c5
- (void)addAttributes:(id)attributes range:(NSRange)range;	// 0x31df0099
- (void)appendAttributedString:(id)string;	// 0x31df0011
- (id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x31defd31
- (id)attribute:(id)attribute atIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x31defd85
- (id)attributedSubstringFromRange:(NSRange)range;	// 0x31defd3d
- (id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x31defd25
- (id)attributesAtIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range3;	// 0x31defd69
- (Class)classForCoder;	// 0x31defdf5
- (id)copyWithZone:(NSZone *)zone;	// 0x31defdbd
- (void)deleteCharactersInRange:(NSRange)range;	// 0x31df0041
- (void)finalize;	// 0x31defcd9
- (void)insertAttributedString:(id)string atIndex:(unsigned)index;	// 0x31deffe9
- (BOOL)isEqual:(id)equal;	// 0x31defca1
- (BOOL)isEqualToAttributedString:(id)attributedString;	// 0x31defda5
- (unsigned)length;	// 0x31defd2d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31defdd9
- (oneway void)release;	// 0x31defc99
- (void)removeAttribute:(id)attribute range:(NSRange)range;	// 0x31df0105
- (void)replaceCharactersInRange:(NSRange)range withAttributedString:(id)attributedString;	// 0x31deffbd
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x31defe35
- (id)retain;	// 0x31defc89
- (unsigned)retainCount;	// 0x31defc9d
- (void)setAttributedString:(id)string;	// 0x31df0069
- (void)setAttributes:(id)attributes range:(NSRange)range;	// 0x31deff91
- (id)string;	// 0x31defd21
@end

