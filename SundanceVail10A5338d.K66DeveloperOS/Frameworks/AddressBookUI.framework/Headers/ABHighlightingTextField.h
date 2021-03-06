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
	BOOL _isHighlighted;	// 344 = 0x158
	BOOL _isHighlightingEnabled;	// 345 = 0x159
	UIColor *_savedTextColor;	// 348 = 0x15c
	UIColor *_highlightedTextColor;	// 352 = 0x160
	BOOL _showsClearButtonWhenEmpty;	// 356 = 0x164
	id<ABResponderDelegate> _responderDelegate;	// 360 = 0x168
}
@property(retain, nonatomic, setter=abSetHighlightedTextColor:) UIColor *abHighlightedTextColor;	// G=0x370c3eed; S=0x3706a04d; @synthesize=_highlightedTextColor
@property(assign, nonatomic, setter=abSetHighlighted:) BOOL abIsHighlighted;	// G=0x370c3ecd; S=0x3706ad79; @synthesize=_isHighlighted
@property(assign, nonatomic, setter=abSetHighlightingEnabled:) BOOL abIsHighlightingEnabled;	// G=0x370c3edd; S=0x3706a05d; @synthesize=_isHighlightingEnabled
@property(assign, nonatomic) id<ABResponderDelegate> responderDelegate;	// G=0x370c3efd; S=0x3706a08d; @synthesize=_responderDelegate
@property(assign, nonatomic) BOOL showsClearButtonWhenEmpty;	// G=0x370c3f0d; S=0x3706b4e5; @synthesize=_showsClearButtonWhenEmpty
- (id)_nextKeyResponder;	// 0x370c3e21
- (id)_previousKeyResponder;	// 0x370c3e75
- (BOOL)_showsClearButtonWhenEmpty;	// 0x37069dbd
// declared property getter: - (id)abHighlightedTextColor;	// 0x370c3eed
// declared property getter: - (BOOL)abIsHighlighted;	// 0x370c3ecd
// declared property getter: - (BOOL)abIsHighlightingEnabled;	// 0x370c3edd
// declared property setter: - (void)abSetHighlighted:(BOOL)highlighted;	// 0x3706ad79
// declared property setter: - (void)abSetHighlightedTextColor:(id)color;	// 0x3706a04d
// declared property setter: - (void)abSetHighlightingEnabled:(BOOL)enabled;	// 0x3706a05d
- (BOOL)becomeFirstResponder;	// 0x3708826d
- (void)dealloc;	// 0x3707f051
// declared property getter: - (id)responderDelegate;	// 0x370c3efd
// declared property setter: - (void)setResponderDelegate:(id)delegate;	// 0x3706a08d
// declared property setter: - (void)setShowsClearButtonWhenEmpty:(BOOL)empty;	// 0x3706b4e5
- (void)setTextColor:(id)color;	// 0x37069f19
// declared property getter: - (BOOL)showsClearButtonWhenEmpty;	// 0x370c3f0d
@end

