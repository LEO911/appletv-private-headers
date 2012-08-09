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
@property(assign) BOOL autoDistinct;	// G=0x35c06f2d; S=0x35c06f3d; converted property
@property(readonly, retain) NSMutableString *sqlString;	// G=0x35c00509; converted property
@property(readonly, retain) NSMutableString *whereClause;	// G=0x35c006bd; converted property
+ (void)initialize;	// 0x35c001fd
- (id)initWithStatement:(id)statement forAdapter:(id)adapter;	// 0x35c0038d
- (void)_addBindVarForConstVal1:(id)constVal1;	// 0x35c00f91
- (void)_addBindVarForConstVal2:(id)constVal2;	// 0x35c00d85
- (void)_appendWhereClauseForConstVal:(id)constVal;	// 0x35c01251
- (void)_appendWhereClauseForConstantCollection:(id)constantCollection;	// 0x35c05035
- (void)_appendWhereClauseForExpressionCollection:(id)expressionCollection;	// 0x35c04f25
- (BOOL)_isForeignObjectExpression:(id)expression;	// 0x35c06f4d
- (BOOL)_isNullExpression:(id)expression;	// 0x35c0623d
- (id)_newPredicateWithInheritanceForFetchRequest:(id)fetchRequest;	// 0x35c04325
- (id)_newWildSubStringForGlob:(id)glob wildStart:(BOOL)start wildEnd:(BOOL)end;	// 0x35c04c11
- (void)_prepareConst:(id)aConst inAttribute:(id)attribute sensitiveOptions:(unsigned)options;	// 0x35c04b35
- (void)_prepareConst:(id)aConst inManyToMany:(id)many;	// 0x35c04935
- (void)_prepareConst:(id)aConst inToMany:(id)many;	// 0x35c049c9
- (BOOL)_prepareFunctionExpression:(id)expression;	// 0x35c05145
- (void)_preparePredicate:(id)predicate;	// 0x35c068dd
- (void)_preparePredicateExpression:(id)expression;	// 0x35c051b1
- (void)_preparePredicateOperator:(id)anOperator;	// 0x35c00b4d
- (void)_prepareString:(id)string expressionPath:(id)path sensitiveOptions:(unsigned)options wildStart:(BOOL)start wildEnd:(BOOL)end allowToMany:(BOOL)many;	// 0x35c04d4d
- (void)_prepareSubstringWith:(id)with wildStart:(BOOL)start wildEnd:(BOOL)end;	// 0x35c06099
- (id)_reducedSubpredicates:(id)subpredicates;	// 0x35c065a9
- (id)_retainedPrimaryKeyNumberForObject:(id)object;	// 0x35c00ae1
- (id)_retainedPrimaryKeyNumberForObjectID:(NSScalarObjectID *)objectID;	// 0x35c00a89
- (void)_startSQL:(id)sql;	// 0x35c0067d
- (id)addJoinForDirectToManyToMany:(id)many;	// 0x35c02ab1
- (void)addJoinForManyToManyRelationship:(id)manyRelationship sourcePath:(id)path destinationPath:(id)path3;	// 0x35c027bd
- (void)addJoinForToManyRelationship:(id)manyRelationship sourcePath:(id)path destinationPath:(id)path3;	// 0x35c025f1
- (void)addJoinForToOneRelationship:(id)oneRelationship sourcePath:(id)path destinationPath:(id)path3;	// 0x35c02425
- (void)appendClause:(id)clause forKeyPath:(id)keyPath allowToMany:(BOOL)many;	// 0x35c02fc9
- (void)appendClause:(id)clause forKeyPathExpression:(id)keyPathExpression allowToMany:(BOOL)many;	// 0x35c033d5
- (void)appendClause:(id)clause forProperty:(id)property keypath:(id)keypath;	// 0x35c02381
- (void)appendCountClause:(id)clause forToManyKeyPath:(id)manyKeyPath;	// 0x35c02c75
- (void)appendJoinClauseToSQL;	// 0x35c00985
- (void)appendLimitClauseToSQL:(unsigned)sql;	// 0x35c00a15
- (void)appendOrderByClauseToSQL;	// 0x35c009f5
- (void)appendSQL:(id)sql;	// 0x35c0069d
- (void)appendSelectListToSQLForRequest:(id)request;	// 0x35c006cd
- (void)appendWhereClause:(id)clause;	// 0x35c0065d
- (void)appendWhereClauseToSQL;	// 0x35c009a5
// converted property getter: - (BOOL)autoDistinct;	// 0x35c06f2d
- (void)buildOrderByClauseWithSortDescriptors:(id)sortDescriptors;	// 0x35c0347d
- (void)buildWhereClauseForRow:(id)row optLock:(long long)lock;	// 0x35c036d1
- (void)buildWhereClauseWithSelectPredicate:(id)selectPredicate;	// 0x35c02225
- (void)buildWhereClauseWithSimplePredicate:(id)simplePredicate;	// 0x35c03661
- (void)dealloc;	// 0x35c00259
- (BOOL)foldComparisonPredicate:(id)predicate;	// 0x35c07061
- (BOOL)isToManyCountKeyPath:(id)manyCountKeyPath;	// 0x35c02bf9
- (void)prepareBeginsWith:(id)with;	// 0x35c061fd
- (void)prepareBetween:(id)between;	// 0x35c05961
- (void)prepareComparisonPredicate:(id)predicate;	// 0x35c062a1
- (void)prepareCountStatementWithFetchRequest:(id)fetchRequest;	// 0x35c047c1
- (void)prepareDeleteStatementWithCorrelation:(id)correlation;	// 0x35c0204d
- (void)prepareDeleteStatementWithRow:(id)row;	// 0x35c04121
- (void)prepareEndsWith:(id)with;	// 0x35c0621d
- (void)prepareIn:(id)anIn swap:(BOOL)swap;	// 0x35c05399
- (void)prepareInsertStatementWithCorrelation:(id)correlation;	// 0x35c01a5d
- (void)prepareInsertStatementWithRow:(id)row;	// 0x35c01289
- (void)prepareLike:(id)like;	// 0x35c05e61
- (void)prepareMatches:(id)matches;	// 0x35c058fd
- (void)prepareSelectStatementWithFetchRequest:(id)fetchRequest ignoreInheritance:(BOOL)inheritance;	// 0x35c046a9
- (void)prepareUpdateStatementWithCorrelation:(id)correlation;	// 0x35c01ced
- (void)prepareUpdateStatementWithRow:(id)row originalRow:(id)row2;	// 0x35c037e5
// converted property setter: - (void)setAutoDistinct:(BOOL)distinct;	// 0x35c06f3d
// converted property getter: - (id)sqlString;	// 0x35c00509
- (unsigned)sqlTypeForExpressionConstantValue:(id)expressionConstantValue;	// 0x35c00519
- (unsigned)sqlTypeForPropertyAtEndOfKeyPath:(id)keyPath;	// 0x35c00c0d
// converted property getter: - (id)whereClause;	// 0x35c006bd
@end
