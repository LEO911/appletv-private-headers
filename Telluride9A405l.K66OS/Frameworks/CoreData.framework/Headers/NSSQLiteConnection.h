/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSSQLConnection.h"

@class NSSQLEntity, NSMutableSet, NSString, NSMutableDictionary, NSSQLiteStatement;

__attribute__((visibility("hidden")))
@interface NSSQLiteConnection : NSSQLConnection {
@private
	sqlite3 *_db;	// 28 = 0x1c
	sqlite3_stmt *_vmstatement;	// 32 = 0x20
	int _rowsProcessedCount;	// 36 = 0x24
	unsigned _lastEntityKey;	// 40 = 0x28
	NSSQLEntity *_finalEntity;	// 44 = 0x2c
	NSSQLEntity *_lastEntity;	// 48 = 0x30
	sqlite3_stmt *_fetchPKStatement;	// 52 = 0x34
	sqlite3_stmt *_updatePKStatement;	// 56 = 0x38
	NSSQLiteStatement *_beginStatement;	// 60 = 0x3c
	NSSQLiteStatement *_commitStatement;	// 64 = 0x40
	NSSQLiteStatement *_rollbackStatement;	// 68 = 0x44
	NSMutableSet *_vmCachedStatements;	// 72 = 0x48
	NSMutableDictionary *_pragmaSettings;	// 76 = 0x4c
	CFDictionaryRef _cachedEntityUpdateStatements;	// 80 = 0x50
	double _timeOutOption;	// 84 = 0x54
	void *_extraBuffersForRegisteredFunctions[5];	// 92 = 0x5c
	NSString *_dbPathRegisteredWithBackupd;	// 112 = 0x70
	long long _vacuumTracker;	// 116 = 0x74
	sqliteConnectionFlags _sqliteConnectionFlags;	// 124 = 0x7c
	unsigned long long _debugInode;	// 128 = 0x80
}
+ (void)__INode_Changed_AllThatIsLeftToUsIsHonor__;	// 0x34001849
+ (const char *)_databaseOpenURLStringForURL:(id)url;	// 0x34002899
+ (BOOL)_destroyPersistentStoreAtURL:(id)url options:(id)options error:(id *)error;	// 0x34001a91
+ (BOOL)_replacePersistentStoreAtURL:(id)url destinationOptions:(id)options withPersistentStoreFromURL:(id)url3 sourceOptions:(id)options4 error:(id *)error;	// 0x340022f1
+ (void)_setDebugFlags:(int)flags;	// 0x34001845
+ (void)initialize;	// 0x33f675e1
+ (int)readMagicWordFromPath:(const char *)path;	// 0x34002975
- (id)initWithAdapter:(id)adapter;	// 0x33f3e2ad
- (id)_adapter;	// 0x33f3e619
- (void)_bindVariablesWithDeletedRow:(id)deletedRow;	// 0x34001879
- (void)_bindVariablesWithInsertedRow:(id)insertedRow;	// 0x34007559
- (void)_bindVariablesWithUpdatedRow:(id)updatedRow andOriginalRow:(id)row forDeltasMask:(CFBitVectorRef)deltasMask;	// 0x34006f79
- (void **)_buffersForRegisteredFunctions;	// 0x33f3f3fd
- (void)_clearBindVariablesForInsertedRow;	// 0x34007409
- (void)_clearBindVariablesForUpdateStatement:(id)updateStatement forDeltasMask:(CFBitVectorRef)deltasMask;	// 0x34006c61
- (void)_clearCachedStatements;	// 0x33f5f5b9
- (void)_clearOtherStatements;	// 0x33f5f691
- (void)_clearTransactionCaches;	// 0x33f5f42d
- (void)_configureAutoVacuum;	// 0x340047ad
- (void)_configureIntegrityCheck;	// 0x33f3f435
- (void)_configurePageSize;	// 0x3400466d
- (void)_configurePragmaOptions:(int)options;	// 0x34007e85
- (void)_configureSynchronousMode;	// 0x33f3f40d
- (void)_configureUbiquityMetadataTable;	// 0x33f40225
- (void)_ensureDatabaseOpen;	// 0x33f4010d
- (void)_ensureNoFetchInProgress;	// 0x33f401c5
- (void)_ensureNoStatementPrepared;	// 0x33f40169
- (void)_ensureNoTransactionOpen;	// 0x340094dd
- (void)_executeSQLString:(id)string;	// 0x33f3f56d
- (void)_finalizeStatement;	// 0x33f42e69
- (void)_forceDisconnectOnError;	// 0x34007df9
- (long long)_getCurrentAutoVacuumValue;	// 0x3400424d
- (BOOL)_hasTableWithName:(id)name;	// 0x34005419
- (id)_newValueForColumn:(id)column atIndex:(unsigned)index inStatement:(sqlite3_stmt *)statement;	// 0x33f42235
- (void)_performPostSaveTasks;	// 0x340042b1
- (void)_registerExtraFunctions;	// 0x33f3f015
- (int)_rowsChangedByLastExecute;	// 0x340079b1
- (void)_setupVacuumIfNecessary;	// 0x34004035
- (sqlite3_stmt *)_vmstatement;	// 0x3400184d
- (void)addPeerRangeForPeerID:(id)peerID entityName:(id)name rangeStart:(id)start rangeEnd:(id)end peerRangeStart:(id)start5 peerRangeEnd:(id)end6;	// 0x34003299
- (id)allPeerRanges;	// 0x340029d5
- (void)beginTransaction;	// 0x34007cf5
- (void)cacheCurrentDBStatementOn:(id)on;	// 0x340062a5
- (void)cacheUpdateStatement:(id)statement forEntity:(id)entity andDeltasMask:(CFBitVectorRef)mask;	// 0x34006949
- (id)cachedUpdateStatementForEntity:(id)entity andDeltasMask:(CFBitVectorRef)mask;	// 0x3400691d
- (BOOL)canConnect;	// 0x33f3e585
- (void)commitTransaction;	// 0x34007b61
- (void)connect;	// 0x33f3e685
- (BOOL)databaseIsEmpty;	// 0x33f44939
- (void)dealloc;	// 0x33f5f7ed
- (void)deleteCorrelation:(id)correlation;	// 0x34001a15
- (void)deleteRow:(id)row;	// 0x34006369
- (id)describeResults;	// 0x340062f9
- (void)disconnect;	// 0x33f5f2a5
- (void)endFetch;	// 0x33f42dcd
- (void)endPrimaryKeyGeneration;	// 0x340053d5
- (void)execute;	// 0x33f40ec5
- (long long)fetchMaxPrimaryKeyForEntity:(id)entity;	// 0x3400841d
- (int)fetchResultSet:(void *)set usingFetchPlan:(id)plan;	// 0x33f51e35
- (id)fetchTableCreationSQL;	// 0x3400558d
- (id)fetchTableNames;	// 0x34005951
- (id)fetchUbiqiutyKnowledgeVector;	// 0x340039e9
- (void)finalize;	// 0x34009539
- (long long)generatePrimaryKeysForEntity:(id)entity batch:(unsigned)batch;	// 0x340049e9
- (void)handleCorruptedDB:(id)db;	// 0x340061ad
- (BOOL)hasMetadataTable;	// 0x340053f5
- (BOOL)hasPrimaryKeyTable;	// 0x340049c5
- (void)insertCorrelation:(id)correlation;	// 0x3400191d
- (void)insertRow:(id)row;	// 0x34006a1d
- (BOOL)isFetchInProgress;	// 0x33f5250d
- (BOOL)isLocalFS;	// 0x3400185d
- (BOOL)isOpen;	// 0x33f3e601
- (id)newFetchedArray;	// 0x33f420ed
- (BOOL)performIntegrityCheck;	// 0x34005c89
- (void)prepareForPrimaryKeyGeneration;	// 0x340053e5
- (void)prepareSQLStatement:(id)statement;	// 0x33f40719
- (CFArrayRef)rawIntegerRowsForSQL:(id)sql;	// 0x34008781
- (void)releaseSQLStatement;	// 0x33f42e29
- (void)resetSQLStatement;	// 0x34006315
- (void)rollbackTransaction;	// 0x340079d1
- (void)setExclusiveLockingMode:(BOOL)mode;	// 0x340060a9
- (void)updateCorrelation:(id)correlation;	// 0x34001999
- (void)updateRow:(id)row;	// 0x340065e5
- (void)updateUbiquityKnowledgeForPeerWithID:(id)anId andTransactionNumber:(id)number;	// 0x340033d9
- (void)updateUbiquityKnowledgeVector:(id)vector;	// 0x3400363d
- (void)willCreateSchema;	// 0x34004549
@end
