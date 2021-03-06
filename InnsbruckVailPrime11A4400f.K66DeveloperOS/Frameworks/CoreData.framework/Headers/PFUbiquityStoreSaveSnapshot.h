/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import </libobjc.A.h>

@class NSMutableDictionary, PFUbiquityGlobalObjectIDCache, NSString, NSArray, NSDictionary, NSNumber, PFUbiquityKnowledgeVector, NSMutableArray;

@interface PFUbiquityStoreSaveSnapshot : NSObject {
	NSMutableArray *_entityNames;	// 4 = 0x4
	NSMutableArray *_peerIDs;	// 8 = 0x8
	NSMutableArray *_globalObjectIDs;	// 12 = 0xc
	NSMutableArray *_primaryKeys;	// 16 = 0x10
	NSMutableDictionary *_managedObjectIDToGlobalObjectID;	// 20 = 0x14
	NSMutableDictionary *_globalObjectIDToPermanentManagedObjectID;	// 24 = 0x18
	NSMutableDictionary *_entityNameToIndex;	// 28 = 0x1c
	NSMutableDictionary *_peerIDToIndex;	// 32 = 0x20
	NSMutableDictionary *_primaryKeyToIndex;	// 36 = 0x24
	NSMutableDictionary *_globalObjectIDToIndex;	// 40 = 0x28
	NSMutableDictionary *_insertedObjects;	// 44 = 0x2c
	NSMutableDictionary *_updatedObjects;	// 48 = 0x30
	NSMutableDictionary *_deletedObjects;	// 52 = 0x34
	NSMutableDictionary *_peerStates;	// 56 = 0x38
	NSNumber *_transactionNumber;	// 60 = 0x3c
	NSString *_exportingPeerID;	// 64 = 0x40
	NSString *_localPeerID;	// 68 = 0x44
	NSDictionary *_storeOptions;	// 72 = 0x48
	NSMutableArray *_filesInsertedInTransaction;	// 76 = 0x4c
	NSArray *_filesDeletedInTransaction;	// 80 = 0x50
	PFUbiquityKnowledgeVector *_storeKV;	// 84 = 0x54
	PFUbiquityGlobalObjectIDCache *_gidCache;	// 88 = 0x58
}
@property(readonly, assign, nonatomic) NSDictionary *deletedObjects;	// G=0x2d194dc5; @synthesize=_deletedObjects
@property(readonly, assign, nonatomic) NSDictionary *entityNameToIndex;	// G=0x2d194e35; @synthesize=_entityNameToIndex
@property(readonly, assign, nonatomic) NSArray *entityNames;	// G=0x2d194d65; @synthesize=_entityNames
@property(retain, nonatomic) NSString *exportingPeerID;	// G=0x2d194e05; S=0x2d194e15; @synthesize=_exportingPeerID
@property(readonly, retain) NSArray *filesDeletedInTransaction;	// G=0x2d192f65; converted property
@property(readonly, retain) NSMutableArray *filesInsertedInTransaction;	// G=0x2d192f55; converted property
@property(retain, nonatomic) PFUbiquityGlobalObjectIDCache *globalObjectIDCache;	// G=0x2d194ec5; S=0x2d194ed5; @synthesize=_gidCache
@property(readonly, assign, nonatomic) NSDictionary *globalObjectIDToIndex;	// G=0x2d194e65; @synthesize=_globalObjectIDToIndex
@property(readonly, assign, nonatomic) NSDictionary *globalObjectIDToPermanentManagedObjectID;	// G=0x2d194e75; @synthesize=_globalObjectIDToPermanentManagedObjectID
@property(readonly, assign, nonatomic) NSArray *globalObjectIDs;	// G=0x2d194d85; @synthesize=_globalObjectIDs
@property(readonly, assign, nonatomic) NSDictionary *insertedObjects;	// G=0x2d194da5; @synthesize=_insertedObjects
@property(retain, nonatomic) NSString *localPeerID;	// G=0x2d194e85; S=0x2d194e95; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSDictionary *managedObjectIDToGlobalObjectID;	// G=0x2d194e25; @synthesize=_managedObjectIDToGlobalObjectID
@property(readonly, assign, nonatomic) NSDictionary *peerIDToIndex;	// G=0x2d194e45; @synthesize=_peerIDToIndex
@property(readonly, assign, nonatomic) NSArray *peerIDs;	// G=0x2d194d75; @synthesize=_peerIDs
@property(readonly, assign, nonatomic) NSDictionary *peerStates;	// G=0x2d194dd5; @synthesize=_peerStates
@property(readonly, assign, nonatomic) NSDictionary *primaryKeyToIndex;	// G=0x2d194e55; @synthesize=_primaryKeyToIndex
@property(readonly, assign, nonatomic) NSArray *primaryKeys;	// G=0x2d194d95; @synthesize=_primaryKeys
@property(retain, nonatomic) PFUbiquityKnowledgeVector *storeKV;	// G=0x2d194ea5; S=0x2d194eb5; @synthesize=_storeKV
@property(retain, nonatomic) NSNumber *transactionNumber;	// G=0x2d194de5; S=0x2d194df5; @synthesize=_transactionNumber
@property(readonly, assign, nonatomic) NSDictionary *updatedObjects;	// G=0x2d194db5; @synthesize=_updatedObjects
- (id)init;	// 0x2d19288d
- (id)initForExport:(id)export;	// 0x2d192ae5
- (id)initWithExportingPeerID:(id)exportingPeerID;	// 0x2d192aa1
- (void)_setFilesDeletedInTransaction:(id)transaction;	// 0x2d192f75
- (id)addManagedObject:(id)object withTransactionType:(int)transactionType andStoreExportContext:(id)context withError:(id *)error;	// 0x2d19339d
- (id)checkIndex:(id)index forValue:(id)value fromArrayOfValues:(id)values;	// 0x2d192fb9
- (id)compressedGlobalObjectIDFromGlobalObjectID:(id)globalObjectID;	// 0x2d193195
- (id)createKnowledgeVectorFromPeerStates;	// 0x2d193849
- (id)createUbiquityDictionary:(id)dictionary withStoreExportContext:(id)storeExportContext error:(id *)error;	// 0x2d19430d
- (void)dealloc;	// 0x2d192b89
// declared property getter: - (id)deletedObjects;	// 0x2d194dc5
- (id)description;	// 0x2d192dc9
// declared property getter: - (id)entityNameToIndex;	// 0x2d194e35
// declared property getter: - (id)entityNames;	// 0x2d194d65
// declared property getter: - (id)exportingPeerID;	// 0x2d194e05
// converted property getter: - (id)filesDeletedInTransaction;	// 0x2d192f65
// converted property getter: - (id)filesInsertedInTransaction;	// 0x2d192f55
- (void)finishGlobalIDReplacement;	// 0x2d194249
- (void)generatePeerStates;	// 0x2d1935c9
// declared property getter: - (id)globalObjectIDCache;	// 0x2d194ec5
- (id)globalObjectIDForManagedObject:(id)managedObject withStoreExportContext:(id)storeExportContext;	// 0x2d193089
- (id)globalObjectIDFromCompressedObjectID:(id)compressedObjectID;	// 0x2d1932a5
// declared property getter: - (id)globalObjectIDToIndex;	// 0x2d194e65
// declared property getter: - (id)globalObjectIDToPermanentManagedObjectID;	// 0x2d194e75
// declared property getter: - (id)globalObjectIDs;	// 0x2d194d85
// declared property getter: - (id)insertedObjects;	// 0x2d194da5
// declared property getter: - (id)localPeerID;	// 0x2d194e85
// declared property getter: - (id)managedObjectIDToGlobalObjectID;	// 0x2d194e25
// declared property getter: - (id)peerIDToIndex;	// 0x2d194e45
// declared property getter: - (id)peerIDs;	// 0x2d194d75
// declared property getter: - (id)peerStates;	// 0x2d194dd5
- (void)prepareForGlobalIDReplacement;	// 0x2d1940d1
// declared property getter: - (id)primaryKeyToIndex;	// 0x2d194e55
// declared property getter: - (id)primaryKeys;	// 0x2d194d95
- (void)replaceGlobalObjectID:(id)anId withGlobalObjectID:(id)globalObjectID;	// 0x2d194111
- (void)replaceGlobalObjectIDsAtIndexes:(id)indexes withGlobalObjectIDs:(id)globalObjectIDs;	// 0x2d1940b1
- (void)reserveTransactionNumberWithStoreExportContext:(id)storeExportContext;	// 0x2d1934d1
- (void)resetFromOptimisticLockingException;	// 0x2d1937e1
- (void)setDeletedObjects:(id)objects;	// 0x2d19406d
- (void)setEntityNames:(id)names globalObjectIDs:(id)ids primaryKeys:(id)keys forStoreName:(id)storeName withRootLocation:(id)rootLocation;	// 0x2d193c31
// declared property setter: - (void)setExportingPeerID:(id)anId;	// 0x2d194e15
// declared property setter: - (void)setGlobalObjectIDCache:(id)cache;	// 0x2d194ed5
- (void)setInsertedObjects:(id)objects;	// 0x2d193fe5
// declared property setter: - (void)setLocalPeerID:(id)anId;	// 0x2d194e95
// declared property setter: - (void)setStoreKV:(id)kv;	// 0x2d194eb5
// declared property setter: - (void)setTransactionNumber:(id)number;	// 0x2d194df5
- (void)setTransactionNumber:(id)number peerStates:(id)states andPeerIDs:(id)ids;	// 0x2d193add
- (void)setUpdatedObjects:(id)objects;	// 0x2d194029
// declared property getter: - (id)storeKV;	// 0x2d194ea5
// declared property getter: - (id)transactionNumber;	// 0x2d194de5
- (id)transactionNumberFromPeerStates:(id)peerStates;	// 0x2d193a21
// declared property getter: - (id)updatedObjects;	// 0x2d194db5
@end

