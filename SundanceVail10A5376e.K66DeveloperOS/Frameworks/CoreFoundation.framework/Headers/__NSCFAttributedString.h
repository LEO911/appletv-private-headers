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
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3562eced
- (BOOL)_isDeallocating;	// 0x3562ec85
- (BOOL)_tryRetain;	// 0x3562ec75
- (void)addAttribute:(id)attribute value:(id)value range:(NSRange)range;	// 0x3562f09d
- (void)addAttributes:(id)attributes range:(NSRange)range;	// 0x3562f069
- (void)appendAttributedString:(id)string;	// 0x3562efe1
- (id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x3562ed01
- (id)attribute:(id)attribute atIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x3562ed59
- (id)attributedSubstringFromRange:(NSRange)range;	// 0x3562ed0d
- (id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x3562ecf5
- (id)attributesAtIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range3;	// 0x3562ed39
- (Class)classForCoder;	// 0x3562edcd
- (id)copyWithZone:(NSZone *)zone;	// 0x3562ed91
- (void)deleteCharactersInRange:(NSRange)range;	// 0x3562f011
- (void)finalize;	// 0x3562ecad
- (void)insertAttributedString:(id)string atIndex:(unsigned)index;	// 0x3562efb9
- (BOOL)isEqual:(id)equal;	// 0x3562ec95
- (BOOL)isEqualToAttributedString:(id)attributedString;	// 0x3562ed79
- (unsigned)length;	// 0x3562ecfd
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3562edad
- (oneway void)release;	// 0x3562ec71
- (void)removeAttribute:(id)attribute range:(NSRange)range;	// 0x3562f0f1
- (void)replaceCharactersInRange:(NSRange)range withAttributedString:(id)attributedString;	// 0x3562ef8d
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x3562edfd
- (id)retain;	// 0x3562ec61
- (unsigned)retainCount;	// 0x3562ec91
- (void)setAttributedString:(id)string;	// 0x3562f039
- (void)setAttributes:(id)attributes range:(NSRange)range;	// 0x3562ef59
- (id)string;	// 0x3562ecf1
@end

