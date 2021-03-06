/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIViewController.h> // Unknown library
#import "MPSwipableViewDelegate.h"
#import "MPVideoOverlayDelegate.h"
#import "MediaPlayer-Structs.h"
#import "MPTransportControlsTarget.h"

@class MPInlineVideoController, UITapGestureRecognizer, MPAVItem, UIActivityIndicatorView, UIView, NSTimer, UIPinchGestureRecognizer, MPSwipableView;
@protocol MPVideoOverlay;

@interface MPInlineVideoFullscreenViewController : UIViewController <MPSwipableViewDelegate, MPVideoOverlayDelegate, MPTransportControlsTarget> {
	BOOL _disableTaps;	// 197 = 0xc5
	UITapGestureRecognizer *_doubleTapGestureRecognizer;	// 200 = 0xc8
	NSTimer *_idleTimer;	// 204 = 0xcc
	BOOL _isAnimatingOverlay;	// 208 = 0xd0
	MPAVItem *_item;	// 212 = 0xd4
	UIActivityIndicatorView *_loadingIndicator;	// 216 = 0xd8
	MPInlineVideoController *_masterController;	// 220 = 0xdc
	UIView<MPVideoOverlay> *_overlayView;	// 224 = 0xe0
	UIPinchGestureRecognizer *_pinchGestureRecognizer;	// 228 = 0xe4
	float _savedWindowLevel;	// 232 = 0xe8
	BOOL _shouldForwardRotationEvents;	// 236 = 0xec
	MPSwipableView *_swipableView;	// 240 = 0xf0
	UITapGestureRecognizer *_tapGestureRecognizer;	// 244 = 0xf4
}
@property(retain, nonatomic) MPAVItem *item;	// G=0x35da84d1; S=0x35da7915; @synthesize=_item
@property(assign, nonatomic) MPInlineVideoController *masterController;	// G=0x35da84c1; S=0x35da7975; @synthesize=_masterController
- (id)init;	// 0x35da69d9
- (void)_hideOverlayAnimated:(BOOL)animated;	// 0x35da7ea9
- (void)_hideOverlayDidEnd:(id)_hideOverlay finished:(id)finished;	// 0x35da8051
- (void)_overlayIdleTimerFired:(id)fired;	// 0x35da80d9
- (void)_setStatusBarStyle;	// 0x35da81e5
- (void)_showOverlayDidEnd;	// 0x35da822d
- (void)_viewWasPinched:(id)pinched;	// 0x35da83d9
- (void)_viewWasTapped:(id)tapped;	// 0x35da8299
- (void)_windowWillRotate:(id)_window;	// 0x35da7591
- (void)cancelOverlayIdleTimer;	// 0x35da779d
- (void)dealloc;	// 0x35da6ac5
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x35da6c7d
- (void)hideLoadingIndicator;	// 0x35da77fd
// declared property getter: - (id)item;	// 0x35da84d1
- (void)loadView;	// 0x35da6d95
// declared property getter: - (id)masterController;	// 0x35da84c1
- (void)overlayDidBeginScrubbing:(id)overlay;	// 0x35da74f9
- (void)overlayDidDismissAlternateTracksPopover:(id)overlay;	// 0x35da7509
- (void)overlayDidEndScrubbing:(id)overlay;	// 0x35da7519
- (void)overlayTappedBackButton:(id)button;	// 0x35da7529
- (void)overlayTappedScaleModeButton:(id)button;	// 0x35da7555
- (void)prepareForTransitionFromFullscreen;	// 0x35da7851
- (void)resetOverlayIdleTimer;	// 0x35da7865
// declared property setter: - (void)setItem:(id)item;	// 0x35da7915
// declared property setter: - (void)setMasterController:(id)controller;	// 0x35da7975
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x35da727d
- (void)showAlternateTracks;	// 0x35da79d5
- (void)showLoadingIndicator;	// 0x35da79f5
- (void)showOverlayAnimated:(BOOL)animated;	// 0x35da7bd1
- (void)swipableViewHadActivity:(id)activity;	// 0x35da74b1
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned long long)part;	// 0x35da74c1
- (void)updateOverlayView;	// 0x35da7de9
- (void)viewWillAppear:(BOOL)view;	// 0x35da72c9
- (void)viewWillDisappear:(BOOL)view;	// 0x35da73a9
- (BOOL)wantsFullScreenLayout;	// 0x35da7405
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x35da7409
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x35da745d
@end

