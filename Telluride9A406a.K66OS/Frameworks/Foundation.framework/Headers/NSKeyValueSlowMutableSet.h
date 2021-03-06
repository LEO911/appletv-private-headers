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
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x35e53eb1
- (id)_createMutableSetValueWithSelector:(SEL)selector;	// 0x35e54165
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x35e53ec1
- (void)_proxyNonGCFinalize;	// 0x35e53f6d
- (void)_raiseNilValueExceptionWithSelector:(SEL)selector;	// 0x35e53fe5
- (id)_setValueWithSelector:(SEL)selector;	// 0x35e54051
- (void)addObject:(id)object;	// 0x35e541cd
- (void)addObjectsFromArray:(id)array;	// 0x35e54271
- (unsigned)count;	// 0x35e540a5
- (void)intersectSet:(id)set;	// 0x35e54311
- (id)member:(id)member;	// 0x35e540d1
- (void)minusSet:(id)set;	// 0x35e54381
- (id)objectEnumerator;	// 0x35e54101
- (void)removeAllObjects;	// 0x35e543f1
- (void)removeObject:(id)object;	// 0x35e544a5
- (void)setSet:(id)set;	// 0x35e54515
- (void)unionSet:(id)set;	// 0x35e5458d
@end

