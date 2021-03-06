/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSArray, UIImageView, UIBarButtonItem, UIColor;

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
@property(assign, nonatomic) id delegate;	// G=0x304ba0e5; S=0x304ba0f5; @synthesize=_delegate
@property(retain, nonatomic) UIColor *dimmingColor;	// G=0x304ba165; S=0x304ba175; @synthesize=_dimmingColor
@property(assign, nonatomic) BOOL displayed;	// G=0x304ba145; S=0x304ba155; @synthesize=_displayed
@property(retain, nonatomic) UIBarButtonItem *highlightedBarButtonItem;	// G=0x304b9ab9; S=0x304b970d; 
@property(assign, nonatomic) BOOL ignoresTouches;	// G=0x304ba125; S=0x304ba135; @synthesize=_ignoresTouches
@property(retain, nonatomic) NSArray *passthroughViews;	// G=0x304ba105; S=0x304ba115; @synthesize=_passthroughViews
+ (id)defaultDimmingColor;	// 0x304b952d
- (id)initWithFrame:(CGRect)frame;	// 0x304b9575
- (void)_simulateTap;	// 0x304ba0d1
- (void)dealloc;	// 0x304b965d
// declared property getter: - (id)delegate;	// 0x304ba0e5
// declared property getter: - (id)dimmingColor;	// 0x304ba165
- (void)dimmingRemovalAnimationDidStop;	// 0x304b96fd
- (void)display:(BOOL)display withAnimationDuration:(float)animationDuration afterDelay:(float)delay;	// 0x304b9af1
// declared property getter: - (BOOL)displayed;	// 0x304ba145
// declared property getter: - (id)highlightedBarButtonItem;	// 0x304b9ab9
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x304b9e75
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x304b9c75
// declared property getter: - (BOOL)ignoresTouches;	// 0x304ba125
- (void)mouseUp:(GSEventRef)up;	// 0x304b9c2d
// declared property getter: - (id)passthroughViews;	// 0x304ba105
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x304ba0f5
// declared property setter: - (void)setDimmingColor:(id)color;	// 0x304ba175
// declared property setter: - (void)setDisplayed:(BOOL)displayed;	// 0x304ba155
// declared property setter: - (void)setHighlightedBarButtonItem:(id)item;	// 0x304b970d
// declared property setter: - (void)setIgnoresTouches:(BOOL)touches;	// 0x304ba135
// declared property setter: - (void)setPassthroughViews:(id)views;	// 0x304ba115
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x304ba075
@end

