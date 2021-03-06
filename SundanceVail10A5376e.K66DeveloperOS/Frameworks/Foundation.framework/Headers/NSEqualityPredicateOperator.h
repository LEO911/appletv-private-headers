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
@property(assign, getter=isNegation) BOOL negation;	// G=0x34d7c671; S=0x34e15159; converted property
@property(readonly, assign) unsigned options;	// G=0x34d668b1; converted property
- (id)initWithCoder:(id)coder;	// 0x34e14f65
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier negate:(BOOL)negate;	// 0x34d658b5
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier negate:(BOOL)negate options:(unsigned)options;	// 0x34d65881
- (void)_setOptions:(unsigned)options;	// 0x34e15169
- (id)copyWithZone:(NSZone *)zone;	// 0x34d7c38d
- (void)encodeWithCoder:(id)coder;	// 0x34e14e91
- (BOOL)isEqual:(id)equal;	// 0x34e15179
// converted property getter: - (BOOL)isNegation;	// 0x34d7c671
// converted property getter: - (unsigned)options;	// 0x34d668b1
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x34d69569
- (id)predicateFormat;	// 0x34e15041
// converted property setter: - (void)setNegation:(BOOL)negation;	// 0x34e15159
@end

