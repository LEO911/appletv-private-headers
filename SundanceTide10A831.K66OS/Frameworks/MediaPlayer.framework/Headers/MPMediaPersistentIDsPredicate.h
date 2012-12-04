/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaPredicate.h"


@interface MPMediaPersistentIDsPredicate : MPMediaPredicate {
	long long *_persistentIDs;	// 4 = 0x4
	unsigned _count;	// 8 = 0x8
	BOOL _shouldContain;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x36f09621; @synthesize=_count
@property(readonly, assign, nonatomic) const long long *persistentIDs;	// G=0x36f09631; @synthesize=_persistentIDs
@property(readonly, assign, nonatomic) BOOL shouldContain;	// G=0x36f09641; @synthesize=_shouldContain
+ (id)predicateWithPersistentIDs:(const long long *)persistentIDs count:(unsigned)count shouldContain:(BOOL)contain;	// 0x36f090f1
- (id)initWithCoder:(id)coder;	// 0x36f091c9
- (id)ML3PredicateForContainer;	// 0x36f46945
- (id)ML3PredicateForTrack;	// 0x36f46909
- (id)_ML3PredicateForEntityClass:(Class)entityClass;	// 0x36f46895
// declared property getter: - (unsigned)count;	// 0x36f09621
- (void)dealloc;	// 0x36f09185
- (id)description;	// 0x36f094bd
- (void)encodeWithCoder:(id)coder;	// 0x36f09369
- (unsigned)hash;	// 0x36f095d1
- (BOOL)isEqual:(id)equal;	// 0x36f0954d
// declared property getter: - (const long long *)persistentIDs;	// 0x36f09631
// declared property getter: - (BOOL)shouldContain;	// 0x36f09641
@end
