/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIActionSheet.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class MPAudioDeviceController, UIViewController, MPAVDestinationBrowser, UIWindow;

@interface MPAudioVideoRoutingActionSheet : UIActionSheet {
@private
	MPAudioDeviceController *_audioDeviceController;	// 184 = 0xb8
	MPAVDestinationBrowser *_videoDestinationBrowser;	// 188 = 0xbc
	UIWindow *_windowForActionSheet;	// 192 = 0xc0
	UIViewController *_viewControllerForActionSheet;	// 196 = 0xc4
	id _completionHandler;	// 200 = 0xc8
	int _airPlayPasswordAlertDidAppearToken;	// 204 = 0xcc
	BOOL _airPlayPasswordAlertDidAppearTokenIsValid;	// 208 = 0xd0
}
- (id)initWithType:(unsigned)type;	// 0x31def081
- (id)_initWithAudioDeviceController:(id)audioDeviceController videoDestinationBrowser:(id)browser;	// 0x31def1f5
- (BOOL)_isDeviceVideoRoute:(id)route;	// 0x31deee9d
- (BOOL)_isPotentialDeviceVideoRoute:(id)route;	// 0x31deee1d
- (BOOL)_routeIsPicked:(id)picked;	// 0x31deeda5
- (id)_routes;	// 0x31deed5d
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x31defa51
- (void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;	// 0x31deefa9
- (void)dealloc;	// 0x31def64d
- (void)layoutSubviews;	// 0x31def855
- (void)showInPopoverFromRect:(CGRect)rect inView:(id)view backgroundStyle:(int)style animated:(BOOL)animated completionHandler:(id)handler;	// 0x31deef39
- (void)showWithValidInterfaceOrientationsBlock:(id)validInterfaceOrientationsBlock completionHandler:(id)handler;	// 0x31def711
@end
