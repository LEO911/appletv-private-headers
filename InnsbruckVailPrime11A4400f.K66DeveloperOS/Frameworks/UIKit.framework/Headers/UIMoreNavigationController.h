/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UINavigationController.h"

@class NSArray, UIMoreListController;

@interface UIMoreNavigationController : UINavigationController {
	UIMoreListController *_moreListController;	// 424 = 0x1a8
	UINavigationController *_originalNavigationController;	// 428 = 0x1ac
	UIViewController *_originalRootViewController;	// 432 = 0x1b0
}
@property(assign, nonatomic) BOOL allowsCustomizing;	// G=0x2f60c945; S=0x2f495a6d; 
@property(assign, nonatomic) UIViewController *displayedViewController;	// G=0x2f60c5c5; S=0x2f60c625; 
@property(readonly, assign, nonatomic) UIViewController *moreListController;	// G=0x2f60c9ad; @synthesize=_moreListController
@property(retain, nonatomic) NSArray *moreViewControllers;	// G=0x2f496249; S=0x2f495d75; 
@property(assign, nonatomic) BOOL moreViewControllersChanged;	// G=0x2f60c969; S=0x2f60c98d; 
+ (Class)_moreListControllerClass;	// 0x2f49d815
- (id)init;	// 0x2f4955b9
- (void)_ensureChildrenHaveParentViewController;	// 0x2f60c739
- (id)_preparedViewController:(id)controller;	// 0x2f4956e9
- (void)_redisplayMoreTableView;	// 0x2f60c8c1
- (void)_restoreOriginalNavigationController;	// 0x2f60c501
- (id)_stateRestorationParentForChildViewController:(id)childViewController index:(unsigned *)index;	// 0x2f60c6b9
- (void)_willChangeToIdiom:(int)idiom onScreen:(id)screen;	// 0x2f60c8f9
// declared property getter: - (BOOL)allowsCustomizing;	// 0x2f60c945
- (void)dealloc;	// 0x2f49dd0d
- (void)didShowViewController:(id)controller animated:(BOOL)animated;	// 0x2f60c859
// declared property getter: - (id)displayedViewController;	// 0x2f60c5c5
// declared property getter: - (id)moreListController;	// 0x2f60c9ad
// declared property getter: - (id)moreViewControllers;	// 0x2f496249
// declared property getter: - (BOOL)moreViewControllersChanged;	// 0x2f60c969
- (void)pushViewController:(id)controller animated:(BOOL)animated;	// 0x2f4956a1
- (void)restoreOriginalNavigationController:(id)controller;	// 0x2f60c4bd
// declared property setter: - (void)setAllowsCustomizing:(BOOL)customizing;	// 0x2f495a6d
// declared property setter: - (void)setDisplayedViewController:(id)controller;	// 0x2f60c625
// declared property setter: - (void)setMoreViewControllers:(id)controllers;	// 0x2f495d75
// declared property setter: - (void)setMoreViewControllersChanged:(BOOL)changed;	// 0x2f60c98d
@end

