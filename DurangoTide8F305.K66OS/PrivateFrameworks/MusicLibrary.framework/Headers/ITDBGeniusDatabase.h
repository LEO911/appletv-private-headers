/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ITDBGeniusDatabase : NSObject {
@private
	CPSqliteDatabase *_db;	// 4 = 0x4
	CPSqliteConnection *_dbrc;	// 8 = 0x8
	int _transactionCount;	// 12 = 0xc
	double _connectionFailedTime;	// 16 = 0x10
	unsigned _hasGeniusSchema : 1;	// 24 = 0x18
	unsigned _hasGeniusSchemaCached : 1;	// 24 = 0x18
}
+ (id)fallbackGeniusDatabaseFilePath;	// 0x333c67d5
+ (id)geniusDatabaseFilePath;	// 0x333b6a35
+ (id)sharedGeniusDatabase;	// 0x333b687d
- (id)init;	// 0x333b68c5
- (CPSqliteStatement *)_cachedStatementForReading:(id)reading;	// 0x333c6f9d
- (void)_connect;	// 0x333b696d
- (BOOL)_copyBlobData:(id *)data blobAllocType:(int)type table:(id)table blobColumn:(id)column where:(id)where limit:(unsigned)limit sqliteStatement:(CPSqliteStatement *)statement;	// 0x333c6c49
- (id)_copyBlobDataAndBytesInTable:(id)table blobColumn:(id)column where:(id)where limit:(unsigned)limit sqliteStatement:(CPSqliteStatement *)statement;	// 0x333c6799
- (unsigned)_getCountOfResultsInTable:(id)table where:(id)where limit:(unsigned)limit;	// 0x333b6f29
- (unsigned)_getInt32ValueInTable:(id)table column:(id)column where:(id)where limit:(unsigned)limit;	// 0x333c6abd
- (unsigned long long)_getInt64ValueInTable:(id)table column:(id)column where:(id)where limit:(unsigned)limit;	// 0x333c6921
- (BOOL)_hasAnySongs;	// 0x333b6cc5
- (CPSqliteDatabase *)_loadedDatabaseAtPath:(id)path;	// 0x333b6bb9
- (BOOL)_readBlobForRowID:(unsigned long long)rowID intoData:(id)data table:(const char *)table blobColumn:(const char *)column;	// 0x333c6ed5
- (BOOL)_readBlobIntoData:(id)data table:(id)table blobColumn:(id)column where:(id)where limit:(unsigned)limit sqliteStatement:(CPSqliteStatement *)statement;	// 0x333c6765
- (BOOL)_schemaHasDefinedTable:(id)table;	// 0x333b6e89
- (void)beginTransaction;	// 0x333c6829
- (id)copyGeniusConfigrationDataAndBytes;	// 0x333c6601
- (id)copyGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)globalID;	// 0x333c655d
- (id)copyGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)globalID;	// 0x333c64f1
- (unsigned)defaultMinTrackCount;	// 0x333c667d
- (unsigned)defaultTrackCount;	// 0x333c663d
- (void)endTransaction;	// 0x333c686d
- (unsigned)geniusConfigurationVersion;	// 0x333c65c9
- (BOOL)getGeniusConfigrationDataAndBytesIntoData:(id)data;	// 0x333c64ad
- (BOOL)getGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)globalID intoData:(id)data;	// 0x333c646d
- (BOOL)getGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)globalID intoData:(id)data;	// 0x333c642d
- (BOOL)hasDatabase;	// 0x333c673d
- (BOOL)hasGeniusCapableiTunes;	// 0x333b6c05
- (BOOL)hasGeniusDataAvailable;	// 0x333c66bd
- (BOOL)hasGeniusFeatureEnabled;	// 0x333b6909
@end

