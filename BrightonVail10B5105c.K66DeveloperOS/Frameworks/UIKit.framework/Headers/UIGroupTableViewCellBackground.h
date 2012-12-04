/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface UIGroupTableViewCellBackground : UIView {
	int _sectionLocation;	// 84 = 0x54
	int _newSectionLocation;	// 88 = 0x58
	int _animationCount;	// 92 = 0x5c
	int _selectionStyle;	// 96 = 0x60
	int _separatorStyle;	// 100 = 0x64
	UIView *_topSeparatorView;	// 104 = 0x68
	UIView *_bottomSeparatorView;	// 108 = 0x6c
	struct {
		unsigned hasAutomaticAnimationItems : 1;
	} _groupBackgroundFlags;	// 112 = 0x70
	UIColor *_selectionTintColor;	// 116 = 0x74
}
@property(retain) id backgroundColor;	// G=0x348141e1; S=0x346f7d51; converted property
@property(assign, nonatomic) int sectionLocation;	// G=0x3461e651; S=0x3461c0c1; 
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x3461d6c5; S=0x34683e0d; 
@property(assign, nonatomic) int selectionStyle;	// G=0x348141bd; S=0x34683ca9; 
@property(retain, nonatomic) UIColor *selectionTintColor;	// G=0x3461da19; S=0x34683d65; 
@property(assign, nonatomic) int separatorStyle;	// G=0x348141cd; S=0x3461c35d; 
+ (void)_flushCacheOnNotification:(id)notification;	// 0x3460879d
+ (void)initialize;	// 0x346069b1
- (id)initWithFrame:(CGRect)frame;	// 0x3461b805
- (id)_backgroundColor;	// 0x3461d705
- (id)_bottomShadowColor;	// 0x3461d7e9
- (id)_cachedImageForKey:(id)key;	// 0x3461da79
- (id)_contentMaskLayer;	// 0x348141e9
- (CGRect)_contentRectForContentHeight:(float)contentHeight;	// 0x34813fd5
- (CGRect)_contentsCenter:(BOOL)center;	// 0x3461bbe5
- (CGRect)_contentsRect:(BOOL)rect;	// 0x3461bb59
- (void)_decrementAnimationCount;	// 0x346f7da5
- (id)_fillColor;	// 0x3461d985
- (void)_incrementAnimationCount;	// 0x346f7cf5
- (void)_layoutSubviews:(BOOL)subviews;	// 0x3461b9e9
- (float)_pixelDisplayedImageHeight;	// 0x346f7d65
- (id)_roundedRectBezierPathInRect:(CGRect)rect withSectionLocation:(int)sectionLocation forBorder:(BOOL)border cornerRadiusAdjustment:(float)adjustment;	// 0x3461e599
- (id)_sectionBorderColor;	// 0x3461d8dd
- (id)_separatorColor;	// 0x3461c3c5
- (void)_setSectionLocationAnimationDidStop;	// 0x34814195
- (id)_topShadowColor;	// 0x348140e5
- (id)_topShadowViewWithColor:(id)color;	// 0x3461c6d9
- (void)_updateSeparatorViews;	// 0x3461bc61
// converted property getter: - (id)backgroundColor;	// 0x348141e1
- (void)dealloc;	// 0x346842b5
- (void)displayLayer:(id)layer;	// 0x3461d32d
// declared property getter: - (BOOL)isSelected;	// 0x3461d6c5
- (void)layoutSubviews;	// 0x3461b9d5
// declared property getter: - (int)sectionLocation;	// 0x3461e651
// declared property getter: - (int)selectionStyle;	// 0x348141bd
// declared property getter: - (id)selectionTintColor;	// 0x3461da19
// declared property getter: - (int)separatorStyle;	// 0x348141cd
// converted property setter: - (void)setBackgroundColor:(id)color;	// 0x346f7d51
- (void)setFrame:(CGRect)frame;	// 0x3461b855
// declared property setter: - (void)setSectionLocation:(int)location;	// 0x3461c0c1
- (void)setSectionLocation:(int)location animated:(BOOL)animated;	// 0x3461c0d9
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x34683e0d
// declared property setter: - (void)setSelectionStyle:(int)style;	// 0x34683ca9
// declared property setter: - (void)setSelectionTintColor:(id)color;	// 0x34683d65
- (void)setSelectionTintColor:(id)color layoutSubviews:(BOOL)subviews;	// 0x34683cf9
// declared property setter: - (void)setSeparatorStyle:(int)style;	// 0x3461c35d
@end
