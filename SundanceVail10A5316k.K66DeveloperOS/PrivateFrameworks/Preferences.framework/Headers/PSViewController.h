/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSController.h"
#import <UIViewController.h> // Unknown library

@class PSSpecifier, PSRootController;

@interface PSViewController : UIViewController <PSController> {
	UIViewController<PSController> *_parentController;	// 180 = 0xb4
	PSRootController *_rootController;	// 184 = 0xb8
	PSSpecifier *_specifier;	// 188 = 0xbc
}
@property(retain) id parentController;	// G=0x3729df49; S=0x3729df39; converted property
@property(retain) PSRootController *rootController;	// G=0x3729df69; S=0x3729df59; converted property
@property(retain) PSSpecifier *specifier;	// G=0x3729e009; S=0x3729dfc5; converted property
- (BOOL)canBeShownFromSuspendedState;	// 0x3729e0e5
- (void)dealloc;	// 0x3729df79
- (void)didLock;	// 0x3729e05d
- (void)didUnlock;	// 0x3729e065
- (void)didWake;	// 0x3729e069
- (void)formSheetViewDidDisappear;	// 0x3729e0e1
- (void)formSheetViewWillDisappear;	// 0x3729e0dd
- (void)handleURL:(id)url;	// 0x3729e0b5
// converted property getter: - (id)parentController;	// 0x3729df49
- (void)popupViewDidDisappear;	// 0x3729e0d9
- (void)popupViewWillDisappear;	// 0x3729e0d5
- (void)pushController:(id)controller;	// 0x3729e06d
- (id)readPreferenceValue:(id)value;	// 0x3729e035
// converted property getter: - (id)rootController;	// 0x3729df69
// converted property setter: - (void)setParentController:(id)controller;	// 0x3729df39
- (void)setPreferenceValue:(id)value specifier:(id)specifier;	// 0x3729e019
// converted property setter: - (void)setRootController:(id)controller;	// 0x3729df59
// converted property setter: - (void)setSpecifier:(id)specifier;	// 0x3729dfc5
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x3729e08d
// converted property getter: - (id)specifier;	// 0x3729e009
- (void)statusBarWillAnimateByHeight:(float)statusBar;	// 0x3729e0e9
- (void)suspend;	// 0x3729e059
- (void)willBecomeActive;	// 0x3729e055
- (void)willResignActive;	// 0x3729e051
- (void)willUnlock;	// 0x3729e061
@end

