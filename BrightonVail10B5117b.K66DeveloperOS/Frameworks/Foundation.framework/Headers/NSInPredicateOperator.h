/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicateOperator.h"

@class NSSubstringPredicateOperator;

@interface NSInPredicateOperator : NSPredicateOperator {
	unsigned _flags;	// 12 = 0xc
	NSSubstringPredicateOperator *_stringVersion;	// 16 = 0x10
}
@property(readonly, assign) unsigned flags;	// G=0x31a35551; converted property
@property(readonly, retain) NSSubstringPredicateOperator *stringVersion;	// G=0x31a35219; converted property
- (id)initWithCoder:(id)coder;	// 0x31a35335
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier options:(unsigned)options;	// 0x31987759
- (void)_setOptions:(unsigned)options;	// 0x319877a1
- (id)copyWithZone:(NSZone *)zone;	// 0x31a35619
- (void)dealloc;	// 0x31989f1d
- (void)encodeWithCoder:(id)coder;	// 0x31a352d9
// converted property getter: - (unsigned)flags;	// 0x31a35551
- (BOOL)isEqual:(id)equal;	// 0x31a35561
- (unsigned)options;	// 0x31a358e5
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x31a35685
// converted property getter: - (id)stringVersion;	// 0x31a35219
- (id)symbol;	// 0x31a35399
@end
