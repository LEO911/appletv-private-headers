/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class MCContainer, NSArray, NSSet, NSMutableSet;

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
@property(assign) MCContainer *container;	// G=0x3217c379; S=0x3217c38d; @synthesize=mContainer
@property(assign, nonatomic) double duckInDuration;	// G=0x3217c321; S=0x3217c339; @synthesize=mDuckInDuration
@property(assign, nonatomic) float duckLevel;	// G=0x3217c301; S=0x3217c311; @synthesize=mDuckLevel
@property(assign, nonatomic) double duckOutDuration;	// G=0x3217c34d; S=0x3217c365; @synthesize=mDuckOutDuration
@property(assign, nonatomic) double fadeInDuration;	// G=0x3217c2a9; S=0x3217c2c1; @synthesize=mFadeInDuration
@property(assign, nonatomic) double fadeOutDuration;	// G=0x3217c2d5; S=0x3217c2ed; @synthesize=mFadeOutDuration
@property(readonly, assign) NSArray *orderedSongs;	// G=0x3217c0b5; 
@property(readonly, assign) NSSet *songs;	// G=0x3217afe5; 
@property(assign, nonatomic) float volume;	// G=0x3217c289; S=0x3217c299; @synthesize=mVolume
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x3217a42d
- (id)init;	// 0x3217a5b5
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x3217a639
- (id)addSongForAsset:(id)asset;	// 0x3217b3ed
- (id)addSongsForAssets:(id)assets;	// 0x3217b451
// declared property getter: - (id)container;	// 0x3217c379
- (unsigned)countOfSongs;	// 0x3217b115
- (void)demolish;	// 0x3217a971
// declared property getter: - (double)duckInDuration;	// 0x3217c321
// declared property getter: - (float)duckLevel;	// 0x3217c301
// declared property getter: - (double)duckOutDuration;	// 0x3217c34d
// declared property getter: - (double)fadeInDuration;	// 0x3217c2a9
// declared property getter: - (double)fadeOutDuration;	// 0x3217c2d5
- (id)imprint;	// 0x3217abe5
- (id)insertSongForAsset:(id)asset atIndex:(unsigned)index;	// 0x3217b485
- (id)insertSongsForAssets:(id)assets atIndex:(unsigned)index;	// 0x3217b4d5
- (void)moveSongsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x3217bdd1
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3217af75
// declared property getter: - (id)orderedSongs;	// 0x3217c0b5
- (void)removeAllSongs;	// 0x3217bd7d
- (void)removeSongsAtIndices:(id)indices;	// 0x3217b989
// declared property setter: - (void)setContainer:(id)container;	// 0x3217c38d
// declared property setter: - (void)setDuckInDuration:(double)duration;	// 0x3217c339
// declared property setter: - (void)setDuckLevel:(float)level;	// 0x3217c311
// declared property setter: - (void)setDuckOutDuration:(double)duration;	// 0x3217c365
// declared property setter: - (void)setFadeInDuration:(double)duration;	// 0x3217c2c1
// declared property setter: - (void)setFadeOutDuration:(double)duration;	// 0x3217c2ed
// declared property setter: - (void)setVolume:(float)volume;	// 0x3217c299
- (id)songAtIndex:(unsigned)index;	// 0x3217b1e1
// declared property getter: - (id)songs;	// 0x3217afe5
// declared property getter: - (float)volume;	// 0x3217c289
@end
