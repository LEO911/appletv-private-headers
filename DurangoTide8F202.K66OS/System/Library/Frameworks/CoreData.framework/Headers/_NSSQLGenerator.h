/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSSQLAdapter, NSMutableArray, NSSQLStatement, NSSQLStoreMappingGenerator, NSMutableString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _NSSQLGenerator : NSObject {
@private
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
@property(assign) BOOL autoDistinct;	// G=0x33113fb1; S=0x33113fc1; converted property
@property(readonly, retain) NSMutableString *sqlString;	// G=0x33113f91; converted property
@property(readonly, retain) NSMutableString *whereClause;	// G=0x33113fa1; converted property
+ (void)initialize;	// 0x33116db9
- (id)initWithStatement:(id)statement forAdapter:(id)adapter;	// 0x33116e09
- (void)_addBindVarForConstVal1:(id)constVal1;	// 0x33116241
- (void)_addBindVarForConstVal2:(id)constVal2;	// 0x331164d9
- (void)_appendWhereClauseForConstVal:(id)constVal;	// 0x33116211
- (void)_appendWhereClauseForConstantCollection:(id)constantCollection;	// 0x33118871
- (void)_appendWhereClauseForExpressionCollection:(id)expressionCollection;	// 0x33118955
- (BOOL)_isForeignObjectExpression:(id)expression;	// 0x331140b5
- (BOOL)_isNullExpression:(id)expression;	// 0x331141b1
- (id)_newPredicateWithInheritanceForFetchRequest:(id)fetchRequest;	// 0x33114989
- (id)_newWildSubStringForGlob:(id)glob wildStart:(BOOL)start wildEnd:(BOOL)end;	// 0x33119b8d
- (void)_prepareConst:(id)aConst inAttribute:(id)attribute sensitiveOptions:(unsigned)options;	// 0x33114485
- (void)_prepareConst:(id)aConst inManyToMany:(id)many;	// 0x3311469d
- (void)_prepareConst:(id)aConst inToMany:(id)many;	// 0x3311454d
- (BOOL)_prepareFunctionExpression:(id)expression;	// 0x33114249
- (void)_preparePredicate:(id)predicate;	// 0x33119cc1
- (void)_preparePredicateExpression:(id)expression;	// 0x3311773d
- (void)_preparePredicateOperator:(id)anOperator;	// 0x33117dd5
- (void)_prepareString:(id)string expressionPath:(id)path sensitiveOptions:(unsigned)options wildStart:(BOOL)start wildEnd:(BOOL)end allowToMany:(BOOL)many;	// 0x331142b1
- (void)_prepareSubstringWith:(id)with wildStart:(BOOL)start wildEnd:(BOOL)end;	// 0x33117391
- (id)_reducedSubpredicates:(id)subpredicates;	// 0x33118079
- (id)_retainedPrimaryKeyNumberForObject:(id)object;	// 0x3311681d
- (id)_retainedPrimaryKeyNumberForObjectID:(NSScalarObjectID *)objectID;	// 0x33116879
- (void)_startSQL:(id)sql;	// 0x33116c55
- (id)addJoinForDirectToManyToMany:(id)many;	// 0x33119715
- (void)addJoinForManyToManyRelationship:(id)manyRelationship sourcePath:(id)path destinationPath:(id)path3;	// 0x33119431
- (void)addJoinForToManyRelationship:(id)manyRelationship sourcePath:(id)path destinationPath:(id)path3;	// 0x33119285
- (void)addJoinForToOneRelationship:(id)oneRelationship sourcePath:(id)path destinationPath:(id)path3;	// 0x331190d5
- (void)appendClause:(id)clause forKeyPath:(id)keyPath allowToMany:(BOOL)many;	// 0x33117951
- (void)appendClause:(id)clause forKeyPathExpression:(id)keyPathExpression allowToMany:(BOOL)many;	// 0x33115791
- (void)appendClause:(id)clause forProperty:(id)property keypath:(id)keypath;	// 0x3311589d
- (void)appendCountClause:(id)clause forToManyKeyPath:(id)manyKeyPath;	// 0x33119861
- (void)appendJoinClauseToSQL;	// 0x33116985
- (void)appendLimitClauseToSQL:(unsigned)sql;	// 0x331168c1
- (void)appendOrderByClauseToSQL;	// 0x33116921
- (void)appendSQL:(id)sql;	// 0x33116c35
- (void)appendSelectListToSQLForRequest:(id)request;	// 0x331169a5
- (void)appendWhereClause:(id)clause;	// 0x33116c75
- (void)appendWhereClauseToSQL;	// 0x33116941
// converted property getter: - (BOOL)autoDistinct;	// 0x33113fb1
- (void)buildOrderByClauseWithSortDescriptors:(id)sortDescriptors;	// 0x33117e85
- (void)buildWhereClauseForRow:(id)row optLock:(long long)lock;	// 0x3311560d
- (void)buildWhereClauseWithSelectPredicate:(id)selectPredicate;	// 0x33118f99
- (void)buildWhereClauseWithSimplePredicate:(id)simplePredicate;	// 0x33115711
- (void)dealloc;	// 0x33116f79
- (BOOL)foldComparisonPredicate:(id)predicate;	// 0x33113fd1
- (BOOL)isToManyCountKeyPath:(id)manyCountKeyPath;	// 0x33115831
- (void)prepareBeginsWith:(id)with;	// 0x33114229
- (void)prepareBetween:(id)between;	// 0x33118369
- (void)prepareComparisonPredicate:(id)predicate;	// 0x331170a5
- (void)prepareCountStatementWithFetchRequest:(id)fetchRequest;	// 0x33114721
- (void)prepareDeleteStatementWithCorrelation:(id)correlation;	// 0x33115931
- (void)prepareDeleteStatementWithRow:(id)row;	// 0x33114de9
- (void)prepareEndsWith:(id)with;	// 0x33114209
- (void)prepareIn:(id)anIn swap:(BOOL)swap;	// 0x33118a39
- (void)prepareInsertStatementWithCorrelation:(id)correlation;	// 0x33115ad1
- (void)prepareInsertStatementWithRow:(id)row;	// 0x33115c1d
- (void)prepareLike:(id)like;	// 0x331174e1
- (void)prepareMatches:(id)matches;	// 0x331176e1
- (void)prepareSelectStatementWithFetchRequest:(id)fetchRequest ignoreInheritance:(BOOL)inheritance;	// 0x33114891
- (void)prepareUpdateStatementWithRow:(id)row originalRow:(id)row2;	// 0x33114fbd
// converted property setter: - (void)setAutoDistinct:(BOOL)distinct;	// 0x33113fc1
// converted property getter: - (id)sqlString;	// 0x33113f91
- (unsigned)sqlTypeForExpressionConstantValue:(id)expressionConstantValue;	// 0x33116c95
- (unsigned)sqlTypeForPropertyAtEndOfKeyPath:(id)keyPath;	// 0x331166c1
// converted property getter: - (id)whereClause;	// 0x33113fa1
@end

