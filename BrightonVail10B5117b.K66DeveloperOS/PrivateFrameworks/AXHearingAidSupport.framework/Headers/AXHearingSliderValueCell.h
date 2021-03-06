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
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;	// 0x3350c809
- (void)accessibilityDecrement;	// 0x3350dba5
- (id)accessibilityHint;	// 0x3350da7d
- (void)accessibilityIncrement;	// 0x3350db85
- (id)accessibilityLabel;	// 0x3350da9d
- (unsigned long long)accessibilityTraits;	// 0x3350da3d
- (id)accessibilityValue;	// 0x3350da5d
- (void)dealloc;	// 0x3350c8ed
- (id)description;	// 0x3350dbc5
- (BOOL)isAccessibilityElement;	// 0x3350db81
- (void)layoutSubviews;	// 0x3350d315
- (void)sliderValueDidChange:(id)sliderValue;	// 0x3350ce2d
- (void)updateValue;	// 0x3350d241
- (id)value;	// 0x3350cf35
- (void)willMoveToSuperview:(id)superview;	// 0x3350c9a5
@end

