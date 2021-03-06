/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class UINavigationController;

__attribute__((visibility("hidden")))
@interface UISnapshotModalViewController : UIViewController {
	int _interfaceOrientation;	// 196 = 0xc4
	UIViewController *_disappearingViewController;	// 200 = 0xc8
	UINavigationController *_parentController;	// 204 = 0xcc
}
@property(retain, nonatomic) UIViewController *disappearingViewController;	// G=0x30abcb0d; S=0x30abc975; @synthesize=_disappearingViewController
- (id)initWithInterfaceOrientation:(int)interfaceOrientation;	// 0x30abc8e9
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x30abcaf5
- (void)dealloc;	// 0x30abc929
// declared property getter: - (id)disappearingViewController;	// 0x30abcb0d
// declared property setter: - (void)setDisappearingViewController:(id)controller;	// 0x30abc975
- (void)viewDidDisappear:(BOOL)view;	// 0x30abca85
- (void)viewWillDisappear:(BOOL)view;	// 0x30abc9d5
@end

