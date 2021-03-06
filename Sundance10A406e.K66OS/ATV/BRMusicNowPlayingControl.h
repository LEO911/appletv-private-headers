/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRAudioVisualizerControl.h"

@class NSTimer, BRMusicNowPlayingLayer, NSString;

__attribute__((visibility("hidden")))
@interface BRMusicNowPlayingControl : BRAudioVisualizerControl {
	BRMusicNowPlayingLayer *_nowPlayingLayer;	// 84 = 0x54
	NSString *_lastAssetID;	// 88 = 0x58
	NSTimer *_flipTimer;	// 92 = 0x5c
	NSTimer *_delayedContentUpdateTimer;	// 96 = 0x60
	NSTimer *_assetChangeAnimationUnblockTimer;	// 100 = 0x64
	NSTimer *_spinnerTimer;	// 104 = 0x68
	double _lastEventTime;	// 108 = 0x6c
	double _flipDuration;	// 116 = 0x74
	double _flipInterval;	// 124 = 0x7c
	double _assetChangeAnimationBlockTime;	// 132 = 0x84
	double _assetChangeAnimationDuration;	// 140 = 0x8c
	double _newTrackKicksInTime;	// 148 = 0x94
	double _oldTrackFadeOutTime;	// 156 = 0x9c
	double _postFlipAssetChangeAnimationBlockTime;	// 164 = 0xa4
	int _transitionDirection;	// 172 = 0xac
	BOOL _assetChangeAnimationBlockFlag;	// 176 = 0xb0
	BOOL _buffering;	// 177 = 0xb1
}
- (id)init;	// 0x2e6c99
- (void)_chapterPictureChanged:(id)changed;	// 0x2e7f65
- (id)_fetchCoverArt;	// 0x2e7a69
- (void)_flipNow:(id)now;	// 0x2e8079
- (void)_mediaCued:(id)cued;	// 0x2e83cd
- (void)_periodicMetadataChanged:(id)changed;	// 0x2e83b9
- (void)_playbackAssetChanged:(id)changed;	// 0x2e7c75
- (void)_playbackProgressChanged:(id)changed;	// 0x2e7fa1
- (void)_playerStateChanged:(id)changed;	// 0x2e83dd
- (void)_playlistChanged:(id)changed;	// 0x2e7e7d
- (void)_radioBufferingEnd:(id)end;	// 0x2e81fd
- (void)_radioBufferingStart:(id)start;	// 0x2e81d9
- (void)_repeatModeChanged:(id)changed;	// 0x2e8295
- (void)_scheduleFlipTimerWithDelay:(double)delay;	// 0x2e7fb1
- (void)_setTransitionDirection:(id)direction;	// 0x2e8309
- (void)_shuffleModeChanged:(id)changed;	// 0x2e8221
- (void)_spinnerTimerFired:(id)fired;	// 0x2e81a9
- (void)_unblockAssetChangeAnimation:(id)animation;	// 0x2e8189
- (void)_updateCoverArt:(id)art;	// 0x2e7e91
- (void)_updateElapsedTime;	// 0x2e76b1
- (void)_updatePlayerRepeatState;	// 0x2e7b6d
- (void)_updatePlayerShuffleState;	// 0x2e7b21
- (void)_updateSpinner;	// 0x2e7bb9
- (void)_updateTrackWithTransition:(BOOL)transition;	// 0x2e77e1
- (id)accessibilityScreenContent;	// 0x2e7641
- (BOOL)brEventAction:(id)action;	// 0x2e75e5
- (void)controlWasActivated;	// 0x2e6f49
- (void)controlWasDeactivated;	// 0x2e72b9
- (void)dealloc;	// 0x2e6eb5
- (BOOL)displayTrackPopup;	// 0x2e6f45
- (BOOL)isAccessibilityElement;	// 0x2e763d
- (void)layoutSubcontrols;	// 0x2e7579
@end

