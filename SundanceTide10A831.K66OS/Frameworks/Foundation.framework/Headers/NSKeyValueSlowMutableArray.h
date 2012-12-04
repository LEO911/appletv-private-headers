/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueMutableArray.h"
#import "Foundation-Structs.h"

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableArray : NSKeyValueMutableArray {
	NSKeyValueGetter *_valueGetter;	// 12 = 0xc
	NSKeyValueSetter *_valueSetter;	// 16 = 0x10
	BOOL _treatNilValuesLikeEmptyArrays;	// 20 = 0x14
	BOOL _padding[3];	// 21 = 0x15
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x32585971
- (id)_createNonNilMutableArrayValueWithSelector:(SEL)selector;	// 0x3258601d
- (id)_nonNilArrayValueWithSelector:(SEL)selector;	// 0x32585ba9
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x32585981
- (void)_proxyNonGCFinalize;	// 0x32585a31
- (void)_raiseNilValueExceptionWithSelector:(SEL)selector;	// 0x32585aa9
- (void)addObject:(id)object;	// 0x32585c85
- (unsigned)count;	// 0x32585b41
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x32585bed
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x32585d5d
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x32585e49
- (id)objectAtIndex:(unsigned)index;	// 0x32585c25
- (id)objectsAtIndexes:(id)indexes;	// 0x32585c55
- (void)removeLastObject;	// 0x32586075
- (void)removeObjectAtIndex:(unsigned)index;	// 0x325860dd
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x32586149
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x325861b5
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x3258622d
@end
