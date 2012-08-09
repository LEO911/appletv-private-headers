/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"

@class NSPredicate;

@interface NSTernaryExpression : NSExpression {
	NSPredicate *_predicate;	// 12 = 0xc
	NSExpression *_trueExpression;	// 16 = 0x10
	NSExpression *_falseExpression;	// 20 = 0x14
}
@property(readonly, retain) NSExpression *falseExpression;	// G=0x373e6fc1; converted property
@property(readonly, retain) NSPredicate *predicate;	// G=0x373e6fa1; converted property
@property(readonly, retain) NSExpression *trueExpression;	// G=0x373e6fb1; converted property
- (id)initWithCoder:(id)coder;	// 0x373e6c0d
- (id)initWithPredicate:(id)predicate trueExpression:(id)expression falseExpression:(id)expression3;	// 0x373e69ed
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x373e7089
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x373e6fd1
- (id)copyWithZone:(NSZone *)zone;	// 0x373e6d29
- (void)dealloc;	// 0x373e6a81
- (void)encodeWithCoder:(id)coder;	// 0x373e6b11
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x373e718d
// converted property getter: - (id)falseExpression;	// 0x373e6fc1
- (BOOL)isEqual:(id)equal;	// 0x373e6ded
// converted property getter: - (id)predicate;	// 0x373e6fa1
- (id)predicateFormat;	// 0x373e6f01
// converted property getter: - (id)trueExpression;	// 0x373e6fb1
@end
