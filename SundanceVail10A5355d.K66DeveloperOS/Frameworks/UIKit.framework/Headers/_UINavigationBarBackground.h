/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIImageView.h"
#import "UIKit-Structs.h"

@class UIColor, _UINavigationBarAppearanceStorage;

__attribute__((visibility("hidden")))
@interface _UINavigationBarBackground : UIImageView {
	UIColor *_tintColor;	// 96 = 0x60
	_UINavigationBarAppearanceStorage *_appearanceStorage;	// 100 = 0x64
	UIImageView *_shadowView;	// 104 = 0x68
	struct {
		unsigned isTranslucent : 1;
		unsigned barStyle : 3;
		unsigned backgroundImageNeedsUpdate : 1;
		unsigned isContainedInPopover : 1;
	} _navbarFlags;	// 108 = 0x6c
}
@property(retain, nonatomic, setter=_setShadowView:) UIImageView *_shadowView;	// G=0x33bb5685; S=0x33bb5695; @synthesize
@property(retain, nonatomic) _UINavigationBarAppearanceStorage *appearanceStorage;	// G=0x33bb5665; S=0x33bb5675; @synthesize=_appearanceStorage
@property(assign, nonatomic) int barStyle;	// G=0x33bb4979; S=0x33bb4939; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x33bb4929; S=0x33bb48d1; 
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;	// G=0x33bb49d9; S=0x33bb498d; 
- (id)initWithFrame:(CGRect)frame barStyle:(int)style tintColor:(id)color appearance:(id)appearance isTranslucent:(BOOL)translucent;	// 0x33bb4a0d
- (id)_currentCustomBackgroundRespectOversize:(BOOL *)oversize;	// 0x33bb4af9
- (id)_customShadowImageForSearchBar;	// 0x33bb531d
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x33bb53a9
- (void)_setFrame:(CGRect)frame forceUpdateBackgroundImage:(BOOL)image;	// 0x33bb53dd
- (void)_setIsContainedInPopover:(BOOL)popover;	// 0x33bb49ed
// declared property setter: - (void)_setShadowView:(id)view;	// 0x33bb5695
// declared property getter: - (id)_shadowView;	// 0x33bb5685
// declared property getter: - (id)appearanceStorage;	// 0x33bb5665
// declared property getter: - (int)barStyle;	// 0x33bb4979
- (void)dealloc;	// 0x33bb55ed
- (void)didMoveToSuperview;	// 0x33bb52c9
// declared property getter: - (BOOL)isTranslucent;	// 0x33bb49d9
// declared property setter: - (void)setAppearanceStorage:(id)storage;	// 0x33bb5675
// declared property setter: - (void)setBarStyle:(int)style;	// 0x33bb4939
- (void)setBounds:(CGRect)bounds;	// 0x33bb5501
- (void)setFrame:(CGRect)frame;	// 0x33bb54d5
// declared property setter: - (void)setTintColor:(id)color;	// 0x33bb48d1
// declared property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x33bb498d
// declared property getter: - (id)tintColor;	// 0x33bb4929
- (void)updateBackgroundImage;	// 0x33bb4d05
@end
