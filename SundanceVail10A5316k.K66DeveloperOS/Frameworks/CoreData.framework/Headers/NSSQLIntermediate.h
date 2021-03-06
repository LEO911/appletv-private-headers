/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSSQLIntermediate : NSObject {
@private
	NSSQLIntermediate *_scope;	// 4 = 0x4
}
@property(readonly, retain) NSSQLIntermediate *scope;	// G=0x32d35105; converted property
+ (BOOL)expressionIsBasicKeypath:(id)keypath;	// 0x32dc4c55
+ (BOOL)isSimpleKeypath:(id)keypath;	// 0x32d1cc1d
- (id)initWithScope:(id)scope;	// 0x32d1a779
- (BOOL)_canDoASubselectForExpression:(id)expression inContext:(id)context;	// 0x32dc573d
- (BOOL)_functionExpressionIsSubqueryFollowedByKeypath:(id)keypath;	// 0x32dc5149
- (id)_generateSQLForConstantCollection:(id)constantCollection inContext:(id)context;	// 0x32dc55c1
- (id)_generateSQLForConstantValue:(id)constantValue inContext:(id)context;	// 0x32d1d535
- (id)_generateSQLForExpression:(id)expression allowToMany:(BOOL)many inContext:(id)context;	// 0x32d1c1a9
- (id)_generateSQLForExpressionCollection:(id)expressionCollection allowToMany:(BOOL)many inContext:(id)context;	// 0x32dc53c5
- (id)_generateSQLForFetchExpression:(id)fetchExpression allowToMany:(BOOL)many inContext:(id)context;	// 0x32dc5855
- (id)_generateSQLForFunctionExpression:(id)functionExpression allowToMany:(BOOL)many inContext:(id)context;	// 0x32dc51f9
- (id)_generateSQLForKeyPathExpression:(id)keyPathExpression allowToMany:(BOOL)many inContext:(id)context;	// 0x32d1c3a1
- (id)_generateSQLForSubqueryExpression:(id)subqueryExpression trailingKeypath:(id)keypath inContext:(id)context;	// 0x32dc5d31
- (id)_generateSQLForTernaryExpression:(id)ternaryExpression allowToMany:(BOOL)many inContext:(id)context;	// 0x32dc5e55
- (id)_generateSQLForVariableExpression:(id)variableExpression inContext:(id)context;	// 0x32dc4de9
- (id)_lastScopedItem;	// 0x32dc4e2d
- (void)_promoteJoinsForAggregateExpression:(id)aggregateExpression;	// 0x32dc502d
- (void)_promoteJoinsForFunctionExpression:(id)functionExpression;	// 0x32dc4e79
- (void)_promoteJoinsForKeypathExpression:(id)keypathExpression;	// 0x32d301fd
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)subqueryScopedKeypath;	// 0x32dc4e55
- (void)_promoteJoinsForSubqueryScopedKeypaths;	// 0x32d1e0d9
- (void)_promoteJoinsForTernaryExpression:(id)ternaryExpression;	// 0x32dc50f9
- (BOOL)expressionIsBasicKeypath:(id)keypath;	// 0x32dc4cf5
- (id)fetchIntermediate;	// 0x32d1eb35
- (id)fetchIntermediateForKeypathExpression:(id)keypathExpression;	// 0x32d1d0c5
- (id)generateSQLStringInContext:(id)context;	// 0x32dc4bc9
- (id)governingAlias;	// 0x32dc4dc9
- (id)governingAliasForKeypathExpression:(id)keypathExpression;	// 0x32d1cc61
- (id)governingEntityForKeypathExpression:(id)keypathExpression;	// 0x32d1cb71
- (BOOL)isFunctionScoped;	// 0x32dc4bfd
- (BOOL)isHavingScoped;	// 0x32dc4c29
- (BOOL)isOrScoped;	// 0x32d1d4f9
- (BOOL)isSelectTargetScoped;	// 0x32d1c76d
- (BOOL)isSimpleKeypath:(id)keypath;	// 0x32d1cbf1
- (BOOL)isVariableBasedKeypathScopedBySubquery:(id)subquery;	// 0x32dc4d21
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)anIn;	// 0x32dc4e09
- (void)promoteJoinsInKeypathsForExpression:(id)expression;	// 0x32d30185
// converted property getter: - (id)scope;	// 0x32d35105
@end

