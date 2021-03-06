/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class NSMutableSet, NSArray, NSSet, MCContainer;

@interface MCAudioPlaylist : MCObject {
	NSMutableSet *mSongs;	// 16 = 0x10
	NSArray *mCachedOrderedSongs;	// 20 = 0x14
	float mVolume;	// 24 = 0x18
	double mFadeInDuration;	// 28 = 0x1c
	double mFadeOutDuration;	// 36 = 0x24
	float mDuckLevel;	// 44 = 0x2c
	double mDuckInDuration;	// 48 = 0x30
	double mDuckOutDuration;	// 56 = 0x38
	MCContainer *mContainer;	// 64 = 0x40
}
@property(assign) MCContainer *container;	// G=0x36144539; S=0x3614454d; @synthesize=mContainer
@property(assign, nonatomic) double duckInDuration;	// G=0x361444e1; S=0x361444f9; @synthesize=mDuckInDuration
@property(assign, nonatomic) float duckLevel;	// G=0x361444c1; S=0x361444d1; @synthesize=mDuckLevel
@property(assign, nonatomic) double duckOutDuration;	// G=0x3614450d; S=0x36144525; @synthesize=mDuckOutDuration
@property(assign, nonatomic) double fadeInDuration;	// G=0x36144469; S=0x36144481; @synthesize=mFadeInDuration
@property(assign, nonatomic) double fadeOutDuration;	// G=0x36144495; S=0x361444ad; @synthesize=mFadeOutDuration
@property(readonly, assign) NSArray *orderedSongs;	// G=0x36144275; 
@property(readonly, assign) NSSet *songs;	// G=0x361431a5; 
@property(assign, nonatomic) float volume;	// G=0x36144449; S=0x36144459; @synthesize=mVolume
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x361425ed
- (id)init;	// 0x36142775
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x361427f9
- (id)addSongForAsset:(id)asset;	// 0x361435ad
- (id)addSongsForAssets:(id)assets;	// 0x36143611
// declared property getter: - (id)container;	// 0x36144539
- (unsigned)countOfSongs;	// 0x361432d5
- (void)demolish;	// 0x36142b31
// declared property getter: - (double)duckInDuration;	// 0x361444e1
// declared property getter: - (float)duckLevel;	// 0x361444c1
// declared property getter: - (double)duckOutDuration;	// 0x3614450d
// declared property getter: - (double)fadeInDuration;	// 0x36144469
// declared property getter: - (double)fadeOutDuration;	// 0x36144495
- (id)imprint;	// 0x36142da5
- (id)insertSongForAsset:(id)asset atIndex:(unsigned)index;	// 0x36143645
- (id)insertSongsForAssets:(id)assets atIndex:(unsigned)index;	// 0x36143695
- (void)moveSongsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x36143f91
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x36143135
// declared property getter: - (id)orderedSongs;	// 0x36144275
- (void)removeAllSongs;	// 0x36143f3d
- (void)removeSongsAtIndices:(id)indices;	// 0x36143b49
// declared property setter: - (void)setContainer:(id)container;	// 0x3614454d
// declared property setter: - (void)setDuckInDuration:(double)duration;	// 0x361444f9
// declared property setter: - (void)setDuckLevel:(float)level;	// 0x361444d1
// declared property setter: - (void)setDuckOutDuration:(double)duration;	// 0x36144525
// declared property setter: - (void)setFadeInDuration:(double)duration;	// 0x36144481
// declared property setter: - (void)setFadeOutDuration:(double)duration;	// 0x361444ad
// declared property setter: - (void)setVolume:(float)volume;	// 0x36144459
- (id)songAtIndex:(unsigned)index;	// 0x361433a1
// declared property getter: - (id)songs;	// 0x361431a5
// declared property getter: - (float)volume;	// 0x36144449
@end

