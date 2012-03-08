/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSStringPredicateOperator.h"


@interface NSSubstringPredicateOperator : NSStringPredicateOperator {
@private
	unsigned _position;	// 16 = 0x10
}
@property(readonly, assign) unsigned position;	// G=0x35eb14e9; converted property
- (id)initWithCoder:(id)coder;	// 0x35eb1439
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier variant:(unsigned)variant position:(unsigned)position;	// 0x35e13185
- (void)encodeWithCoder:(id)coder;	// 0x35eb1391
- (BOOL)isEqual:(id)equal;	// 0x35eb14f9
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x35e13279
// converted property getter: - (unsigned)position;	// 0x35eb14e9
- (SEL)selector;	// 0x35eb1381
- (id)symbol;	// 0x35eb15d1
@end
