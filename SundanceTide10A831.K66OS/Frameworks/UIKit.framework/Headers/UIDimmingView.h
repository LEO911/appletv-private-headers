/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, NSArray, UIBarButtonItem, UIColor;

__attribute__((visibility("hidden")))
@interface UIDimmingView : UIView {
	id _delegate;	// 84 = 0x54
	UIBarButtonItem *_highlightedBarButtonItem;	// 88 = 0x58
	UIImageView *_highlightedImageView;	// 92 = 0x5c
	UIImageView *_backgroundGlow;	// 96 = 0x60
	NSArray *_passthroughViews;	// 100 = 0x64
	BOOL _ignoresTouches;	// 104 = 0x68
	BOOL _displayed;	// 105 = 0x69
	BOOL _inPassthroughHitTest;	// 106 = 0x6a
	UIColor *_dimmingColor;	// 108 = 0x6c
}
@property(assign, nonatomic) id delegate;	// G=0x31e7af15; S=0x31e7af25; @synthesize=_delegate
@property(retain, nonatomic) UIColor *dimmingColor;	// G=0x31e7af95; S=0x31e7afa5; @synthesize=_dimmingColor
@property(assign, nonatomic) BOOL displayed;	// G=0x31e7af75; S=0x31e7af85; @synthesize=_displayed
@property(retain, nonatomic) UIBarButtonItem *highlightedBarButtonItem;	// G=0x31e7a8e9; S=0x31e7a53d; 
@property(assign, nonatomic) BOOL ignoresTouches;	// G=0x31e7af55; S=0x31e7af65; @synthesize=_ignoresTouches
@property(retain, nonatomic) NSArray *passthroughViews;	// G=0x31e7af35; S=0x31e7af45; @synthesize=_passthroughViews
+ (id)defaultDimmingColor;	// 0x31e7a35d
- (id)initWithFrame:(CGRect)frame;	// 0x31e7a3a5
- (void)_simulateTap;	// 0x31e7af01
- (void)dealloc;	// 0x31e7a48d
// declared property getter: - (id)delegate;	// 0x31e7af15
// declared property getter: - (id)dimmingColor;	// 0x31e7af95
- (void)dimmingRemovalAnimationDidStop;	// 0x31e7a52d
- (void)display:(BOOL)display withAnimationDuration:(float)animationDuration afterDelay:(float)delay;	// 0x31e7a921
// declared property getter: - (BOOL)displayed;	// 0x31e7af75
// declared property getter: - (id)highlightedBarButtonItem;	// 0x31e7a8e9
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x31e7aca5
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x31e7aaa5
// declared property getter: - (BOOL)ignoresTouches;	// 0x31e7af55
- (void)mouseUp:(GSEventRef)up;	// 0x31e7aa5d
// declared property getter: - (id)passthroughViews;	// 0x31e7af35
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31e7af25
// declared property setter: - (void)setDimmingColor:(id)color;	// 0x31e7afa5
// declared property setter: - (void)setDisplayed:(BOOL)displayed;	// 0x31e7af85
// declared property setter: - (void)setHighlightedBarButtonItem:(id)item;	// 0x31e7a53d
// declared property setter: - (void)setIgnoresTouches:(BOOL)touches;	// 0x31e7af65
// declared property setter: - (void)setPassthroughViews:(id)views;	// 0x31e7af45
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x31e7aea5
@end
