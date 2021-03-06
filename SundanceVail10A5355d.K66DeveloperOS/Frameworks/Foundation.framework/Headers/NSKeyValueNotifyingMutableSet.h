/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueMutableSet.h"


__attribute__((visibility("hidden")))
@interface NSKeyValueNotifyingMutableSet : NSKeyValueMutableSet {
	NSMutableSet *_mutableSet;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x346bda01
+ (id)_proxyShare;	// 0x346bda11
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x346bda41
- (void)_proxyNonGCFinalize;	// 0x346bdabd
- (void)addObject:(id)object;	// 0x346bdb6d
- (void)addObjectsFromArray:(id)array;	// 0x346bdc35
- (unsigned)count;	// 0x346bdb0d
- (void)intersectSet:(id)set;	// 0x346bdcfd
- (id)member:(id)member;	// 0x346bdb2d
- (void)minusSet:(id)set;	// 0x346bdd81
- (id)objectEnumerator;	// 0x346bdb4d
- (void)removeAllObjects;	// 0x346bde05
- (void)removeObject:(id)object;	// 0x346bdea1
- (void)setSet:(id)set;	// 0x346bdf69
- (void)unionSet:(id)set;	// 0x346bdfed
@end

