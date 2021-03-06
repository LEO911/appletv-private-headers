/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class NSMutableArray, UIPageControl, UIView, UIScrollView;
@protocol UIPageControllerDelegate;

@interface UIPageController : UIViewController {
	NSMutableArray *_viewControllers;	// 132 = 0x84
	UIView *_wrapperViews[3];	// 136 = 0x88
	int _notificationState[3];	// 148 = 0x94
	UIScrollView *_scrollView;	// 160 = 0xa0
	UIPageControl *_pageControl;	// 164 = 0xa4
	id<UIPageControllerDelegate> _delegate;	// 168 = 0xa8
	int _pageSpacing;	// 172 = 0xac
	int _visibleIndex;	// 176 = 0xb0
	int _pageCount;	// 180 = 0xb4
	struct {
		unsigned visible : 1;
		unsigned isCleaningUp : 1;
		unsigned didRevertStatusBar : 1;
	} _pageControllerFlags;	// 184 = 0xb8
}
@property(assign, nonatomic) id<UIPageControllerDelegate> delegate;	// G=0x32204ef5; S=0x32205e91; @synthesize=_delegate
@property(assign, nonatomic) BOOL displaysPageControl;	// G=0x32204ee1; S=0x32205455; 
@property(assign, nonatomic) int pageCount;	// G=0x32204ed1; S=0x32205509; 
@property(assign, nonatomic) float pageSpacing;	// G=0x32204e35; S=0x32205dfd; 
@property(assign, nonatomic) int visibleIndex;	// G=0x32204ec1; S=0x322055c5; 
@property(readonly, retain, nonatomic) UIViewController *visibleViewController;	// G=0x322059e5; 
- (void)_adjustScrollViewContentInsets;	// 0x32206cd5
- (BOOL)_allowsAutorotation;	// 0x322053ad
- (void)_createPageControl;	// 0x32207899
- (BOOL)_doesVisibleViewControllerSupportInterfaceOrientation:(int)orientation;	// 0x32205371
- (void)_getRotationContentSettings:(XXStruct_OrggeC *)settings;	// 0x32205279
- (BOOL)_hasNextViewController;	// 0x32205a15
- (BOOL)_hasPreviousViewController;	// 0x32205a79
- (BOOL)_hasVisibleViewController;	// 0x32205a5d
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x3220530d
- (id)_loadNextViewController;	// 0x32205bf5
- (id)_loadPreviousViewController;	// 0x32205cf1
- (id)_loadVisibleViewControllerAndNotify:(BOOL)notify;	// 0x32205c65
- (BOOL)_needToLoadNext;	// 0x32205d61
- (BOOL)_needToLoadPrevious;	// 0x32205dc9
- (BOOL)_needToLoadVisible;	// 0x32205d95
- (id)_nextViewController;	// 0x32205abd
- (int)_nextViewControllerNotificationState;	// 0x32204eb1
- (void)_notifyNextViewController:(int)controller animated:(BOOL)animated;	// 0x322057c1
- (void)_notifyPreviousViewController:(int)controller animated:(BOOL)animated;	// 0x322058b1
- (void)_notifyViewController:(id)controller ofState:(int)state previousState:(int)state3 animated:(BOOL)animated;	// 0x32205925
- (void)_notifyVisibleViewController:(int)controller animated:(BOOL)animated;	// 0x3220583d
- (void)_pageChanged:(id)changed;	// 0x322054d9
- (id)_pageControllerScrollView;	// 0x32204f05
- (id)_previousViewController;	// 0x32205b8d
- (int)_previousViewControllerNotificationState;	// 0x32204e91
- (id)_scrollView;	// 0x32204e51
- (void)_scrollView:(id)view boundsDidChangeToSize:(CGSize)bounds;	// 0x32207a85
- (void)_scrollViewDidEndPaging;	// 0x32205671
- (void)_scrollViewDidScroll:(id)_scrollView forceUpdate:(BOOL)update;	// 0x32207435
- (CGRect)_scrollViewFrame;	// 0x32205605
- (void)_scrollViewWillBeginPaging;	// 0x3220573d
- (void)_setNextViewController:(id)controller;	// 0x322064c5
- (void)_setNextViewControllerNotificationState:(int)state;	// 0x32204e81
- (void)_setPreviousViewController:(id)controller;	// 0x322067ed
- (void)_setPreviousViewControllerNotificationState:(int)state;	// 0x32204e61
- (void)_setVisibleViewController:(id)controller;	// 0x32206659
- (void)_setVisibleViewControllerNotificationState:(int)state;	// 0x32204e71
- (BOOL)_shouldUseOnePartRotation;	// 0x322052a1
- (id)_visibleViewController;	// 0x32205b25
- (int)_visibleViewControllerNotificationState;	// 0x32204ea1
- (void)dealloc;	// 0x32206aa1
// declared property getter: - (id)delegate;	// 0x32204ef5
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;	// 0x32205191
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x32205129
// declared property getter: - (BOOL)displaysPageControl;	// 0x32204ee1
- (int)indexOfViewController:(id)viewController;	// 0x32205411
- (void)loadView;	// 0x32205f15
// declared property getter: - (int)pageCount;	// 0x32204ed1
// declared property getter: - (float)pageSpacing;	// 0x32204e35
- (void)reloadViewControllerAtIndex:(int)index;	// 0x32204f55
- (id)rotatingFooterView;	// 0x322052c5
- (id)rotatingHeaderView;	// 0x322052e9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32205e91
// declared property setter: - (void)setDisplaysPageControl:(BOOL)control;	// 0x32205455
// declared property setter: - (void)setPageCount:(int)count;	// 0x32205509
// declared property setter: - (void)setPageSpacing:(float)spacing;	// 0x32205dfd
// declared property setter: - (void)setVisibleIndex:(int)index;	// 0x322055c5
- (void)setVisibleIndex:(int)index animated:(BOOL)animated;	// 0x322055e5
- (void)setVisibleIndex:(int)index preservingLoadedViewControllers:(BOOL)controllers animated:(BOOL)animated;	// 0x32206e19
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x32205359
- (void)viewDidAppear:(BOOL)view;	// 0x322050a1
- (void)viewDidDisappear:(BOOL)view;	// 0x32205019
- (void)viewDidUnload;	// 0x32206979
- (void)viewWillAppear:(BOOL)view;	// 0x322050e5
- (void)viewWillDisappear:(BOOL)view;	// 0x3220505d
// declared property getter: - (int)visibleIndex;	// 0x32204ec1
// declared property getter: - (id)visibleViewController;	// 0x322059e5
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x322051b9
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x322051f9
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x32205151
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x32205239
@end

