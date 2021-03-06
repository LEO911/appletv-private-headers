/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableString, NSMutableDictionary, NSSQLAdapter, NSSQLStatement, NSSQLStoreMappingGenerator;

@interface _NSSQLGenerator : NSObject {
	NSSQLStatement *_statement;	// 4 = 0x4
	NSSQLAdapter *_adapter;	// 8 = 0x8
	NSMutableString *_sqlString;	// 12 = 0xc
	NSMutableDictionary *_aliasMap;	// 16 = 0x10
	NSSQLStoreMappingGenerator *_aliasNamer;	// 20 = 0x14
	NSMutableString *_joinClause;	// 24 = 0x18
	NSMutableString *_whereClause;	// 28 = 0x1c
	NSMutableString *_selectList;	// 32 = 0x20
	NSMutableString *_orderByClause;	// 36 = 0x24
	BOOL _allowToManyKeyPath;	// 40 = 0x28
	BOOL _useDistinct;	// 41 = 0x29
	BOOL _autoDistinct;	// 42 = 0x2a
	unsigned _scopedByORPredicate;	// 44 = 0x2c
	NSMutableArray *_comparisonPredicateScopedItem;	// 48 = 0x30
}
@property(assign) BOOL autoDistinct;	// G=0x33cedf35; S=0x33cedf45; converted property
@property(readonly, retain) NSMutableString *sqlString;	// G=0x33ce7511; converted property
@property(readonly, retain) NSMutableString *whereClause;	// G=0x33ce76c5; converted property
+ (void)initialize;	// 0x33ce7205
- (id)initWithStatement:(id)statement forAdapter:(id)adapter;	// 0x33ce7395
- (void)_addBindVarForConstVal1:(id)constVal1;	// 0x33ce7f99
- (void)_addBindVarForConstVal2:(id)constVal2;	// 0x33ce7d8d
- (void)_appendWhereClauseForConstVal:(id)constVal;	// 0x33ce8259
- (void)_appendWhereClauseForConstantCollection:(id)constantCollection;	// 0x33cec03d
- (void)_appendWhereClauseForExpressionCollection:(id)expressionCollection;	// 0x33cebf2d
- (BOOL)_isForeignObjectExpression:(id)expression;	// 0x33cedf55
- (BOOL)_isNullExpression:(id)expression;	// 0x33ced245
- (id)_newPredicateWithInheritanceForFetchRequest:(id)fetchRequest;	// 0x33ceb32d
- (id)_newWildSubStringForGlob:(id)glob wildStart:(BOOL)start wildEnd:(BOOL)end;	// 0x33cebc19
- (void)_prepareConst:(id)aConst inAttribute:(id)attribute sensitiveOptions:(unsigned)options;	// 0x33cebb3d
- (void)_prepareConst:(id)aConst inManyToMany:(id)many;	// 0x33ceb93d
- (void)_prepareConst:(id)aConst inToMany:(id)many;	// 0x33ceb9d1
- (BOOL)_prepareFunctionExpression:(id)expression;	// 0x33cec14d
- (void)_preparePredicate:(id)predicate;	// 0x33ced8e5
- (void)_preparePredicateExpression:(id)expression;	// 0x33cec1b9
- (void)_preparePredicateOperator:(id)anOperator;	// 0x33ce7b55
- (void)_prepareString:(id)string expressionPath:(id)path sensitiveOptions:(unsigned)options wildStart:(BOOL)start wildEnd:(BOOL)end allowToMany:(BOOL)many;	// 0x33cebd55
- (void)_prepareSubstringWith:(id)with wildStart:(BOOL)start wildEnd:(BOOL)end;	// 0x33ced0a1
- (id)_reducedSubpredicates:(id)subpredicates;	// 0x33ced5b1
- (id)_retainedPrimaryKeyNumberForObject:(id)object;	// 0x33ce7ae9
- (id)_retainedPrimaryKeyNumberForObjectID:(NSScalarObjectID *)objectID;	// 0x33ce7a91
- (void)_startSQL:(id)sql;	// 0x33ce7685
- (id)addJoinForDirectToManyToMany:(id)many;	// 0x33ce9ab9
- (void)addJoinForManyToManyRelationship:(id)manyRelationship sourcePath:(id)path destinationPath:(id)path3;	// 0x33ce97c5
- (void)addJoinForToManyRelationship:(id)manyRelationship sourcePath:(id)path destinationPath:(id)path3;	// 0x33ce95f9
- (void)addJoinForToOneRelationship:(id)oneRelationship sourcePath:(id)path destinationPath:(id)path3;	// 0x33ce942d
- (void)appendClause:(id)clause forKeyPath:(id)keyPath allowToMany:(BOOL)many;	// 0x33ce9fd1
- (void)appendClause:(id)clause forKeyPathExpression:(id)keyPathExpression allowToMany:(BOOL)many;	// 0x33cea3dd
- (void)appendClause:(id)clause forProperty:(id)property keypath:(id)keypath;	// 0x33ce9389
- (void)appendCountClause:(id)clause forToManyKeyPath:(id)manyKeyPath;	// 0x33ce9c7d
- (void)appendJoinClauseToSQL;	// 0x33ce798d
- (void)appendLimitClauseToSQL:(unsigned)sql;	// 0x33ce7a1d
- (void)appendOrderByClauseToSQL;	// 0x33ce79fd
- (void)appendSQL:(id)sql;	// 0x33ce76a5
- (void)appendSelectListToSQLForRequest:(id)request;	// 0x33ce76d5
- (void)appendWhereClause:(id)clause;	// 0x33ce7665
- (void)appendWhereClauseToSQL;	// 0x33ce79ad
// converted property getter: - (BOOL)autoDistinct;	// 0x33cedf35
- (void)buildOrderByClauseWithSortDescriptors:(id)sortDescriptors;	// 0x33cea485
- (void)buildWhereClauseForRow:(id)row optLock:(long long)lock;	// 0x33cea6d9
- (void)buildWhereClauseWithSelectPredicate:(id)selectPredicate;	// 0x33ce922d
- (void)buildWhereClauseWithSimplePredicate:(id)simplePredicate;	// 0x33cea669
- (void)dealloc;	// 0x33ce7261
- (BOOL)foldComparisonPredicate:(id)predicate;	// 0x33cee069
- (BOOL)isToManyCountKeyPath:(id)manyCountKeyPath;	// 0x33ce9c01
- (void)prepareBeginsWith:(id)with;	// 0x33ced205
- (void)prepareBetween:(id)between;	// 0x33cec969
- (void)prepareComparisonPredicate:(id)predicate;	// 0x33ced2a9
- (void)prepareCountStatementWithFetchRequest:(id)fetchRequest;	// 0x33ceb7c9
- (void)prepareDeleteStatementWithCorrelation:(id)correlation;	// 0x33ce9055
- (void)prepareDeleteStatementWithRow:(id)row;	// 0x33ceb129
- (void)prepareEndsWith:(id)with;	// 0x33ced225
- (void)prepareIn:(id)anIn swap:(BOOL)swap;	// 0x33cec3a1
- (void)prepareInsertStatementWithCorrelation:(id)correlation;	// 0x33ce8a65
- (void)prepareInsertStatementWithRow:(id)row;	// 0x33ce8291
- (void)prepareLike:(id)like;	// 0x33cece69
- (void)prepareMatches:(id)matches;	// 0x33cec905
- (void)prepareSelectStatementWithFetchRequest:(id)fetchRequest ignoreInheritance:(BOOL)inheritance;	// 0x33ceb6b1
- (void)prepareUpdateStatementWithCorrelation:(id)correlation;	// 0x33ce8cf5
- (void)prepareUpdateStatementWithRow:(id)row originalRow:(id)row2;	// 0x33cea7ed
// converted property setter: - (void)setAutoDistinct:(BOOL)distinct;	// 0x33cedf45
// converted property getter: - (id)sqlString;	// 0x33ce7511
- (unsigned)sqlTypeForExpressionConstantValue:(id)expressionConstantValue;	// 0x33ce7521
- (unsigned)sqlTypeForPropertyAtEndOfKeyPath:(id)keyPath;	// 0x33ce7c15
// converted property getter: - (id)whereClause;	// 0x33ce76c5
@end

