/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MLSQLiteConnectionSQLiteDelegate.h"
#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library

@class ML3NondurableWriteSet, ML3MusicLibrary, CPLRUDictionary, MLSQLiteConnectionQueue, MLSQLiteConnection;

@interface ML3MusicLibrary_SQLiteDatabaseContext : NSObject <MLSQLiteConnectionSQLiteDelegate> {
	ML3MusicLibrary *_library;	// 4 = 0x4
	MLSQLiteConnection *_connection;	// 8 = 0x8
	const void *_iTunesExtensions;	// 12 = 0xc
	iPhoneSortKeyBuilder *_sortKeyBuilder;	// 16 = 0x10
	CPLRUDictionary *_statementCache;	// 20 = 0x14
	ML3NondurableWriteSet *_nondurableWriteSet;	// 24 = 0x18
	int _transactionKind;	// 28 = 0x1c
	unsigned _writeStatementCount;	// 32 = 0x20
	unsigned _transactionHasChanges : 1;	// 36 = 0x24
	unsigned _transactionHasNonContentsChanges : 1;	// 36 = 0x24
	unsigned _transactionHasInvisiblePropertyChanges : 1;	// 36 = 0x24
	unsigned _transactionHasDisplayValuesChanges : 1;	// 36 = 0x24
	MLSQLiteConnectionQueue *_connectionQueue;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) MLSQLiteConnection *connection;	// G=0x3487b1ad; @synthesize=_connection
@property(readonly, assign, nonatomic) MLSQLiteConnectionQueue *connectionQueue;	// G=0x3487afed; @synthesize=_connectionQueue
@property(retain, nonatomic) ML3NondurableWriteSet *nondurableWriteSet;	// G=0x34889415; S=0x34882a35; @synthesize=_nondurableWriteSet
@property(readonly, assign, nonatomic) iPhoneSortKeyBuilder *sortKeyBuilder;	// G=0x3488561d; @synthesize=_sortKeyBuilder
@property(assign, nonatomic) BOOL transactionHasChanges;	// G=0x34889859; S=0x3488986d; 
@property(assign, nonatomic) BOOL transactionHasDisplayValuesChanges;	// G=0x348898fd; S=0x34889911; 
@property(assign, nonatomic) BOOL transactionHasInvisiblePropertyChanges;	// G=0x348898c5; S=0x348898d9; 
@property(assign, nonatomic) BOOL transactionHasNonContentsChanges;	// G=0x3488988d; S=0x348898a1; 
@property(assign, nonatomic) int transactionKind;	// G=0x34882a15; S=0x34882a25; @synthesize=_transactionKind
- (id)initWithLibrary:(id)library connectionQueue:(id)queue;	// 0x348745d5
- (void).cxx_destruct;	// 0x3489ef7d
// declared property getter: - (id)connection;	// 0x3487b1ad
- (void)connection:(id)connection didOpenDBHandle:(sqlite3 *)handle;	// 0x3487bced
- (void)connection:(id)connection willCloseDBHandle:(sqlite3 *)handle;	// 0x3489ef41
// declared property getter: - (id)connectionQueue;	// 0x3487afed
- (void)dealloc;	// 0x3489eecd
// declared property getter: - (id)nondurableWriteSet;	// 0x34889415
// declared property setter: - (void)setNondurableWriteSet:(id)set;	// 0x34882a35
// declared property setter: - (void)setTransactionHasChanges:(BOOL)changes;	// 0x3488986d
// declared property setter: - (void)setTransactionHasDisplayValuesChanges:(BOOL)changes;	// 0x34889911
// declared property setter: - (void)setTransactionHasInvisiblePropertyChanges:(BOOL)changes;	// 0x348898d9
// declared property setter: - (void)setTransactionHasNonContentsChanges:(BOOL)changes;	// 0x348898a1
// declared property setter: - (void)setTransactionKind:(int)kind;	// 0x34882a25
// declared property getter: - (iPhoneSortKeyBuilder *)sortKeyBuilder;	// 0x3488561d
// declared property getter: - (BOOL)transactionHasChanges;	// 0x34889859
// declared property getter: - (BOOL)transactionHasDisplayValuesChanges;	// 0x348898fd
// declared property getter: - (BOOL)transactionHasInvisiblePropertyChanges;	// 0x348898c5
// declared property getter: - (BOOL)transactionHasNonContentsChanges;	// 0x3488988d
// declared property getter: - (int)transactionKind;	// 0x34882a15
@end

