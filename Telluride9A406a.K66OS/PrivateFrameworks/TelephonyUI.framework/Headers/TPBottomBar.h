/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIView.h> // Unknown library


@interface TPBottomBar : UIView {
	int _orientation;	// 48 = 0x30
	int _style;	// 52 = 0x34
}
@property(assign) int orientation;	// G=0x36018a6d; S=0x36018c9d; converted property
+ (id)_backgroundImage;	// 0x36018be5
+ (float)defaultHeight;	// 0x36018b61
+ (float)defaultHeightForOrientation:(int)orientation;	// 0x36018b75
+ (float)defaultHeightForStyle:(int)style;	// 0x36018bb5
+ (float)defaultHeightForStyle:(int)style orientation:(int)orientation;	// 0x36018a21
+ (int)fullscreenStyle;	// 0x36018b25
+ (int)overlayStyle;	// 0x36018ae9
+ (void)preloadImages;	// 0x36018bd5
- (id)init;	// 0x36018dbd
- (id)initWithDefaultSize;	// 0x36018a7d
- (id)initWithDefaultSizeForOrientation:(int)orientation;	// 0x36018eb5
- (id)initWithFrame:(CGRect)frame;	// 0x36018a91
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x36018e19
- (void)drawRect:(CGRect)rect;	// 0x36018c5d
// converted property getter: - (int)orientation;	// 0x36018a6d
// converted property setter: - (void)setOrientation:(int)orientation;	// 0x36018c9d
- (void)setOrientation:(int)orientation updateFrame:(BOOL)frame;	// 0x36018cb1
@end

