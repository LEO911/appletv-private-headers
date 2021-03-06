/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class NSValue, _UIBadgeView, UIImage, UITabBarSelectionIndicatorView, UITabBarButtonLabel;

__attribute__((visibility("hidden")))
@interface UITabBarButton : UIControl {
	CGRect _hitRect;	// 108 = 0x6c
	UIView *_info;	// 124 = 0x7c
	UITabBarButtonLabel *_label;	// 128 = 0x80
	_UIBadgeView *_badge;	// 132 = 0x84
	UITabBarSelectionIndicatorView *_selectedIndicator;	// 136 = 0x88
	BOOL _selected;	// 140 = 0x8c
	BOOL _barHeight;	// 141 = 0x8d
	BOOL _badgeAnimated;	// 142 = 0x8e
	UIEdgeInsets _infoInsets;	// 144 = 0x90
	UIOffset _selectedInfoOffset;	// 160 = 0xa0
	UIOffset _infoOffset;	// 168 = 0xa8
	UIImage *_customSelectedIndicatorImage;	// 176 = 0xb0
	NSValue *_labelOffsetValue;	// 180 = 0xb4
}
@property(retain, nonatomic) NSValue *labelOffsetValue;	// G=0x32f13cf5; S=0x32f13d05; @synthesize=_labelOffsetValue
@property(readonly, assign, nonatomic) UITabBarButtonLabel *tabBarButtonLabel;	// G=0x32d4e755; @synthesize=_label
+ (id)_defaultLabelColor;	// 0x32d20bb1
+ (id)_defaultLabelFont;	// 0x32d20a65
- (id)initWithImage:(id)image selectedImage:(id)image2 label:(id)label withInsets:(UIEdgeInsets)insets;	// 0x32d20735
- (void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)adjustment;	// 0x32f13ba9
- (void)_UIAppearance_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x32f13ba5
- (void)_applyTabBarButtonAppearanceStorage:(id)storage withTaggedSelectors:(id)taggedSelectors;	// 0x32d2181d
- (void)_badgeAnimationDidStop:(id)_badgeAnimation finished:(id)finished;	// 0x32f13a49
- (CGRect)_frameForSelectedIndicator;	// 0x32d25901
- (BOOL)_isSelected;	// 0x32f13969
- (void)_positionBadge;	// 0x32ccbb59
- (id)_scriptingInfo;	// 0x32f18f21
- (id)_selectedIndicatorView;	// 0x32f13785
- (void)_setBadgeAnimated:(BOOL)animated;	// 0x32f13b09
- (void)_setBadgeValue:(id)value;	// 0x32d24009
- (void)_setBarHeight:(float)height;	// 0x32d217a9
- (void)_setCustomSelectedIndicatorImage:(id)image;	// 0x32d508b5
- (void)_setInfoOffset:(UIOffset)offset;	// 0x32f139e1
- (void)_setSelected:(BOOL)selected;	// 0x32d221cd
- (void)_setSelectedInfoOffset:(UIOffset)offset;	// 0x32f13979
- (void)_setTabBarHitRect:(CGRect)rect;	// 0x32ccbd39
- (void)_setTitlePositionAdjustment:(UIOffset)adjustment;	// 0x32f13ca9
- (void)_showSelectedIndicator:(BOOL)indicator changeSelection:(BOOL)selection;	// 0x32d21989
- (id)_swappableImageView;	// 0x32f13959
- (CGRect)_tabBarHitRect;	// 0x32f13935
- (UIOffset)_titlePositionAdjustment;	// 0x32f13cb9
- (void)_updateInfoFrame;	// 0x32d25de5
- (BOOL)_useBarHeight;	// 0x32f13b95
- (void)dealloc;	// 0x32f13845
// declared property getter: - (id)labelOffsetValue;	// 0x32f13cf5
- (void)layoutSubviews;	// 0x32d25671
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x32f13b61
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x32dc1801
- (void)setEnabled:(BOOL)enabled;	// 0x32d218ad
- (void)setFrame:(CGRect)frame;	// 0x32ccbb11
- (void)setImage:(id)image;	// 0x32f13911
// declared property setter: - (void)setLabelOffsetValue:(id)value;	// 0x32f13d05
// declared property getter: - (id)tabBarButtonLabel;	// 0x32d4e755
@end

