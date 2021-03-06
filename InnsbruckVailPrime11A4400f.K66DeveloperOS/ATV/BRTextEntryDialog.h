/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRTextEntryController.h"
#import "BRTextFieldDelegate.h"

@class NSString, BROptionDialog;

__attribute__((visibility("hidden")))
@interface BRTextEntryDialog : BRTextEntryController <BRTextFieldDelegate> {
	NSString *_dialogID;	// 184 = 0xb8
	BOOL _canceled;	// 188 = 0xbc
	BROptionDialog *_errorDialog;	// 192 = 0xc0
}
@property(readonly, retain) NSString *dialogID;	// G=0x396b09; converted property
@property(retain, nonatomic) BROptionDialog *errorDialog;	// G=0x396d7d; S=0x396d8d; @synthesize=_errorDialog
- (id)initWithTextEntryStyle:(int)textEntryStyle;	// 0x396a05
- (BOOL)brEventAction:(id)action;	// 0x396ce9
- (void)dealloc;	// 0x396aa9
// converted property getter: - (id)dialogID;	// 0x396b09
// declared property getter: - (id)errorDialog;	// 0x396d7d
- (id)runModal;	// 0x396b19
// declared property setter: - (void)setErrorDialog:(id)dialog;	// 0x396d8d
- (void)textDidChange:(id)text;	// 0x396d9d
- (void)textDidEndEditing:(id)text;	// 0x396da1
@end

