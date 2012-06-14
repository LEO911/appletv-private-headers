/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class UIWindow, UIActivity, NSArray, UIActivityListViewController, NSOperationQueue;

@interface UIActivityViewController : UIViewController {
@private
	unsigned _backgroundTaskIdentifier;	// 180 = 0xb4
	double _progressDisplayTime;	// 184 = 0xb8
	id _completionHandler;	// 192 = 0xc0
	int _completedProviderCount;	// 196 = 0xc4
	int _totalProviderCount;	// 200 = 0xc8
	UIWindow *_dimmingWindow;	// 204 = 0xcc
	NSArray *_applicationActivities;	// 208 = 0xd0
	NSOperationQueue *_activityItemProviderOperationQueue;	// 212 = 0xd4
	NSArray *_activityItems;	// 216 = 0xd8
	UIActivityListViewController *_activityListViewController;	// 220 = 0xdc
	BOOL _useBlackPopoverStyle;	// 224 = 0xe0
	Class _originalPopoverBackgroundViewClass;	// 228 = 0xe4
	NSArray *_excludedActivityTypes;	// 232 = 0xe8
	int _originalPopoverBackgroundStyle;	// 236 = 0xec
	UIActivity *_activity;	// 240 = 0xf0
}
@property(retain, nonatomic) UIActivity *activity;	// G=0x304b9e09; S=0x304b9e19; @synthesize=_activity
@property(retain, nonatomic) NSOperationQueue *activityItemProviderOperationQueue;	// G=0x304b9d31; S=0x304b85c1; @synthesize=_activityItemProviderOperationQueue
@property(copy, nonatomic) NSArray *activityItems;	// G=0x304b9d41; S=0x304b9d55; @synthesize=_activityItems
@property(retain, nonatomic) UIActivityListViewController *activityListViewController;	// G=0x304b9d65; S=0x304b9d75; @synthesize=_activityListViewController
@property(copy, nonatomic) NSArray *applicationActivities;	// G=0x304b9d0d; S=0x304b9d21; @synthesize=_applicationActivities
@property(assign, nonatomic) unsigned backgroundTaskIdentifier;	// G=0x304b9c3d; S=0x304b9c4d; @synthesize=_backgroundTaskIdentifier
@property(assign, nonatomic) int completedProviderCount;	// G=0x304b9cad; S=0x304b9cbd; @synthesize=_completedProviderCount
@property(copy, nonatomic) id completionHandler;	// G=0x304b9c89; S=0x304b9c9d; @synthesize=_completionHandler
@property(retain, nonatomic) UIWindow *dimmingWindow;	// G=0x304b9ced; S=0x304b9cfd; @synthesize=_dimmingWindow
@property(copy, nonatomic) NSArray *excludedActivityTypes;	// G=0x304b9dc5; S=0x304b9dd9; @synthesize=_excludedActivityTypes
@property(assign, nonatomic) int originalPopoverBackgroundStyle;	// G=0x304b9de9; S=0x304b9df9; @synthesize=_originalPopoverBackgroundStyle
@property(assign, nonatomic) Class originalPopoverBackgroundViewClass;	// G=0x304b9da5; S=0x304b9db5; @synthesize=_originalPopoverBackgroundViewClass
@property(assign, nonatomic) double progressDisplayTime;	// G=0x304b9c5d; S=0x304b9c75; @synthesize=_progressDisplayTime
@property(assign, nonatomic) int totalProviderCount;	// G=0x304b9ccd; S=0x304b9cdd; @synthesize=_totalProviderCount
@property(assign, nonatomic) BOOL useBlackPopoverStyle;	// G=0x304b9d85; S=0x304b9d95; @synthesize=_useBlackPopoverStyle
- (id)initWithActivityItems:(id)activityItems applicationActivities:(id)activities;	// 0x304b7139
- (id)_activityItemValues;	// 0x304b74f9
- (id)_availableActivities;	// 0x304b77ad
- (id)_builtinActivities;	// 0x304b7349
- (void)_cancel;	// 0x304b9b49
- (void)_cleanupActivityWithSuccess:(BOOL)success;	// 0x304b8815
- (void)_didResignContentViewControllerOfPopover:(id)popover;	// 0x304b9add
- (void)_dimStatusBar:(BOOL)bar animated:(BOOL)animated;	// 0x304b7e91
- (void)_executeActivity;	// 0x304b8ca1
- (void)_hideView;	// 0x304b8749
- (void)_performActivity:(id)activity;	// 0x304b923d
- (void)_prepareActivity:(id)activity;	// 0x304b9239
- (void)_reloadImageForActivity:(id)activity;	// 0x304b9219
- (void)_setPopoverController:(id)controller;	// 0x304b9995
- (BOOL)_shouldShowSystemActivity:(id)activity;	// 0x304b77a9
- (void)_showProgressForActivity:(id)activity;	// 0x304b91b9
- (id)_titleForActivity:(id)activity;	// 0x304b9215
// declared property getter: - (id)activity;	// 0x304b9e09
// declared property getter: - (id)activityItemProviderOperationQueue;	// 0x304b9d31
// declared property getter: - (id)activityItems;	// 0x304b9d41
// declared property getter: - (id)activityListViewController;	// 0x304b9d65
// declared property getter: - (id)applicationActivities;	// 0x304b9d0d
// declared property getter: - (unsigned)backgroundTaskIdentifier;	// 0x304b9c3d
// declared property getter: - (int)completedProviderCount;	// 0x304b9cad
// declared property getter: - (id)completionHandler;	// 0x304b9c89
- (CGSize)contentSizeForViewInPopover;	// 0x304b8475
- (void)dealloc;	// 0x304b7231
// declared property getter: - (id)dimmingWindow;	// 0x304b9ced
// declared property getter: - (id)excludedActivityTypes;	// 0x304b9dc5
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x304b9605
// declared property getter: - (int)originalPopoverBackgroundStyle;	// 0x304b9de9
// declared property getter: - (Class)originalPopoverBackgroundViewClass;	// 0x304b9da5
// declared property getter: - (double)progressDisplayTime;	// 0x304b9c5d
// declared property setter: - (void)setActivity:(id)activity;	// 0x304b9e19
// declared property setter: - (void)setActivityItemProviderOperationQueue:(id)queue;	// 0x304b85c1
// declared property setter: - (void)setActivityItems:(id)items;	// 0x304b9d55
// declared property setter: - (void)setActivityListViewController:(id)controller;	// 0x304b9d75
// declared property setter: - (void)setApplicationActivities:(id)activities;	// 0x304b9d21
// declared property setter: - (void)setBackgroundTaskIdentifier:(unsigned)identifier;	// 0x304b9c4d
// declared property setter: - (void)setCompletedProviderCount:(int)count;	// 0x304b9cbd
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x304b9c9d
// declared property setter: - (void)setDimmingWindow:(id)window;	// 0x304b9cfd
// declared property setter: - (void)setExcludedActivityTypes:(id)types;	// 0x304b9dd9
// declared property setter: - (void)setOriginalPopoverBackgroundStyle:(int)style;	// 0x304b9df9
// declared property setter: - (void)setOriginalPopoverBackgroundViewClass:(Class)aClass;	// 0x304b9db5
// declared property setter: - (void)setProgressDisplayTime:(double)time;	// 0x304b9c75
// declared property setter: - (void)setTotalProviderCount:(int)count;	// 0x304b9cdd
// declared property setter: - (void)setUseBlackPopoverStyle:(BOOL)style;	// 0x304b9d95
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x304b9be5
// declared property getter: - (int)totalProviderCount;	// 0x304b9ccd
// declared property getter: - (BOOL)useBlackPopoverStyle;	// 0x304b9d85
- (void)viewDidAppear:(BOOL)view;	// 0x304b82a5
- (void)viewDidLoad;	// 0x304b7d75
- (void)viewWillAppear:(BOOL)view;	// 0x304b81ad
- (void)viewWillDisappear:(BOOL)view;	// 0x304b8349
@end
