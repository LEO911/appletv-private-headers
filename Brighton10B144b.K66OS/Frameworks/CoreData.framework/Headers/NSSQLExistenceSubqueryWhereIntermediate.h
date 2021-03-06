/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLWhereIntermediate.h"

@class NSString, NSExpression, NSSQLProperty, NSSQLEntity;

@interface NSSQLExistenceSubqueryWhereIntermediate : NSSQLWhereIntermediate {
	NSExpression *_subqueryExpression;	// 12 = 0xc
	NSExpression *_variableExpression;	// 16 = 0x10
	NSString *_variableAlias;	// 20 = 0x14
	NSSQLProperty *_collectionProperty;	// 24 = 0x18
	NSSQLEntity *_governingEntityForVariable;	// 28 = 0x1c
}
- (id)initWithPredicate:(id)predicate inScope:(id)scope;	// 0x30f8faed
- (id)_generateSQLForVariableExpression:(id)variableExpression inContext:(id)context;	// 0x30f8fd79
- (BOOL)_isKeypathScopedToSubquery:(id)subquery;	// 0x30f8fba5
- (id)fetchIntermediateForKeypathExpression:(id)keypathExpression;	// 0x30f8fc65
- (id)generateSQLStringInContext:(id)context;	// 0x30f8fe7d
- (id)governingAliasForKeypathExpression:(id)keypathExpression;	// 0x30f8fd1d
- (id)governingEntityForKeypathExpression:(id)keypathExpression;	// 0x30f8fcc1
- (BOOL)isExistenceScoped;	// 0x30f8fba1
@end

