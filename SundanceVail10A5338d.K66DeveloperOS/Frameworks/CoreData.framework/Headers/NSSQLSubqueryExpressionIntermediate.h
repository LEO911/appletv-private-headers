/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLExpressionIntermediate.h"

@class NSSQLFetchIntermediate, NSString, NSSQLColumn, NSMutableArray, NSSQLEntity, NSMutableString, NSExpression;

@interface NSSQLSubqueryExpressionIntermediate : NSSQLExpressionIntermediate {
	NSExpression *_trailingKeypath;	// 16 = 0x10
	NSExpression *_variableExpression;	// 20 = 0x14
	NSSQLFetchIntermediate *_fetchIntermediate;	// 24 = 0x18
	NSSQLEntity *_selectFromEntity;	// 28 = 0x1c
	NSMutableString *_selectFromCorrelationTarget;	// 32 = 0x20
	NSString *_selectEntityAlias;	// 36 = 0x24
	NSSQLEntity *_governingEntityForVariable;	// 40 = 0x28
	NSSQLColumn *_variableColumn;	// 44 = 0x2c
	NSString *_variableAlias;	// 48 = 0x30
	NSSQLColumn *_targetColumn;	// 52 = 0x34
	NSString *_targetAlias;	// 56 = 0x38
	NSMutableArray *_keypathsToPromote;	// 60 = 0x3c
	BOOL _useDistinct;	// 64 = 0x40
	BOOL _isCount;	// 65 = 0x41
	BOOL _hasTrailingFunction;	// 66 = 0x42
	BOOL _onlyTrailIsCount;	// 67 = 0x43
	BOOL _subqueryHasTruePredicate;	// 68 = 0x44
}
- (id)initWithExpression:(id)expression trailingKeypath:(id)keypath inScope:(id)scope;	// 0x3664a81d
- (void)_createCollectionJoinsForFetchInContext:(id)context;	// 0x3664b929
- (void)_createSelectClauseInFetchWithContext:(id)context;	// 0x3664b245
- (id)_generateSQLForVariableExpression:(id)variableExpression inContext:(id)context;	// 0x3664acbd
- (BOOL)_isKeypathScopedToSubquery:(id)subquery;	// 0x3664aaed
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)subqueryScopedKeypath;	// 0x3664adc1
- (void)_promoteJoinsForSubqueryScopedKeypaths;	// 0x3664af15
- (void)_setVariableColumn:(id)column;	// 0x3664b8e5
- (void)dealloc;	// 0x3664a9cd
- (id)fetchIntermediateForKeypathExpression:(id)keypathExpression;	// 0x3664abad
- (id)generateSQLStringInContext:(id)context;	// 0x3664caf1
- (id)governingAliasForKeypathExpression:(id)keypathExpression;	// 0x3664ac61
- (id)governingEntityForKeypathExpression:(id)keypathExpression;	// 0x3664ac05
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)anIn;	// 0x3664b00d
- (void)selectDistinct;	// 0x3664b231
@end
