/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLWhereIntermediate.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate {
@private
	NSMutableArray *_subclauses;	// 12 = 0xc
}
- (id)initWithPredicate:(id)predicate inScope:(id)scope inContext:(id)context;	// 0x31e6a3c5
- (id)_generateMulticlauseStringInContext:(id)context;	// 0x31e6a9bd
- (void)dealloc;	// 0x31e6cdcd
- (id)generateSQLStringInContext:(id)context;	// 0x31e6a6d9
- (BOOL)isOrScoped;	// 0x31e6ab8d
@end

