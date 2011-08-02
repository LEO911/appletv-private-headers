/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPredicate.h"
#import "Foundation-Structs.h"


@interface NSTruePredicate : NSPredicate {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x327f2739
+ (id)defaultInstance;	// 0x3274c339
+ (void)initialize;	// 0x32764cc1
- (id)initWithCoder:(id)coder;	// 0x327f278d
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x327f2771
- (id)autorelease;	// 0x327f2755
- (id)copyWithZone:(NSZone *)zone;	// 0x327f2759
- (void)encodeWithCoder:(id)coder;	// 0x327f27e1
- (BOOL)evaluateWithObject:(id)object substitutionVariables:(id)variables;	// 0x327f276d
- (unsigned)hash;	// 0x327f275d
- (BOOL)isEqual:(id)equal;	// 0x3274c345
- (id)predicateFormat;	// 0x327f2761
- (void)release;	// 0x327f2751
- (id)retain;	// 0x327f2745
- (unsigned)retainCount;	// 0x327f2749
@end
