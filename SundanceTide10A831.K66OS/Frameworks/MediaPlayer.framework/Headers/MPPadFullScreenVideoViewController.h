/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPVideoOverlayDelegate.h"
#import "MPAbstractFullScreenVideoViewController.h"
#import "UIPopoverControllerDelegate.h"

@class MPAudioVideoRoutingPopoverController, MPPadFullScreenVideoOverlay;

@interface MPPadFullScreenVideoViewController : MPAbstractFullScreenVideoViewController <MPVideoOverlayDelegate, UIPopoverControllerDelegate> {
	MPPadFullScreenVideoOverlay *_fullscreenVideoOverlay;	// 340 = 0x154
	MPAudioVideoRoutingPopoverController *_routePopoverController;	// 344 = 0x158
}
- (id)init;	// 0x36ee0fad
- (void)_availableRoutesDidChangeNotification:(id)_availableRoutes;	// 0x36ee222d
- (void)_hideOverlayAnimationFinished:(id)finished;	// 0x36ee207d
- (void)_rotationAnimationFinished:(id)finished;	// 0x36ee22a9
- (BOOL)canChangeScaleMode;	// 0x36ee1865
- (BOOL)controlsOverlayVisible;	// 0x36ee16d5
- (void)dealloc;	// 0x36ee0fd9
- (void)didChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x36ee13dd
- (void)hideOverlayAnimated:(BOOL)animated;	// 0x36ee1c61
- (void)loadView;	// 0x36ee1185
- (void)overlayDidDismissAlternateTracksPopover:(id)overlay;	// 0x36ee2219
- (void)overlayTappedBackButton:(id)button;	// 0x36ee216d
- (void)overlayTappedScaleModeButton:(id)button;	// 0x36ee21ed
- (id)overlayView;	// 0x36ee18d9
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x36ee2021
- (void)registerForPlayerNotifications;	// 0x36ee1099
- (void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x36ee1555
- (void)setDisabledParts:(unsigned long long)parts;	// 0x36ee165d
- (void)setItem:(id)item;	// 0x36ee172d
- (void)setPlayer:(id)player;	// 0x36ee142d
- (void)setScaleMode:(unsigned)mode animated:(BOOL)animated;	// 0x36ee17b5
- (void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x36ee15d9
- (void)showOverlayAnimated:(BOOL)animated;	// 0x36ee1a61
- (void)startTicking;	// 0x36ee12d1
- (void)stopTicking;	// 0x36ee1311
- (void)swipableView:(id)view tappedWithCount:(unsigned)count atLocation:(CGPoint)location;	// 0x36ee1475
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned long long)part;	// 0x36ee1e71
- (void)unregisterForPlayerNotifications;	// 0x36ee1115
- (id)videoOverlayView;	// 0x36ee1a41
- (id)videoOverlayViewIfLoaded;	// 0x36ee1a51
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x36ee1dc9
- (void)viewWillDisappear:(BOOL)view;	// 0x36ee11d5
- (void)willChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x36ee1331
@end
