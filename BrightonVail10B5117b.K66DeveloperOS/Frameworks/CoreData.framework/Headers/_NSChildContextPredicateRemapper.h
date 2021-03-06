/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSManagedObjectContext;

@interface _NSChildContextPredicateRemapper : NSObject {
	NSManagedObjectContext *_context;	// 4 = 0x4
}
- (id)init;	// 0x30f0cc31
- (id)initWithContext:(id)context;	// 0x30f0cc5d
- (id)createPredicateForFetchFromPredicate:(id)predicate withContext:(id)context;	// 0x30f0cce9
- (void)dealloc;	// 0x30f0cc9d
- (id)replacementValueForValue:(id)value;	// 0x30f0cd35
- (void)visitPredicate:(id)predicate;	// 0x30f0cd31
- (void)visitPredicateExpression:(id)expression;	// 0x30f0d095
@end

