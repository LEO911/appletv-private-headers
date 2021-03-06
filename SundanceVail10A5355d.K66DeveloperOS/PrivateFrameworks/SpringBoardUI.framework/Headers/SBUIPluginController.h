/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <NSObject.h> // Unknown library
#import "SBPluginBundleController.h"
#import "SBUIPluginViewController.h"
#import "SpringBoardUI-Structs.h"

@protocol SBUIPluginControllerHost;

@interface SBUIPluginController : NSObject <SBPluginBundleController, SBUIPluginViewController> {
	id<SBUIPluginControllerHost> _host;	// 4 = 0x4
	BOOL _isVisible;	// 8 = 0x8
}
@property(assign) id<SBUIPluginControllerHost> host;	// G=0x3639cd01; S=0x3639cd15; @synthesize=_host
@property(assign, getter=isVisible) BOOL visible;	// G=0x3639cd2d; S=0x3639cd45; @synthesize=_isVisible
- (void)_postVisibilityDidChangeNotification;	// 0x3639cc0d
- (void)cancelPendingActivationEvent:(int)event;	// 0x3639cccd
- (CGSize)desiredSizeForRevealMode:(int)revealMode;	// 0x3639ccd5
- (BOOL)handleActivationEvent:(int)event context:(void *)context;	// 0x3639ccd1
- (BOOL)handledMenuButtonDownEvent;	// 0x3639ccf1
- (BOOL)handledMenuButtonTap;	// 0x3639ccf5
- (BOOL)handledPasscodeUnlockWithCompletion:(id)completion;	// 0x3639cced
- (BOOL)handledWiredMicButtonTap;	// 0x3639ccf9
// declared property getter: - (id)host;	// 0x3639cd01
// declared property getter: - (BOOL)isVisible;	// 0x3639cd2d
- (void)noteInterruption;	// 0x3639ccfd
- (void)prepareForActivationEvent:(int)activationEvent afterInterval:(double)interval;	// 0x3639ccc9
- (void)registeredWithHost;	// 0x3639ccbd
// declared property setter: - (void)setHost:(id)host;	// 0x3639cd15
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x3639cd45
- (BOOL)supportedAndEnabled;	// 0x3639ccc1
- (id)view;	// 0x3639cc55
- (void)viewDidAppear;	// 0x3639cc6d
- (void)viewDidDisappear;	// 0x3639cc81
- (void)viewDidRotateFromInterfaceOrientation:(int)view;	// 0x3639ccb9
- (void)viewWillAnimateRotationToInterfaceOrientation:(int)view;	// 0x3639ccb5
- (void)viewWillAppear;	// 0x3639cc59
- (void)viewWillDisappear;	// 0x3639cc7d
- (void)viewWillRotateToInterfaceOrientation:(int)view;	// 0x3639ccb1
- (BOOL)wantsActivationEvent:(int)event interval:(double *)interval;	// 0x3639ccc5
@end

