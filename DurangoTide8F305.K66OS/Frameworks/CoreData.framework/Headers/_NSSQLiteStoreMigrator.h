/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSSQLConnection, NSSQLModel, NSSQLCore, NSSQLAdapter, NSMappingModel, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _NSSQLiteStoreMigrator : NSObject {
@private
	NSSQLCore *_store;	// 4 = 0x4
	NSSQLModel *_dstModel;	// 8 = 0x8
	NSSQLModel *_srcModel;	// 12 = 0xc
	NSSQLAdapter *_adapter;	// 16 = 0x10
	NSMappingModel *_mappingModel;	// 20 = 0x14
	NSSQLConnection *_connection;	// 24 = 0x18
	NSMutableDictionary *_reindexedEntities;	// 28 = 0x1c
	NSMutableDictionary *_reindexedPropertiesByEntity;	// 32 = 0x20
	NSMutableDictionary *_sourceToDestinationEntityMap;	// 36 = 0x24
	NSMutableDictionary *_addedEntityMigrations;	// 40 = 0x28
	NSMutableDictionary *_removedEntityMigrations;	// 44 = 0x2c
	NSMutableDictionary *_transformedEntityMigrations;	// 48 = 0x30
	NSMutableDictionary *_copiedEntityMigrations;	// 52 = 0x34
	NSMutableDictionary *_tableMigrationDescriptionsByEntity;	// 56 = 0x38
	BOOL _hasPKTableChanges;	// 60 = 0x3c
}
@property(readonly, assign) NSSQLAdapter *adapter;	// G=0x3436de65; @synthesize=_adapter
+ (BOOL)_annotatesMigrationMetadata;	// 0x3436e4ad
+ (void)_setAnnotatesMigrationMetadata:(BOOL)metadata;	// 0x3436de59
- (id)initWithStore:(id)store destinationModel:(id)model mappingModel:(id)model3;	// 0x3436e279
- (void)_addEntityMigration:(id)migration toTableMigrationForRootEntity:(id)rootEntity migrationType:(int)type;	// 0x3436df3d
- (void)_addReindexedProperty:(id)property toSetForEntity:(id)entity;	// 0x3436de75
- (void)_determinePropertyDependenciesOnIDForEntity:(id)entity;	// 0x3436ef49
- (void)_determineReindexedEntitiesAndAffectedProperties;	// 0x3436edc5
- (void)_populateEntityMigrationDescriptionsAndEntityMap;	// 0x343707a5
- (void)_populateTableMigrationDescriptions;	// 0x3436e4e9
// declared property getter: - (id)adapter;	// 0x3436de65
- (id)createEntityMigrationStatements;	// 0x34370c45
- (id)createIndexStatementsForEntity:(id)entity;	// 0x3436f4d9
- (id)createStatementsForUpdatingEntityKeys;	// 0x3436f6ed
- (void)dealloc;	// 0x3436e0e5
- (id)entityMigrationDescriptionForEntity:(id)entity;	// 0x34370ac5
- (BOOL)performMigration:(id *)migration;	// 0x343700a9
- (id)tableMigrationDescriptionForEntity:(id)entity;	// 0x3436e009
@end

