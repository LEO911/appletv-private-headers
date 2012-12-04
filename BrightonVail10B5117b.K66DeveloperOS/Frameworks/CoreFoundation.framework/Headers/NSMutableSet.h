/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSSet.h"


@interface NSMutableSet : NSSet {
}
+ (id)setWithCapacity:(unsigned)capacity;	// 0x310ed5d9
- (id)initWithCapacity:(unsigned)capacity;	// 0x31160041
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x31160065
- (void)_mutate;	// 0x310fb489
- (void)addObject:(id)object;	// 0x3115e049
- (void)addObjects:(const id *)objects count:(unsigned)count;	// 0x3115e091
- (void)addObjectsFromArray:(id)array;	// 0x310d5b25
- (void)addObjectsFromArray:(id)array range:(NSRange)range;	// 0x3115e1ed
- (void)addObjectsFromOrderedSet:(id)orderedSet;	// 0x3115e755
- (void)addObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x3115e4a1
- (void)addObjectsFromSet:(id)set;	// 0x3115e8c1
- (void)intersectOrderedSet:(id)set;	// 0x3115eb75
- (void)intersectSet:(id)set;	// 0x310bc52d
- (void)minusOrderedSet:(id)set;	// 0x3115ef21
- (void)minusSet:(id)set;	// 0x310aff7d
- (void)removeAllObjects;	// 0x310fb2d5
- (void)removeObject:(id)object;	// 0x3115e06d
- (void)removeObjectsInArray:(id)array;	// 0x3115f275
- (void)removeObjectsInArray:(id)array range:(NSRange)range;	// 0x3115f0b9
- (void)removeObjectsInOrderedSet:(id)orderedSet;	// 0x3115f59d
- (void)removeObjectsInOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x3115f3e1
- (void)removeObjectsInSet:(id)set;	// 0x3115f709
- (void)replaceObject:(id)object;	// 0x3115f9d5
- (void)setArray:(id)array;	// 0x3115fb7d
- (void)setObject:(id)object;	// 0x3115faa9
- (void)setOrderedSet:(id)set;	// 0x3115fcf9
- (void)setSet:(id)set;	// 0x310eed59
- (void)unionOrderedSet:(id)set;	// 0x3115fea5
- (void)unionSet:(id)set;	// 0x310a0a6d
@end
