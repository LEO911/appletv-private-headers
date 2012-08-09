/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRHeaderControl : BRControl {
	BRTextControl *_title;	// 80 = 0x50
	BRTextControl *_subtitle;	// 84 = 0x54
	BRImageControl *_icon;	// 88 = 0x58
	float _iconHorizontalOffset;	// 92 = 0x5c
	float _iconKerningFactor;	// 96 = 0x60
	float _iconScaleFactor;	// 100 = 0x64
	float _iconEdgeSpace;	// 104 = 0x68
	int _iconPosition;	// 108 = 0x6c
	BOOL _titleHidesIcon;	// 112 = 0x70
}
@property(readonly, retain) BRImageControl *icon;	// G=0x2adb1d; converted property
@property(assign) float iconEdgeSpace;	// G=0x2adc51; S=0x2adc05; converted property
@property(assign) float iconHorizontalOffset;	// G=0x2adb5d; S=0x2adb3d; converted property
@property(assign) float iconKerningFactor;	// G=0x2adb8d; S=0x2adb6d; converted property
@property(assign) int iconPosition;	// G=0x2adbf5; S=0x2adbcd; converted property
@property(assign) float iconScaleFactor;	// G=0x2adbbd; S=0x2adb9d; converted property
@property(retain) BRTextControl *subtitle;	// G=0x2ad951; S=0x2ad93d; converted property
@property(retain) BRTextControl *title;	// G=0x2ad829; S=0x2ad815; converted property
@property(assign, nonatomic) BOOL titleHidesIcon;	// G=0x2ae411; S=0x2ae421; @synthesize=_titleHidesIcon
- (id)init;	// 0x2ad58d
- (id)accessibilityLabel;	// 0x2ae36d
- (void)controlWasActivated;	// 0x2ad681
- (void)dealloc;	// 0x2ad6c1
// converted property getter: - (id)icon;	// 0x2adb1d
// converted property getter: - (float)iconEdgeSpace;	// 0x2adc51
- (CGRect)iconFrame;	// 0x2adc61
// converted property getter: - (float)iconHorizontalOffset;	// 0x2adb5d
// converted property getter: - (float)iconKerningFactor;	// 0x2adb8d
// converted property getter: - (int)iconPosition;	// 0x2adbf5
// converted property getter: - (float)iconScaleFactor;	// 0x2adbbd
- (void)layoutSubcontrols;	// 0x2ade3d
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x2ad989
- (void)setIcon:(id)icon position:(int)position edgeSpace:(float)space;	// 0x2adaa9
// converted property setter: - (void)setIconEdgeSpace:(float)space;	// 0x2adc05
- (void)setIconHidden:(BOOL)hidden;	// 0x2adc95
// converted property setter: - (void)setIconHorizontalOffset:(float)offset;	// 0x2adb3d
// converted property setter: - (void)setIconKerningFactor:(float)factor;	// 0x2adb6d
// converted property setter: - (void)setIconPosition:(int)position;	// 0x2adbcd
// converted property setter: - (void)setIconScaleFactor:(float)factor;	// 0x2adb9d
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x2ad93d
- (void)setSubtitle:(id)subtitle withAttributes:(id)attributes;	// 0x2ad861
// converted property setter: - (void)setTitle:(id)title;	// 0x2ad815
- (void)setTitle:(id)title withAttributes:(id)attributes;	// 0x2ad739
// declared property setter: - (void)setTitleHidesIcon:(BOOL)icon;	// 0x2ae421
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2adcb5
// converted property getter: - (id)subtitle;	// 0x2ad951
// converted property getter: - (id)title;	// 0x2ad829
// declared property getter: - (BOOL)titleHidesIcon;	// 0x2ae411
@end
