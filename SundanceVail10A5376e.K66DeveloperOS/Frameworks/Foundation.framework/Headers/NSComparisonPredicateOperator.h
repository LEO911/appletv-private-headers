/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicateOperator.h"


@interface NSComparisonPredicateOperator : NSPredicateOperator {
	unsigned _variant;	// 12 = 0xc
	unsigned _options;	// 16 = 0x10
}
@property(readonly, assign) unsigned options;	// G=0x34d67bd5; converted property
@property(readonly, assign) unsigned variant;	// G=0x34e1466d; converted property
- (id)initWithCoder:(id)coder;	// 0x34e14401
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier variant:(unsigned)variant;	// 0x34d67861
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier variant:(unsigned)variant options:(unsigned)options;	// 0x34d6782d
- (id)copyWithZone:(NSZone *)zone;	// 0x34e144d5
- (void)encodeWithCoder:(id)coder;	// 0x34e14335
- (BOOL)isEqual:(id)equal;	// 0x34e1467d
// converted property getter: - (unsigned)options;	// 0x34d67bd5
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x34e14759
- (id)predicateFormat;	// 0x34e14555
// converted property getter: - (unsigned)variant;	// 0x34e1466d
@end

