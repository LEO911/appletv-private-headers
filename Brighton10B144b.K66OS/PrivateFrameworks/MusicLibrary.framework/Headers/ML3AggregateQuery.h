/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Query.h"

@class NSString;

@interface ML3AggregateQuery : ML3Query {
	Class _aggregateEntityClass;	// 32 = 0x20
	NSString *_foreignPersistentIDProperty;	// 36 = 0x24
}
@property(readonly, assign) Class aggregateEntityClass;	// G=0x346d885d; @synthesize=_aggregateEntityClass
@property(readonly, assign) NSString *foreignPersistentIDProperty;	// G=0x346d8871; @synthesize=_foreignPersistentIDProperty
- (id)initWithCoder:(id)coder;	// 0x346d85e9
- (id)initWithUnitQuery:(id)unitQuery aggregateEntityClass:(Class)aClass foreignPersistentIDProperty:(id)property;	// 0x346a98b9
- (void).cxx_destruct;	// 0x346b2009
// declared property getter: - (Class)aggregateEntityClass;	// 0x346d885d
- (unsigned)countOfEntities;	// 0x346d87f5
- (void)dealloc;	// 0x346b1fc5
- (BOOL)distinctPersistentIDProperty;	// 0x346a9aad
- (void)encodeWithCoder:(id)coder;	// 0x346d86c9
- (Class)entityClass;	// 0x346afadd
// declared property getter: - (id)foreignPersistentIDProperty;	// 0x346d8871
- (BOOL)hasEntities;	// 0x346d878d
- (id)persistentIDProperty;	// 0x346a9dad
- (id)selectPersistentIDsSQLAndProperties:(id)properties ordered:(BOOL)ordered;	// 0x346a9ab1
@end
