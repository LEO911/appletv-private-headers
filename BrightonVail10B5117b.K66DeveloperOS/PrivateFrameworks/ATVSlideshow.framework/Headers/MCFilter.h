/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"
#import "MCAnimationPathSupport.h"

@class NSMutableSet, NSMutableDictionary, NSString, NSSet, NSDictionary;

@interface MCFilter : MCObject <MCAnimationPathSupport> {
	NSMutableDictionary *mAttributes;	// 12 = 0xc
	NSMutableSet *mAnimationPaths;	// 16 = 0x10
	unsigned mIndex;	// 20 = 0x14
	NSString *mFilterID;	// 24 = 0x18
}
@property(readonly, assign) NSSet *animationPaths;	// G=0x3340c849; 
@property(copy) NSDictionary *attributes;	// G=0x3340bd5d; S=0x3340be59; 
@property(readonly, assign) unsigned countOfAnimationPaths;	// G=0x3340c999; 
@property(copy) NSString *filterID;	// G=0x3340c231; S=0x3340c245; @synthesize=mFilterID
@property(assign, nonatomic) unsigned index;	// G=0x3340c211; S=0x3340c221; @synthesize=mIndex
- (void)initAnimationPathsWithImprints:(id)imprints;	// 0x3340c255
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x3340b819
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x3340bf69
- (void)addAnimationPath:(id)path;	// 0x3340cd6d
- (id)animationPathForKey:(id)key;	// 0x3340ca9d
// declared property getter: - (id)animationPaths;	// 0x3340c849
- (id)attributeForKey:(id)key;	// 0x3340bab1
// declared property getter: - (id)attributes;	// 0x3340bd5d
// declared property getter: - (unsigned)countOfAnimationPaths;	// 0x3340c999
- (void)demolish;	// 0x3340b911
- (void)demolishAnimationPaths;	// 0x3340c479
// declared property getter: - (id)filterID;	// 0x3340c231
- (id)imprint;	// 0x3340b999
- (id)imprintsForAnimationPaths;	// 0x3340c749
// declared property getter: - (unsigned)index;	// 0x3340c211
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3340ba75
- (void)removeAllAnimationPaths;	// 0x3340d3a9
- (void)removeAnimationPathForKey:(id)key;	// 0x3340d03d
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x3340bbe9
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x3340be59
// declared property setter: - (void)setFilterID:(id)anId;	// 0x3340c245
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x3340c221
@end
