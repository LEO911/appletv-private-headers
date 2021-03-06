/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import <Foundation/NSMutableSet.h>


@interface MFEmailSet : NSMutableSet {
	CFSetRef _set;	// 4 = 0x4
}
+ (id)set;	// 0x312d0441
- (id)init;	// 0x312d0479
- (id)initWithCapacity:(unsigned)capacity;	// 0x312d048d
- (id)_generateAllObjectsFromSelector:(SEL)selector;	// 0x312d08cd
- (void)addObject:(id)object;	// 0x312d0a51
- (id)allCommentedAddresses;	// 0x312d0969
- (id)allObjects;	// 0x312d0985
- (id)copyWithZone:(NSZone *)zone;	// 0x312d0595
- (unsigned)count;	// 0x312d05a5
- (unsigned)countByEnumeratingWithState:(XXStruct_t4MBZD *)state objects:(id *)objects count:(unsigned)count;	// 0x312d09e9
- (void)dealloc;	// 0x312d04ed
- (void)intersectSet:(id)set;	// 0x312d0d61
- (BOOL)intersectsSet:(id)set;	// 0x312d0691
- (BOOL)isEqualToSet:(id)set;	// 0x312d0821
- (BOOL)isSubsetOfSet:(id)set;	// 0x312d0759
- (id)member:(id)member;	// 0x312d05b9
- (void)minusSet:(id)set;	// 0x312d0ccd
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x312d0531
- (id)objectEnumerator;	// 0x312d09a1
- (void)removeAllObjects;	// 0x312d0c25
- (void)removeObject:(id)object;	// 0x312d0b61
- (void)setSet:(id)set;	// 0x312d0f09
- (void)unionSet:(id)set;	// 0x312d0c39
@end

