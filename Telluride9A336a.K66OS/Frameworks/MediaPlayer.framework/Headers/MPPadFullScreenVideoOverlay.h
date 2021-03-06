/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPVideoOverlay.h"
#import "MediaPlayer-Structs.h"
#import "UIPopoverControllerDelegate.h"
#import "MPNowPlayingItemQueueInfoButtonDelegate.h"

@class UINavigationBar, UINavigationItem, MPPadFullScreenTransportControls, NSString, UIActivityIndicatorView, UIImageView, UINavigationButton, UILabel, MPNowPlayingItemQueueInfoButton, UIPopoverController;

@interface MPPadFullScreenVideoOverlay : MPVideoOverlay <UIPopoverControllerDelegate, MPNowPlayingItemQueueInfoButtonDelegate> {
@private
	MPPadFullScreenTransportControls *_transportControls;	// 100 = 0x64
	MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;	// 104 = 0x68
	UIImageView *_hudImageView;	// 108 = 0x6c
	UINavigationBar *_navigationBar;	// 112 = 0x70
	UINavigationItem *_navigationItem;	// 116 = 0x74
	UIImageView *_navigationBarBackgroundShort;	// 120 = 0x78
	UIImageView *_navigationBarBackgroundTall;	// 124 = 0x7c
	UIImageView *_navigationBarShadow;	// 128 = 0x80
	NSString *_title;	// 132 = 0x84
	UINavigationButton *_scaleModeButton;	// 136 = 0x88
	UILabel *_scrubSpeedLabel;	// 140 = 0x8c
	UILabel *_scrubInstructionsLabel;	// 144 = 0x90
	UIPopoverController *_popoverController;	// 148 = 0x94
	UILabel *_loadingMovieLabel;	// 152 = 0x98
	UIActivityIndicatorView *_loadingMovieIndicator;	// 156 = 0x9c
	unsigned _layoutSubviewsActive : 1;	// 160 = 0xa0
}
@property(assign) BOOL allowsWirelessPlayback;	// G=0x35ba801d; S=0x35ba8055; converted property
@property(assign) unsigned disabledParts;	// G=0x35ba83bd; S=0x35ba83d1; converted property
@property(readonly, retain) UINavigationBar *navigationBar;	// G=0x35ba841d; converted property
@property(copy, nonatomic) NSString *title;	// G=0x35baa2b9; S=0x35ba86f5; @synthesize=_title
- (id)initWithFrame:(CGRect)frame;	// 0x35ba6ec1
- (void)_configureLinkButtonForCurrentItemTime;	// 0x35ba7f11
- (unsigned)_convertedPartsMask:(unsigned)mask;	// 0x35baa1a9
- (void)_doneButton:(id)button;	// 0x35ba8665
- (void)_hideScrubInstructions;	// 0x35baa009
- (void)_initSubviews;	// 0x35ba8bc9
- (void)_itemDurationAvailableNotification:(id)notification;	// 0x35ba8915
- (id)_navBarBackgroundImageForProgressControl:(BOOL)progressControl tallStyle:(BOOL)style;	// 0x35ba8999
- (void)_reconfigureNavigationBarAnimated:(BOOL)animated;	// 0x35ba969d
- (void)_scaleButton:(id)button;	// 0x35ba86ad
- (void)_scheduleHidePopoverTimer;	// 0x35baa1f5
- (void)_showScrubInstructions;	// 0x35ba9eb1
- (void)_videoViewScaleModeDidChangeNotification:(id)_videoViewScaleMode;	// 0x35ba8985
// converted property getter: - (BOOL)allowsWirelessPlayback;	// 0x35ba801d
- (void)crossedURLTimeMarker:(id)marker;	// 0x35ba800d
- (void)dealloc;	// 0x35ba6f6d
- (void)detailSlider:(id)slider didChangeScrubSpeed:(int)speed;	// 0x35ba85ad
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x35ba8455
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x35ba8535
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x35ba84bd
// converted property getter: - (unsigned)disabledParts;	// 0x35ba83bd
- (void)hideAlternateTracks;	// 0x35ba88f5
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x35ba7e45
- (void)layoutSubviews;	// 0x35ba7155
// converted property getter: - (id)navigationBar;	// 0x35ba841d
- (int)nowPlayingItemQueueInfoButton:(id)button willDisplayInfoType:(int)type;	// 0x35ba7f05
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x35ba85f9
// converted property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x35ba8055
- (void)setAlpha:(float)alpha;	// 0x35ba7e81
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x35ba82d1
// converted property setter: - (void)setDisabledParts:(unsigned)parts;	// 0x35ba83d1
- (void)setInterfaceOrientation:(int)orientation;	// 0x35ba8279
- (void)setItem:(id)item;	// 0x35ba8095
- (void)setPlayer:(id)player;	// 0x35ba8231
// declared property setter: - (void)setTitle:(id)title;	// 0x35ba86f5
- (void)setVideoViewController:(id)controller;	// 0x35ba81a9
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x35ba833d
- (void)showAlternateTracks;	// 0x35ba875d
// declared property getter: - (id)title;	// 0x35baa2b9
@end

