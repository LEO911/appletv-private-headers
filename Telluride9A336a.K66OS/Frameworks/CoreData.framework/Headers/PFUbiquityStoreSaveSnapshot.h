/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSNumber, NSMutableArray, NSMutableDictionary, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface PFUbiquityStoreSaveSnapshot : NSObject {
@private
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
	NSDictionary *_storeOptions;	// 64 = 0x40
	NSMutableArray *_filesInsertedInTransaction;	// 68 = 0x44
	NSArray *_filesDeletedInTransaction;	// 72 = 0x48
}
@property(readonly, assign, nonatomic) NSDictionary *deletedObjects;	// G=0x3243273d; @synthesize=_deletedObjects
@property(readonly, assign, nonatomic) NSDictionary *entityNameToIndex;	// G=0x324326ed; @synthesize=_entityNameToIndex
@property(readonly, assign, nonatomic) NSArray *entityNames;	// G=0x3243279d; @synthesize=_entityNames
@property(readonly, retain) NSArray *filesDeletedInTransaction;	// G=0x3243269d; converted property
@property(readonly, retain) NSMutableArray *filesInsertedInTransaction;	// G=0x3243268d; converted property
@property(readonly, assign, nonatomic) NSDictionary *globalObjectIDToIndex;	// G=0x324326bd; @synthesize=_globalObjectIDToIndex
@property(readonly, assign, nonatomic) NSDictionary *globalObjectIDToPermanentManagedObjectID;	// G=0x324326ad; @synthesize=_globalObjectIDToPermanentManagedObjectID
@property(readonly, assign, nonatomic) NSArray *globalObjectIDs;	// G=0x3243277d; @synthesize=_globalObjectIDs
@property(readonly, assign, nonatomic) NSDictionary *insertedObjects;	// G=0x3243275d; @synthesize=_insertedObjects
@property(readonly, assign, nonatomic) NSDictionary *managedObjectIDToGlobalObjectID;	// G=0x324326fd; @synthesize=_managedObjectIDToGlobalObjectID
@property(readonly, assign, nonatomic) NSDictionary *peerIDToIndex;	// G=0x324326dd; @synthesize=_peerIDToIndex
@property(readonly, assign, nonatomic) NSArray *peerIDs;	// G=0x3243278d; @synthesize=_peerIDs
@property(readonly, assign, nonatomic) NSDictionary *peerStates;	// G=0x3243272d; @synthesize=_peerStates
@property(readonly, assign, nonatomic) NSDictionary *primaryKeyToIndex;	// G=0x324326cd; @synthesize=_primaryKeyToIndex
@property(readonly, assign, nonatomic) NSArray *primaryKeys;	// G=0x3243276d; @synthesize=_primaryKeys
@property(readonly, assign, nonatomic) NSDictionary *storeOptions;	// G=0x3243270d; @synthesize=_storeOptions
@property(readonly, assign, nonatomic) NSNumber *transactionNumber;	// G=0x3243271d; @synthesize=_transactionNumber
@property(readonly, assign, nonatomic) NSDictionary *updatedObjects;	// G=0x3243274d; @synthesize=_updatedObjects
- (id)init;	// 0x324327ad
- (id)initWithPersistentStoreOptions:(id)persistentStoreOptions;	// 0x32434341
- (void)_setFilesDeletedInTransaction:(id)transaction;	// 0x32433f51
- (id)addManagedObject:(id)object withTransactionType:(int)transactionType andStoreExportContext:(id)context withError:(id *)error;	// 0x32433a09
- (id)checkIndex:(id)index forValue:(id)value fromArrayOfValues:(id)values;	// 0x32433e81
- (id)compressedGlobalObjectIDFromGlobalObjectID:(id)globalObjectID;	// 0x32433c39
- (id)createUbiquityDictionary:(id)dictionary withStoreExportContext:(id)storeExportContext error:(id *)error;	// 0x324329bd
- (void)dealloc;	// 0x32434129
// declared property getter: - (id)deletedObjects;	// 0x3243273d
- (id)description;	// 0x32433f99
// declared property getter: - (id)entityNameToIndex;	// 0x324326ed
// declared property getter: - (id)entityNames;	// 0x3243279d
// converted property getter: - (id)filesDeletedInTransaction;	// 0x3243269d
// converted property getter: - (id)filesInsertedInTransaction;	// 0x3243268d
- (void)generatePeerStatesWithStoreExportContext:(id)storeExportContext;	// 0x32433641
- (id)globalObjectIDForManagedObject:(id)managedObject withStoreExportContext:(id)storeExportContext;	// 0x32433d59
- (id)globalObjectIDFromCompressedObjectID:(id)compressedObjectID;	// 0x32433b3d
// declared property getter: - (id)globalObjectIDToIndex;	// 0x324326bd
// declared property getter: - (id)globalObjectIDToPermanentManagedObjectID;	// 0x324326ad
// declared property getter: - (id)globalObjectIDs;	// 0x3243277d
// declared property getter: - (id)insertedObjects;	// 0x3243275d
// declared property getter: - (id)managedObjectIDToGlobalObjectID;	// 0x324326fd
// declared property getter: - (id)peerIDToIndex;	// 0x324326dd
// declared property getter: - (id)peerIDs;	// 0x3243278d
// declared property getter: - (id)peerStates;	// 0x3243272d
// declared property getter: - (id)primaryKeyToIndex;	// 0x324326cd
// declared property getter: - (id)primaryKeys;	// 0x3243276d
- (void)reserveTransactionNumberWithStoreExportContext:(id)storeExportContext;	// 0x3243383d
- (void)setDeletedObjects:(id)objects;	// 0x324330f1
- (void)setEntityNames:(id)names globalObjectIDs:(id)ids primaryKeys:(id)keys forStoreWithName:(id)name;	// 0x32433169
- (void)setInsertedObjects:(id)objects;	// 0x32433141
- (void)setTransactionNumber:(id)number peerStates:(id)states andPeerIDs:(id)ids;	// 0x324334cd
- (void)setUpdatedObjects:(id)objects;	// 0x32433119
// declared property getter: - (id)storeOptions;	// 0x3243270d
// declared property getter: - (id)transactionNumber;	// 0x3243271d
// declared property getter: - (id)updatedObjects;	// 0x3243274d
@end

