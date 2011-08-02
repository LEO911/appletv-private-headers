/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPVideoViewController.h"

@class UIPinchGestureRecognizer, UIView, MPInlineVideoOverlay, UITapGestureRecognizer, NSTimer, MPInlineAudioOverlay, NSString, MPAudioVideoRoutingPopoverController, UIWindow;
@protocol MPVideoOverlay;

@interface MPInlineVideoViewController : MPVideoViewController {
@private
	int _videoOverlayStyle;	// 224 = 0xe0
	MPInlineVideoOverlay *_inlineOverlayView;	// 228 = 0xe4
	UIView<MPVideoOverlay> *_fullscreenOverlayView;	// 232 = 0xe8
	MPInlineAudioOverlay *_audioOverlayView;	// 236 = 0xec
	int _audioOverlayStyle;	// 240 = 0xf0
	UIView *_overlayViewBeingHidden;	// 244 = 0xf4
	BOOL _overlayViewIsVisible;	// 248 = 0xf8
	NSString *_playbackErrorDescription;	// 252 = 0xfc
	UITapGestureRecognizer *_tapGestureRecognizer;	// 256 = 0x100
	UITapGestureRecognizer *_doubleTapGestureRecognizer;	// 260 = 0x104
	UITapGestureRecognizer *_fullscreenTapGestureRecognizer;	// 264 = 0x108
	UITapGestureRecognizer *_fullscreenDoubleTapGestureRecognizer;	// 268 = 0x10c
	UIPinchGestureRecognizer *_pinchGestureRecognizer;	// 272 = 0x110
	UIPinchGestureRecognizer *_fullscreenPinchGestureRecognizer;	// 276 = 0x114
	NSTimer *_idleTimer;	// 280 = 0x118
	MPAudioVideoRoutingPopoverController *_routePopoverController;	// 284 = 0x11c
	UIWindow *_windowForDisablingAutorotation;	// 288 = 0x120
	unsigned _wantsOverlayVisibleWhenItemIsAvailable : 1;	// 292 = 0x124
	unsigned _wantsOverlayVisibleWhenItemIsAvailableAnimated : 1;	// 292 = 0x124
	unsigned _animatingOverlay : 1;	// 292 = 0x124
	unsigned _inCloneMirrorMode : 1;	// 292 = 0x124
	UIView *_fullscreenView;	// 296 = 0x128
	UIView *_superviewBeforeFullscreen;	// 300 = 0x12c
	unsigned _indexInSuperviewBeforeFullscreen;	// 304 = 0x130
	CGRect _nonFullscreenDestinationFrame;	// 308 = 0x134
	int _desiredInterfaceOrientation;	// 324 = 0x144
	int _previousStatusBarStyle;	// 328 = 0x148
	unsigned _statusBarWasHidden : 1;	// 332 = 0x14c
	unsigned _isFullscreen : 1;	// 332 = 0x14c
	unsigned _animatingFullscreenTransition : 1;	// 332 = 0x14c
	unsigned _animatingFullscreenTransitionToInline : 1;	// 332 = 0x14c
	unsigned _contentViewDidClipToBounds : 1;	// 332 = 0x14c
	unsigned _fullscreenViewSizeIsExternallyManaged : 1;	// 332 = 0x14c
	unsigned _swallowNextTapGesture : 1;	// 332 = 0x14c
}
@property(assign, nonatomic) int audioOverlayStyle;	// G=0x3378745d; S=0x33787fe5; @synthesize=_audioOverlayStyle
@property(readonly, assign, nonatomic) UIView *fullscreenView;	// G=0x33787391; 
@property(copy, nonatomic) NSString *playbackErrorDescription;	// G=0x3378744d; S=0x33787f81; @synthesize=_playbackErrorDescription
@property(assign, nonatomic) int videoOverlayStyle;	// G=0x3378743d; S=0x33788019; @synthesize=_videoOverlayStyle
- (id)init;	// 0x3378906d
- (id)_audioOverlayViewIfLoaded;	// 0x337873a1
- (void)_bufferingStateDidChangeNotification:(id)_bufferingState;	// 0x337880fd
- (BOOL)_canHideOverlay:(BOOL)overlay;	// 0x33787ee9
- (void)_cancelOverlayIdleTimer;	// 0x337878c9
- (unsigned)_effectiveItemType;	// 0x337874f9
- (void)_fireOverlayIdleTimer:(id)timer;	// 0x337879b9
- (void)_hideOverlayAnimated:(BOOL)animated;	// 0x33787b69
- (void)_hideOverlayDidEnd:(id)_hideOverlay finished:(id)finished;	// 0x33787ad5
- (BOOL)_isMainScreenMirrored;	// 0x3378b4e5
- (void)_layoutForItemTypeAvailable;	// 0x33789a29
- (id)_overlayView;	// 0x33789601
- (id)_overlayViewIfLoaded;	// 0x33787f4d
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x33788191
- (void)_removeCoverView;	// 0x33787499
- (void)_resetOverlayIdleTimer;	// 0x33787921
- (void)_screenDidDisconnect:(id)_screen;	// 0x3378746d
- (void)_showOverlayAnimated:(BOOL)animated;	// 0x337892c5
- (void)_showOverlayDidEnd;	// 0x33787e11
- (void)_transitionFromFullscreenAnimated:(BOOL)fullscreenAnimated;	// 0x337878b1
- (void)_transitionFromFullscreenAnimated:(BOOL)fullscreenAnimated fromDoneButton:(BOOL)doneButton;	// 0x3378ae25
- (void)_transitionFromFullscreenDidEnd;	// 0x33787531
- (void)_transitionToFullscreenAnimated:(BOOL)fullscreenAnimated;	// 0x3378b5e5
- (void)_transitionToFullscreenDidEnd;	// 0x3378ab81
- (void)_updateForInterfaceOrientation:(int)interfaceOrientation animate:(BOOL)animate;	// 0x3378916d
- (BOOL)_useInlineControls;	// 0x33787411
- (id)_viewControllerForRotationForViewController:(id)viewController;	// 0x337874cd
- (void)_viewWasPinched:(id)pinched;	// 0x337881f5
- (void)_viewWasTapped:(id)tapped;	// 0x33789ec5
// declared property getter: - (int)audioOverlayStyle;	// 0x3378745d
- (id)backgroundView;	// 0x33788699
- (BOOL)canShowQTAudioOnlyUI;	// 0x33788545
- (BOOL)controlsOverlayVisible;	// 0x3378736d
- (void)dealloc;	// 0x33788d9d
- (void)displayVideoViewOnScreen;	// 0x3378a4a1
// declared property getter: - (id)fullscreenView;	// 0x33787391
- (BOOL)isFullscreen;	// 0x3378737d
- (BOOL)isTransitioningFromFullscreen;	// 0x337873e1
- (BOOL)isTransitioningToFullscreen;	// 0x337873b1
- (void)loadView;	// 0x33788d0d
- (void)overlayDidDismissAlternateTracksPopover:(id)overlay;	// 0x33788339
- (void)overlayTappedBackButton:(id)button;	// 0x33788371
- (void)overlayTappedScaleModeButton:(id)button;	// 0x3378834d
// declared property getter: - (id)playbackErrorDescription;	// 0x3378744d
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x33788409
- (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x33788aed
// declared property setter: - (void)setAudioOverlayStyle:(int)style;	// 0x33787fe5
- (void)setControlsNeedLayout;	// 0x3378a8ad
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate force:(BOOL)force;	// 0x33788671
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x337889cd
- (void)setDisableControlsAutohide:(BOOL)autohide;	// 0x337885d9
- (void)setDisabledParts:(unsigned)parts;	// 0x3378889d
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x33788625
- (void)setItem:(id)item;	// 0x33788a25
- (void)setItemTypeOverride:(unsigned)override;	// 0x3378859d
- (void)setOrientation:(int)orientation animate:(BOOL)animate;	// 0x3378a5e5
// declared property setter: - (void)setPlaybackErrorDescription:(id)description;	// 0x33787f81
- (void)setTVOutEnabled:(BOOL)enabled;	// 0x33788b49
// declared property setter: - (void)setVideoOverlayStyle:(int)style;	// 0x33788019
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x337888e5
- (void)startTicking;	// 0x33788c55
- (void)stopTicking;	// 0x33788c31
- (void)swipableViewHadActivity:(id)activity;	// 0x33788c79
- (BOOL)transportControls:(id)controls heldButtonPart:(unsigned)part;	// 0x3378852d
- (BOOL)transportControls:(id)controls releasedHeldButtonPart:(unsigned)part;	// 0x33788515
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned)part;	// 0x3378a021
// declared property getter: - (int)videoOverlayStyle;	// 0x3378743d
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x33788129
- (void)viewDidAppear:(BOOL)view;	// 0x33788ccd
- (void)viewDidDisappear:(BOOL)view;	// 0x33788c8d
@end
