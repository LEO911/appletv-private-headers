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
+ (id)setWithCapacity:(unsigned)capacity;	// 0x319f4491
- (id)initWithCapacity:(unsigned)capacity;	// 0x31a64aad
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x31a64ad1
- (void)_mutate;	// 0x319b206d
- (void)addObject:(id)object;	// 0x31a62ab1
- (void)addObjects:(const id *)objects count:(unsigned)count;	// 0x31a62af9
- (void)addObjectsFromArray:(id)array;	// 0x319e4955
- (void)addObjectsFromArray:(id)array range:(NSRange)range;	// 0x31a62c85
- (void)addObjectsFromOrderedSet:(id)orderedSet;	// 0x31a631e5
- (void)addObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x31a62f35
- (void)addObjectsFromSet:(id)set;	// 0x31a63329
- (void)intersectOrderedSet:(id)set;	// 0x31a635a9
- (void)intersectSet:(id)set;	// 0x319ea799
- (void)minusOrderedSet:(id)set;	// 0x31a63961
- (void)minusSet:(id)set;	// 0x319b52d5
- (void)removeAllObjects;	// 0x31a63ad1
- (void)removeObject:(id)object;	// 0x31a62ad5
- (void)removeObjectsInArray:(id)array;	// 0x31a63e0d
- (void)removeObjectsInArray:(id)array range:(NSRange)range;	// 0x31a63c71
- (void)removeObjectsInOrderedSet:(id)orderedSet;	// 0x31a640ed
- (void)removeObjectsInOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x31a63f51
- (void)removeObjectsInSet:(id)set;	// 0x31a64231
- (void)replaceObject:(id)object;	// 0x31a644c9
- (void)setArray:(id)array;	// 0x31a64665
- (void)setObject:(id)object;	// 0x31a64599
- (void)setOrderedSet:(id)set;	// 0x31a647bd
- (void)setSet:(id)set;	// 0x31a05f61
- (void)unionOrderedSet:(id)set;	// 0x31a6493d
- (void)unionSet:(id)set;	// 0x319b1cbd
@end

