/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UIColor, UIStatusBarCorners;

__attribute__((visibility("hidden")))
@interface UIStatusBarBackgroundView : UIView {
	int _style;	// 84 = 0x54
	UIColor *_tintColor;	// 88 = 0x58
	UIStatusBarCorners *_topCorners;	// 92 = 0x5c
	UIImageView *_glowView;	// 96 = 0x60
	BOOL _glowEnabled;	// 100 = 0x64
	BOOL _suppressGlow;	// 101 = 0x65
}
@property(readonly, assign) int style;	// G=0x33a22dd5; converted property
@property(readonly, retain) UIColor *tintColor;	// G=0x33cf0e8d; converted property
- (id)initWithFrame:(CGRect)frame style:(int)style tintColor:(id)color;	// 0x33cf0c19
- (id)_baseImageForStyle:(int)style;	// 0x33a22bf9
- (id)_glowImageForStyle:(int)style;	// 0x33cf1309
- (id)_imageNameForStyle:(int)style;	// 0x33a22c61
- (void)_setGlowAnimationEnabled:(BOOL)enabled waitForNextCycle:(BOOL)nextCycle;	// 0x33a11b79
- (void)_startGlowAnimationWaitForNextCycle:(BOOL)nextCycle;	// 0x33cf0f09
- (void)_stopGlowAnimation;	// 0x33a11bbd
- (BOOL)_styleCanGlow:(int)glow;	// 0x33cf0ec5
- (BOOL)_topCornersAreRoundedForStyle:(int)style;	// 0x33cf1371
- (void)dealloc;	// 0x33b463cd
- (void)setGlowAnimationEnabled:(BOOL)enabled;	// 0x33a2478d
- (void)setSuppressesGlow:(BOOL)glow;	// 0x33a11b45
// converted property getter: - (int)style;	// 0x33a22dd5
// converted property getter: - (id)tintColor;	// 0x33cf0e8d
@end

