/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class _UIQueuingScrollView, UIPageControl, UIPageViewController;

__attribute__((visibility("hidden")))
@interface _UIPageViewControllerContentView : UIView {
	UIPageViewController *_pageViewController;	// 84 = 0x54
	_UIQueuingScrollView *_scrollView;	// 88 = 0x58
	UIPageControl *_pageControl;	// 92 = 0x5c
}
@property(readonly, assign, nonatomic) UIPageControl *pageControl;	// G=0x31f7bc91; @synthesize=_pageControl
@property(readonly, assign, nonatomic) _UIQueuingScrollView *scrollView;	// G=0x31f7bc81; @synthesize=_scrollView
- (id)initWithFrame:(CGRect)frame andPageViewController:(id)controller;	// 0x31f7b459
- (float)_pageSpacing;	// 0x31f7b855
- (CGRect)_scrollViewFrame;	// 0x31f7b875
- (void)_setupPageControl:(id)control;	// 0x31f7b8f9
- (void)dealloc;	// 0x31f7b61d
- (void)invalidatePageViewController;	// 0x31f7b691
- (void)layoutSubviews;	// 0x31f7b979
// declared property getter: - (id)pageControl;	// 0x31f7bc91
// declared property getter: - (id)scrollView;	// 0x31f7bc81
- (void)setBounds:(CGRect)bounds;	// 0x31f7b6a5
- (void)setFrame:(CGRect)frame;	// 0x31f7b77d
@end
