/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSExpression.h> // Unknown library
#import "CoreData-Structs.h"


@interface NSFetchRequestExpression : NSExpression {
@private
	void *_reserved1;	// 12 = 0xc
	void *_reserved2;	// 16 = 0x10
	void *_reserved3;	// 20 = 0x14
	void *_reserved4;	// 24 = 0x18
	NSExpression *_fetchRequest;	// 28 = 0x1c
	NSExpression *_managedObjectContext;	// 32 = 0x20
	fetchExpressionFlags _flags;	// 36 = 0x24
}
+ (id)expressionForFetch:(id)fetch context:(id)context countOnly:(BOOL)only;	// 0x33f9a039
- (id)initForFetch:(id)fetch context:(id)context countOnly:(BOOL)only;	// 0x33f99f95
- (id)initWithCoder:(id)coder;	// 0x33f9a56d
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x33f9a08d
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x33f9a17d
- (id)contextExpression;	// 0x33f99f6d
- (id)copyWithZone:(NSZone *)zone;	// 0x33f9a4fd
- (void)dealloc;	// 0x33f9a705
- (id)description;	// 0x33f9a345
- (void)encodeWithCoder:(id)coder;	// 0x33f9a65d
- (unsigned)expressionType;	// 0x33f99f91
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x33f9a3dd
- (unsigned)hash;	// 0x33f9a21d
- (BOOL)isCountOnlyRequest;	// 0x33f99f7d
- (BOOL)isEqual:(id)equal;	// 0x33f9a261
- (id)predicateFormat;	// 0x33f9a355
- (id)requestExpression;	// 0x33f99f5d
@end

