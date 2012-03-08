/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIButton.h"

@class NSSet, UIImage, NSString, UIColor;

@interface UINavigationButton : UIButton {
@private
	NSSet *_possibleTitles;	// 140 = 0x8c
	int _style;	// 144 = 0x90
	int _barStyle;	// 148 = 0x94
	UIColor *_navigationBarTintColor;	// 152 = 0x98
	CGSize _boundsAdjustment;	// 156 = 0x9c
	id _appearanceStorage;	// 164 = 0xa4
	unsigned _size : 2;	// 168 = 0xa8
	unsigned _pad : 30;	// 168 = 0xa8
	float _minimumWidth;	// 172 = 0xac
	float _maximumWidth;	// 176 = 0xb0
}
@property(assign, nonatomic) int barStyle;	// G=0x35842bf5; S=0x356cba31; @synthesize=_barStyle
@property(assign, nonatomic) int controlSize;	// G=0x358427c9; S=0x356cb9f9; 
@property(retain, nonatomic) UIImage *image;	// G=0x356c902d; S=0x357a168d; 
@property(assign, nonatomic) float maximumWidth;	// G=0x35842c15; S=0x356cb3e5; @synthesize=_maximumWidth
@property(assign, nonatomic) float minimumWidth;	// G=0x35842c05; S=0x356cb3a1; @synthesize=_minimumWidth
@property(assign, nonatomic) int style;	// G=0x356ca7f9; S=0x357a16d5; @synthesize=_style
@property(retain, nonatomic) UIColor *tintColor;	// G=0x356cc6ed; S=0x356cba91; 
@property(retain, nonatomic) NSString *title;	// G=0x356cafad; S=0x357a1679; 
+ (id)defaultFont;	// 0x356c9041
- (id)initWithImage:(id)image;	// 0x358426fd
- (id)initWithImage:(id)image style:(int)style;	// 0x357dc665
- (id)initWithImage:(id)image width:(float)width style:(int)style;	// 0x358426cd
- (id)initWithImage:(id)image width:(float)width style:(int)style applyBezel:(BOOL)bezel forBarStyle:(int)barStyle buttonItemStyle:(int)style6;	// 0x356cc6b5
- (id)initWithTitle:(id)title;	// 0x358426a5
- (id)initWithTitle:(id)title possibleTitles:(id)titles style:(int)style;	// 0x356c89ed
- (id)initWithTitle:(id)title style:(int)style;	// 0x357b6105
- (id)initWithValue:(id)value width:(float)width style:(int)style barStyle:(int)style4 possibleTitles:(id)titles tintColor:(id)color;	// 0x356c8a21
- (id)initWithValue:(id)value width:(float)width style:(int)style barStyle:(int)style4 possibleTitles:(id)titles tintColor:(id)color applyBezel:(BOOL)bezel forButtonItemStyle:(int)buttonItemStyle;	// 0x356c8a5d
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x35842881
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x35842bed
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x35842be5
- (void)_UIAppearance_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x35746331
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x35842889
- (void)_UIAppearance_setTintColor:(id)color;	// 0x35746669
- (void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x358429f9
- (void)_UIAppearance_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x357464d9
- (void)_adjustBounds;	// 0x356cb0e9
- (void)_applyBarButtonAppearanceStorage:(id)storage withTaggedSelectors:(id)taggedSelectors;	// 0x356cb48d
- (id)_backgroundImageForState:(unsigned)state barMetrics:(int)metrics;	// 0x358427e1
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x356cbaf9
- (BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)location;	// 0x358427dd
- (id)_defaultTitleColorForState:(unsigned)state;	// 0x356ca8c5
- (id)_defaultTitleShadowColorForState:(unsigned)state;	// 0x35842669
- (UIOffset)_defaultTitleShadowOffsetForState:(unsigned)state;	// 0x35842695
- (id)_scriptingInfo;	// 0x357bd271
- (void)_setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x35842885
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x35842bf1
- (void)_setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x35842be9
- (void)_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x35746321
- (void)_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x358429e9
- (void)_setBoundsAdjustment:(CGSize)adjustment;	// 0x356cb429
- (void)_setTintColor:(id)color;	// 0x35746659
- (void)_setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x35842b71
- (void)_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x357464c9
- (id)_tintColor;	// 0x356ca081
- (UIOffset)_titlePositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x35842b81
- (id)_titleTextAttributesForState:(unsigned)state;	// 0x35842835
- (void)_updateContentInsets;	// 0x356ca6c5
- (void)_updateStyle;	// 0x356c99c5
- (void)_updateTitleColorsForState:(unsigned)state;	// 0x356caac1
// declared property getter: - (int)barStyle;	// 0x35842bf5
- (BOOL)contentsEqualTo:(id)to withStyle:(int)style;	// 0x35842725
// declared property getter: - (int)controlSize;	// 0x358427c9
- (void)dealloc;	// 0x356e37ed
// declared property getter: - (id)image;	// 0x356c902d
// declared property getter: - (float)maximumWidth;	// 0x35842c15
// declared property getter: - (float)minimumWidth;	// 0x35842c05
// declared property setter: - (void)setBarStyle:(int)style;	// 0x356cba31
// declared property setter: - (void)setControlSize:(int)size;	// 0x356cb9f9
- (void)setFrame:(CGRect)frame;	// 0x356c8f3d
- (void)setHighlighted:(BOOL)highlighted;	// 0x357551b1
// declared property setter: - (void)setImage:(id)image;	// 0x357a168d
// declared property setter: - (void)setMaximumWidth:(float)width;	// 0x356cb3e5
// declared property setter: - (void)setMinimumWidth:(float)width;	// 0x356cb3a1
- (void)setNavigationBarTintColor:(id)color;	// 0x356cbaa1
// declared property setter: - (void)setStyle:(int)style;	// 0x357a16d5
// declared property setter: - (void)setTintColor:(id)color;	// 0x356cba91
// declared property setter: - (void)setTitle:(id)title;	// 0x357a1679
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x356cac89
// declared property getter: - (int)style;	// 0x356ca7f9
// declared property getter: - (id)tintColor;	// 0x356cc6ed
// declared property getter: - (id)title;	// 0x356cafad
@end
