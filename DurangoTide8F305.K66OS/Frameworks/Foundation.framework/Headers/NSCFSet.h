/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableSet.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSCFSet : NSMutableSet {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x327bba51
- (unsigned)_trueCount;	// 0x327bbcc1
- (void)addObject:(id)object;	// 0x327bbfad
- (Class)classForCoder;	// 0x327bbc89
- (id)copyWithZone:(NSZone *)zone;	// 0x327bc6e1
- (unsigned)count;	// 0x327bbccd
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x327bbcf9
- (void)finalize;	// 0x327bbc4d
- (void)getObjects:(id *)objects;	// 0x327bc1e9
- (unsigned)hash;	// 0x327bbc19
- (BOOL)isEqual:(id)equal;	// 0x327bbbcd
- (id)member:(id)member;	// 0x327bbcd9
- (void)minusSet:(id)set;	// 0x327bc09d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x327bc711
- (id)objectEnumerator;	// 0x327bbd09
- (oneway void)release;	// 0x327bbc35
- (void)removeAllObjects;	// 0x327bc181
- (void)removeObject:(id)object;	// 0x327bc025
- (id)retain;	// 0x327bbc25
- (unsigned)retainCount;	// 0x327bbc41
- (void)setSet:(id)set;	// 0x327bc205
- (void)unionSet:(id)set;	// 0x327bbed1
@end

