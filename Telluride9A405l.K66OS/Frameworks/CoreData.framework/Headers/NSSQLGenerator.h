/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSSQLCore;

__attribute__((visibility("hidden")))
@interface NSSQLGenerator : NSObject {
@private
	NSSQLCore *_persistentStore;	// 4 = 0x4
}
+ (void)initialize;	// 0x33f67931
- (id)initWithPersistentStore:(id)persistentStore;	// 0x33f48e91
- (id)_predicateForSpecificEntity:(id)specificEntity;	// 0x33ffff15
- (id)_predicateRestrictingSuperentitiesForEntity:(id)entity;	// 0x34000195
- (id)_predicateRestrictingToSubentitiesForEntity:(id)entity;	// 0x34000055
- (void)generateGroupByIntermediatesForProperties:(id)properties inContext:(id)context;	// 0x33fffe15
- (void)generateHavingIntermediateForPredicate:(id)predicate inContext:(id)context;	// 0x33fffd8d
- (void)generateIntermediateForLimit:(unsigned)limit inContext:(id)context;	// 0x33f4c775
- (void)generateIntermediateForOffset:(unsigned)offset inContext:(id)context;	// 0x33fffe95
- (id)generateIntermediatesForFetchInContext:(id)context countOnly:(BOOL)only;	// 0x33f4b02d
- (void)generateOrderIntermediateInContext:(id)context;	// 0x33f4c605
- (void)generateSelectIntermediateInContext:(id)context;	// 0x33f4bd5d
- (void)generateWhereIntermediatesInContext:(id)context;	// 0x33f4b899
- (id)initializeContextForFetchRequest:(id)fetchRequest ignoreInheritance:(BOOL)inheritance nestingLevel:(unsigned)level;	// 0x33f49325
- (id)newSQLStatementForFetchRequest:(id)fetchRequest ignoreInheritance:(BOOL)inheritance countOnly:(BOOL)only nestingLevel:(unsigned)level;	// 0x33f48ed1
- (id)predicateForFetchRequestInContext:(id)context;	// 0x33f4991d
@end
