/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "__NSCFType.h"


__attribute__((visibility("hidden")))
@interface __NSCFCharacterSet : __NSCFType {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x348cdb75
- (BOOL)_isDeallocating;	// 0x348cdb21
- (BOOL)_tryRetain;	// 0x348cdb0d
- (void)addCharactersInRange:(NSRange)range;	// 0x34887141
- (void)addCharactersInString:(id)string;	// 0x34899da1
- (id)bitmapRepresentation;	// 0x348cdba9
- (BOOL)characterIsMember:(unsigned short)member;	// 0x34883931
- (Class)classForCoder;	// 0x348cdbf5
- (id)copyWithZone:(NSZone *)zone;	// 0x34880d85
- (void)encodeWithCoder:(id)coder;	// 0x348cdc21
- (void)finalize;	// 0x348cdb31
- (void)formIntersectionWithCharacterSet:(id)characterSet;	// 0x348cdbe5
- (void)formUnionWithCharacterSet:(id)characterSet;	// 0x348802c5
- (BOOL)hasMemberInPlane:(unsigned char)plane;	// 0x348cdb99
- (unsigned)hash;	// 0x348cdb09
- (void)invert;	// 0x34880141
- (id)invertedSet;	// 0x34899f1d
- (BOOL)isEqual:(id)equal;	// 0x348cdaf1
- (BOOL)isSupersetOfSet:(id)set;	// 0x348cdb89
- (BOOL)longCharacterIsMember:(unsigned long)member;	// 0x348cdb79
- (void)makeCharacterSetCompact;	// 0x348cdbed
- (void)makeCharacterSetFast;	// 0x348cdbf1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3488011d
- (oneway void)release;	// 0x34880da9
- (void)removeCharactersInRange:(NSRange)range;	// 0x348cdbd5
- (void)removeCharactersInString:(id)string;	// 0x348cdbdd
- (id)retain;	// 0x348873a9
- (unsigned)retainCount;	// 0x348cdb2d
@end

