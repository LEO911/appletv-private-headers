/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSRootController.h"

@class NSDictionary, UIViewController;

@interface PSSetupController : PSRootController {
	NSDictionary *_rootInfo;	// 300 = 0x12c
	UIViewController<PSController> *_parentController;	// 304 = 0x130
	PSRootController *_parentRootController;	// 308 = 0x134
}
@property(retain) id parentController;	// G=0x31613dfd; S=0x3161411d; converted property
- (id)init;	// 0x31613cd1
- (id)controller;	// 0x316141a1
- (void)dealloc;	// 0x31613d2d
- (void)dismiss;	// 0x316141cd
- (void)dismissAnimated:(BOOL)animated;	// 0x316141e1
- (void)handleURL:(id)url;	// 0x31613da5
// converted property getter: - (id)parentController;	// 0x31613dfd
- (void)popControllerOnParent;	// 0x3161437d
- (BOOL)popupStyleIsModal;	// 0x316143f5
- (void)pushController:(id)controller;	// 0x31614099
- (void)pushControllerOnParentWithSpecifier:(id)specifier;	// 0x31614279
// converted property setter: - (void)setParentController:(id)controller;	// 0x3161411d
- (void)setupController;	// 0x31613e0d
- (void)statusBarWillChangeHeight:(id)statusBar;	// 0x316143f9
- (BOOL)usePopupStyle;	// 0x316143f1
- (void)viewDidDisappear:(BOOL)view;	// 0x31614009
- (void)viewWillDisappear:(BOOL)view;	// 0x31613f79
@end

