/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITableViewDelegate.h"
#import "UIView.h"
#import "UITableViewDataSource.h"
#import "UIKit-Structs.h"
#import "UIDimmingViewDelegate.h"

@class UIInputSwitcherShadowView, NSTimer, UIDimmingView, UITableView;

__attribute__((visibility("hidden")))
@interface UIKeyboardMenuView : UIView <UITableViewDataSource, UITableViewDelegate, UIDimmingViewDelegate> {
@private
	UITableView *m_table;	// 88 = 0x58
	UIInputSwitcherShadowView *m_shadowView;	// 92 = 0x5c
	UIView *m_selExtraView;	// 96 = 0x60
	CGRect m_referenceRect;	// 100 = 0x64
	float m_pointerOffset;	// 116 = 0x74
	BOOL m_scrollable;	// 120 = 0x78
	BOOL m_scrolling;	// 121 = 0x79
	BOOL m_shouldFade;	// 122 = 0x7a
	CGPoint m_point;	// 124 = 0x7c
	double m_scrollStartTime;	// 132 = 0x84
	int m_scrollDirection;	// 140 = 0x8c
	NSTimer *m_scrollTimer;	// 144 = 0x90
	int m_visibleRows;	// 148 = 0x94
	int m_firstVisibleRow;	// 152 = 0x98
	int m_mode;	// 156 = 0x9c
	double dismissDelay;	// 160 = 0xa0
	UIDimmingView *m_dimmingView;	// 168 = 0xa8
	double _dismissDelay;	// 172 = 0xac
}
@property(readonly, retain) UIDimmingView *dimmingView;	// G=0x3044150d; converted property
@property(assign) double dismissDelay;	// G=0x30443065; S=0x30443099; @synthesize=_dismissDelay
@property(assign, nonatomic) int mode;	// G=0x30443045; S=0x30443055; @synthesize=m_mode
@property(readonly, assign) BOOL usesTable;	// G=0x30441229; 
- (id)initWithFrame:(CGRect)frame;	// 0x30440f11
- (void)_delayedFade;	// 0x30441cbd
- (void)applicationWillSuspend:(id)application;	// 0x30441231
- (void)autoscrollTimerFired:(id)fired;	// 0x304421d9
- (BOOL)centerPopUpOverKey;	// 0x3044122d
- (void)dealloc;	// 0x30441171
- (int)defaultSelectedIndex;	// 0x3044300d
- (void)didSelectItemAtIndex:(int)index;	// 0x30443041
// converted property getter: - (id)dimmingView;	// 0x3044150d
- (void)dimmingViewWasTapped:(id)tapped;	// 0x30441641
// declared property getter: - (double)dismissDelay;	// 0x30443065
- (void)endScrolling:(id)scrolling;	// 0x30442029
- (void)fade;	// 0x30441dc1
- (void)fadeAnimationDidStop:(id)fadeAnimation finished:(id)finished context:(void *)context;	// 0x30441f25
- (void)fadeWithDelay:(double)delay;	// 0x30441e19
- (id)font;	// 0x30441241
- (void)hide;	// 0x30441eb1
- (void)highlightRow:(int)row;	// 0x304428c5
- (int)indexForIndexPath:(id)indexPath;	// 0x30442a25
- (BOOL)isVisible;	// 0x3044144d
// declared property getter: - (int)mode;	// 0x30443045
- (int)numberOfItems;	// 0x30443009
- (void)performShowAnimation;	// 0x30441469
- (CGSize)preferredSize;	// 0x30443011
- (void)removeFromSuperview;	// 0x30441e59
- (void)selectItemAtPoint:(CGPoint)point;	// 0x304429b1
// declared property setter: - (void)setDismissDelay:(double)delay;	// 0x30443099
- (void)setFrame:(CGRect)frame;	// 0x30441265
// declared property setter: - (void)setMode:(int)mode;	// 0x30443055
- (void)setNeedsDisplayForCell:(id)cell;	// 0x30441f59
- (void)setNeedsDisplayForTopBottomCells;	// 0x30441fa1
- (void)show;	// 0x30441661
- (void)showAsHUD;	// 0x30441bb9
- (void)showAsPopupFromRect:(CGRect)rect inView:(id)view;	// 0x30441c11
- (void)stopAnyAutoscrolling;	// 0x30442131
- (id)subtitleForItemAtIndex:(int)index;	// 0x30443035
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x30442a49
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x30442e21
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x30442e19
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x30442a39
- (id)titleForItemAtIndex:(int)index;	// 0x30443029
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30442e55
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30442ff9
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30442f21
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30442eb9
- (void)updateSelectionWithPoint:(CGPoint)point;	// 0x30442501
// declared property getter: - (BOOL)usesTable;	// 0x30441229
@end
