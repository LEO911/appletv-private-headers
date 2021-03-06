/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRPasscodeEntryControl, NSString, BRHeaderControl, BRTextControl;
@protocol SettingsPINEntryViewDelegate;

__attribute__((visibility("hidden")))
@interface SettingsPINEntryView : BRControl {
	BRHeaderControl *_header;	// 84 = 0x54
	BRPasscodeEntryControl *_editor;	// 88 = 0x58
	BRTextControl *_prompt;	// 92 = 0x5c
	NSString *_initialPINCode;	// 96 = 0x60
	id<SettingsPINEntryViewDelegate> _delegate;	// 100 = 0x64
}
@property(assign) id delegate;	// G=0xb8f59; S=0xb8f45; converted property
@property(retain) BRTextControl *prompt;	// G=0xb8ea9; S=0xb8de9; converted property
@property(retain) id title;	// G=0xb8dc9; S=0xb8da9; converted property
- (id)init;	// 0xb883d
- (id)initWithNumDigits:(unsigned)numDigits userEditable:(BOOL)editable hideDigits:(BOOL)digits prompt:(id)prompt;	// 0xb88a1
- (void).cxx_destruct;	// 0xb9011
- (void)dealloc;	// 0xb8abd
// converted property getter: - (id)delegate;	// 0xb8f59
- (void)layoutSubcontrols;	// 0xb8b29
- (void)pinFailedTryAgainWithTitle:(id)title prompt:(id)prompt;	// 0xb8f79
// converted property getter: - (id)prompt;	// 0xb8ea9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0xb8f45
- (void)setInitialPINCode:(id)code;	// 0xb8efd
// converted property setter: - (void)setPrompt:(id)prompt;	// 0xb8de9
// converted property setter: - (void)setTitle:(id)title;	// 0xb8da9
- (void)textDidChange:(id)text;	// 0xb8d55
- (void)textDidEndEditing:(id)text;	// 0xb8d59
// converted property getter: - (id)title;	// 0xb8dc9
@end

