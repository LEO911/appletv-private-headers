/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class LTAVPlayer, NSMutableDictionary, LTSkipAssetVisualControl, NSTimer, LTTrickPlayAsset;

__attribute__((visibility("hidden")))
@interface LTTrickPlayPlayer : XXUnknownSuperclass {
	NSTimer *_playTimer;	// 4 = 0x4
	NSTimer *_highFreqProgressTimer;	// 8 = 0x8
	double _timeIntervalOfLastHighFreqUpdate;	// 12 = 0xc
	int _preferredTimeScale;	// 20 = 0x14
	double _forwardPlaybackEndTime;	// 24 = 0x18
	double _reversePlaybackEndTime;	// 32 = 0x20
	BOOL _didSetLayerContents;	// 40 = 0x28
	LTTrickPlayAsset *_asset;	// 44 = 0x2c
	LTSkipAssetVisualControl *_visuals;	// 48 = 0x30
	float _rate;	// 52 = 0x34
	double _previousTimeIntervalCheck;	// 56 = 0x38
	double _currentTimeInterval;	// 64 = 0x40
	NSMutableDictionary *_cachedChapterImageProxies;	// 72 = 0x48
	LTAVPlayer *_avPlayer;	// 76 = 0x4c
}
@property(readonly, retain) LTAVPlayer *avPlayer;	// G=0x49fe4d; converted property
@property(assign) float rate;	// G=0x4a0069; S=0x49feb1; converted property
@property(readonly, retain) LTSkipAssetVisualControl *visuals;	// G=0x4a0135; converted property
+ (id)trickPlayerWithAsset:(id)asset;	// 0x49fc89
- (id)initWithTrickPlayAsset:(id)trickPlayAsset;	// 0x49fd1d
- (void).cxx_destruct;	// 0x4a014d
- (void)_checkAtEitherEndOfPlayback;	// 0x4a0271
- (BOOL)_hasChapterImages;	// 0x4a0a75
- (void)_highFreqProgressTimerFired:(id)fired;	// 0x4a09a1
- (void)_postUpdateProgress;	// 0x4a01d1
- (void)_resetVisuals;	// 0x4a0469
- (double)_timeAdjustedForInterstitials:(double)interstitials;	// 0x4a057d
- (void)_updatePlayer:(id)player;	// 0x4a064d
// converted property getter: - (id)avPlayer;	// 0x49fe4d
- (void)bufferAheadFromTime:(XXStruct_pwHToB)time;	// 0x4a0149
- (XXStruct_pwHToB)currentTime;	// 0x4a0105
- (void)invalidate;	// 0x49fe09
// converted property getter: - (float)rate;	// 0x4a0069
- (void)seekToTime:(XXStruct_pwHToB)time;	// 0x4a0079
- (void)setAVPlayer:(id)player;	// 0x49fe61
- (void)setForwardPlaybackEndTime:(double)time;	// 0x49fe89
// converted property setter: - (void)setRate:(float)rate;	// 0x49feb1
- (void)setReversePlaybackEndTime:(double)time;	// 0x49fe9d
// converted property getter: - (id)visuals;	// 0x4a0135
@end
