/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSStoreMapping.h"

@class NSString, NSArray, NSMutableArray, NSSQLStatement, NSSQLStoreMappingGenerator, NSSQLModel, NSSQLEntityKey, NSKnownKeysMappingStrategy, NSEntityDescription, NSSQLOptLockKey, NSSQLPrimaryKey, NSMutableDictionary;

@interface NSSQLEntity : NSStoreMapping {
	NSSQLModel *_model;	// 8 = 0x8
	NSEntityDescription *_entityDescription;	// 12 = 0xc
	NSString *_tableName;	// 16 = 0x10
	NSMutableDictionary *_properties;	// 20 = 0x14
	NSArray *_propertyAllCache;	// 24 = 0x18
	NSArray *_propertiesAllToManysCache;	// 28 = 0x1c
	NSArray *_propertyManyToManyCache;	// 32 = 0x20
	NSMutableArray *_columnsToFetch;	// 36 = 0x24
	NSMutableArray *_ekColumns;	// 40 = 0x28
	NSMutableArray *_fkColumns;	// 44 = 0x2c
	NSMutableArray *_fokColumns;	// 48 = 0x30
	NSMutableArray *_attrColumns;	// 52 = 0x34
	NSMutableArray *_virtualFKs;	// 56 = 0x38
	NSSQLPrimaryKey *_primaryKey;	// 60 = 0x3c
	NSSQLEntityKey *_entityKey;	// 64 = 0x40
	NSSQLOptLockKey *_optLockKey;	// 68 = 0x44
	NSMutableArray *_subentities;	// 72 = 0x48
	NSSQLEntity *_superentity;	// 76 = 0x4c
	NSSQLEntity *_rootEntity;	// 80 = 0x50
	NSSQLStoreMappingGenerator *_mappingGenerator;	// 84 = 0x54
	unsigned _entityID;	// 88 = 0x58
	unsigned _subentityMaxID;	// 92 = 0x5c
	NSRange _toOneRange;	// 96 = 0x60
	long long _maxPK;	// 104 = 0x68
	NSSQLStatement *_insertStatementCache;	// 112 = 0x70
	NSSQLStatement *_deletionStatementCache;	// 116 = 0x74
	NSSQLStatement *_faultingStatementCache;	// 120 = 0x78
	NSMutableDictionary *_toManyRelationshipStatementCache;	// 124 = 0x7c
	void *_fetch_entity_plan;	// 128 = 0x80
	NSKnownKeysMappingStrategy *_propertyMapping;	// 132 = 0x84
	void *_odiousHashHackStorage;	// 136 = 0x88
	unsigned _pkCount;	// 140 = 0x8c
	sqlentityFlags _sqlentityFlags;	// 144 = 0x90
}
@property(readonly, retain) NSMutableArray *columnsToFetch;	// G=0x30efd459; converted property
@property(readonly, retain) NSEntityDescription *entityDescription;	// G=0x30eeae0d; converted property
@property(readonly, assign) unsigned entityID;	// G=0x30f9b9c5; converted property
@property(readonly, retain) NSSQLStoreMappingGenerator *mappingGenerator;	// G=0x30eec8d1; converted property
@property(readonly, retain) NSSQLModel *model;	// G=0x30eeafb5; converted property
@property(readonly, retain) NSSQLOptLockKey *optLockKey;	// G=0x30f02dcd; converted property
@property(readonly, retain) NSSQLPrimaryKey *primaryKey;	// G=0x30f9b8d1; converted property
@property(readonly, retain) NSMutableDictionary *properties;	// G=0x30f9b4fd; converted property
@property(readonly, retain) NSKnownKeysMappingStrategy *propertyMapping;	// G=0x30f9ce81; converted property
@property(readonly, retain) NSSQLEntity *rootEntity;	// G=0x30f9c2e9; converted property
@property(retain) NSMutableArray *subentities;	// G=0x30eed7d9; S=0x30f9b8e1; converted property
@property(readonly, assign) unsigned subentityMaxID;	// G=0x30f9b9d5; converted property
@property(retain) NSSQLEntity *superentity;	// G=0x30eebf55; S=0x30f9b975; converted property
@property(readonly, retain) NSString *tableName;	// G=0x30f00515; converted property
- (id)initWithModel:(id)model entityDescription:(id)description;	// 0x30eea52d
- (void)_addColumnToFetch:(id)fetch;	// 0x30eec1a5
- (void)_addForeignOrderKeyForToOne:(id)one entity:(id)entity;	// 0x30eee5f9
- (void)_addRootColumnToFetch:(id)fetch;	// 0x30eec271
- (void)_addSubentity:(id)subentity;	// 0x30f9b909
- (id)_addVirtualToOneForToMany:(id)many withInheritedProperty:(id)inheritedProperty;	// 0x30f9bbd1
- (BOOL)_collectFKSlots:(id)slots error:(id *)error;	// 0x30f9bf79
- (void)_doPostModelGenerationCleanup;	// 0x30eee7dd
- (BOOL)_entityIsBroken:(id *)broken;	// 0x30f9c269
- (unsigned)_generateIDWithSuperEntity:(id)superEntity nextID:(unsigned)anId;	// 0x30eeae1d
- (void)_generateInverseRelationshipsAndMore;	// 0x30eed7e9
- (void)_generateProperties;	// 0x30eeb0f9
- (void *)_odiousHashHack;	// 0x30f9bf69
- (unsigned)_pkCount;	// 0x30f9c2f9
- (id)_propertySearchMapping;	// 0x30eecdbd
- (void)_resetPKCount;	// 0x30f9c309
- (void)_setMaxPK:(long long)pk;	// 0x30f9c31d
- (id)_sqlPropertyWithRenamingIdentifier:(id)renamingIdentifier;	// 0x30f9ba4d
- (NSRange)_toOneRange;	// 0x30eed3f9
- (void)addInsertedObject:(id)object toArray:(id)array;	// 0x30f9c3d5
- (BOOL)addPropertiesForReadOnlyFetch:(id)readOnlyFetch keys:(id)keys context:(id)context;	// 0x30f9cc19
- (id)attributeColumns;	// 0x30f02dbd
- (id)attributeNamed:(id)named;	// 0x30f9ba3d
- (id)attributes;	// 0x30f9cea1
- (void)cacheDeletionStatement:(id)statement;	// 0x30f9c745
- (void)cacheFaultingStatement:(id)statement;	// 0x30f9c7a9
- (void)cacheFaultingStatement:(id)statement andFetchRequest:(id)request forRelationship:(id)relationship;	// 0x30f9c839
- (void)cacheInsertStatement:(id)statement;	// 0x30f9c6e1
- (void)clearCachedStatements;	// 0x30f9c539
- (id)columnsToCreate;	// 0x30f9b8c1
// converted property getter: - (id)columnsToFetch;	// 0x30efd459
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x30f9c9a1
- (void)dealloc;	// 0x30f9b211
- (id)deletionStatement;	// 0x30f9c735
- (id)description;	// 0x30f9c4d9
// converted property getter: - (id)entityDescription;	// 0x30eeae0d
// converted property getter: - (unsigned)entityID;	// 0x30f9b9c5
- (id)externalName;	// 0x30f9ce91
- (id)faultingStatement;	// 0x30f9c799
- (unsigned)fetchIndexForKey:(id)key;	// 0x30f9b875
- (void)finalize;	// 0x30f9b175
- (id)foreignEntityKeyColumns;	// 0x30f02d9d
- (id)foreignKeyColumns;	// 0x30f02d8d
- (id)foreignOrderKeyColumns;	// 0x30f02dad
- (BOOL)hasAttributesWithExternalDataReferences;	// 0x30ef3ca5
- (BOOL)hasInheritance;	// 0x30efd48d
- (BOOL)hasSubentities;	// 0x30eed741
- (id)insertStatement;	// 0x30f9c6d1
- (BOOL)isKindOfSQLEntity:(id)sqlentity;	// 0x30f9b9e5
- (BOOL)isRootEntity;	// 0x30eeb0e1
- (id)manyToManyRelationships;	// 0x30f9b735
// converted property getter: - (id)mappingGenerator;	// 0x30eec8d1
// converted property getter: - (id)model;	// 0x30eeafb5
- (id)name;	// 0x30eea8d9
- (long long)nextPrimaryKey64;	// 0x30f9c331
// converted property getter: - (id)optLockKey;	// 0x30f02dcd
- (id)preparedFaultingCachesForRelationship:(id)relationship;	// 0x30f9c7fd
// converted property getter: - (id)primaryKey;	// 0x30f9b8d1
// converted property getter: - (id)properties;	// 0x30f9b4fd
- (id)propertiesByName;	// 0x30f9b855
// converted property getter: - (id)propertyMapping;	// 0x30f9ce81
- (id)propertyNamed:(id)named;	// 0x30eee489
- (id)relationshipNamed:(id)named;	// 0x30eee479
// converted property getter: - (id)rootEntity;	// 0x30f9c2e9
// converted property setter: - (void)setSubentities:(id)subentities;	// 0x30f9b8e1
// converted property setter: - (void)setSuperentity:(id)superentity;	// 0x30f9b975
// converted property getter: - (id)subentities;	// 0x30eed7d9
- (id)subentityKey;	// 0x30f9b865
// converted property getter: - (unsigned)subentityMaxID;	// 0x30f9b9d5
// converted property getter: - (id)superentity;	// 0x30eebf55
// converted property getter: - (id)tableName;	// 0x30f00515
- (id)toManyRelationships;	// 0x30f9b615
- (id)virtualForeignKeyColumns;	// 0x30f0443d
@end
