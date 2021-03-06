/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSCoding.h"
#import "Foundation-Structs.h"


@interface NSPredicateOperator : NSObject <NSCoding, NSCopying> {
	unsigned _operatorType;	// 4 = 0x4
	unsigned _modifier;	// 8 = 0x8
}
@property(readonly, assign) unsigned modifier;	// G=0x37340a59; converted property
@property(readonly, assign) unsigned operatorType;	// G=0x373401d5; converted property
+ (SEL)_getSelectorForType:(unsigned)type;	// 0x37343225
+ (id)_getSymbolForType:(unsigned)type;	// 0x373e99d1
+ (id)_newOperatorWithType:(unsigned)type modifier:(unsigned)modifier options:(unsigned)options;	// 0x3731d6a9
+ (id)operatorWithCustomSelector:(SEL)customSelector modifier:(unsigned)modifier;	// 0x373e9af5
+ (id)operatorWithType:(unsigned)type modifier:(unsigned)modifier options:(unsigned)options;	// 0x373e9ac1
- (id)initWithCoder:(id)coder;	// 0x373400a5
- (id)initWithOperatorType:(unsigned)operatorType;	// 0x37340611
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier;	// 0x3731da45
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier options:(unsigned)options;	// 0x373e9b41
- (void)_setModifier:(unsigned)modifier;	// 0x373e9dbd
- (void)_setOptions:(unsigned)options;	// 0x373e9d95
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x373e9d75
- (id)copyWithZone:(NSZone *)zone;	// 0x373e9bf5
- (id)description;	// 0x373e9c29
- (void)encodeWithCoder:(id)coder;	// 0x373e9b51
- (unsigned)hash;	// 0x373e9d11
- (BOOL)isEqual:(id)equal;	// 0x373e9c7d
// converted property getter: - (unsigned)modifier;	// 0x37340a59
// converted property getter: - (unsigned)operatorType;	// 0x373401d5
- (unsigned)options;	// 0x373e9db9
- (BOOL)performOperationUsingObject:(id)object andObject:(id)object2;	// 0x37342d61
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x373e9d51
- (id)predicateFormat;	// 0x373e9c19
- (SEL)selector;	// 0x373431e1
- (id)symbol;	// 0x373e9c39
@end

