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
@private
	NSPredicate *_predicate;	// 12 = 0xc
	NSExpression *_trueExpression;	// 16 = 0x10
	NSExpression *_falseExpression;	// 20 = 0x14
}
@property(readonly, retain) NSExpression *falseExpression;	// G=0x31ac2549; converted property
@property(readonly, retain) NSPredicate *predicate;	// G=0x31ac2529; converted property
@property(readonly, retain) NSExpression *trueExpression;	// G=0x31ac2539; converted property
- (id)initWithCoder:(id)coder;	// 0x31ac2195
- (id)initWithPredicate:(id)predicate trueExpression:(id)expression falseExpression:(id)expression3;	// 0x31ac1f75
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x31ac2611
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x31ac2559
- (id)copyWithZone:(NSZone *)zone;	// 0x31ac22b1
- (void)dealloc;	// 0x31ac2009
- (void)encodeWithCoder:(id)coder;	// 0x31ac2099
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x31ac2715
// converted property getter: - (id)falseExpression;	// 0x31ac2549
- (BOOL)isEqual:(id)equal;	// 0x31ac2375
// converted property getter: - (id)predicate;	// 0x31ac2529
- (id)predicateFormat;	// 0x31ac2489
// converted property getter: - (id)trueExpression;	// 0x31ac2539
@end

