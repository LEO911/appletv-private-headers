/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRWaitSpinnerControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRWaitPromptControl : BRControl {
	BRWaitSpinnerControl *_spinner;	// 84 = 0x54
	BRTextControl *_prompt;	// 88 = 0x58
}
@property(retain) BRTextControl *prompt;	// G=0x32cf89; S=0x32cf4d; converted property
@property(retain) id promptText;	// G=0x32d035; S=0x32cfa9; converted property
+ (id)themeAttributes;	// 0x32cf19
- (id)init;	// 0x32cde5
- (id)accessibilityLabel;	// 0x32d229
- (void)controlWasActivated;	// 0x32d271
- (void)dealloc;	// 0x32ceb5
- (BOOL)isAccessibilityElement;	// 0x32d26d
- (void)layoutSubcontrols;	// 0x32d06d
// converted property getter: - (id)prompt;	// 0x32cf89
// converted property getter: - (id)promptText;	// 0x32d035
// converted property setter: - (void)setPrompt:(id)prompt;	// 0x32cf4d
// converted property setter: - (void)setPromptText:(id)text;	// 0x32cfa9
@end

