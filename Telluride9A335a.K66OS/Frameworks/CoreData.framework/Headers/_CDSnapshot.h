/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSManagedObjectID;

__attribute__((visibility("hidden")))
@interface _CDSnapshot : NSObject <NSCopying, NSMutableCopying> {
@private
	int _cd_rc;	// 4 = 0x4
	int _cd_version;	// 8 = 0x8
	NSManagedObjectID *_cd_objectID;	// 12 = 0xc
	snapshotFlags_st _cd_flags;	// 16 = 0x10
	unsigned _cd_nullFlags_;	// 20 = 0x14
}
+ (void)_entityDeallocated;	// 0x331c360d
+ (id)alloc;	// 0x331c3759
+ (id)allocWithZone:(NSZone *)zone;	// 0x331c3751
+ (Class)classForEntity:(id)entity;	// 0x330d9dbd
+ (void)initialize;	// 0x330ec9e1
+ (unsigned)newBatchAllocation:(id *)allocation count:(unsigned)count withOwnedObjectIDs:(id *)ownedObjectIDs;	// 0x330da6dd
- (id)initWithObjectID:(id)objectID;	// 0x331c41d5
- (id)_descriptionValues;	// 0x331c3ae1
- (BOOL)_isDeallocating;	// 0x331c4019
- (BOOL)_tryRetain;	// 0x331c4041
- (id)copy;	// 0x331c4179
- (id)copyWithZone:(NSZone *)zone;	// 0x331c41c5
- (void)dealloc;	// 0x330e2455
- (id)description;	// 0x331c3a2d
- (id)entity;	// 0x331c3761
- (void)finalize;	// 0x331c3725
- (unsigned)hash;	// 0x331c3611
- (BOOL)isEqual:(id)equal;	// 0x331c3675
- (id)mutableCopy;	// 0x331c409d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x331c4169
- (id)objectID;	// 0x331c3695
- (oneway void)release;	// 0x330e2009
- (id)retain;	// 0x330e0849
- (unsigned)retainCount;	// 0x331c3681
- (void)setValue:(id)value forKey:(id)key;	// 0x331c3781
- (id)valueForKey:(id)key;	// 0x331c3915
@end

