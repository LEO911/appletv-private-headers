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


@interface NSPredicate : NSObject <NSCoding, NSCopying> {
	void *_reserved;	// 4 = 0x4
}
+ (void)initialize;	// 0x3733f925
+ (id)newStringFrom:(id)from usingUnicodeTransforms:(unsigned)transforms;	// 0x373e1d69
+ (id)predicateWithBlock:(id)block;	// 0x373e1f31
+ (id)predicateWithFormat:(id)format;	// 0x3731b09d
+ (id)predicateWithFormat:(id)format argumentArray:(id)array;	// 0x373e1da1
+ (id)predicateWithFormat:(id)format arguments:(void *)arguments;	// 0x3731b0c9
+ (id)predicateWithValue:(BOOL)value;	// 0x373e1edd
+ (CFLocaleRef)retainedLocale;	// 0x373e1d85
- (id)initWithCoder:(id)coder;	// 0x3733fd89
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x373e1fc1
- (id)copyWithZone:(NSZone *)zone;	// 0x373e1f79
- (id)description;	// 0x373e2035
- (void)encodeWithCoder:(id)coder;	// 0x373206f1
- (BOOL)evaluateWithObject:(id)object;	// 0x37341f4d
- (BOOL)evaluateWithObject:(id)object substitutionVariables:(id)variables;	// 0x373e1f9d
- (id)generateMetadataDescription;	// 0x3735e2d1
- (id)predicateFormat;	// 0x373e2045
- (id)predicateWithSubstitutionVariables:(id)substitutionVariables;	// 0x373e1fe5
@end

