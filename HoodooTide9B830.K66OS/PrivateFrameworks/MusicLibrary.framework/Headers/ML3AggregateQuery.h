/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Query.h"

@class NSString;

@interface ML3AggregateQuery : ML3Query {
@private
	Class _aggregateEntityClass;	// 32 = 0x20
	NSString *_foreignPersistentIDProperty;	// 36 = 0x24
}
@property(readonly, assign) Class aggregateEntityClass;	// G=0x34fb132d; @synthesize=_aggregateEntityClass
@property(readonly, assign) NSString *foreignPersistentIDProperty;	// G=0x34fb133d; @synthesize=_foreignPersistentIDProperty
- (id)initWithCoder:(id)coder;	// 0x34fb120d
- (id)initWithUnitQuery:(id)unitQuery aggregateEntityClass:(Class)aClass foreignPersistentIDProperty:(id)property;	// 0x34f8e15d
// declared property getter: - (Class)aggregateEntityClass;	// 0x34fb132d
- (void)dealloc;	// 0x34f8e55d
- (BOOL)distinctPersistentIDProperty;	// 0x34f8e271
- (void)encodeWithCoder:(id)coder;	// 0x34fb12a1
- (Class)entityClass;	// 0x34f8e285
// declared property getter: - (id)foreignPersistentIDProperty;	// 0x34fb133d
- (id)persistentIDProperty;	// 0x34f8e275
- (id)selectPersistentIDsSQLAndProperties:(id)properties ordered:(BOOL)ordered;	// 0x34f8e295
@end

