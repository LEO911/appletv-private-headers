/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UIMovieScrubberTrackOverlayView : UIView {
@private
	double _value;	// 48 = 0x30
	double _minimumValue;	// 56 = 0x38
	double _maximumValue;	// 64 = 0x40
	double _startValue;	// 72 = 0x48
	double _endValue;	// 80 = 0x50
	UIView *_leftFillView;	// 88 = 0x58
	UIView *_rightFillView;	// 92 = 0x5c
	UIView *_innerShadowView;	// 96 = 0x60
	CGRect _leftFillFrame;	// 100 = 0x64
	CGRect _rightFillFrame;	// 116 = 0x74
	unsigned _editingHandle;	// 132 = 0x84
	unsigned _editing : 1;	// 136 = 0x88
	unsigned _zoomed : 1;	// 136 = 0x88
}
- (id)initWithFrame:(CGRect)frame;	// 0x302b9555
- (void)_clampValueAndLayout;	// 0x302b9b3d
- (void)_updateLeftFill;	// 0x302b97f1
- (void)_updateRightFill;	// 0x302b9925
- (void)animateFillFramesAway;	// 0x302b9a59
- (void)layoutSubviews;	// 0x302b9d75
- (void)setEditing:(BOOL)editing;	// 0x302b9ba5
- (void)setEditingHandle:(int)handle;	// 0x302b9d65
- (void)setEndValue:(double)value;	// 0x302b9cc1
- (void)setFrame:(CGRect)frame;	// 0x302b975d
- (void)setIsZoomed:(BOOL)zoomed;	// 0x302b9d4d
- (void)setMaximumValue:(double)value;	// 0x302b9d25
- (void)setMinimumValue:(double)value;	// 0x302b9cfd
- (void)setStartValue:(double)value;	// 0x302b9c85
- (void)setValue:(double)value;	// 0x302b9c49
@end

