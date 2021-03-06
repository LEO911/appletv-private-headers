/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueMutableSet.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSKeyValueNotifyingMutableSet : NSKeyValueMutableSet {
@private
	NSMutableSet *_mutableSet;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x31083a31
+ (id)_proxyShare;	// 0x31083a41
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x31083a71
- (void)_proxyNonGCFinalize;	// 0x31083aed
- (void)addObject:(id)object;	// 0x31083ba1
- (void)addObjectsFromArray:(id)array;	// 0x31083c6d
- (unsigned)count;	// 0x31083b41
- (void)intersectSet:(id)set;	// 0x31083d3d
- (id)member:(id)member;	// 0x31083b61
- (void)minusSet:(id)set;	// 0x31083dc5
- (id)objectEnumerator;	// 0x31083b81
- (void)removeAllObjects;	// 0x31083e4d
- (void)removeObject:(id)object;	// 0x31083eed
- (void)setSet:(id)set;	// 0x31083fb9
- (void)unionSet:(id)set;	// 0x31084041
@end

