/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <UITextField.h> // Unknown library

@class UIColor;
@protocol ABResponderDelegate;

@interface ABHighlightingTextField : UITextField {
	BOOL _isHighlighted;	// 336 = 0x150
	BOOL _isHighlightingEnabled;	// 337 = 0x151
	UIColor *_savedTextColor;	// 340 = 0x154
	UIColor *_highlightedTextColor;	// 344 = 0x158
	BOOL _showsClearButtonWhenEmpty;	// 348 = 0x15c
	id<ABResponderDelegate> _responderDelegate;	// 352 = 0x160
}
@property(retain, nonatomic, setter=abSetHighlightedTextColor:) UIColor *abHighlightedTextColor;	// G=0x37681a8d; S=0x37627995; @synthesize=_highlightedTextColor
@property(assign, nonatomic, setter=abSetHighlighted:) BOOL abIsHighlighted;	// G=0x37681a6d; S=0x37628861; @synthesize=_isHighlighted
@property(assign, nonatomic, setter=abSetHighlightingEnabled:) BOOL abIsHighlightingEnabled;	// G=0x37681a7d; S=0x376279a5; @synthesize=_isHighlightingEnabled
@property(assign, nonatomic) id<ABResponderDelegate> responderDelegate;	// G=0x37681a9d; S=0x376279d5; @synthesize=_responderDelegate
@property(assign, nonatomic) BOOL showsClearButtonWhenEmpty;	// G=0x37681aad; S=0x37628fcd; @synthesize=_showsClearButtonWhenEmpty
- (id)_nextKeyResponder;	// 0x376819c1
- (id)_previousKeyResponder;	// 0x37681a15
- (BOOL)_showsClearButtonWhenEmpty;	// 0x37627705
// declared property getter: - (id)abHighlightedTextColor;	// 0x37681a8d
// declared property getter: - (BOOL)abIsHighlighted;	// 0x37681a6d
// declared property getter: - (BOOL)abIsHighlightingEnabled;	// 0x37681a7d
// declared property setter: - (void)abSetHighlighted:(BOOL)highlighted;	// 0x37628861
// declared property setter: - (void)abSetHighlightedTextColor:(id)color;	// 0x37627995
// declared property setter: - (void)abSetHighlightingEnabled:(BOOL)enabled;	// 0x376279a5
- (BOOL)becomeFirstResponder;	// 0x37681959
- (void)dealloc;	// 0x3763b631
// declared property getter: - (id)responderDelegate;	// 0x37681a9d
// declared property setter: - (void)setResponderDelegate:(id)delegate;	// 0x376279d5
// declared property setter: - (void)setShowsClearButtonWhenEmpty:(BOOL)empty;	// 0x37628fcd
- (void)setTextColor:(id)color;	// 0x37627861
// declared property getter: - (BOOL)showsClearButtonWhenEmpty;	// 0x37681aad
@end

