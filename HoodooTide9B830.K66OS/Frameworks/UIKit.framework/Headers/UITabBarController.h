/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UITabBarDelegate.h"
#import "UIViewController.h"

@class NSArray, UITabBar, NSMutableArray, UINavigationController, UIView;
@protocol UITabBarControllerDelegate;

@interface UITabBarController : UIViewController <UITabBarDelegate, NSCoding> {
@private
	UITabBar *_tabBar;	// 156 = 0x9c
	UIView *_containerView;	// 160 = 0xa0
	UIView *_viewControllerTransitionView;	// 164 = 0xa4
	id _tabBarItemsToViewControllers;	// 168 = 0xa8
	UIViewController *_selectedViewController;	// 172 = 0xac
	UINavigationController *_moreNavigationController;	// 176 = 0xb0
	NSArray *_customizableViewControllers;	// 180 = 0xb4
	id<UITabBarControllerDelegate> _delegate;	// 184 = 0xb8
	UIViewController *_selectedViewControllerDuringWillAppear;	// 188 = 0xbc
	UIViewController *_transientViewController;	// 192 = 0xc0
	unsigned _maxItems;	// 196 = 0xc4
	struct {
		unsigned isShowingMoreItem : 1;
		unsigned needsToRebuildItems : 1;
		unsigned isBarHidden : 1;
		unsigned editButtonOnLeft : 1;
	} _tabBarControllerFlags;	// 200 = 0xc8
	NSMutableArray *_moreChildViewControllers;	// 204 = 0xcc
}
@property(copy, nonatomic) NSArray *customizableViewControllers;	// G=0x300cc9f5; S=0x300b4179; @synthesize=_customizableViewControllers
@property(assign, nonatomic) id<UITabBarControllerDelegate> delegate;	// G=0x300cd631; S=0x300b41fd; @synthesize=_delegate
@property(assign, nonatomic) NSMutableArray *moreChildViewControllers;	// G=0x30206991; S=0x302069a1; @synthesize=_moreChildViewControllers
@property(readonly, assign, nonatomic) UINavigationController *moreNavigationController;	// G=0x30046add; 
@property(assign, nonatomic) unsigned selectedIndex;	// G=0x300aee21; S=0x300b1b59; 
@property(assign, nonatomic) UIViewController *selectedViewController;	// G=0x300468a9; S=0x300b42a5; 
@property(assign) BOOL showsEditButtonOnLeft;	// G=0x30206889; S=0x300cc76d; converted property
@property(readonly, assign, nonatomic) UITabBar *tabBar;	// G=0x300af2f9; 
@property(retain) UIViewController *transientViewController;	// G=0x300aede9; S=0x300b1c4d; converted property
@property(copy, nonatomic) NSArray *viewControllers;	// G=0x300b420d; S=0x300ae74d; 
+ (Class)_moreNavigationControllerClass;	// 0x300e380d
- (id)initWithCoder:(id)coder;	// 0x30205711
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x300acb5d
- (void)__viewWillLayoutSubviews;	// 0x300b47fd
- (BOOL)_allowSelectionWithinMoreList;	// 0x30046979
- (BOOL)_allowsAutorotation;	// 0x300e461d
- (BOOL)_allowsCustomizing;	// 0x300cc9c5
- (void)_configureTargetActionForTabBarItem:(id)tabBarItem;	// 0x300af29d
- (BOOL)_doAllViewControllersSupportInterfaceOrientation:(int)orientation;	// 0x300b46e9
- (id)_existingMoreNavigationController;	// 0x30046951
- (CGRect)_frameForViewController:(id)viewController;	// 0x300b29f1
- (void)_getRotationContentSettings:(XXStruct_tXAZTC *)settings;	// 0x30198a15
- (BOOL)_isBarHidden;	// 0x30206825
- (BOOL)_isPresentationContextByDefault;	// 0x300acc49
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x300b467d
- (void)_layoutViewController:(id)controller;	// 0x300b45f5
- (void)_populateArchivedChildViewControllers:(id)controllers;	// 0x30205b65
- (void)_prepareTabBar;	// 0x300ad471
- (BOOL)_reallyWantsFullScreenLayout;	// 0x300cc769
- (void)_rebuildTabBarItemsAnimated:(BOOL)animated;	// 0x300aef49
- (void)_rebuildTabBarItemsIfNeeded;	// 0x300b1fb5
- (void)_selectDefaultViewControllerIfNecessaryWithAppearanceTransitions:(BOOL)appearanceTransitions;	// 0x300b4861
- (id)_selectedViewControllerInTabBar;	// 0x3004692d
- (void)_setMaximumNumberOfItems:(unsigned)items;	// 0x3020689d
- (void)_setSelectedTabBarItem:(id)item;	// 0x300b1fe5
- (void)_setSelectedViewController:(id)controller;	// 0x300b1de9
- (BOOL)_shouldPersistViewWhenCoding;	// 0x30205bd9
- (BOOL)_shouldUseOnePartRotation;	// 0x300e45f5
- (void)_tabBarItemClicked:(id)clicked;	// 0x3013b2fd
- (id)_transitionView;	// 0x300ad861
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;	// 0x300b4599
- (id)_viewControllerForTabBarItem:(id)tabBarItem;	// 0x3013b4b5
- (id)_viewControllersInTabBar;	// 0x300b1b49
- (id)allViewControllers;	// 0x300b2aed
- (void)animationDidStop:(id)animation finished:(id)finished context:(void *)context;	// 0x30185935
- (void)beginCustomizingTabBar:(id)bar;	// 0x302060ad
- (void)concealTabBarSelection;	// 0x30186dc1
// declared property getter: - (id)customizableViewControllers;	// 0x300cc9f5
- (void)dealloc;	// 0x30205da9
- (id)defaultFirstResponder;	// 0x301a1325
// declared property getter: - (id)delegate;	// 0x300cd631
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;	// 0x3020692d
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x3019d385
- (void)encodeWithCoder:(id)coder;	// 0x30205bdd
- (void)hideBarWithTransition:(int)transition;	// 0x30182029
- (void)loadView;	// 0x300acc75
// declared property getter: - (id)moreChildViewControllers;	// 0x30206991
// declared property getter: - (id)moreNavigationController;	// 0x30046add
- (void)purgeMemoryForReason:(int)reason;	// 0x3020601d
- (void)revealTabBarSelection;	// 0x30187049
- (id)rotatingFooterView;	// 0x301989a1
- (id)rotatingHeaderView;	// 0x301988fd
// declared property getter: - (unsigned)selectedIndex;	// 0x300aee21
// declared property getter: - (id)selectedViewController;	// 0x300468a9
// declared property setter: - (void)setCustomizableViewControllers:(id)controllers;	// 0x300b4179
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x300b41fd
// declared property setter: - (void)setMoreChildViewControllers:(id)controllers;	// 0x302069a1
// declared property setter: - (void)setSelectedIndex:(unsigned)index;	// 0x300b1b59
// declared property setter: - (void)setSelectedViewController:(id)controller;	// 0x300b42a5
// converted property setter: - (void)setShowsEditButtonOnLeft:(BOOL)left;	// 0x300cc76d
- (void)setTabBar:(id)bar;	// 0x30205f85
// converted property setter: - (void)setTransientViewController:(id)controller;	// 0x300b1c4d
- (void)setTransientViewController:(id)controller animated:(BOOL)animated;	// 0x300b1c61
// declared property setter: - (void)setViewControllers:(id)controllers;	// 0x300ae74d
- (void)setViewControllers:(id)controllers animated:(BOOL)animated;	// 0x300ae761
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x300b46d1
- (void)showBarWithTransition:(int)transition;	// 0x300b3e09
// converted property getter: - (BOOL)showsEditButtonOnLeft;	// 0x30206889
// declared property getter: - (id)tabBar;	// 0x300af2f9
- (void)tabBar:(id)bar didEndCustomizingItems:(id)items changed:(BOOL)changed;	// 0x302067ad
- (void)tabBar:(id)bar willBeginCustomizingItems:(id)items;	// 0x30206275
- (void)tabBar:(id)bar willEndCustomizingItems:(id)items changed:(BOOL)changed;	// 0x302062dd
// converted property getter: - (id)transientViewController;	// 0x300aede9
- (void)transitionFromViewController:(id)viewController toViewController:(id)viewController2;	// 0x300b25bd
- (void)transitionFromViewController:(id)viewController toViewController:(id)viewController2 transition:(int)transition shouldSetSelected:(BOOL)selected;	// 0x300b25e1
- (void)transitionViewDidComplete:(id)transitionView fromView:(id)view toView:(id)view3;	// 0x300b3c69
- (void)updateTabBarItemForViewController:(id)viewController;	// 0x3015b6a5
// declared property getter: - (id)viewControllers;	// 0x300b420d
- (void)viewDidAppear:(BOOL)view;	// 0x300b4499
- (void)viewDidDisappear:(BOOL)view;	// 0x300b8ead
- (void)viewWillAppear:(BOOL)view;	// 0x300b43b5
- (void)viewWillDisappear:(BOOL)view;	// 0x300b8dd1
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x302068f5
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x3019bc95
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x30206959
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x30198f65
@end

