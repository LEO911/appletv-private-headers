/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UINavigationItem, UIFont;

__attribute__((visibility("hidden")))
@interface UINavigationItemView : UIView {
	UIFont *_font;	// 84 = 0x54
	UINavigationItem *_item;	// 88 = 0x58
	float _titleWidth;	// 92 = 0x5c
	BOOL _titleAutosizesToFit;	// 96 = 0x60
	UIView *_topCrossView;	// 100 = 0x64
	UIView *_bottomCrossView;	// 104 = 0x68
	BOOL _isCrossFading;	// 108 = 0x6c
	int _lineBreakMode;	// 112 = 0x70
}
@property(retain) UIFont *font;	// G=0x34734ac1; S=0x34734a7d; converted property
@property(assign) BOOL titleAutoresizesToFit;	// G=0x34734a6d; S=0x345a2455; converted property
- (id)initWithNavigationItem:(id)navigationItem;	// 0x345a237d
- (void)_cleanUpCrossView;	// 0x34734e89
- (void)_crossFadeHiddingButton:(BOOL)button;	// 0x34734d89
- (id)_currentTextColorForBarStyle:(int)barStyle;	// 0x345bddfd
- (id)_currentTextShadowColorForBarStyle:(int)barStyle;	// 0x345bdcfd
- (CGSize)_currentTextShadowOffsetForBarStyle:(int)barStyle;	// 0x345bdbd5
- (id)_defaultFont;	// 0x345bdb41
- (void)_prepareCrossViewsForNewSize:(CGSize)newSize;	// 0x34734b35
- (void)_resetTitleWidth;	// 0x345a5c1d
- (id)_scriptingInfo;	// 0x34734ad1
- (void)_setLineBreakMode:(int)mode;	// 0x345a6209
- (float)_titleWidth;	// 0x345bd585
- (BOOL)_useSilverLookForBarStyle:(int)barStyle;	// 0x345bdc81
- (void)drawRect:(CGRect)rect;	// 0x345bda5d
- (void)drawText:(id)text inRect:(CGRect)rect barStyle:(int)style;	// 0x345bd631
// converted property getter: - (id)font;	// 0x34734ac1
- (id)navigationItem;	// 0x34734a59
// converted property setter: - (void)setFont:(id)font;	// 0x34734a7d
- (void)setFrame:(CGRect)frame;	// 0x3456bebd
// converted property setter: - (void)setTitleAutoresizesToFit:(BOOL)fit;	// 0x345a2455
- (id)title;	// 0x346200ad
// converted property getter: - (BOOL)titleAutoresizesToFit;	// 0x34734a6d
@end

