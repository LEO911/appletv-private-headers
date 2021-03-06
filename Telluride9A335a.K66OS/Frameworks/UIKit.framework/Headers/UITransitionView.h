/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"

@class NSMutableArray, UIWindow;

@interface UITransitionView : UIView <NSCoding> {
	UIView *_fromView;	// 48 = 0x30
	UIView *_toView;	// 52 = 0x34
	NSMutableArray *_frozenSubviews;	// 56 = 0x38
	UIResponder *_firstResponderToRemember;	// 60 = 0x3c
	id _delegate;	// 64 = 0x40
	UIWindow *_originalWindow;	// 68 = 0x44
	struct {
		unsigned animationInProgress : 1;
		unsigned ignoresInteractionEvents : 1;
		unsigned shouldNotifyDidCompleteImmediately : 1;
		unsigned useViewControllerAppearanceCallbacks : 1;
		unsigned shouldRestoreFromViewAlpha : 1;
		unsigned shouldRasterize : 1;
		unsigned enableRotationAfterTransition : 1;
		unsigned reserved : 25;
	} _transitionViewFlags;	// 72 = 0x48
}
@property(assign) id delegate;	// G=0x33a76fc9; S=0x33a105f5; converted property
@property(readonly, retain) UIView *fromView;	// G=0x33b54019; converted property
@property(assign) BOOL ignoresInteractionEvents;	// G=0x33b540d1; S=0x33ae3995; converted property
@property(assign) BOOL rasterizesOnTransition;	// G=0x33a73829; S=0x33b540b9; converted property
@property(assign, nonatomic) BOOL shouldNotifyDidCompleteImmediately;	// G=0x33a16895; S=0x33a10605; 
@property(readonly, retain) UIView *toView;	// G=0x33b54029; converted property
+ (double)defaultDurationForTransition:(int)transition;	// 0x339d922d
- (id)initWithCoder:(id)coder;	// 0x33b53ddd
- (id)initWithFrame:(CGRect)frame;	// 0x33a10565
- (void)_didCompleteTransition:(BOOL)transition;	// 0x33a16439
- (void)_didStartTransition;	// 0x33a163f1
- (BOOL)_isTransitioningFromFromView:(id)view;	// 0x33b5404d
- (void)_startTransition:(int)transition withDuration:(float)duration;	// 0x33a7383d
- (void)_transitionDidStop:(id)_transition finished:(id)finished;	// 0x33a76919
- (void)dealloc;	// 0x33a770e1
// converted property getter: - (id)delegate;	// 0x33a76fc9
- (double)durationForTransition:(int)transition;	// 0x33a16329
- (void)encodeWithCoder:(id)coder;	// 0x33b53f05
// converted property getter: - (id)fromView;	// 0x33b54019
// converted property getter: - (BOOL)ignoresInteractionEvents;	// 0x33b540d1
- (BOOL)isTransitioning;	// 0x33b54039
- (void)notifyDidCompleteTransition:(id)notify;	// 0x33a168a9
// converted property getter: - (BOOL)rasterizesOnTransition;	// 0x33a73829
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x33a105f5
// converted property setter: - (void)setIgnoresInteractionEvents:(BOOL)events;	// 0x33ae3995
// converted property setter: - (void)setRasterizesOnTransition:(BOOL)transition;	// 0x33b540b9
// declared property setter: - (void)setShouldNotifyDidCompleteImmediately:(BOOL)notifyDidCompleteImmediately;	// 0x33a10605
// declared property getter: - (BOOL)shouldNotifyDidCompleteImmediately;	// 0x33a16895
// converted property getter: - (id)toView;	// 0x33b54029
- (BOOL)transition:(int)transition fromView:(id)view toView:(id)view3;	// 0x33a159a5
- (BOOL)transition:(int)transition toView:(id)view;	// 0x33a15935
@end

