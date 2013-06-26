/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSAttributedString, BRListControl, BRVerticalScrollBarControl;

__attribute__((visibility("hidden")))
@interface BRScrollingTextBoxControl : BRControl {
	BRListControl *_list;	// 84 = 0x54
	NSAttributedString *_text;	// 88 = 0x58
	BRVerticalScrollBarControl *_scrollBar;	// 92 = 0x5c
	float _textHeightFactor;	// 96 = 0x60
	long _upperFocusLimit;	// 100 = 0x64
	long _lowerFocusLimit;	// 104 = 0x68
}
@property(retain) NSAttributedString *text;	// G=0x30baf9; S=0x30ba79; converted property
@property(assign) float textHeightFactor;	// G=0x30bb19; S=0x30bb09; converted property
- (id)init;	// 0x30b769
- (void)_calculateFocusLimitsWithTextBoxSize:(CGSize)textBoxSize;	// 0x30bf71
- (void)_forceSelectionToFocusLimit;	// 0x30be9d
- (void)_listSelectionChanged:(id)changed;	// 0x30be8d
- (void)_providerCountChanged:(id)changed;	// 0x30c139
- (id)accessibilityLabel;	// 0x30be65
- (BOOL)brEventAction:(id)action;	// 0x30bb29
- (void)dealloc;	// 0x30b9d5
- (void)layoutSubcontrols;	// 0x30bbc5
// converted property setter: - (void)setText:(id)text;	// 0x30ba79
// converted property setter: - (void)setTextHeightFactor:(float)factor;	// 0x30bb09
// converted property getter: - (id)text;	// 0x30baf9
// converted property getter: - (float)textHeightFactor;	// 0x30bb19
@end
