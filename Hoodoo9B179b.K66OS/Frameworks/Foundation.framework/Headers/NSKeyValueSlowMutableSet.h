/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueMutableSet.h"
#import "Foundation-Structs.h"

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableSet : NSKeyValueMutableSet {
@private
	NSKeyValueGetter *_valueGetter;	// 12 = 0xc
	NSKeyValueSetter *_valueSetter;	// 16 = 0x10
	BOOL _treatNilValuesLikeEmptySets;	// 20 = 0x14
	BOOL _padding[3];	// 21 = 0x15
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x31082ea1
- (id)_createMutableSetValueWithSelector:(SEL)selector;	// 0x31083155
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x31082eb1
- (void)_proxyNonGCFinalize;	// 0x31082f5d
- (void)_raiseNilValueExceptionWithSelector:(SEL)selector;	// 0x31082fd5
- (id)_setValueWithSelector:(SEL)selector;	// 0x31083041
- (void)addObject:(id)object;	// 0x310831bd
- (void)addObjectsFromArray:(id)array;	// 0x31083261
- (unsigned)count;	// 0x31083095
- (void)intersectSet:(id)set;	// 0x31083301
- (id)member:(id)member;	// 0x310830c1
- (void)minusSet:(id)set;	// 0x31083371
- (id)objectEnumerator;	// 0x310830f1
- (void)removeAllObjects;	// 0x310833e1
- (void)removeObject:(id)object;	// 0x31083495
- (void)setSet:(id)set;	// 0x31083505
- (void)unionSet:(id)set;	// 0x3108357d
@end

