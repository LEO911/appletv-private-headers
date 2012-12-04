/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import "SBDeviceLockTitle.h"

@class TPLCDView;

@interface SBDeviceLockTitlePhone : SBDeviceLockTitle {
	BOOL _highlighted;	// 92 = 0x5c
	TPLCDView *_lcdView;	// 96 = 0x60
}
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x37086259; S=0x37086269; converted property
@property(retain) id subtitle;	// G=0x370863a1; S=0x370863c1; converted property
@property(retain) id title;	// G=0x37086361; S=0x37086381; converted property
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation;	// 0x37086109
- (void)blinkSubtitle;	// 0x37086419
- (void)dealloc;	// 0x3708620d
// converted property getter: - (BOOL)isHighlighted;	// 0x37086259
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x37086269
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x370863c1
// converted property setter: - (void)setTitle:(id)title;	// 0x37086381
// converted property getter: - (id)subtitle;	// 0x370863a1
// converted property getter: - (id)title;	// 0x37086361
@end
