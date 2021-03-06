/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIImageView.h"

@class NSArray, _UISegmentedControlAppearanceStorage, _UIBadgeView, UIColor, NSString;

__attribute__((visibility("hidden")))
@interface UISegment : UIImageView {
	UIView *_info;	// 96 = 0x60
	_UISegmentedControlAppearanceStorage *_appearanceStorage;	// 100 = 0x64
	float _width;	// 104 = 0x68
	CGSize _contentOffset;	// 108 = 0x6c
	UIColor *_tintColor;	// 116 = 0x74
	int _barStyle;	// 120 = 0x78
	unsigned _rightSegmentState;	// 124 = 0x7c
	NSString *_badgeValue;	// 128 = 0x80
	_UIBadgeView *_badgeView;	// 132 = 0x84
	id _objectValue;	// 136 = 0x88
	struct {
		unsigned style : 3;
		unsigned size : 2;
		unsigned selected : 1;
		unsigned highlighted : 1;
		unsigned showDivider : 1;
		unsigned hasImage : 1;
		unsigned isDisclosure : 1;
		unsigned position : 3;
		unsigned autosizeText : 1;
		unsigned isMomentary : 1;
	} _segmentFlags;	// 140 = 0x8c
	NSArray *_infoConstraints;	// 144 = 0x90
}
@property(copy, nonatomic, setter=_setInfoConstraints:) NSArray *_infoConstraints;	// G=0x32cfc885; S=0x32cfc899; @synthesize
@property(copy, nonatomic) NSString *badgeValue;	// G=0x32cfbbe9; S=0x32cfbbf9; 
@property(readonly, assign) UIView *badgeView;	// G=0x32bb9335; 
@property(assign) int controlSize;	// G=0x32cfbcd9; S=0x32c3dc7d; 
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x32bb2ff1; S=0x32cfbb7d; converted property
@property(assign, getter=isMomentary) BOOL momentary;	// G=0x32cfbcc5; S=0x32bb53b1; 
@property(retain) id objectValue;	// G=0x32cfc78d; S=0x32cfc4d1; converted property
@property(assign, getter=isSelected) BOOL selected;	// G=0x32bb8701; S=0x32bb83ad; 
- (id)initWithCoder:(id)coder;	// 0x32cfafbd
- (id)initWithInfo:(id)info style:(int)style size:(int)size barStyle:(int)style4 tintColor:(id)color appearanceStorage:(id)storage position:(unsigned)position isDisclosure:(BOOL)disclosure autosizeText:(BOOL)text;	// 0x32bb2dd1
- (float)_barHeight;	// 0x32bb90c9
- (void)_commonInitWithInfo:(id)info position:(unsigned)position autosizeText:(BOOL)text;	// 0x32bb30e1
- (CGRect)_contentRectForBounds:(CGRect)bounds;	// 0x32cfbe71
- (id)_currentOptionsStyleTextColor;	// 0x32c4217d
- (id)_currentOptionsStyleTextShadowColor;	// 0x32c422ed
- (id)_dividerImage;	// 0x32bb42e5
- (id)_dividerImageIsCustom:(BOOL *)custom;	// 0x32bb42f9
- (float)_idealWidth;	// 0x32bb8f11
// declared property getter: - (id)_infoConstraints;	// 0x32cfc885
- (void)_invalidateInfoConstraints;	// 0x32cfc0c9
- (BOOL)_isInMiniBar;	// 0x32bb4119
- (UIEdgeInsets)_paddingInsets;	// 0x32bb90fd
- (void)_populateArchivedSubviews:(id)subviews;	// 0x32cfb1e5
- (void)_positionInfo;	// 0x32bb3e41
- (unsigned)_segmentState;	// 0x32bb3da1
- (void)_setEnabledAppearance:(BOOL)appearance;	// 0x32bb5269
// declared property setter: - (void)_setInfoConstraints:(id)constraints;	// 0x32cfc899
- (id)_texturedFillImage;	// 0x32cfb70d
- (id)_texturedLeftCapImage;	// 0x32cfb675
- (id)_texturedRightCapImage;	// 0x32cfb6c1
- (void)_tileImage:(id)image inRect:(CGRect)rect;	// 0x32cfb565
- (void)_updateBackgroundImage;	// 0x32bb46b1
- (void)_updateTextColors;	// 0x32bb322d
- (void)_updateTexturedBackgroundImage;	// 0x32c64f41
- (void)animateAdd:(BOOL)add;	// 0x32cfbcf1
- (void)animateRemoveForWidth:(float)width;	// 0x32cfbd2d
// declared property getter: - (id)badgeValue;	// 0x32cfbbe9
// declared property getter: - (id)badgeView;	// 0x32bb9335
- (CGRect)contentRect;	// 0x32bb40b9
- (CGSize)contentSize;	// 0x32bb8fa5
// declared property getter: - (int)controlSize;	// 0x32cfbcd9
- (void)dealloc;	// 0x32c3fe19
- (id)disabledTextColor;	// 0x32cfb8a9
- (void)encodeWithCoder:(id)coder;	// 0x32cfb269
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x32cfc801
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32c4acc9
- (id)infoName;	// 0x32cfc79d
- (void)insertDividerView;	// 0x32bb4141
// converted property getter: - (BOOL)isHighlighted;	// 0x32bb2ff1
// declared property getter: - (BOOL)isMomentary;	// 0x32cfbcc5
// declared property getter: - (BOOL)isSelected;	// 0x32bb8701
// converted property getter: - (id)objectValue;	// 0x32cfc78d
- (void)setAutosizeText:(BOOL)text;	// 0x32cfbb15
// declared property setter: - (void)setBadgeValue:(id)value;	// 0x32cfbbf9
- (void)setBarStyle:(int)style;	// 0x32cfb9fd
- (void)setBounds:(CGRect)bounds;	// 0x32cfc3f9
- (void)setContentOffset:(CGSize)offset;	// 0x32c4cb2d
// declared property setter: - (void)setControlSize:(int)size;	// 0x32c3dc7d
- (void)setEnabled:(BOOL)enabled;	// 0x32bb5209
- (void)setFrame:(CGRect)frame;	// 0x32bb3009
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x32cfbb7d
// declared property setter: - (void)setMomentary:(BOOL)momentary;	// 0x32bb53b1
// converted property setter: - (void)setObjectValue:(id)value;	// 0x32cfc4d1
- (void)setPosition:(unsigned)position;	// 0x32bb9241
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x32bb83ad
- (void)setShowDivider:(BOOL)divider;	// 0x32bb92bd
- (void)setTintColor:(id)color;	// 0x32c3e819
- (void)updateConstraints;	// 0x32cfc161
- (void)updateDividerViewForChangedSegment:(id)changedSegment;	// 0x32bb841d
- (void)updateForAppearance:(id)appearance style:(int)style;	// 0x32c3e651
- (BOOL)useBlockyMagnificationInClassic;	// 0x32cfc871
- (id)viewForBaselineLayout;	// 0x32cfc875
@end

