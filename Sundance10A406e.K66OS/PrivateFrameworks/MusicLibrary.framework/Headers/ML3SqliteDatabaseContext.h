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
@property(readonly, assign, nonatomic) sqlite3 *db;	// G=0x33ed16a1; 
@property(assign, nonatomic) BOOL isInTransaction;	// G=0x33f18851; S=0x33f18861; @synthesize=_isInTransaction
- (id)initWithDB:(sqlite3 *)db;	// 0x33ed15c1
- (void).cxx_destruct;	// 0x33f18871
// declared property getter: - (sqlite3 *)db;	// 0x33ed16a1
- (void)dealloc;	// 0x33f18669
- (BOOL)executeSQL:(id)sql;	// 0x33f186f1
// declared property getter: - (BOOL)isInTransaction;	// 0x33f18851
- (void)popDB;	// 0x33f18795
- (void)pushDB:(sqlite3 *)db;	// 0x33f1874d
// declared property setter: - (void)setIsInTransaction:(BOOL)transaction;	// 0x33f18861
- (sqlite3_stmt *)statementForSQL:(id)sql;	// 0x33ee0bf9
@end

