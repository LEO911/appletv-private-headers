/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"
#import "MCAnimationPathSupport.h"

@class NSSet, NSMutableSet, NSDictionary, NSMutableDictionary, MCSlide, NSString;

@interface MCFilter : MCObject <MCAnimationPathSupport> {
	NSString *mFilterID;	// 12 = 0xc
	NSMutableDictionary *mAttributes;	// 16 = 0x10
	unsigned mIndex;	// 20 = 0x14
	NSMutableSet *mAnimationPaths;	// 24 = 0x18
	MCSlide *mSlideIfSlideFilter;	// 28 = 0x1c
}
@property(readonly, assign) NSSet *animationPaths;	// G=0x32fa5d9d; 
@property(copy) NSDictionary *attributes;	// G=0x32fa546d; S=0x32fa5555; 
@property(readonly, assign) unsigned countOfAnimationPaths;	// G=0x32fa5ef1; 
@property(copy) NSString *filterID;	// G=0x32fa5861; S=0x32fa5875; @synthesize=mFilterID
@property(assign, nonatomic) unsigned index;	// G=0x32fa5841; S=0x32fa5851; @synthesize=mIndex
- (id)init;	// 0x32fa4ec1
- (void)initAnimationPathsWithImprints:(id)imprints;	// 0x32fa5899
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x32fa4f25
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x32fa5661
- (void)addAnimationPath:(id)path;	// 0x32fa6269
- (id)animationPathForKey:(id)key;	// 0x32fa5fed
// declared property getter: - (id)animationPaths;	// 0x32fa5d9d
- (id)attributeForKey:(id)key;	// 0x32fa51d1
// declared property getter: - (id)attributes;	// 0x32fa546d
// declared property getter: - (unsigned)countOfAnimationPaths;	// 0x32fa5ef1
- (void)demolish;	// 0x32fa5021
- (void)demolishAnimationPaths;	// 0x32fa5a65
// declared property getter: - (id)filterID;	// 0x32fa5861
- (id)imprint;	// 0x32fa50b9
- (id)imprintsForAnimationPaths;	// 0x32fa5cbd
// declared property getter: - (unsigned)index;	// 0x32fa5841
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x32fa5195
- (void)removeAllAnimationPaths;	// 0x32fa67e9
- (void)removeAnimationPathForKey:(id)key;	// 0x32fa64d5
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x32fa52f9
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x32fa5555
// declared property setter: - (void)setFilterID:(id)anId;	// 0x32fa5875
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x32fa5851
@end

