/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRAudioVisualizerControl.h"

@class NSString, BRMusicNowPlayingLayer, NSTimer;

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
- (id)init;	// 0x389851
- (void)_blockAssetChangeAnimationWithTimeInterval:(double)timeInterval;	// 0x38aca1
- (void)_chapterPictureChanged:(id)changed;	// 0x38aae5
- (id)_fetchCoverArt;	// 0x38a629
- (void)_flipNow:(id)now;	// 0x38abf9
- (void)_mediaCued:(id)cued;	// 0x38b04d
- (void)_periodicMetadataChanged:(id)changed;	// 0x38af5d
- (void)_playbackAssetChanged:(id)changed;	// 0x38a839
- (void)_playbackProgressChanged:(id)changed;	// 0x38ab21
- (void)_playerStateChanged:(id)changed;	// 0x38b05d
- (void)_playlistChanged:(id)changed;	// 0x38a9fd
- (void)_radioBufferingEnd:(id)end;	// 0x38ada1
- (void)_radioBufferingStart:(id)start;	// 0x38ad7d
- (void)_repeatModeChanged:(id)changed;	// 0x38ae39
- (void)_scheduleFlipTimerWithDelay:(double)delay;	// 0x38ab31
- (void)_setTransitionDirection:(id)direction;	// 0x38aead
- (void)_shuffleModeChanged:(id)changed;	// 0x38adc5
- (void)_spinnerTimerFired:(id)fired;	// 0x38ad4d
- (void)_unblockAssetChangeAnimation:(id)animation;	// 0x38ad2d
- (void)_updateCoverArt:(id)art;	// 0x38aa11
- (void)_updateElapsedTime;	// 0x38a269
- (void)_updatePlayerRepeatState;	// 0x38a72d
- (void)_updatePlayerShuffleState;	// 0x38a6e1
- (void)_updateSpinner;	// 0x38a779
- (void)_updateTrackWithTransition:(BOOL)transition;	// 0x38a3a1
- (void)_updateTrackWithTransition:(BOOL)transition updateDisplay:(BOOL)display;	// 0x38a3b5
- (id)accessibilityScreenContent;	// 0x38a211
- (BOOL)brEventAction:(id)action;	// 0x38a1b5
- (void)controlWasActivated;	// 0x389b01
- (void)controlWasDeactivated;	// 0x389e7d
- (void)dealloc;	// 0x389a6d
- (BOOL)displayTrackPopup;	// 0x389afd
- (BOOL)isAccessibilityElement;	// 0x38a20d
- (void)layoutSubcontrols;	// 0x38a13d
@end

