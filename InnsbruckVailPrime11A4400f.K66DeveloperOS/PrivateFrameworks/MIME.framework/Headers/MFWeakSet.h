/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import <Foundation/NSMutableSet.h>

@class NSLock;

@interface MFWeakSet : NSMutableSet {
	NSLock *_lock;	// 4 = 0x4
	unsigned long _gen;	// 8 = 0x8
	CFDictionaryRef _objects;	// 12 = 0xc
}
+ (id)set;	// 0x312eca91
+ (id)setWithArray:(id)array;	// 0x312ecc2d
+ (id)setWithCapacity:(unsigned)capacity;	// 0x312ecc69
+ (id)setWithObject:(id)object;	// 0x312ecac9
+ (id)setWithObjects:(id)objects;	// 0x312ecb29
+ (id)setWithObjects:(const id *)objects count:(unsigned)count;	// 0x312ecae9
+ (id)setWithSet:(id)set;	// 0x312ecbf1
- (id)init;	// 0x312ecfe9
- (id)initWithArray:(id)array;	// 0x312ece59
- (id)initWithCapacity:(unsigned)capacity;	// 0x312ecf4d
- (id)initWithCoder:(id)coder;	// 0x312ec381
- (id)initWithObjects:(id)objects;	// 0x312ecd0d
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x312ecca5
- (id)initWithSet:(id)set;	// 0x312ecdb1
- (id)initWithSet:(id)set copyItems:(BOOL)items;	// 0x312ecdc5
- (id)_copyAllItems;	// 0x312ebfb9
- (void)addObject:(id)object;	// 0x312ed061
- (void)addObjectsFromArray:(id)array;	// 0x312ed149
- (id)allObjects;	// 0x312ec0f5
- (id)anyObject;	// 0x312ec1a5
- (BOOL)containsObject:(id)object;	// 0x312ec285
- (id)copyWithZone:(NSZone *)zone;	// 0x312ec11d
- (unsigned)count;	// 0x312ebe29
- (unsigned)countByEnumeratingWithState:(XXStruct_t4MBZD *)state objects:(id *)objects count:(unsigned)count;	// 0x312ebf35
- (void)dealloc;	// 0x312ecffd
- (id)description;	// 0x312ec2a1
- (id)descriptionWithLocale:(id)locale;	// 0x312ec2b5
- (void)encodeWithCoder:(id)coder;	// 0x312ec305
- (void)enumerateObjectsUsingBlock:(id)block;	// 0x312ec855
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x312ec869
- (void)intersectSet:(id)set;	// 0x312ed26d
- (BOOL)intersectsSet:(id)set;	// 0x312ec3e9
- (BOOL)isEqualToSet:(id)set;	// 0x312ec4cd
- (BOOL)isSubsetOfSet:(id)set;	// 0x312ec5c1
- (void)makeObjectsPerformSelector:(SEL)selector;	// 0x312ec68d
- (void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;	// 0x312ec6a1
- (id)member:(id)member;	// 0x312ebe79
- (void)minusSet:(id)set;	// 0x312ed365
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x312ec161
- (id)objectEnumerator;	// 0x312ebf0d
- (id)objectsPassingTest:(id)test;	// 0x312ec945
- (id)objectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x312ec959
- (void)removeAllObjects;	// 0x312ed435
- (void)removeObject:(id)object;	// 0x312ed0e5
- (id)setByAddingObject:(id)object;	// 0x312ec755
- (id)setByAddingObjectsFromArray:(id)array;	// 0x312ec7c1
- (id)setByAddingObjectsFromSet:(id)set;	// 0x312ec791
- (void)setSet:(id)set;	// 0x312ed551
- (void)unionSet:(id)set;	// 0x312ed495
@end
