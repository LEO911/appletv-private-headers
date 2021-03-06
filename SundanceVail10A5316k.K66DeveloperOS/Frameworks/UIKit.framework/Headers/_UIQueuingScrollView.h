/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIScrollView.h"
#import "UIKit-Structs.h"

@class NSArray, NSMutableArray;
@protocol _UIQueuingScrollViewDelegate, _UIQueuingScrollViewDataSource;

__attribute__((visibility("hidden")))
@interface _UIQueuingScrollView : UIScrollView {
@private
	id<_UIQueuingScrollViewDelegate> _qDelegate;	// 444 = 0x1bc
	id<_UIQueuingScrollViewDataSource> _qDataSource;	// 448 = 0x1c0
	int _navigationOrientation;	// 452 = 0x1c4
	NSArray *_views;	// 456 = 0x1c8
	NSArray *_wrapperViews;	// 460 = 0x1cc
	UIView *_pendingVisibleView;	// 464 = 0x1d0
	float _pageSpacing;	// 468 = 0x1d4
	NSMutableArray *_viewStateQueue;	// 472 = 0x1d8
	NSMutableArray *_completionStateQueue;	// 476 = 0x1dc
	BOOL _manualScrollInProgress;	// 480 = 0x1e0
	struct {
		unsigned continuous : 1;
		unsigned animating : 1;
		unsigned preparingToAnimate : 1;
		unsigned showValue : 1;
		unsigned trackEnabled : 1;
		unsigned creatingSnapshot : 1;
		unsigned thumbDisabled : 1;
		unsigned minTrackHidden : 1;
	} _delegateFlags;	// 481 = 0x1e1
	CGRect _disabledScrollingRegion;	// 484 = 0x1e4
}
@property(assign, nonatomic) CGRect disabledScrollingRegion;	// G=0x3046e0ed; S=0x3046e111; @synthesize=_disabledScrollingRegion
@property(readonly, assign, getter=isManualScrollInProgress) BOOL manualScrollInProgress;	// G=0x3046b479; converted property
@property(assign, nonatomic) float pageSpacing;	// G=0x3046e0dd; S=0x3046a491; @synthesize=_pageSpacing
@property(assign, nonatomic) id<_UIQueuingScrollViewDataSource> qDataSource;	// G=0x3046e0cd; S=0x3046a341; @synthesize=_qDataSource
@property(assign, nonatomic) id<_UIQueuingScrollViewDelegate> qDelegate;	// G=0x3046e0bd; S=0x3046a251; @synthesize=_qDelegate
@property(readonly, assign, nonatomic) UIView *visibleView;	// G=0x3046a241; 
- (id)initWithFrame:(CGRect)frame navigationOrientation:(int)orientation;	// 0x30469f71
- (void)_adjustContentInsets;	// 0x3046cc61
- (void)_boundsDidChangeToSize:(CGSize)_bounds;	// 0x3046cdb1
- (void)_cleanUpCompletionState:(id)state didFinish:(BOOL)finish didComplete:(BOOL)complete;	// 0x3046ba11
- (void)_commitGestureDrivenScrollRevealingView:(id)view concealingView:(id)view2 inDirection:(int)direction;	// 0x3046cf95
- (id)_dequeueViewForIndex:(int)index;	// 0x3046b069
- (void)_didEndDraggingManualScroll;	// 0x3046dad9
- (void)_didEndManualScroll;	// 0x3046e069
- (void)_didEndProgrammaticScroll;	// 0x3046e0a9
- (void)_didEndScroll:(BOOL)scroll;	// 0x3046dd35
- (void)_didScrollWithAnimation:(BOOL)animation force:(BOOL)force;	// 0x3046d23d
- (void)_enqueueAnimatedScrollInDirection:(int)direction withView:(id)view completion:(id)completion;	// 0x3046ba5d
- (void)_enqueueCompletionState:(id)state;	// 0x3046b869
- (void)_flushView:(id)view animated:(BOOL)animated;	// 0x3046ac85
- (BOOL)_gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x3046a8f1
- (void)_invalidateOffscreenViews;	// 0x3046b3b1
- (int)_navigationDirectionForActiveScroll:(BOOL)activeScroll;	// 0x3046b4c9
- (int)_navigationDirectionFromCurrentOffset;	// 0x3046b741
- (void)_notifyDelegateDidBailoutOfScrollAndRevealedView:(id)_notifyDelegate;	// 0x3046c9d9
- (void)_notifyDelegateDidCommitManualScroll:(BOOL)_notifyDelegate toRevealView:(id)revealView concealView:(id)view direction:(int)direction animated:(BOOL)animated canComplete:(BOOL)complete;	// 0x3046c921
- (void)_notifyDelegateDidEndManualScroll:(BOOL)_notifyDelegate toRevealView:(id)revealView direction:(int)direction animated:(BOOL)animated canComplete:(BOOL)complete;	// 0x3046c981
- (void)_notifyDelegateWillManuallyScroll:(BOOL)_notifyDelegate toRevealView:(id)revealView concealingView:(id)view animated:(BOOL)animated canComplete:(BOOL)complete;	// 0x3046c8c9
- (void)_replaceViews:(id)views updatingContents:(BOOL)contents adjustContentInsets:(BOOL)insets animated:(BOOL)animated;	// 0x3046ace1
- (id)_requestViewForIndex:(int)index;	// 0x3046af99
- (void)_scrollViewAnimationEnded:(id)ended finished:(BOOL)finished;	// 0x3046a891
- (void)_scrollViewDidEndDecelerating;	// 0x3046a829
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;	// 0x3046a7a9
- (void)_setFrameAndApplyPageSpacing:(CGRect)spacing;	// 0x3046a3e9
- (void)_setWrappedViewAtIndex:(int)index withView:(id)view;	// 0x3046a9cd
- (id)_viewAfterView:(id)view;	// 0x3046ab99
- (id)_viewAtIndex:(int)index loadingIfNecessary:(BOOL)necessary updatingContents:(BOOL)contents animated:(BOOL)animated;	// 0x3046b1a1
- (id)_viewBefore:(BOOL)before view:(id)view;	// 0x3046ab31
- (id)_viewBeforeView:(id)view;	// 0x3046ab85
- (id)_visibleView;	// 0x3046abad
- (void)dealloc;	// 0x3046a1b5
// declared property getter: - (CGRect)disabledScrollingRegion;	// 0x3046e0ed
// converted property getter: - (BOOL)isManualScrollInProgress;	// 0x3046b479
- (BOOL)isPreviousScrollCompatibleWithScrollInDirection:(int)direction;	// 0x3046b42d
- (void)layoutSubviews;	// 0x3046a719
// declared property getter: - (float)pageSpacing;	// 0x3046e0dd
// declared property getter: - (id)qDataSource;	// 0x3046e0cd
// declared property getter: - (id)qDelegate;	// 0x3046e0bd
- (void)setBounds:(CGRect)bounds;	// 0x3046a531
// declared property setter: - (void)setDisabledScrollingRegion:(CGRect)region;	// 0x3046e111
- (void)setFrame:(CGRect)frame;	// 0x3046a625
// declared property setter: - (void)setPageSpacing:(float)spacing;	// 0x3046a491
// declared property setter: - (void)setQDataSource:(id)source;	// 0x3046a341
// declared property setter: - (void)setQDelegate:(id)delegate;	// 0x3046a251
- (void)setView:(id)view direction:(int)direction animated:(BOOL)animated completion:(id)completion;	// 0x3046ca11
// declared property getter: - (id)visibleView;	// 0x3046a241
@end

