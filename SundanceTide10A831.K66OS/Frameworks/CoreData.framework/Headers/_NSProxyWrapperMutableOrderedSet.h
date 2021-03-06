/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "_NSNotifyingWrapperMutableOrderedSet.h"
#import "CoreData-Structs.h"

@class _NSFaultingMutableOrderedSetMutationMethods;

@interface _NSProxyWrapperMutableOrderedSet : _NSNotifyingWrapperMutableOrderedSet {
	_NSFaultingMutableOrderedSetMutationMethods *_mutationMethods;	// 16 = 0x10
}
- (id)initWithContainer:(id)container key:(id)key mutableOrderedSet:(id)set mutationMethods:(id)methods;	// 0x33e12dd9
- (void)addObject:(id)object;	// 0x33e131c9
- (void)addObjects:(const id *)objects count:(unsigned)count;	// 0x33e13321
- (void)addObjectsFromArray:(id)array;	// 0x33e1355d
- (void)dealloc;	// 0x33e12d89
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x33e12e35
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x33e1374d
- (void)insertObjects:(id *)objects count:(unsigned)count atIndex:(unsigned)index;	// 0x33e13619
- (void)intersectOrderedSet:(id)set;	// 0x33e13e01
- (void)intersectSet:(id)set;	// 0x33e14181
- (void)minusOrderedSet:(id)set;	// 0x33e13f6d
- (void)minusSet:(id)set;	// 0x33e142e9
- (void)removeAllObjects;	// 0x33e13ba1
- (void)removeObjectAtIndex:(unsigned)index;	// 0x33e12fa9
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x33e13a45
- (void)removeObjectsInArray:(id)array;	// 0x33e13c9d
- (void)removeObjectsInRange:(NSRange)range;	// 0x33e1395d
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x33e13059
- (void)sortRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x33e14569
- (void)sortUsingComparator:(id)comparator;	// 0x33e1450d
- (void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x33e14539
- (void)unionOrderedSet:(id)set;	// 0x33e140c5
- (void)unionSet:(id)set;	// 0x33e14451
@end

