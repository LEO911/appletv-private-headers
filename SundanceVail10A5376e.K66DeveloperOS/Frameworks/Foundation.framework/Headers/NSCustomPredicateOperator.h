/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicateOperator.h"


__attribute__((visibility("hidden")))
@interface NSCustomPredicateOperator : NSPredicateOperator {
	SEL _selector;	// 12 = 0xc
}
@property(readonly, assign) SEL selector;	// G=0x34e14d0d; converted property
- (id)initWithCoder:(id)coder;	// 0x34e14c01
- (id)initWithCustomSelector:(SEL)customSelector modifier:(unsigned)modifier;	// 0x34e14b11
- (id)copyWithZone:(NSZone *)zone;	// 0x34e14cb5
- (void)encodeWithCoder:(id)coder;	// 0x34e14b51
- (BOOL)isEqual:(id)equal;	// 0x34e14d1d
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x34e14df1
// converted property getter: - (SEL)selector;	// 0x34e14d0d
- (id)symbol;	// 0x34e14dd5
@end

