/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPopoverControllerDelegate.h"
#import "UIViewController.h"

@class UIActivityViewController, NSArray;

__attribute__((visibility("hidden")))
@interface UIActivityListViewController : UIViewController <UIPopoverControllerDelegate> {
	UIActivityViewController *_activityViewController;	// 196 = 0xc4
	NSArray *_activities;	// 200 = 0xc8
}
@property(retain, nonatomic) NSArray *activities;	// G=0x3498e03d; S=0x346d2435; @synthesize=_activities
@property(assign, nonatomic) UIActivityViewController *activityViewController;	// G=0x3498e02d; S=0x346d2425; @synthesize=_activityViewController
- (id)initWithActivityViewController:(id)activityViewController activities:(id)activities;	// 0x346d23c1
// declared property getter: - (id)activities;	// 0x3498e03d
// declared property getter: - (id)activityViewController;	// 0x3498e02d
- (CGSize)contentSizeForViewInPopover;	// 0x3498df7d
- (void)dealloc;	// 0x346e37d1
- (void)dimStatusBar:(BOOL)bar animated:(BOOL)animated;	// 0x3498dffd
- (void)loadView;	// 0x346d2445
- (void)reloadActivity:(id)activity;	// 0x3498dfcd
// declared property setter: - (void)setActivities:(id)activities;	// 0x346d2435
// declared property setter: - (void)setActivityViewController:(id)controller;	// 0x346d2425
- (void)setHeaderVisible:(BOOL)visible;	// 0x346d6429
- (unsigned)supportedInterfaceOrientations;	// 0x3498df51
- (void)viewWillAppear:(BOOL)view;	// 0x346d6349
- (void)viewWillDisappear:(BOOL)view;	// 0x346e3371
@end

