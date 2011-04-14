/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueMutableArray.h"

@class NSKeyValueSetter, NSKeyValueGetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableArray : NSKeyValueMutableArray {
@private
	NSKeyValueGetter *_valueGetter;	// 12 = 0xc
	NSKeyValueSetter *_valueSetter;	// 16 = 0x10
	BOOL _treatNilValuesLikeEmptyArrays;	// 20 = 0x14
	BOOL _padding[3];	// 21 = 0x15
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x32478f51
- (id)_createNonNilMutableArrayValueWithSelector:(SEL)selector;	// 0x3247a40d
- (id)_nonNilArrayValueWithSelector:(SEL)selector;	// 0x3247a459
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x324798f1
- (void)_proxyNonGCFinalize;	// 0x3247987d
- (void)_raiseNilValueExceptionWithSelector:(SEL)selector;	// 0x3247a569
- (void)addObject:(id)object;	// 0x3247ab39
- (unsigned)count;	// 0x3247a499
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x32479839
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x3247aa59
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x3247a86d
- (id)objectAtIndex:(unsigned)index;	// 0x3247980d
- (id)objectsAtIndexes:(id)indexes;	// 0x324797e1
- (void)removeLastObject;	// 0x3247a815
- (void)removeObjectAtIndex:(unsigned)index;	// 0x3247a7b9
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x3247a75d
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x3247a6f5
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x3247a68d
@end
