/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSSQLStatement.h"


@interface NSSQLiteStatement : NSSQLStatement {
	sqlite3_stmt *_cachedSQLiteStatement;	// 24 = 0x18
}
@property(assign) sqlite3_stmt *cachedSQLiteStatement;	// G=0x33ccaef1; S=0x33d8796d; converted property
// converted property getter: - (sqlite3_stmt *)cachedSQLiteStatement;	// 0x33ccaef1
- (void)clearCaches;	// 0x33cccd2d
- (void)dealloc;	// 0x33cccd8d
- (void)finalize;	// 0x33d8792d
// converted property setter: - (void)setCachedSQLiteStatement:(sqlite3_stmt *)statement;	// 0x33d8796d
@end
