/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class UIImageView, UIColor, NSArray, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface UIDimmingView : UIView {
	id _delegate;	// 96 = 0x60
	UIBarButtonItem *_highlightedBarButtonItem;	// 100 = 0x64
	UIImageView *_highlightedImageView;	// 104 = 0x68
	UIImageView *_backgroundGlow;	// 108 = 0x6c
	NSArray *_passthroughViews;	// 112 = 0x70
	BOOL _ignoresTouches;	// 116 = 0x74
	BOOL _displayed;	// 117 = 0x75
	BOOL _inPassthroughHitTest;	// 118 = 0x76
	UIColor *_dimmingColor;	// 120 = 0x78
}
@property(assign, nonatomic) id delegate;	// G=0x2f6efb9d; S=0x2f6efbad; @synthesize=_delegate
@property(retain, nonatomic) UIColor *dimmingColor;	// G=0x2f6efc1d; S=0x2f6efc2d; @synthesize=_dimmingColor
@property(assign, nonatomic) BOOL displayed;	// G=0x2f6efbfd; S=0x2f6efc0d; @synthesize=_displayed
@property(retain, nonatomic) UIBarButtonItem *highlightedBarButtonItem;	// G=0x2f6ef571; S=0x2f6ef1cd; 
@property(assign, nonatomic) BOOL ignoresTouches;	// G=0x2f6efbdd; S=0x2f6efbed; @synthesize=_ignoresTouches
@property(retain, nonatomic) NSArray *passthroughViews;	// G=0x2f6efbbd; S=0x2f6efbcd; @synthesize=_passthroughViews
+ (id)defaultDimmingColor;	// 0x2f6eefe9
- (id)initWithFrame:(CGRect)frame;	// 0x2f6ef031
- (void)_simulateTap;	// 0x2f6efb89
- (void)dealloc;	// 0x2f6ef11d
// declared property getter: - (id)delegate;	// 0x2f6efb9d
// declared property getter: - (id)dimmingColor;	// 0x2f6efc1d
- (void)dimmingRemovalAnimationDidStop;	// 0x2f6ef1bd
- (void)display:(BOOL)display withAnimationDuration:(float)animationDuration afterDelay:(float)delay;	// 0x2f6ef5a9
// declared property getter: - (BOOL)displayed;	// 0x2f6efbfd
// declared property getter: - (id)highlightedBarButtonItem;	// 0x2f6ef571
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x2f6ef92d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x2f6ef72d
// declared property getter: - (BOOL)ignoresTouches;	// 0x2f6efbdd
- (void)mouseUp:(GSEventRef)up;	// 0x2f6ef6e5
// declared property getter: - (id)passthroughViews;	// 0x2f6efbbd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2f6efbad
// declared property setter: - (void)setDimmingColor:(id)color;	// 0x2f6efc2d
// declared property setter: - (void)setDisplayed:(BOOL)displayed;	// 0x2f6efc0d
// declared property setter: - (void)setHighlightedBarButtonItem:(id)item;	// 0x2f6ef1cd
// declared property setter: - (void)setIgnoresTouches:(BOOL)touches;	// 0x2f6efbed
// declared property setter: - (void)setPassthroughViews:(id)views;	// 0x2f6efbcd
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x2f6efb2d
@end

