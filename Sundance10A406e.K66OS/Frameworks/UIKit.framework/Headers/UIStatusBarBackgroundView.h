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
@property(readonly, assign) int style;	// G=0x30909d85; converted property
@property(readonly, retain) UIColor *tintColor;	// G=0x30bd02d5; converted property
- (id)initWithFrame:(CGRect)frame style:(int)style tintColor:(id)color;	// 0x30909819
- (id)_baseImageForStyle:(int)style;	// 0x30909a91
- (id)_glowImageForStyle:(int)style;	// 0x30bd0751
- (id)_imageNameForStyle:(int)style;	// 0x30909af9
- (void)_setGlowAnimationEnabled:(BOOL)enabled waitForNextCycle:(BOOL)nextCycle;	// 0x30909cd9
- (void)_startGlowAnimationWaitForNextCycle:(BOOL)nextCycle;	// 0x30bd0351
- (void)_stopGlowAnimation;	// 0x30909d1d
- (BOOL)_styleCanGlow:(int)glow;	// 0x30bd030d
- (BOOL)_topCornersAreRoundedForStyle:(int)style;	// 0x30909c39
- (void)dealloc;	// 0x309552b5
- (void)setGlowAnimationEnabled:(BOOL)enabled;	// 0x3090b2d5
- (void)setSuppressesGlow:(BOOL)glow;	// 0x30909ca5
// converted property getter: - (int)style;	// 0x30909d85
// converted property getter: - (id)tintColor;	// 0x30bd02d5
@end

