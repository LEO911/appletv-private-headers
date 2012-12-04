/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class UILabel, _UIPressedIndicatorView, UIColor, UIToolbarButtonBadge;

__attribute__((visibility("hidden")))
@interface UIToolbarButton : UIControl {
	CGRect _hitRect;	// 108 = 0x6c
	UIView *_info;	// 124 = 0x7c
	UILabel *_label;	// 128 = 0x80
	UIToolbarButtonBadge *_badge;	// 132 = 0x84
	_UIPressedIndicatorView *_pressedIndicator;	// 136 = 0x88
	int _barStyle;	// 140 = 0x8c
	int _style;	// 144 = 0x90
	UIEdgeInsets _glowAdjust;	// 148 = 0x94
	BOOL _onState;	// 164 = 0xa4
	BOOL _barHeight;	// 165 = 0xa5
	BOOL _badgeAnimated;	// 166 = 0xa6
	BOOL _bezel;	// 167 = 0xa7
	float _minimumWidth;	// 168 = 0xa8
	float _maximumWidth;	// 172 = 0xac
	float _labelHeight;	// 176 = 0xb0
	UIEdgeInsets _infoInsets;	// 180 = 0xb4
	UIColor *_toolbarTintColor;	// 196 = 0xc4
	BOOL _isAnimatedTrashButton;	// 200 = 0xc8
	id _appearanceStorage;	// 204 = 0xcc
	BOOL _isInTopBar;	// 208 = 0xd0
}
@property(retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;	// G=0x346117bd; S=0x3475f2dd; 
@property(assign, nonatomic, getter=isAnimatedTrashButton) BOOL animatedTrashButton;	// G=0x345f9e19; S=0x345ee9f1; @synthesize=_isAnimatedTrashButton
+ (id)_defaultLabelColor;	// 0x3475deed
+ (id)_defaultLabelFont;	// 0x3475dec9
- (id)initWithImage:(id)image pressedImage:(id)image2 label:(id)label labelHeight:(float)height withBarStyle:(int)barStyle withStyle:(int)style withInsets:(UIEdgeInsets)insets possibleTitles:(id)titles possibleSystemItems:(id)items withToolbarTintColor:(id)toolbarTintColor bezel:(BOOL)bezel imageInsets:(UIEdgeInsets)insets12 glowInsets:(UIEdgeInsets)insets13 landscape:(BOOL)landscape;	// 0x345ecf41
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x3475f319
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x3475f67d
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x3475f685
- (void)_UIAppearance_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x3475f17d
- (void)_UIAppearance_setBackgroundImage:(id)image forState:(unsigned)state style:(int)style barMetrics:(int)metrics;	// 0x3475efe1
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x3475f321
- (void)_UIAppearance_setTintColor:(id)color;	// 0x3475f239
- (void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x3475f49d
- (void)_UIAppearance_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x3475f2f1
- (void)_adjustPushButtonForMiniBar:(BOOL)miniBar isChangingBarHeight:(BOOL)height;	// 0x345ee361
- (void)_adjustToolbarButtonInfo;	// 0x3475eca1
- (void)_adjustToolbarButtonInfoTintColorHasChanged:(BOOL)changed;	// 0x3475ecb5
- (void)_animateImage:(float)image withButtonBar:(id)buttonBar;	// 0x3475e7a5
- (void)_animateImage:(float)image withButtonBar:(id)buttonBar target:(id)target didFinishSelector:(SEL)selector;	// 0x3475e705
- (void)_applyBarButtonAppearanceStorage:(id)storage withTaggedSelectors:(id)taggedSelectors;	// 0x345eea7d
- (id)_backgroundImageForState:(unsigned)state barMetrics:(int)metrics;	// 0x3475f1c1
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x3475f44d
- (void)_badgeAnimationDidStop:(id)_badgeAnimation finished:(id)finished;	// 0x3475e2a1
- (CGRect)_buttonBarHitRect;	// 0x345f0365
- (BOOL)_canGetPadding;	// 0x345f0265
- (BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)location;	// 0x3475e639
- (id)_defaultTitleColorForState:(unsigned)state;	// 0x346117f9
- (id)_defaultTitleShadowColorForState:(unsigned)state;	// 0x3475e84d
- (UIOffset)_defaultTitleShadowOffsetForState:(unsigned)state;	// 0x3475e919
- (id)_info;	// 0x3475efd1
- (BOOL)_isBordered;	// 0x345f008d
- (BOOL)_isOn;	// 0x3475e6f5
- (id)_newButton;	// 0x34611629
- (float)_paddingForLeft:(BOOL)left;	// 0x345f28e1
- (void)_positionBadge;	// 0x345ed829
- (void)_setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x3475f31d
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x3475f681
- (void)_setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x3475f689
- (void)_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x3475f1b1
- (void)_setBackgroundImage:(id)image forState:(unsigned)state style:(int)style barMetrics:(int)metrics;	// 0x3475f1a1
- (void)_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x3475f43d
- (void)_setBadgeAnimated:(BOOL)animated;	// 0x3475e361
- (void)_setBadgeValue:(id)value;	// 0x34613b31
- (void)_setBarHeight:(float)height;	// 0x345eea05
- (void)_setButtonBarHitRect:(CGRect)rect;	// 0x345f0349
- (void)_setInTopBar:(BOOL)topBar;	// 0x345f02c9
- (void)_setInfoExtremityWidth:(float)width isMin:(BOOL)min;	// 0x3475e3b9
- (void)_setInfoFlexibleWidth:(BOOL)width;	// 0x3475e551
- (void)_setInfoWidth:(float)width;	// 0x34699095
- (void)_setOn:(BOOL)on;	// 0x3475e6b5
- (void)_setPressed:(BOOL)pressed;	// 0x3475e0f1
// declared property setter: - (void)_setTintColor:(id)color;	// 0x3475f2dd
- (void)_setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x3475f609
- (void)_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x3475f2f5
- (void)_showPressedIndicator:(BOOL)indicator;	// 0x3475dfc1
- (void)_sizeView:(id)view toPossibleTitles:(id)possibleTitles pressedTitle:(id)title;	// 0x346a68e5
// declared property getter: - (id)_tintColor;	// 0x346117bd
- (UIOffset)_titlePositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x3475f619
- (id)_titleTextAttributesForState:(unsigned)state;	// 0x3475f2f9
- (void)_updateInfoTextColorsForState:(unsigned)state;	// 0x3475eac5
- (void)_updateShadowOffsetWithAttributes:(id)attributes forState:(unsigned)state;	// 0x3475e9a1
- (BOOL)_useBarHeight;	// 0x345f02b9
- (BOOL)_useSilverLook;	// 0x3475e7e1
- (UIEdgeInsets)alignmentRectInsets;	// 0x3475e679
- (void)dealloc;	// 0x345fab9d
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x3475e5d1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x34697269
// declared property getter: - (BOOL)isAnimatedTrashButton;	// 0x345f9e19
- (void)layoutSubviews;	// 0x345f9881
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x3475e5a1
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x346972d1
- (BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;	// 0x346978a9
// declared property setter: - (void)setAnimatedTrashButton:(BOOL)button;	// 0x345ee9f1
- (void)setBarStyle:(int)style;	// 0x345f29d9
- (void)setEnabled:(BOOL)enabled;	// 0x345eedb9
- (void)setFrame:(CGRect)frame;	// 0x345ed7e1
- (void)setHighlighted:(BOOL)highlighted;	// 0x34697305
- (void)setImage:(id)image;	// 0x3475df45
- (void)setSizesToFitImage:(BOOL)fitImage;	// 0x346139d5
- (void)setTintColor:(id)color;	// 0x3475e7d1
- (void)setToolbarTintColor:(id)color;	// 0x345f2a01
- (void)setUseSelectedImage:(BOOL)image;	// 0x3475e1e5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3475e63d
@end
