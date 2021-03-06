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
@property(assign) sqlite3_stmt *cachedSQLiteStatement;	// G=0x36245f31; S=0x363029ad; converted property
// converted property getter: - (sqlite3_stmt *)cachedSQLiteStatement;	// 0x36245f31
- (void)clearCaches;	// 0x36247d6d
- (void)dealloc;	// 0x36247dcd
- (void)finalize;	// 0x3630296d
// converted property setter: - (void)setCachedSQLiteStatement:(sqlite3_stmt *)statement;	// 0x363029ad
@end

