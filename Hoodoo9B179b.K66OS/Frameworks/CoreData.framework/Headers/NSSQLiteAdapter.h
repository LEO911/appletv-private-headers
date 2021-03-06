/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLAdapter.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLiteAdapter : NSSQLAdapter {
@private
	NSString *_dbpath;	// 12 = 0xc
}
- (id)initWithSQLCore:(id)sqlcore;	// 0x32ae06d5
- (id)createConnection;	// 0x32ae0771
- (void)dealloc;	// 0x32b01a19
- (id)pathnameForDatabase;	// 0x32ae0b51
- (id)sqliteVersion;	// 0x32ba44b1
- (Class)statementClass;	// 0x32ae2b91
- (BOOL)supportsCorrelatedSubqueries;	// 0x32ba4455
- (id)type;	// 0x32ae57c5
- (id)typeStringForColumn:(id)column;	// 0x32ba44e1
- (id)typeStringForSQLType:(unsigned)sqltype;	// 0x32ba43d1
@end

