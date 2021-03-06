/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Predicate.h"

@class NSArray, NSString;

@interface ML3CompoundPredicate : ML3Predicate {
	NSArray *_predicates;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *compoundOperatorJoiner;	// @dynamic
@property(retain, nonatomic) NSArray *predicates;	// G=0x346d9511; S=0x346a4911; @synthesize=_predicates
+ (id)predicateMatchingPredicates:(id)predicates;	// 0x346a47a9
- (id)initWithCoder:(id)coder;	// 0x346d9229
- (id)initWithPredicates:(id)predicates;	// 0x346a48b1
- (void).cxx_destruct;	// 0x346ac325
- (id)SQLJoinClausesForClass:(Class)aClass;	// 0x346a7575
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x346a77dd
- (void)bindToStatement:(id)statement bindingIndex:(inout int *)index;	// 0x346a7eb5
- (id)description;	// 0x346d9479
- (void)encodeWithCoder:(id)coder;	// 0x346d92b5
- (unsigned)hash;	// 0x346d9419
- (BOOL)isDynamicForEntityClass:(Class)entityClass;	// 0x346a4c19
- (BOOL)isEqual:(id)equal;	// 0x346d933d
// declared property getter: - (id)predicates;	// 0x346d9511
// declared property setter: - (void)setPredicates:(id)predicates;	// 0x346a4911
@end

