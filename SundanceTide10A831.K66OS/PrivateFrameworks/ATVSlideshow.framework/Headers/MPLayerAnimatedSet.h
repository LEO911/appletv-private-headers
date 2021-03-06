/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPLayer.h"

@class NSArray, MCContainerParallelizer;

@interface MPLayerAnimatedSet : MPLayer {
	NSArray *_animatedSets;	// 48 = 0x30
	MCContainerParallelizer *_layerParallelizer;	// 52 = 0x34
}
@property(retain) NSArray *animatedSets;	// G=0x33961295; S=0x339612a9; converted property
- (id)init;	// 0x33960f59
- (id)initWithCoder:(id)coder;	// 0x33961019
// converted property getter: - (id)animatedSets;	// 0x33961295
- (void)cleanup;	// 0x33961c29
- (id)container;	// 0x33961c19
- (void)dealloc;	// 0x3396120d
- (id)description;	// 0x33961161
- (void)encodeWithCoder:(id)coder;	// 0x33960fbd
- (void)finalize;	// 0x339611cd
- (void)insertEffectContainers:(id)containers atIndex:(int)index;	// 0x339614d1
- (void)moveEffectContainersFromIndices:(id)indices toIndex:(int)index;	// 0x33961a69
- (void)removeEffectContainersAtIndices:(id)indices;	// 0x33961831
- (void)resetStartTimes;	// 0x33961d15
// converted property setter: - (void)setAnimatedSets:(id)sets;	// 0x339612a9
- (void)setAudioPlaylist:(id)playlist;	// 0x33961b15
- (void)setLayerParallelizer:(id)parallelizer;	// 0x33961f09
@end

