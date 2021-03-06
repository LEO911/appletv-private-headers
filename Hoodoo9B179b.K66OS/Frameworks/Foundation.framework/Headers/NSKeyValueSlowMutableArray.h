/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueMutableArray.h"

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableArray : NSKeyValueMutableArray {
@private
	NSKeyValueGetter *_valueGetter;	// 12 = 0xc
	NSKeyValueSetter *_valueSetter;	// 16 = 0x10
	BOOL _treatNilValuesLikeEmptyArrays;	// 20 = 0x14
	BOOL _padding[3];	// 21 = 0x15
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x31080e05
- (id)_createNonNilMutableArrayValueWithSelector:(SEL)selector;	// 0x310814c1
- (id)_nonNilArrayValueWithSelector:(SEL)selector;	// 0x31081039
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x31080e15
- (void)_proxyNonGCFinalize;	// 0x31080ec1
- (void)_raiseNilValueExceptionWithSelector:(SEL)selector;	// 0x31080f39
- (void)addObject:(id)object;	// 0x31081115
- (unsigned)count;	// 0x31080fd1
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x3108107d
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x310811f1
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x310812dd
- (id)objectAtIndex:(unsigned)index;	// 0x310810b5
- (id)objectsAtIndexes:(id)indexes;	// 0x310810e5
- (void)removeLastObject;	// 0x31081519
- (void)removeObjectAtIndex:(unsigned)index;	// 0x31081581
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x310815ed
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x31081659
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x310816d1
@end

