/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueMutableOrderedSet.h"


__attribute__((visibility("hidden")))
@interface NSKeyValueIvarMutableOrderedSet : NSKeyValueMutableOrderedSet {
	objc_ivar *_ivar;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x34e3bf39
- (id)_nonNilMutableOrderedSetValueWithSelector:(SEL)selector;	// 0x34e3c091
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x34e3bf49
- (void)_proxyNonGCFinalize;	// 0x34e3bfa1
- (void)_raiseNilValueExceptionWithSelector:(SEL)selector;	// 0x34e3c01d
- (unsigned)count;	// 0x34e3bfe1
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x34e3c0d5
- (unsigned)indexOfObject:(id)object;	// 0x34e3c10d
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x34e3c1b5
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x34e3c25d
- (id)objectAtIndex:(unsigned)index;	// 0x34e3c155
- (id)objectsAtIndexes:(id)indexes;	// 0x34e3c185
- (void)removeObjectAtIndex:(unsigned)index;	// 0x34e3c3f1
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x34e3c421
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x34e3c451
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x34e3c485
@end

