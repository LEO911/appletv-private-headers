/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary, PFUbiquityLocation, NSDictionary, NSPersistentStore;

@interface PFUbiquityPeerRangeCache : NSObject {
	NSMutableDictionary *_cachedRanges;	// 4 = 0x4
	NSMutableDictionary *_allEntityRanges;	// 8 = 0x8
	NSMutableDictionary *_translatedGlobalIDs;	// 12 = 0xc
	NSString *_localPeerID;	// 16 = 0x10
	NSString *_storeName;	// 20 = 0x14
	PFUbiquityLocation *_ubiquityRootLocation;	// 24 = 0x18
	NSPersistentStore *_privateStore;	// 28 = 0x1c
	BOOL _cachedStorePeerRanges;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x33e153a9; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSPersistentStore *privateStore;	// G=0x33e153e9; @synthesize=_privateStore
@property(readonly, assign, nonatomic) NSString *storeName;	// G=0x33e153b9; @synthesize=_storeName
@property(readonly, assign, nonatomic) NSDictionary *translatedGlobalIDs;	// G=0x33e153c9; @synthesize=_translatedGlobalIDs
@property(readonly, assign, nonatomic) PFUbiquityLocation *ubiquityRootLocation;	// G=0x33e153d9; @synthesize=_ubiquityRootLocation
+ (void)initialize;	// 0x33e13915
+ (int)integerFromPrimaryKeyString:(id)primaryKeyString;	// 0x33e15355
+ (unsigned)peerRangeStartForPrimaryKey:(unsigned)primaryKey;	// 0x33e153a1
- (id)initWithPrivateStore:(id)privateStore storeName:(id)name ubiquityRootLocation:(id)location andLocalPeerID:(id)anId;	// 0x33e13979
- (BOOL)cachePeerRanges:(id *)ranges;	// 0x33e13bb1
- (BOOL)cacheSQLCorePeerRange:(id)range error:(id *)error;	// 0x33e13db1
- (id)cachedRangeForLocalPrimaryKey:(unsigned)localPrimaryKey ofEntityNamed:(id)entityNamed;	// 0x33e14265
- (id)cachedRangeForOwningPeerID:(id)owningPeerID andEntityName:(id)name withPrimaryKey:(unsigned)primaryKey;	// 0x33e140d5
- (id)createGlobalObjectIDForManagedObjectID:(id)managedObjectID;	// 0x33e145cd
- (id)createMapOfManagedObjectIDsForStoreSaveSnapshot:(id)storeSaveSnapshot error:(id *)error;	// 0x33e147f5
- (void)dealloc;	// 0x33e13a95
// declared property getter: - (id)localPeerID;	// 0x33e153a9
- (unsigned)localPrimaryKeyForOwningPeerID:(id)owningPeerID andEntityName:(id)name withPrimaryKey:(unsigned)primaryKey;	// 0x33e14555
// declared property getter: - (id)privateStore;	// 0x33e153e9
- (BOOL)refreshPeerRangeCache:(id *)cache;	// 0x33e13cc9
// declared property getter: - (id)storeName;	// 0x33e153b9
// declared property getter: - (id)translatedGlobalIDs;	// 0x33e153c9
// declared property getter: - (id)ubiquityRootLocation;	// 0x33e153d9
@end
