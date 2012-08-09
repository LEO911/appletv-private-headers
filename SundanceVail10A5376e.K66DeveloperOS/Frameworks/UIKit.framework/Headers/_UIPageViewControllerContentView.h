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
@property(readonly, assign, nonatomic) UIPageControl *pageControl;	// G=0x305ba0f1; @synthesize=_pageControl
@property(readonly, assign, nonatomic) _UIQueuingScrollView *scrollView;	// G=0x305ba0e1; @synthesize=_scrollView
- (id)initWithFrame:(CGRect)frame andPageViewController:(id)controller;	// 0x305b98b9
- (float)_pageSpacing;	// 0x305b9cb5
- (CGRect)_scrollViewFrame;	// 0x305b9cd5
- (void)_setupPageControl:(id)control;	// 0x305b9d59
- (void)dealloc;	// 0x305b9a7d
- (void)invalidatePageViewController;	// 0x305b9af1
- (void)layoutSubviews;	// 0x305b9dd9
// declared property getter: - (id)pageControl;	// 0x305ba0f1
// declared property getter: - (id)scrollView;	// 0x305ba0e1
- (void)setBounds:(CGRect)bounds;	// 0x305b9b05
- (void)setFrame:(CGRect)frame;	// 0x305b9bdd
@end
