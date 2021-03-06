/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAnimationPathSupport.h"
#import "MCObject.h"

@class NSDictionary, NSMutableSet, NSMutableDictionary, NSString, NSSet;

@interface MCFilter : MCObject <MCAnimationPathSupport> {
	NSMutableDictionary *mAttributes;	// 12 = 0xc
	NSMutableSet *mAnimationPaths;	// 16 = 0x10
	unsigned mIndex;	// 20 = 0x14
	NSString *mFilterID;	// 24 = 0x18
}
@property(readonly, assign) NSSet *animationPaths;	// G=0x2fcceec9; 
@property(copy) NSDictionary *attributes;	// G=0x2fcce3f5; S=0x2fcce4f1; 
@property(readonly, assign) unsigned countOfAnimationPaths;	// G=0x2fccf019; 
@property(copy) NSString *filterID;	// G=0x2fcce8c9; S=0x2fcce8dd; @synthesize=mFilterID
@property(assign, nonatomic) unsigned index;	// G=0x2fcce8a9; S=0x2fcce8b9; @synthesize=mIndex
- (void)initAnimationPathsWithImprints:(id)imprints;	// 0x2fcce8ed
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x2fccdead
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x2fcce605
- (void)addAnimationPath:(id)path;	// 0x2fccf3e5
- (id)animationPathForKey:(id)key;	// 0x2fccf121
// declared property getter: - (id)animationPaths;	// 0x2fcceec9
- (id)attributeForKey:(id)key;	// 0x2fcce145
// declared property getter: - (id)attributes;	// 0x2fcce3f5
// declared property getter: - (unsigned)countOfAnimationPaths;	// 0x2fccf019
- (void)demolish;	// 0x2fccdfa5
- (void)demolishAnimationPaths;	// 0x2fcceb11
// declared property getter: - (id)filterID;	// 0x2fcce8c9
- (id)imprint;	// 0x2fcce02d
- (id)imprintsForAnimationPaths;	// 0x2fccedc9
// declared property getter: - (unsigned)index;	// 0x2fcce8a9
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x2fcce109
- (void)removeAllAnimationPaths;	// 0x2fccfa19
- (void)removeAnimationPathForKey:(id)key;	// 0x2fccf6b1
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x2fcce27d
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x2fcce4f1
// declared property setter: - (void)setFilterID:(id)anId;	// 0x2fcce8dd
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x2fcce8b9
@end

