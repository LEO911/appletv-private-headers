/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSSet.h"
#import "CoreFoundation-Structs.h"


@interface NSMutableSet : NSSet {
}
+ (id)setWithCapacity:(unsigned)capacity;	// 0x3272a491
- (id)initWithCapacity:(unsigned)capacity;	// 0x3279aaad
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x3279aad1
- (void)_mutate;	// 0x326e806d
- (void)addObject:(id)object;	// 0x32798ab1
- (void)addObjects:(const id *)objects count:(unsigned)count;	// 0x32798af9
- (void)addObjectsFromArray:(id)array;	// 0x3271a955
- (void)addObjectsFromArray:(id)array range:(NSRange)range;	// 0x32798c85
- (void)addObjectsFromOrderedSet:(id)orderedSet;	// 0x327991e5
- (void)addObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x32798f35
- (void)addObjectsFromSet:(id)set;	// 0x32799329
- (void)intersectOrderedSet:(id)set;	// 0x327995a9
- (void)intersectSet:(id)set;	// 0x32720799
- (void)minusOrderedSet:(id)set;	// 0x32799961
- (void)minusSet:(id)set;	// 0x326eb2d5
- (void)removeAllObjects;	// 0x32799ad1
- (void)removeObject:(id)object;	// 0x32798ad5
- (void)removeObjectsInArray:(id)array;	// 0x32799e0d
- (void)removeObjectsInArray:(id)array range:(NSRange)range;	// 0x32799c71
- (void)removeObjectsInOrderedSet:(id)orderedSet;	// 0x3279a0ed
- (void)removeObjectsInOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x32799f51
- (void)removeObjectsInSet:(id)set;	// 0x3279a231
- (void)replaceObject:(id)object;	// 0x3279a4c9
- (void)setArray:(id)array;	// 0x3279a665
- (void)setObject:(id)object;	// 0x3279a599
- (void)setOrderedSet:(id)set;	// 0x3279a7bd
- (void)setSet:(id)set;	// 0x3273bf61
- (void)unionOrderedSet:(id)set;	// 0x3279a93d
- (void)unionSet:(id)set;	// 0x326e7cbd
@end

