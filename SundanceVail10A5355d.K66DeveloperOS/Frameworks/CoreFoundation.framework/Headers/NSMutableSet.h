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
+ (id)setWithCapacity:(unsigned)capacity;	// 0x35cef55d
- (id)initWithCapacity:(unsigned)capacity;	// 0x35d6a935
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x35d6a959
- (void)_mutate;	// 0x35cad7d1
- (void)addObject:(id)object;	// 0x35d68789
- (void)addObjects:(const id *)objects count:(unsigned)count;	// 0x35d687d1
- (void)addObjectsFromArray:(id)array;	// 0x35cdf711
- (void)addObjectsFromArray:(id)array range:(NSRange)range;	// 0x35d6892d
- (void)addObjectsFromOrderedSet:(id)orderedSet;	// 0x35d68e95
- (void)addObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x35d68be1
- (void)addObjectsFromSet:(id)set;	// 0x35d69001
- (void)intersectOrderedSet:(id)set;	// 0x35d692b5
- (void)intersectSet:(id)set;	// 0x35ce5725
- (void)minusOrderedSet:(id)set;	// 0x35d69661
- (void)minusSet:(id)set;	// 0x35cb04c9
- (void)removeAllObjects;	// 0x35d697f9
- (void)removeObject:(id)object;	// 0x35d687ad
- (void)removeObjectsInArray:(id)array;	// 0x35d69b69
- (void)removeObjectsInArray:(id)array range:(NSRange)range;	// 0x35d699ad
- (void)removeObjectsInOrderedSet:(id)orderedSet;	// 0x35d69e91
- (void)removeObjectsInOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x35d69cd5
- (void)removeObjectsInSet:(id)set;	// 0x35d69ffd
- (void)replaceObject:(id)object;	// 0x35d6a2c9
- (void)setArray:(id)array;	// 0x35d6a471
- (void)setObject:(id)object;	// 0x35d6a39d
- (void)setOrderedSet:(id)set;	// 0x35d6a5ed
- (void)setSet:(id)set;	// 0x35d004c9
- (void)unionOrderedSet:(id)set;	// 0x35d6a799
- (void)unionSet:(id)set;	// 0x35cad405
@end

