/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRImageControl;

@interface BRHeaderControl : BRControl {
@private
	BRTextControl *_title;	// 44 = 0x2c
	BRTextControl *_subtitle;	// 48 = 0x30
	BRImageControl *_icon;	// 52 = 0x34
	float _iconHorizontalOffset;	// 56 = 0x38
	float _iconKerningFactor;	// 60 = 0x3c
	float _iconScaleFactor;	// 64 = 0x40
	float _iconEdgeSpace;	// 68 = 0x44
	int _iconPosition;	// 72 = 0x48
	BOOL _titleHidesIcon;	// 76 = 0x4c
}
@property(readonly, retain) BRImageControl *icon;	// G=0x328c9f0d; converted property
@property(assign) float iconEdgeSpace;	// G=0x328fd201; S=0x328fd255; converted property
@property(assign) float iconHorizontalOffset;	// G=0x328c9edd; S=0x328fd2e9; converted property
@property(assign) float iconKerningFactor;	// G=0x328c9ead; S=0x328fd2c5; converted property
@property(assign) int iconPosition;	// G=0x328fd1f1; S=0x328fd29d; converted property
@property(assign) float iconScaleFactor;	// G=0x328fd1e1; S=0x328ccd55; converted property
@property(retain) BRTextControl *subtitle;	// G=0x328fd371; S=0x328fd3a1; converted property
@property(retain) BRTextControl *title;	// G=0x328fd479; S=0x328b4db1; converted property
@property(assign, nonatomic) BOOL titleHidesIcon;	// G=0x328fd211; S=0x328fd221; @synthesize=_titleHidesIcon
- (id)init;	// 0x328b4ca9
- (id)accessibilityLabel;	// 0x328fd9bd
- (void)dealloc;	// 0x328b6455
// converted property getter: - (id)icon;	// 0x328c9f0d
// converted property getter: - (float)iconEdgeSpace;	// 0x328fd201
- (CGRect)iconFrame;	// 0x328fd5c9
// converted property getter: - (float)iconHorizontalOffset;	// 0x328c9edd
// converted property getter: - (float)iconKerningFactor;	// 0x328c9ead
// converted property getter: - (int)iconPosition;	// 0x328fd1f1
// converted property getter: - (float)iconScaleFactor;	// 0x328fd1e1
- (void)layoutSubcontrols;	// 0x328fd5ed
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x328c9f5d
- (void)setIcon:(id)icon position:(int)position edgeSpace:(float)space;	// 0x328fd30d
// converted property setter: - (void)setIconEdgeSpace:(float)space;	// 0x328fd255
- (void)setIconHidden:(BOOL)hidden;	// 0x328fd231
// converted property setter: - (void)setIconHorizontalOffset:(float)offset;	// 0x328fd2e9
// converted property setter: - (void)setIconKerningFactor:(float)factor;	// 0x328fd2c5
// converted property setter: - (void)setIconPosition:(int)position;	// 0x328fd29d
// converted property setter: - (void)setIconScaleFactor:(float)factor;	// 0x328ccd55
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x328fd3a1
- (void)setSubtitle:(id)subtitle withAttributes:(id)attributes;	// 0x328fd3b9
// converted property setter: - (void)setTitle:(id)title;	// 0x328b4db1
- (void)setTitle:(id)title withAttributes:(id)attributes;	// 0x328b4dc9
// declared property setter: - (void)setTitleHidesIcon:(BOOL)icon;	// 0x328fd221
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x328fd4a9
// converted property getter: - (id)subtitle;	// 0x328fd371
// converted property getter: - (id)title;	// 0x328fd479
// declared property getter: - (BOOL)titleHidesIcon;	// 0x328fd211
@end
