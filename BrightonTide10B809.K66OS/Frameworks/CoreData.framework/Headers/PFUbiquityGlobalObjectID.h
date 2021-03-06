/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSString, NSManagedObjectID;

@interface PFUbiquityGlobalObjectID : NSObject <NSCopying> {
	NSString *_storeName;	// 4 = 0x4
	NSString *_entityName;	// 8 = 0x8
	NSString *_primaryKey;	// 12 = 0xc
	NSString *_owningPeerID;	// 16 = 0x10
	unsigned _hash;	// 20 = 0x14
	NSManagedObjectID *_managedObjectID;	// 24 = 0x18
	unsigned _primaryKeyInteger;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSString *entityName;	// G=0x30fc1649; @synthesize=_entityName
@property(readonly, assign, nonatomic) unsigned hash;	// G=0x30fc1679; @synthesize=_hash
@property(retain, nonatomic) NSManagedObjectID *managedObjectID;	// G=0x30fc1689; S=0x30fc1699; @synthesize=_managedObjectID
@property(readonly, assign, nonatomic) NSString *owningPeerID;	// G=0x30fc1669; @synthesize=_owningPeerID
@property(readonly, assign, nonatomic) NSString *primaryKey;	// G=0x30fc1659; @synthesize=_primaryKey
@property(readonly, assign, nonatomic) unsigned primaryKeyInteger;	// G=0x30fc16a9; @synthesize=_primaryKeyInteger
@property(readonly, assign, nonatomic) NSString *storeName;	// G=0x30fc1639; @synthesize=_storeName
- (id)init;	// 0x30fc0afd
- (id)initFromCopyWithStoreName:(id)storeName entityName:(id)name primaryKey:(id)key peerID:(id)anId andHash:(unsigned)hash managedObjectID:(id)anId6 primaryKeyInteger:(unsigned)integer;	// 0x30fc0f6d
- (id)initWithCompressedString:(id)compressedString forStoreWithName:(id)name andEntityNames:(id)names primaryKeys:(id)keys peerIDs:(id)ids;	// 0x30fc0e21
- (id)initWithStoreName:(id)storeName entityName:(id)name primaryKey:(id)key andPeerID:(id)anId;	// 0x30fc0c89
- (id)initWithStoreName:(id)storeName entityName:(id)name primaryKeyInteger:(unsigned)integer andPeerID:(id)anId;	// 0x30fc0b9d
- (id)initWithString:(id)string;	// 0x30fc0d35
- (int)compare:(id)compare;	// 0x30fc1309
- (id)copyWithZone:(NSZone *)zone;	// 0x30fc103d
- (id)createCompressedStringWithEntityNameToIndex:(id)index primaryKeyToIndex:(id)index2 peerIDToIndex:(id)index3;	// 0x30fc1431
- (id)createGlobalIDString;	// 0x30fc154d
- (void)dealloc;	// 0x30fc10f1
- (id)description;	// 0x30fc11b1
// declared property getter: - (id)entityName;	// 0x30fc1649
// declared property getter: - (unsigned)hash;	// 0x30fc1679
- (BOOL)isEqual:(id)equal;	// 0x30fc12d5
// declared property getter: - (id)managedObjectID;	// 0x30fc1689
// declared property getter: - (id)owningPeerID;	// 0x30fc1669
// declared property getter: - (id)primaryKey;	// 0x30fc1659
// declared property getter: - (unsigned)primaryKeyInteger;	// 0x30fc16a9
// declared property setter: - (void)setManagedObjectID:(id)anId;	// 0x30fc1699
// declared property getter: - (id)storeName;	// 0x30fc1639
- (void)updateHash;	// 0x30fc1235
@end

