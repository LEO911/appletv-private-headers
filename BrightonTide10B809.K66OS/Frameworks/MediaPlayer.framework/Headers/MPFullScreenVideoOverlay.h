/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPSwipableView.h"
#import "MPDetailSliderDelegate.h"
#import "MPNowPlayingItemQueueInfoButtonDelegate.h"
#import "MPVideoOverlay.h"

@class UIImageView, UINavigationButton, MPAVController, UILabel, MPNowPlayingItemQueueInfoButton, MPAVItem, UIView, MPDetailSlider, MPCenteringNavigationBar, MPTransportControls, UINavigationBar, UINavigationItem;
@protocol MPVideoOverlayDelegate, MPVideoControllerProtocol;

@interface MPFullScreenVideoOverlay : MPSwipableView <MPDetailSliderDelegate, MPNowPlayingItemQueueInfoButtonDelegate, MPVideoOverlay> {
	id<MPVideoControllerProtocol> _videoViewController;	// 112 = 0x70
	id<MPVideoOverlayDelegate> _delegate;	// 116 = 0x74
	MPAVController *_player;	// 120 = 0x78
	MPAVItem *_item;	// 124 = 0x7c
	int _interfaceOrientation;	// 128 = 0x80
	MPTransportControls *_transportControls;	// 132 = 0x84
	MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;	// 136 = 0x88
	MPCenteringNavigationBar *_navigationBar;	// 140 = 0x8c
	BOOL _navigationBarHidden;	// 144 = 0x90
	UIImageView *_navigationBarBackground;	// 148 = 0x94
	UIImageView *_navigationBarShadow;	// 152 = 0x98
	UINavigationItem *_navigationItem;	// 156 = 0x9c
	UINavigationButton *_scaleModeButton;	// 160 = 0xa0
	UIView *_titleViewContainer;	// 164 = 0xa4
	UIView *_streamingLoadingTitleView;	// 168 = 0xa8
	MPDetailSlider *_scrubControl;	// 172 = 0xac
	UILabel *_scrubSpeedLabel;	// 176 = 0xb0
	UILabel *_scrubInstructionsLabel;	// 180 = 0xb4
	unsigned long long _desiredParts;	// 184 = 0xb8
	unsigned long long _disabledParts;	// 192 = 0xc0
	unsigned long long _visibleParts;	// 200 = 0xc8
	unsigned _tvOutEnabled : 1;	// 208 = 0xd0
	unsigned _wantsTick : 1;	// 208 = 0xd0
	unsigned _allowsDetailScrubbing : 1;	// 208 = 0xd0
	unsigned _detailScrubbing : 1;	// 208 = 0xd0
}
@property(assign, nonatomic) BOOL TVOutEnabled;	// G=0x31ceae1d; S=0x31ceac09; 
@property(assign, nonatomic) BOOL allowsDetailScrubbing;	// G=0x31ceae31; S=0x31ceae45; 
@property(assign, nonatomic) BOOL allowsWirelessPlayback;	// G=0x31cea46d; S=0x31cea4a5; 
@property(assign, nonatomic) id<MPVideoOverlayDelegate> delegate;	// G=0x31ced385; S=0x31ceabd5; @synthesize=_delegate
@property(assign, nonatomic) unsigned long long desiredParts;	// G=0x31ced395; S=0x31cea985; @synthesize=_desiredParts
@property(assign, nonatomic) unsigned long long disabledParts;	// G=0x31ced3ad; S=0x31ceaa15; @synthesize=_disabledParts
@property(assign, nonatomic) int interfaceOrientation;	// G=0x31ced3e5; S=0x31ceab11; @synthesize=_interfaceOrientation
@property(retain, nonatomic) MPAVItem *item;	// G=0x31ced3c5; S=0x31ceaa6d; @synthesize=_item
@property(readonly, assign, nonatomic) UINavigationBar *navigationBar;	// G=0x31cea571; @synthesize=_navigationBar
@property(assign, nonatomic) BOOL navigationBarHidden;	// G=0x31ced3d5; S=0x31cea4e5; @synthesize=_navigationBarHidden
@property(retain, nonatomic) MPAVController *player;	// G=0x31ced3f5; S=0x31ce99cd; @synthesize=_player
@property(readonly, assign, nonatomic) MPTransportControls *transportControls;	// G=0x31ced405; @synthesize=_transportControls
@property(assign, nonatomic) id<MPVideoControllerProtocol> videoViewController;	// G=0x31ced415; S=0x31ceac39; @synthesize=_videoViewController
@property(assign, nonatomic) unsigned long long visibleParts;	// G=0x31ced425; S=0x31cead69; @synthesize=_visibleParts
- (id)initWithFrame:(CGRect)frame;	// 0x31ce9235
- (id)initWithFrame:(CGRect)frame interfaceOrientation:(int)orientation;	// 0x31ce91f9
// declared property getter: - (BOOL)TVOutEnabled;	// 0x31ceae1d
- (void)_backButtonAction:(id)action;	// 0x31ceae95
- (void)_bufferingStateDidChange:(id)_bufferingState;	// 0x31ceaff9
- (void)_configureLinkButtonForCurrentItemTime;	// 0x31cea81d
- (void)_didChangeStatusBarOrientation:(id)orientation;	// 0x31ceaf25
- (void)_hideScrubInstructions;	// 0x31ced1ad
- (void)_initNavigationBar;	// 0x31ceb8f5
- (void)_initNavigationBarBackground;	// 0x31ce9c61
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)_isExternalPlaybackActive;	// 0x31ceb0ed
- (id)_newLoadingMovieTitleViewWithFrame:(CGRect)frame;	// 0x31ceb80d
- (id)_newStreamingTitleViewWithFrame:(CGRect)frame;	// 0x31ceb881
- (id)_newTitleViewWithFrame:(CGRect)frame text:(id)text showSpinner:(BOOL)spinner;	// 0x31ceb405
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x31ceb0dd
- (void)_reloadNavigationBarWithAnimation:(BOOL)animation;	// 0x31cebc7d
- (void)_reloadTransportControls:(BOOL)controls;	// 0x31cebaf9
- (void)_scaleButtonAction:(id)action;	// 0x31ceaedd
- (id)_scrubControlWithFrame:(CGRect)frame;	// 0x31cec001
- (BOOL)_shouldShowLoadingTitleView;	// 0x31cec9d9
- (void)_showScrubInstructions;	// 0x31cecffd
- (void)_statusBarHeightChanged:(id)changed;	// 0x31ceafe9
- (void)_tickNotification:(id)notification;	// 0x31ceaf61
- (void)_timeDidJumpNotification:(id)_time;	// 0x31ceaf8d
- (BOOL)_updateTitleViewItemVisibility;	// 0x31ceca91
- (void)_updateTitleViewItemVisibilityWithAnimation:(BOOL)animation;	// 0x31cec159
- (void)_validityChangedNotification:(id)notification;	// 0x31ceafb9
- (void)_videoViewScaleModeDidChangeNotification:(id)_videoViewScaleMode;	// 0x31ceb101
- (unsigned long long)_visiblePartsForTransportControlsWithParts:(unsigned long long)parts;	// 0x31cecf49
// declared property getter: - (BOOL)allowsDetailScrubbing;	// 0x31ceae31
// declared property getter: - (BOOL)allowsWirelessPlayback;	// 0x31cea46d
- (void)crossedTimeMakerWithEvent:(id)event;	// 0x31cea8fd
- (void)dealloc;	// 0x31ce94d1
// declared property getter: - (id)delegate;	// 0x31ced385
// declared property getter: - (unsigned long long)desiredParts;	// 0x31ced395
- (void)detailSlider:(id)slider didChangeScrubSpeed:(int)speed;	// 0x31ceb3bd
- (void)detailSlider:(id)slider didChangeValue:(float)value;	// 0x31ceb385
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x31ceb115
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x31ceb2c1
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x31ceb1ed
- (void)didMoveToSuperview;	// 0x31ce9ba1
- (void)didMoveToWindow;	// 0x31ce9c09
// declared property getter: - (unsigned long long)disabledParts;	// 0x31ced3ad
- (void)hideAlternateTracks;	// 0x31cea56d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x31cea361
// declared property getter: - (int)interfaceOrientation;	// 0x31ced3e5
// declared property getter: - (id)item;	// 0x31ced3c5
- (void)layoutSubviews;	// 0x31ce9ee9
// declared property getter: - (id)navigationBar;	// 0x31cea571
// declared property getter: - (BOOL)navigationBarHidden;	// 0x31ced3d5
- (int)nowPlayingItemQueueInfoButton:(id)button willDisplayInfoType:(int)type;	// 0x31cea811
// declared property getter: - (id)player;	// 0x31ced3f5
- (void)registerForPlayerNotifications;	// 0x31ce9761
- (void)restoreSanity;	// 0x31ce9a81
// declared property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x31ceae45
// declared property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x31cea4a5
- (void)setAlpha:(float)alpha;	// 0x31cea3bd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31ceabd5
// declared property setter: - (void)setDesiredParts:(unsigned long long)parts;	// 0x31cea985
- (void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x31cea9a9
// declared property setter: - (void)setDisabledParts:(unsigned long long)parts;	// 0x31ceaa15
- (void)setHidden:(BOOL)hidden;	// 0x31cea415
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x31ceab11
// declared property setter: - (void)setItem:(id)item;	// 0x31ceaa6d
// declared property setter: - (void)setNavigationBarHidden:(BOOL)hidden;	// 0x31cea4e5
// declared property setter: - (void)setPlayer:(id)player;	// 0x31ce99cd
// declared property setter: - (void)setTVOutEnabled:(BOOL)enabled;	// 0x31ceac09
// declared property setter: - (void)setVideoViewController:(id)controller;	// 0x31ceac39
// declared property setter: - (void)setVisibleParts:(unsigned long long)parts;	// 0x31cead69
- (void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x31cead8d
- (void)showAlternateTracks;	// 0x31cea515
- (void)startTicking;	// 0x31ce9ae9
- (void)stopTicking;	// 0x31ce9b59
// declared property getter: - (id)transportControls;	// 0x31ced405
- (void)unregisterForPlayerNotifications;	// 0x31ce98bd
- (BOOL)updateTimeBasedValues;	// 0x31cea5a9
// declared property getter: - (id)videoViewController;	// 0x31ced415
- (id)viewsToFadeOutWhenShowingBackside;	// 0x31cea935
// declared property getter: - (unsigned long long)visibleParts;	// 0x31ced425
@end

