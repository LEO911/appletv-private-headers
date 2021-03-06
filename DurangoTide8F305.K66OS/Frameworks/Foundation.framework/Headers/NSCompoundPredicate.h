/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPredicate.h"
#import "Foundation-Structs.h"

@class NSArray;

@interface NSCompoundPredicate : NSPredicate {
@private
	void *_reserved2;	// 8 = 0x8
	unsigned _type;	// 12 = 0xc
	NSArray *_subpredicates;	// 16 = 0x10
}
@property(readonly, retain) NSArray *subpredicates;	// G=0x32767d69; converted property
+ (id)_operatorForType:(unsigned)type;	// 0x327f12ed
+ (id)andPredicateWithSubpredicates:(id)subpredicates;	// 0x327f13d1
+ (id)notPredicateWithSubpredicate:(id)subpredicate;	// 0x327f1341
+ (id)orPredicateWithSubpredicates:(id)subpredicates;	// 0x327f1399
- (id)initWithCoder:(id)coder;	// 0x327f167d
- (id)initWithType:(unsigned)type subpredicates:(id)subpredicates;	// 0x32767c69
- (void)_acceptSubpredicates:(id)subpredicates flags:(unsigned)flags;	// 0x32768221
- (id)_predicateOperator;	// 0x327f1951
- (id)_subpredicateDescription:(id)description;	// 0x327f1245
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x327681c5
- (unsigned)compoundPredicateType;	// 0x32767d59
- (id)copyWithZone:(NSZone *)zone;	// 0x32767dc5
- (void)dealloc;	// 0x32767d79
- (void)encodeWithCoder:(id)coder;	// 0x327f174d
- (BOOL)evaluateWithObject:(id)object substitutionVariables:(id)variables;	// 0x327f1985
- (unsigned)hash;	// 0x327f117d
- (BOOL)isEqual:(id)equal;	// 0x327f11a1
- (id)predicateFormat;	// 0x327f1409
- (id)predicateOperator;	// 0x327f1169
- (id)predicateWithSubstitutionVariables:(id)substitutionVariables;	// 0x327f1819
// converted property getter: - (id)subpredicates;	// 0x32767d69
@end

