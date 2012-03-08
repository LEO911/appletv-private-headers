/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSExpression.h"
#import "Foundation-Structs.h"

@class NSPredicate;

@interface NSTernaryExpression : NSExpression {
@private
	NSPredicate *_predicate;	// 12 = 0xc
	NSExpression *_trueExpression;	// 16 = 0x10
	NSExpression *_falseExpression;	// 20 = 0x14
}
@property(readonly, retain) NSExpression *falseExpression;	// G=0x306d30a5; converted property
@property(readonly, retain) NSPredicate *predicate;	// G=0x306d3085; converted property
@property(readonly, retain) NSExpression *trueExpression;	// G=0x306d3095; converted property
- (id)initWithCoder:(id)coder;	// 0x306d2d05
- (id)initWithPredicate:(id)predicate trueExpression:(id)expression falseExpression:(id)expression3;	// 0x306d2ae5
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x306d3169
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x306d30b5
- (id)copyWithZone:(NSZone *)zone;	// 0x306d2e21
- (void)dealloc;	// 0x306d2b75
- (void)encodeWithCoder:(id)coder;	// 0x306d2c09
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x306d3269
// converted property getter: - (id)falseExpression;	// 0x306d30a5
- (BOOL)isEqual:(id)equal;	// 0x306d2ee1
// converted property getter: - (id)predicate;	// 0x306d3085
- (id)predicateFormat;	// 0x306d2fe9
// converted property getter: - (id)trueExpression;	// 0x306d3095
@end
