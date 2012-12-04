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
@property(copy, nonatomic, setter=_setInfoConstraints:) NSArray *_infoConstraints;	// G=0x30ac66ed; S=0x30ac6701; @synthesize
@property(copy, nonatomic) NSString *badgeValue;	// G=0x30ac5a51; S=0x30ac5a61; 
@property(readonly, assign) UIView *badgeView;	// G=0x30983315; 
@property(assign) int controlSize;	// G=0x30ac5b41; S=0x30a07ba5; 
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x3097cfd1; S=0x30ac59e5; converted property
@property(assign, getter=isMomentary) BOOL momentary;	// G=0x30ac5b2d; S=0x3097f391; 
@property(retain) id objectValue;	// G=0x30ac65f5; S=0x30ac6339; converted property
@property(assign, getter=isSelected) BOOL selected;	// G=0x309826e1; S=0x3098238d; 
- (id)initWithCoder:(id)coder;	// 0x30ac4e25
- (id)initWithInfo:(id)info style:(int)style size:(int)size barStyle:(int)style4 tintColor:(id)color appearanceStorage:(id)storage position:(unsigned)position isDisclosure:(BOOL)disclosure autosizeText:(BOOL)text;	// 0x3097cdb1
- (float)_barHeight;	// 0x309830a9
- (void)_commonInitWithInfo:(id)info position:(unsigned)position autosizeText:(BOOL)text;	// 0x3097d0c1
- (CGRect)_contentRectForBounds:(CGRect)bounds;	// 0x30ac5cd9
- (id)_currentOptionsStyleTextColor;	// 0x30a0c0a5
- (id)_currentOptionsStyleTextShadowColor;	// 0x30a0c215
- (id)_dividerImage;	// 0x3097e2c5
- (id)_dividerImageIsCustom:(BOOL *)custom;	// 0x3097e2d9
- (float)_idealWidth;	// 0x30982ef1
// declared property getter: - (id)_infoConstraints;	// 0x30ac66ed
- (void)_invalidateInfoConstraints;	// 0x30ac5f31
- (BOOL)_isInMiniBar;	// 0x3097e0f9
- (UIEdgeInsets)_paddingInsets;	// 0x309830dd
- (void)_populateArchivedSubviews:(id)subviews;	// 0x30ac504d
- (void)_positionInfo;	// 0x3097de21
- (unsigned)_segmentState;	// 0x3097dd81
- (void)_setEnabledAppearance:(BOOL)appearance;	// 0x3097f249
// declared property setter: - (void)_setInfoConstraints:(id)constraints;	// 0x30ac6701
- (id)_texturedFillImage;	// 0x30ac5575
- (id)_texturedLeftCapImage;	// 0x30ac54dd
- (id)_texturedRightCapImage;	// 0x30ac5529
- (void)_tileImage:(id)image inRect:(CGRect)rect;	// 0x30ac53cd
- (void)_updateBackgroundImage;	// 0x3097e691
- (void)_updateTextColors;	// 0x3097d20d
- (void)_updateTexturedBackgroundImage;	// 0x30a2ee59
- (void)animateAdd:(BOOL)add;	// 0x30ac5b59
- (void)animateRemoveForWidth:(float)width;	// 0x30ac5b95
// declared property getter: - (id)badgeValue;	// 0x30ac5a51
// declared property getter: - (id)badgeView;	// 0x30983315
- (CGRect)contentRect;	// 0x3097e099
- (CGSize)contentSize;	// 0x30982f85
// declared property getter: - (int)controlSize;	// 0x30ac5b41
- (void)dealloc;	// 0x30a09d41
- (id)disabledTextColor;	// 0x30ac5711
- (void)encodeWithCoder:(id)coder;	// 0x30ac50d1
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x30ac6669
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x30a14be1
- (id)infoName;	// 0x30ac6605
- (void)insertDividerView;	// 0x3097e121
// converted property getter: - (BOOL)isHighlighted;	// 0x3097cfd1
// declared property getter: - (BOOL)isMomentary;	// 0x30ac5b2d
// declared property getter: - (BOOL)isSelected;	// 0x309826e1
// converted property getter: - (id)objectValue;	// 0x30ac65f5
- (void)setAutosizeText:(BOOL)text;	// 0x30ac597d
// declared property setter: - (void)setBadgeValue:(id)value;	// 0x30ac5a61
- (void)setBarStyle:(int)style;	// 0x30ac5865
- (void)setBounds:(CGRect)bounds;	// 0x30ac6261
- (void)setContentOffset:(CGSize)offset;	// 0x30a16a45
// declared property setter: - (void)setControlSize:(int)size;	// 0x30a07ba5
- (void)setEnabled:(BOOL)enabled;	// 0x3097f1e9
- (void)setFrame:(CGRect)frame;	// 0x3097cfe9
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x30ac59e5
// declared property setter: - (void)setMomentary:(BOOL)momentary;	// 0x3097f391
// converted property setter: - (void)setObjectValue:(id)value;	// 0x30ac6339
- (void)setPosition:(unsigned)position;	// 0x30983221
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x3098238d
- (void)setShowDivider:(BOOL)divider;	// 0x3098329d
- (void)setTintColor:(id)color;	// 0x30a08741
- (void)updateConstraints;	// 0x30ac5fc9
- (void)updateDividerViewForChangedSegment:(id)changedSegment;	// 0x309823fd
- (void)updateForAppearance:(id)appearance style:(int)style;	// 0x30a08579
- (BOOL)useBlockyMagnificationInClassic;	// 0x30ac66d9
- (id)viewForBaselineLayout;	// 0x30ac66dd
@end
