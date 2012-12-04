/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicateOperator.h"


@interface NSEqualityPredicateOperator : NSPredicateOperator {
	BOOL _negate;	// 12 = 0xc
	unsigned _options;	// 16 = 0x10
}
@property(assign, getter=isNegation) BOOL negation;	// G=0x35550631; S=0x355e9119; converted property
@property(readonly, assign) unsigned options;	// G=0x3553a871; converted property
- (id)initWithCoder:(id)coder;	// 0x355e8f25
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier negate:(BOOL)negate;	// 0x35539875
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier negate:(BOOL)negate options:(unsigned)options;	// 0x35539841
- (void)_setOptions:(unsigned)options;	// 0x355e9129
- (id)copyWithZone:(NSZone *)zone;	// 0x3555034d
- (void)encodeWithCoder:(id)coder;	// 0x355e8e51
- (BOOL)isEqual:(id)equal;	// 0x355e9139
// converted property getter: - (BOOL)isNegation;	// 0x35550631
// converted property getter: - (unsigned)options;	// 0x3553a871
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x3553d529
- (id)predicateFormat;	// 0x355e9001
// converted property setter: - (void)setNegation:(BOOL)negation;	// 0x355e9119
@end
