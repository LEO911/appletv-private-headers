/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface ML3SqliteDatabaseContext : NSObject {
	sqlite3 **_dbStack;	// 4 = 0x4
	unsigned _dbStackCurrentIndex;	// 8 = 0x8
	CFDictionaryRef _statementCache;	// 12 = 0xc
	BOOL _isInTransaction;	// 16 = 0x10
	NSString *_path;	// 20 = 0x14
	BOOL _enableWrites;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) sqlite3 *db;	// G=0x3487dd29; 
@property(assign, nonatomic) BOOL isInTransaction;	// G=0x348c50e9; S=0x348c50f9; @synthesize=_isInTransaction
- (id)initWithDB:(sqlite3 *)db;	// 0x3487dc49
- (void).cxx_destruct;	// 0x348c5109
// declared property getter: - (sqlite3 *)db;	// 0x3487dd29
- (void)dealloc;	// 0x348c4f01
- (BOOL)executeSQL:(id)sql;	// 0x348c4f89
// declared property getter: - (BOOL)isInTransaction;	// 0x348c50e9
- (void)popDB;	// 0x348c502d
- (void)pushDB:(sqlite3 *)db;	// 0x348c4fe5
// declared property setter: - (void)setIsInTransaction:(BOOL)transaction;	// 0x348c50f9
- (sqlite3_stmt *)statementForSQL:(id)sql;	// 0x3488d281
@end

