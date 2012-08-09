/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSMutableDictionary, BRWaitSpinnerControl;

__attribute__((visibility("hidden")))
@interface BRMusicNowPlayingLayer : BRControl {
	NSMutableDictionary *_currentTrackInfo;	// 80 = 0x50
	int _scheduledAnimationCount;	// 84 = 0x54
	float _coverArtRotation;	// 88 = 0x58
	float _coverArtSizeX;	// 92 = 0x5c
	float _coverArtSizeY;	// 96 = 0x60
	float _stateIconWidth;	// 100 = 0x64
	float _textWidth;	// 104 = 0x68
	BOOL _shuffleState;	// 108 = 0x6c
	BOOL _repeatState;	// 109 = 0x6d
	BOOL _geniusState;	// 110 = 0x6e
	BOOL _isRadio;	// 111 = 0x6f
	CGPoint _randomOffset;	// 112 = 0x70
	CGPoint _coverArtPosition;	// 120 = 0x78
	CGPoint _trackNameTextPosition;	// 128 = 0x80
	CGPoint _artistNameTextPosition;	// 136 = 0x88
	CGPoint _albumNameTextPosition;	// 144 = 0x90
	CGPoint _trackXofXTextPosition;	// 152 = 0x98
	CGPoint _transportPosition;	// 160 = 0xa0
	CGPoint _stateIconsLowerRightCornerPosition;	// 168 = 0xa8
	float _coverArtReflectionAmount;	// 176 = 0xb0
	CGSize _transportSize;	// 180 = 0xb4
	BOOL _flip;	// 188 = 0xbc
	BRWaitSpinnerControl *_spinner;	// 192 = 0xc0
}
@property(readonly, retain) NSMutableDictionary *currentTrackInfo;	// G=0x2d855d; converted property
- (id)init;	// 0x2d6ee1
- (id)_createFrontLayer;	// 0x2d930d
- (void)_flipFrame:(CGRect *)frame parentFrame:(CGRect)frame2;	// 0x2d9805
- (void)_startScrolling;	// 0x2d98e9
- (void)_updateRandomOffset;	// 0x2d9839
- (void)_updateTextStrings;	// 0x2d8e79
- (id)accessibilityLabel;	// 0x2d8dad
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x2d8b3d
- (void)controlWasActivated;	// 0x2d8769
- (void)controlWasDeactivated;	// 0x2d86f5
// converted property getter: - (id)currentTrackInfo;	// 0x2d855d
- (void)dealloc;	// 0x2d7181
- (int)frontLayerSide;	// 0x2d8671
- (BOOL)isAccessibilityElement;	// 0x2d8da9
- (void)layoutSubcontrols;	// 0x2d71d1
- (void)performFlipAnimation:(float)animation;	// 0x2d87a9
- (void)removeAllPendingActions;	// 0x2d8c05
- (void)setCurrentTrackInfo:(id)info WithTransition:(BOOL)transition TransitionDirection:(int)direction TransitionDuration:(float)duration NewTrackKicksInTime:(double)time OldTrackFadeOutTime:(double)time6 isRadio:(BOOL)radio;	// 0x2d7ee9
- (void)setElapsedTime:(double)time;	// 0x2d856d
- (void)setElapsedTime:(double)time andDuration:(double)duration;	// 0x2d85d9
- (void)setGeniusState:(BOOL)state;	// 0x2d86d1
- (void)setPlayerState:(int)state;	// 0x2d86f1
- (void)setRepeatMode:(int)mode;	// 0x2d86ad
- (void)setShuffleState:(BOOL)state;	// 0x2d868d
- (void)setSpinnerEnabled:(BOOL)enabled;	// 0x2d8d09
- (void)updateCoverArt:(id)art;	// 0x2d8c39
@end
