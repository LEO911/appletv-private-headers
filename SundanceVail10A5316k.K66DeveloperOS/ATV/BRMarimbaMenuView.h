/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuView.h"

@class NSString, BRImageControl, BRPhotoMediaCollection, BRMediaPlayer, BRControl, NSArray;

__attribute__((visibility("hidden")))
@interface BRMarimbaMenuView : BRMenuView {
	BRMediaPlayer *_slideshowPhotoPlayer;	// 108 = 0x6c
	BRImageControl *_listBackgroundControl;	// 112 = 0x70
	BRControl *_slideshowPreview;	// 116 = 0x74
	BRPhotoMediaCollection *_collection;	// 120 = 0x78
	NSArray *_slideshowThemeIdentifierKeys;	// 124 = 0x7c
	NSString *_nextSlideshowTheme;	// 128 = 0x80
	NSString *_newlyRequestedTheme;	// 132 = 0x84
	BRControl *_fadeThroughBlackShroudControl;	// 136 = 0x88
	BOOL _themeSwitchInFlight;	// 140 = 0x8c
	BOOL _playerVisualsChanged;	// 141 = 0x8d
	BOOL _fadeThroughBlackControlNeedsLayout;	// 142 = 0x8e
	BOOL _loopPhotos;	// 143 = 0x8f
}
- (id)initWithMediaCollection:(id)mediaCollection;	// 0x2f87e5
- (void)_beginTransitionToNewTheme;	// 0x2f984d
- (void)_configurePhotoLooping:(BOOL)looping;	// 0x2f9741
- (void)_fadeInAnimationCompleted:(id)animationCompleted;	// 0x2f9ce5
- (void)_fadeOutAnimationCompleted:(id)completed;	// 0x2f9a19
- (void)_finishTransitionToNewTheme;	// 0x2f9b8d
- (void)_insertSlideshowPreview;	// 0x2f96d1
- (void)_marimbaLayerTransitionIsFinished:(id)finished;	// 0x2f983d
- (void)_playerVisualsChanged:(id)changed;	// 0x2f95d1
- (void)_prepareToBeginTransitionToNewTheme;	// 0x2f9769
- (void)_removeSlideshowPreview;	// 0x2f9655
- (void)controlWasActivated;	// 0x2f8ae9
- (void)controlWasDeactivated;	// 0x2f8d21
- (id)currentTheme;	// 0x2f91d5
- (id)currentTransitions;	// 0x2f92c1
- (void)dealloc;	// 0x2f89dd
- (void)layoutSubcontrols;	// 0x2f8d61
- (id)musicServerID;	// 0x2f9481
- (void)playSlideshow;	// 0x2f8eb5
- (id)playlistID;	// 0x2f9425
- (void)setLoopPhotos:(BOOL)photos;	// 0x2f95b1
- (void)setMusicServerID:(id)anId playlistID:(id)anId2 playlistRef:(id)ref;	// 0x2f9305
- (void)setMuted:(BOOL)muted;	// 0x2f8fbd
- (void)setTimePerSlide:(double)slide;	// 0x2f9505
- (void)stopSlideshow;	// 0x2f8ef1
- (void)switchToNewMenu;	// 0x2f94dd
- (BOOL)switchToTheme:(id)theme;	// 0x2f8fdd
- (void)switchToTransition:(id)transition;	// 0x2f9219
- (void)toggleSlideshowPlayback;	// 0x2f8f75
@end
