/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"

@class NSPredicate;

@interface NSSubqueryExpression : NSExpression {
	NSExpression *_collection;	// 12 = 0xc
	NSExpression *_variableExpression;	// 16 = 0x10
	NSPredicate *_subpredicate;	// 20 = 0x14
}
@property(readonly, retain) NSExpression *collection;	// G=0x34717fa5; converted property
@property(readonly, retain) NSExpression *variableExpression;	// G=0x34717fb5; converted property
- (id)initWithCoder:(id)coder;	// 0x34717d05
- (id)initWithExpression:(id)expression usingIteratorExpression:(id)expression2 predicate:(id)predicate;	// 0x34717b21
- (id)initWithExpression:(id)expression usingIteratorVariable:(id)variable predicate:(id)predicate;	// 0x34717a4d
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x34718375
- (BOOL)_shouldUseParensWithDescription;	// 0x3471847d
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x34718481
// converted property getter: - (id)collection;	// 0x34717fa5
- (id)copyWithZone:(NSZone *)zone;	// 0x34717e4d
- (void)dealloc;	// 0x347179d5
- (void)encodeWithCoder:(id)coder;	// 0x34717c09
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x34718101
- (unsigned)hash;	// 0x347180b9
- (BOOL)isEqual:(id)equal;	// 0x34717ffd
- (id)predicate;	// 0x34717fed
- (id)predicateFormat;	// 0x34717f05
- (id)variable;	// 0x34717fc5
// converted property getter: - (id)variableExpression;	// 0x34717fb5
@end
