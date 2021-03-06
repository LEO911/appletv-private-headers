/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLock, NSMutableArray, NSMutableSet, GEOTileDBMRU, NSString;
@protocol OS_dispatch_queue;

@interface GEOTileDBWriter : NSObject {
	NSString *_path;	// 4 = 0x4
	sqlite3 *_db;	// 8 = 0x8
	sqlite3_stmt *_versionQuery;	// 12 = 0xc
	sqlite3_stmt *_versionInsert;	// 16 = 0x10
	sqlite3_stmt *_editionQuery;	// 20 = 0x14
	sqlite3_stmt *_editionDelete;	// 24 = 0x18
	sqlite3_stmt *_editionUpdate;	// 28 = 0x1c
	sqlite3_stmt *_tileInsert;	// 32 = 0x20
	sqlite3_stmt *_tileDelete;	// 36 = 0x24
	sqlite3_stmt *_tileSize;	// 40 = 0x28
	sqlite3_stmt *_sizeQuery;	// 44 = 0x2c
	long long _lastRowID;	// 48 = 0x30
	unsigned long long _databaseSize;	// 56 = 0x38
	unsigned long long _maxDatabaseSize;	// 64 = 0x40
	BOOL _closed;	// 72 = 0x48
	BOOL _defunct;	// 73 = 0x49
	NSMutableArray *_writeList;	// 76 = 0x4c
	NSMutableSet *_uncommitedWriteSet;	// 80 = 0x50
	unsigned _pendingWriteBytes;	// 84 = 0x54
	NSLock *_writeListLock;	// 88 = 0x58
	NSObject<OS_dispatch_queue> *_writeQueue;	// 92 = 0x5c
	void *_editionMap;	// 96 = 0x60
	long long _evictionRowsThreshold;	// 100 = 0x64
	GEOTileDBMRU *_tileDBMRU;	// 108 = 0x6c
	XXStruct_nbUehC *_expirationRecords;	// 112 = 0x70
	unsigned _expirationRecordCount;	// 116 = 0x74
	BOOL _preloading;	// 120 = 0x78
	double _lastCheckedGeneralExpiration;	// 124 = 0x7c
}
@property(assign) BOOL closed;	// G=0x379628f9; S=0x37962811; 
@property(readonly, assign, nonatomic) unsigned long long databaseSize;	// G=0x379652e1; @synthesize=_databaseSize
@property(assign, nonatomic) unsigned long long maxDatabaseSize;	// G=0x379652f9; S=0x37965311; @synthesize=_maxDatabaseSize
@property(readonly, assign, nonatomic) NSString *path;	// G=0x379652b1; @synthesize=_path
@property(retain, nonatomic) GEOTileDBMRU *tileDBMRU;	// G=0x379652c1; S=0x379652d1; @synthesize=_tileDBMRU
- (id)initWithPath:(id)path;	// 0x37961461
- (void)_assertDatabaseSize;	// 0x37962335
- (void)_closeDB;	// 0x37961d85
- (void)_createTables;	// 0x37961e91
- (unsigned long long)_dbFileSize;	// 0x3796377d
- (void)_deleteKey:(GEOTileKey)key;	// 0x379649b1
- (void)_deviceLocked;	// 0x37961741
- (void)_editionUpdate:(id)update;	// 0x379617ed
- (void)_evict;	// 0x37963a85
- (void)_localeChanged:(id)changed;	// 0x379616b1
- (void)_openDBForceRecreate:(BOOL)recreate;	// 0x37962339
- (void)_openIfNecessary;	// 0x379627e9
- (void)_performWrites:(BOOL)writes;	// 0x379640fd
- (void)_prepareStatements;	// 0x37961f05
- (void)_printDBStatus:(const char *)status;	// 0x37962909
- (BOOL)_readEditions;	// 0x3796221d
- (void)_shrinkToUnderSize:(unsigned long long)underSize vacuum:(BOOL)vacuum;	// 0x379629a9
- (BOOL)_tileSetExpires:(unsigned)expires;	// 0x37963ab9
- (void)_updateEdition:(unsigned)edition forTileset:(unsigned)tileset provider:(unsigned)provider;	// 0x37963ddd
- (void)_updateSize;	// 0x379622ed
- (void)_writeEntry:(id)entry;	// 0x37963b05
- (void)_writeVersion;	// 0x3796219d
- (void)addTile:(id)tile forKey:(GEOTileKey *)key edition:(unsigned)edition tileSet:(unsigned)set;	// 0x379644f1
- (void)beginPreloadSessionOfSize:(unsigned long long)size;	// 0x37964fed
// declared property getter: - (BOOL)closed;	// 0x379628f9
// declared property getter: - (unsigned long long)databaseSize;	// 0x379652e1
- (void)dealloc;	// 0x3796518d
- (void)deleteTile:(const GEOTileKey *)tile;	// 0x37964c45
- (void)endPreloadSession;	// 0x37965111
- (void)flushPendingWrites;	// 0x37961cf5
// declared property getter: - (unsigned long long)maxDatabaseSize;	// 0x379652f9
// declared property getter: - (id)path;	// 0x379652b1
- (id)pendingWriteForKey:(GEOTileKey *)key;	// 0x37964691
- (void)pendingWritesForKeys:(id)keys handler:(id)handler;	// 0x37964805
// declared property setter: - (void)setClosed:(BOOL)closed;	// 0x37962811
- (void)setExpirationRecords:(XXStruct_nbUehC *)records count:(unsigned)count;	// 0x37964f31
// declared property setter: - (void)setMaxDatabaseSize:(unsigned long long)size;	// 0x37965311
// declared property setter: - (void)setTileDBMRU:(id)dbmru;	// 0x379652d1
- (void)shrinkToSize:(unsigned long long)size finished:(id)finished;	// 0x379637d5
// declared property getter: - (id)tileDBMRU;	// 0x379652c1
@end

