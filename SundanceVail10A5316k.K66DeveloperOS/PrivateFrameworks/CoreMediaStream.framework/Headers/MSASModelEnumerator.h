/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSEnumerator.h> // Unknown library
#import "CoreMediaStream-Structs.h"


@interface MSASModelEnumerator : NSEnumerator {
@private
	sqlite3 *_db;	// 4 = 0x4
	sqlite3_stmt *_stmt;	// 8 = 0x8
	id _stepBlock;	// 12 = 0xc
}
@property(assign, nonatomic) sqlite3 *db;	// G=0x339e80e9; S=0x339e80f9; @synthesize=_db
@property(copy, nonatomic) id stepBlock;	// G=0x339e8129; S=0x339e813d; @synthesize=_stepBlock
@property(assign, nonatomic) sqlite3_stmt *stmt;	// G=0x339e8109; S=0x339e8119; @synthesize=_stmt
+ (id)enumeratorWithDatabase:(sqlite3 *)database query:(id)query stepBlock:(id)block;	// 0x339e7d65
- (id)init;	// 0x339e7dd9
- (id)initWithDatabase:(sqlite3 *)database query:(id)query stepBlock:(id)block;	// 0x339e7e01
- (void).cxx_destruct;	// 0x339e814d
// declared property getter: - (sqlite3 *)db;	// 0x339e80e9
- (void)dealloc;	// 0x339e7f55
- (id)nextObject;	// 0x339e7fa5
// declared property setter: - (void)setDb:(sqlite3 *)db;	// 0x339e80f9
// declared property setter: - (void)setStepBlock:(id)block;	// 0x339e813d
// declared property setter: - (void)setStmt:(sqlite3_stmt *)stmt;	// 0x339e8119
// declared property getter: - (id)stepBlock;	// 0x339e8129
// declared property getter: - (sqlite3_stmt *)stmt;	// 0x339e8109
@end

