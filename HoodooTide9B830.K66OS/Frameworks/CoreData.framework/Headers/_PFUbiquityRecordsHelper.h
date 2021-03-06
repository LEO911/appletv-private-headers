/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSNotification, NSManagedObjectContext, NSDictionary, NSString, NSPersistentStoreCoordinator;

__attribute__((visibility("hidden")))
@interface _PFUbiquityRecordsHelper : NSObject {
@private
	NSDictionary *_transactionRecordContent;	// 4 = 0x4
	NSDictionary *_transactionObjectsData;	// 8 = 0x8
	NSString *_externalRecordsPath;	// 12 = 0xc
	NSString *_transactionLogPath;	// 16 = 0x10
	NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 20 = 0x14
	NSManagedObjectContext *_managedObjectContext;	// 24 = 0x18
	NSString *_storeIdentifier;	// 28 = 0x1c
	NSMutableDictionary *_deletedObjectsByPK;	// 32 = 0x20
	NSMutableDictionary *_updatedObjectsByPK;	// 36 = 0x24
	NSMutableDictionary *_insertedObjectsByPK;	// 40 = 0x28
	NSMutableDictionary *_allWorkingObjectsByPK;	// 44 = 0x2c
	NSMutableDictionary *_externalAttributesByEntityName;	// 48 = 0x30
	NSMutableDictionary *_externalRelationshipsByEntityName;	// 52 = 0x34
	NSNotification *_importContextSaveNotification;	// 56 = 0x38
	int _ubiquity_import_debug_level;	// 60 = 0x3c
	BOOL _importAllRecords;	// 64 = 0x40
}
@property(readonly, assign) NSDictionary *deletedObjectsByPK;	// G=0x3235643d; @synthesize=_deletedObjectsByPK
@property(retain) NSString *externalRecordsPath;	// G=0x32356751; S=0x3235672d; @synthesize=_externalRecordsPath
@property(assign) BOOL importAllRecords;	// G=0x323563fd; S=0x3235640d; @synthesize=_importAllRecords
@property(retain) NSNotification *importContextSaveNotification;	// G=0x323567c9; S=0x323567a5; @synthesize=_importContextSaveNotification
@property(readonly, assign) NSDictionary *insertedObjectsByPK;	// G=0x3235641d; @synthesize=_insertedObjectsByPK
@property(assign) NSManagedObjectContext *managedObjectContext;	// G=0x3235644d; S=0x3235645d; @synthesize=_managedObjectContext
@property(assign) NSPersistentStoreCoordinator *persistentStoreCoordinator;	// G=0x3235646d; S=0x3235647d; @synthesize=_persistentStoreCoordinator
@property(retain) NSString *storeIdentifier;	// G=0x3235678d; S=0x32356769; @synthesize=_storeIdentifier
@property(retain) NSString *transactionLogPath;	// G=0x32356715; S=0x323566f1; @synthesize=_transactionLogPath
@property(retain) NSDictionary *transactionObjectsData;	// G=0x323566d9; S=0x323566b5; @synthesize=_transactionObjectsData
@property(retain) NSDictionary *transactionRecordContent;	// G=0x3235669d; S=0x32356679; @synthesize=_transactionRecordContent
@property(readonly, assign) NSDictionary *updatedObjectsByPK;	// G=0x3235642d; @synthesize=_updatedObjectsByPK
- (id)initForImportWithExternalRecordsPath:(id)externalRecordsPath persistentStoreCoordinator:(id)coordinator;	// 0x3235648d
- (void)_importContextDidSave:(id)_importContext;	// 0x323567e1
- (id)_initializeTransactionRecord:(id *)record;	// 0x32358365
- (id)_objectsWithPrimaryKeys:(id)primaryKeys error:(id *)error;	// 0x323567f1
- (id)_prepareFullImportTransactionContent:(id *)content;	// 0x323581e1
- (BOOL)_prepareTransactionObjects:(id *)objects;	// 0x32357a69
- (BOOL)_processDeletedObjects:(id *)objects;	// 0x3235794d
- (BOOL)_processInsertedObjects:(id *)objects;	// 0x32357829
- (BOOL)_processUpdatedObjects:(id *)objects;	// 0x32357705
- (BOOL)_setStateForObject:(id)object error:(id *)error;	// 0x32357089
- (void)dealloc;	// 0x32358bad
// declared property getter: - (id)deletedObjectsByPK;	// 0x3235643d
- (id)externalAttributesForEntity:(id)entity;	// 0x32356f1d
// declared property getter: - (id)externalRecordsPath;	// 0x32356751
- (id)externalRelationshipsForEntity:(id)entity;	// 0x32356db1
// declared property getter: - (BOOL)importAllRecords;	// 0x323563fd
// declared property getter: - (id)importContextSaveNotification;	// 0x323567c9
- (id)importUbiquityExternalRecords:(id *)records;	// 0x323587a9
// declared property getter: - (id)insertedObjectsByPK;	// 0x3235641d
// declared property getter: - (id)managedObjectContext;	// 0x3235644d
- (id)objectForEntityName:(id)entityName primaryKey:(id)key;	// 0x32356b3d
// declared property getter: - (id)persistentStoreCoordinator;	// 0x3235646d
// declared property setter: - (void)setExternalRecordsPath:(id)path;	// 0x3235672d
// declared property setter: - (void)setImportAllRecords:(BOOL)records;	// 0x3235640d
// declared property setter: - (void)setImportContextSaveNotification:(id)notification;	// 0x323567a5
// declared property setter: - (void)setManagedObjectContext:(id)context;	// 0x3235645d
// declared property setter: - (void)setPersistentStoreCoordinator:(id)coordinator;	// 0x3235647d
// declared property setter: - (void)setStoreIdentifier:(id)identifier;	// 0x32356769
// declared property setter: - (void)setTransactionLogPath:(id)path;	// 0x323566f1
// declared property setter: - (void)setTransactionObjectsData:(id)data;	// 0x323566b5
// declared property setter: - (void)setTransactionRecordContent:(id)content;	// 0x32356679
// declared property getter: - (id)storeIdentifier;	// 0x3235678d
// declared property getter: - (id)transactionLogPath;	// 0x32356715
// declared property getter: - (id)transactionObjectsData;	// 0x323566d9
// declared property getter: - (id)transactionRecordContent;	// 0x3235669d
// declared property getter: - (id)updatedObjectsByPK;	// 0x3235642d
@end

