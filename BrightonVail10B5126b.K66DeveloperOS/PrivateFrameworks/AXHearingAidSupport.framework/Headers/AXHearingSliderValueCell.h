/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

#import <PSTableCell.h> // Unknown library

@class UILabel, NSNumberFormatter, UISlider, UIView;

@interface AXHearingSliderValueCell : PSTableCell {
	UIView *_leftView;	// 364 = 0x16c
	UISlider *_slider;	// 368 = 0x170
	UILabel *_valueLabel;	// 372 = 0x174
	NSNumberFormatter *_numberFormatter;	// 376 = 0x178
	float _sliderMargin;	// 380 = 0x17c
	float _valueWidth;	// 384 = 0x180
}
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;	// 0x3335a809
- (void)accessibilityDecrement;	// 0x3335bba5
- (id)accessibilityHint;	// 0x3335ba7d
- (void)accessibilityIncrement;	// 0x3335bb85
- (id)accessibilityLabel;	// 0x3335ba9d
- (unsigned long long)accessibilityTraits;	// 0x3335ba3d
- (id)accessibilityValue;	// 0x3335ba5d
- (void)dealloc;	// 0x3335a8ed
- (id)description;	// 0x3335bbc5
- (BOOL)isAccessibilityElement;	// 0x3335bb81
- (void)layoutSubviews;	// 0x3335b315
- (void)sliderValueDidChange:(id)sliderValue;	// 0x3335ae2d
- (void)updateValue;	// 0x3335b241
- (id)value;	// 0x3335af35
- (void)willMoveToSuperview:(id)superview;	// 0x3335a9a5
@end
