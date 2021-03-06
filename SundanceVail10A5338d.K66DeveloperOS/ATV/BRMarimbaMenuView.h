/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuView.h"

@class NSString, BRControl, BRImageControl, NSArray, BRMediaPlayer, BRPhotoMediaCollection;

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
- (id)initWithMediaCollection:(id)mediaCollection;	// 0x2fe26d
- (void)_beginTransitionToNewTheme;	// 0x2ff2d5
- (void)_configurePhotoLooping:(BOOL)looping;	// 0x2ff1c9
- (void)_fadeInAnimationCompleted:(id)animationCompleted;	// 0x2ff76d
- (void)_fadeOutAnimationCompleted:(id)completed;	// 0x2ff4a1
- (void)_finishTransitionToNewTheme;	// 0x2ff615
- (void)_insertSlideshowPreview;	// 0x2ff159
- (void)_marimbaLayerTransitionIsFinished:(id)finished;	// 0x2ff2c5
- (void)_playerVisualsChanged:(id)changed;	// 0x2ff059
- (void)_prepareToBeginTransitionToNewTheme;	// 0x2ff1f1
- (void)_removeSlideshowPreview;	// 0x2ff0dd
- (void)controlWasActivated;	// 0x2fe571
- (void)controlWasDeactivated;	// 0x2fe7a9
- (id)currentTheme;	// 0x2fec5d
- (id)currentTransitions;	// 0x2fed49
- (void)dealloc;	// 0x2fe465
- (void)layoutSubcontrols;	// 0x2fe7e9
- (id)musicServerID;	// 0x2fef09
- (void)playSlideshow;	// 0x2fe93d
- (id)playlistID;	// 0x2feead
- (void)setLoopPhotos:(BOOL)photos;	// 0x2ff039
- (void)setMusicServerID:(id)anId playlistID:(id)anId2 playlistRef:(id)ref;	// 0x2fed8d
- (void)setMuted:(BOOL)muted;	// 0x2fea45
- (void)setTimePerSlide:(double)slide;	// 0x2fef8d
- (void)stopSlideshow;	// 0x2fe979
- (void)switchToNewMenu;	// 0x2fef65
- (BOOL)switchToTheme:(id)theme;	// 0x2fea65
- (void)switchToTransition:(id)transition;	// 0x2feca1
- (void)toggleSlideshowPlayback;	// 0x2fe9fd
@end

