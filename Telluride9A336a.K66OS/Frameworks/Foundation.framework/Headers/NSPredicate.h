/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"


@interface NSPredicate : NSObject <NSCoding, NSCopying> {
	void *_reserved;	// 4 = 0x4
}
+ (void)initialize;	// 0x336821e1
+ (id)newStringFrom:(id)from usingUnicodeTransforms:(unsigned)transforms;	// 0x3371df79
+ (id)predicateWithBlock:(id)block;	// 0x3371e171
+ (id)predicateWithFormat:(id)format;	// 0x3365d18d
+ (id)predicateWithFormat:(id)format argumentArray:(id)array;	// 0x3371dfb1
+ (id)predicateWithFormat:(id)format arguments:(void *)arguments;	// 0x3365d1b9
+ (id)predicateWithValue:(BOOL)value;	// 0x3371e0f1
+ (CFLocaleRef)retainedLocale;	// 0x3371df95
- (id)initWithCoder:(id)coder;	// 0x3368263d
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x3371e201
- (id)copyWithZone:(NSZone *)zone;	// 0x3371e1b9
- (id)description;	// 0x3371e271
- (void)encodeWithCoder:(id)coder;	// 0x3366328d
- (BOOL)evaluateWithObject:(id)object;	// 0x336847bd
- (BOOL)evaluateWithObject:(id)object substitutionVariables:(id)variables;	// 0x3371e1dd
- (id)generateMetadataDescription;	// 0x3369e139
- (id)predicateFormat;	// 0x3371e281
- (id)predicateWithSubstitutionVariables:(id)substitutionVariables;	// 0x3371e225
@end

