/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "__NSCFType.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSCFAttributedString : __NSCFType {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x310d28cd
- (BOOL)_isDeallocating;	// 0x310d2865
- (BOOL)_tryRetain;	// 0x310d2855
- (void)addAttribute:(id)attribute value:(id)value range:(NSRange)range;	// 0x310d2c7d
- (void)addAttributes:(id)attributes range:(NSRange)range;	// 0x310d2c49
- (void)appendAttributedString:(id)string;	// 0x310d2bc1
- (id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x310d28e1
- (id)attribute:(id)attribute atIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x310d2939
- (id)attributedSubstringFromRange:(NSRange)range;	// 0x310d28ed
- (id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x310d28d5
- (id)attributesAtIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range3;	// 0x310d2919
- (Class)classForCoder;	// 0x310d29ad
- (id)copyWithZone:(NSZone *)zone;	// 0x310d2971
- (void)deleteCharactersInRange:(NSRange)range;	// 0x310d2bf1
- (void)finalize;	// 0x310d288d
- (void)insertAttributedString:(id)string atIndex:(unsigned)index;	// 0x310d2b99
- (BOOL)isEqual:(id)equal;	// 0x310d2875
- (BOOL)isEqualToAttributedString:(id)attributedString;	// 0x310d2959
- (unsigned)length;	// 0x310d28dd
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x310d298d
- (oneway void)release;	// 0x310d2851
- (void)removeAttribute:(id)attribute range:(NSRange)range;	// 0x310d2cd1
- (void)replaceCharactersInRange:(NSRange)range withAttributedString:(id)attributedString;	// 0x310d2b6d
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x310d29dd
- (id)retain;	// 0x310d2841
- (unsigned)retainCount;	// 0x310d2871
- (void)setAttributedString:(id)string;	// 0x310d2c19
- (void)setAttributes:(id)attributes range:(NSRange)range;	// 0x310d2b39
- (id)string;	// 0x310d28d1
@end
