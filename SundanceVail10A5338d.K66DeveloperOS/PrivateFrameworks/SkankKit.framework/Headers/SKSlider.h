/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SKControl.h"
#import "SkankKit-Structs.h"

@class DPTextLayer;

@interface SKSlider : SKControl {
	DPTextLayer *_title;	// 68 = 0x44
	DPTextLayer *_readout;	// 72 = 0x48
	double _value;	// 76 = 0x4c
	double _min;	// 84 = 0x54
	double _max;	// 92 = 0x5c
	double _increment;	// 100 = 0x64
	BOOL _dragOnly;	// 108 = 0x6c
	BOOL _dragOnSlider;	// 109 = 0x6d
}
@property(assign) double value;	// G=0x3311490d; S=0x3311499d; converted property
- (id)init;	// 0x33114879
- (void)adjustReadoutFrame;	// 0x33114c6d
- (void)adjustTitleFrame;	// 0x33114b51
- (void)decrement;	// 0x33114961
- (void)drawInContext:(CGContextRef)context;	// 0x33114f31
- (BOOL)handleEvent:(GSEventRef)event inLayer:(id)layer;	// 0x33115109
- (void)increment;	// 0x33114925
- (void)setBounds:(CGRect)bounds;	// 0x33114e35
- (void)setDragOnSlider:(BOOL)slider;	// 0x33114b41
- (void)setDragOnly:(BOOL)only;	// 0x33114b31
- (void)setHasReadout:(BOOL)readout;	// 0x33114d25
- (void)setIncrement:(double)increment;	// 0x33114b1d
- (void)setMaxValue:(double)value;	// 0x33114af9
- (void)setMinValue:(double)value;	// 0x33114ad5
- (void)setReadoutText:(id)text;	// 0x33114e11
- (void)setTitle:(id)title;	// 0x33114bb5
// converted property setter: - (void)setValue:(double)value;	// 0x3311499d
- (CGRect)sliderBounds;	// 0x33114e91
// converted property getter: - (double)value;	// 0x3311490d
@end
