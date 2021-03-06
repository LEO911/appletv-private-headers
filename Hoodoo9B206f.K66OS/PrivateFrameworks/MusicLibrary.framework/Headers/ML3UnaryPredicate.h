/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "ML3Predicate.h"


__attribute__((visibility("hidden")))
@interface ML3UnaryPredicate : ML3Predicate {
@private
	ML3Predicate *_predicate;	// 4 = 0x4
}
@property(retain, nonatomic) ML3Predicate *predicate;	// G=0x35d405bd; S=0x35d405cd; @synthesize=_predicate
+ (id)predicateWithPredicate:(id)predicate;	// 0x35d40561
- (id)initWithCoder:(id)coder;	// 0x35d40391
- (id)initWithPredicate:(id)predicate;	// 0x35d40305
- (id)SQLJoinClausesForClass:(Class)aClass;	// 0x35d40541
- (void)bindToSqlite3Statement:(sqlite3_stmt *)sqlite3Statement bindingIndex:(inout int *)index;	// 0x35d4059d
- (void)dealloc;	// 0x35d4034d
- (void)encodeWithCoder:(id)coder;	// 0x35d403f5
- (unsigned)hash;	// 0x35d404f5
- (BOOL)isEqual:(id)equal;	// 0x35d40459
// declared property getter: - (id)predicate;	// 0x35d405bd
// declared property setter: - (void)setPredicate:(id)predicate;	// 0x35d405cd
@end

