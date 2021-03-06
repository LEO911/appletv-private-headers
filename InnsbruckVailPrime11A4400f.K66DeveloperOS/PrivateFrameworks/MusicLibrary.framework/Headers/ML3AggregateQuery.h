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
@property(readonly, assign) Class aggregateEntityClass;	// G=0x3155594d; @synthesize=_aggregateEntityClass
@property(readonly, assign) NSString *foreignPersistentIDProperty;	// G=0x31555961; @synthesize=_foreignPersistentIDProperty
- (id)initWithCoder:(id)coder;	// 0x315556e1
- (id)initWithUnitQuery:(id)unitQuery aggregateEntityClass:(Class)aClass foreignPersistentIDProperty:(id)property;	// 0x3151397d
- (void).cxx_destruct;	// 0x31516d05
// declared property getter: - (Class)aggregateEntityClass;	// 0x3155594d
- (unsigned)countOfEntities;	// 0x315558e1
- (void)dealloc;	// 0x31516cc1
- (void)encodeWithCoder:(id)coder;	// 0x315557b5
- (Class)entityClass;	// 0x31516381
// declared property getter: - (id)foreignPersistentIDProperty;	// 0x31555961
- (BOOL)hasEntities;	// 0x31555879
- (id)persistentIDProperty;	// 0x31513f09
- (id)selectPersistentIDsSQLAndProperties:(id)properties ordered:(BOOL)ordered;	// 0x31513c0d
@end

