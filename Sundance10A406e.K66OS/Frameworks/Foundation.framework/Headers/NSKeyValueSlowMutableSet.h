/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueMutableSet.h"

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableSet : NSKeyValueMutableSet {
	NSKeyValueGetter *_valueGetter;	// 12 = 0xc
	NSKeyValueSetter *_valueSetter;	// 16 = 0x10
	BOOL _treatNilValuesLikeEmptySets;	// 20 = 0x14
	BOOL _padding[3];	// 21 = 0x15
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x355869c9
- (id)_createMutableSetValueWithSelector:(SEL)selector;	// 0x35586c91
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x355869d9
- (void)_proxyNonGCFinalize;	// 0x35586a89
- (void)_raiseNilValueExceptionWithSelector:(SEL)selector;	// 0x35586b01
- (id)_setValueWithSelector:(SEL)selector;	// 0x35586b75
- (void)addObject:(id)object;	// 0x35586cf9
- (void)addObjectsFromArray:(id)array;	// 0x35586d9d
- (unsigned)count;	// 0x35586bc9
- (void)intersectSet:(id)set;	// 0x35586e3d
- (id)member:(id)member;	// 0x35586bf5
- (void)minusSet:(id)set;	// 0x35586ead
- (id)objectEnumerator;	// 0x35586c25
- (void)removeAllObjects;	// 0x35586f1d
- (void)removeObject:(id)object;	// 0x35586fd1
- (void)setSet:(id)set;	// 0x35587041
- (void)unionSet:(id)set;	// 0x355870b9
@end
