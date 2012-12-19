/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class MCAssetAudio, MCAudioPlaylist, MCSlide;

@interface MCSong : MCObject {
	MCAssetAudio *mAsset;	// 16 = 0x10
	float mVolume;	// 20 = 0x14
	double mFadeInDuration;	// 24 = 0x18
	double mFadeOutDuration;	// 32 = 0x20
	unsigned mIndex;	// 40 = 0x28
	double mStartTime;	// 44 = 0x2c
	BOOL mStartTimeIsDefined;	// 52 = 0x34
	double mDuration;	// 56 = 0x38
	BOOL mDurationIsDefined;	// 64 = 0x40
	MCAudioPlaylist *mAudioPlaylistIfAudioPlaylistSong;	// 68 = 0x44
	MCSlide *mSlideIfSlideSong;	// 72 = 0x48
}
@property(retain) MCAssetAudio *asset;	// G=0x3326d431; S=0x3326d535; @synthesize=mAsset
@property(assign) MCAudioPlaylist *audioPlaylistIfAudioPlaylistSong;	// G=0x3326d951; S=0x3326d965; @synthesize=mAudioPlaylistIfAudioPlaylistSong
@property(assign, nonatomic) double duration;	// G=0x3326d929; S=0x3326d6ad; @synthesize=mDuration
@property(readonly, assign, nonatomic) BOOL durationIsDefined;	// G=0x3326d941; @synthesize=mDurationIsDefined
@property(assign, nonatomic) double fadeInDuration;	// G=0x3326d889; S=0x3326d8a1; @synthesize=mFadeInDuration
@property(assign, nonatomic) double fadeOutDuration;	// G=0x3326d8b5; S=0x3326d8cd; @synthesize=mFadeOutDuration
@property(assign, nonatomic) unsigned index;	// G=0x3326d8e1; S=0x3326d8f1; @synthesize=mIndex
@property(assign) MCSlide *slideIfSlideSong;	// G=0x3326d97d; S=0x3326d991; @synthesize=mSlideIfSlideSong
@property(assign, nonatomic) double startTime;	// G=0x3326d901; S=0x3326d671; @synthesize=mStartTime
@property(readonly, assign, nonatomic) BOOL startTimeIsDefined;	// G=0x3326d919; @synthesize=mStartTimeIsDefined
@property(assign, nonatomic) float volume;	// G=0x3326d869; S=0x3326d879; @synthesize=mVolume
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x3326cc79
- (id)init;	// 0x3326cdc9
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x3326ce09
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x3326d6d5
// declared property getter: - (id)asset;	// 0x3326d431
// declared property getter: - (id)audioPlaylistIfAudioPlaylistSong;	// 0x3326d951
- (void)demolish;	// 0x3326d0d9
// declared property getter: - (double)duration;	// 0x3326d929
// declared property getter: - (BOOL)durationIsDefined;	// 0x3326d941
// declared property getter: - (double)fadeInDuration;	// 0x3326d889
// declared property getter: - (double)fadeOutDuration;	// 0x3326d8b5
- (id)imprint;	// 0x3326d15d
// declared property getter: - (unsigned)index;	// 0x3326d8e1
// declared property setter: - (void)setAsset:(id)asset;	// 0x3326d535
// declared property setter: - (void)setAudioPlaylistIfAudioPlaylistSong:(id)song;	// 0x3326d965
// declared property setter: - (void)setDuration:(double)duration;	// 0x3326d6ad
// declared property setter: - (void)setFadeInDuration:(double)duration;	// 0x3326d8a1
// declared property setter: - (void)setFadeOutDuration:(double)duration;	// 0x3326d8cd
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x3326d8f1
// declared property setter: - (void)setSlideIfSlideSong:(id)song;	// 0x3326d991
// declared property setter: - (void)setStartTime:(double)time;	// 0x3326d671
// declared property setter: - (void)setVolume:(float)volume;	// 0x3326d879
// declared property getter: - (id)slideIfSlideSong;	// 0x3326d97d
// declared property getter: - (double)startTime;	// 0x3326d901
// declared property getter: - (BOOL)startTimeIsDefined;	// 0x3326d919
- (void)undefineDuration;	// 0x3326d699
- (void)undefineStartTime;	// 0x3326d65d
// declared property getter: - (float)volume;	// 0x3326d869
@end
