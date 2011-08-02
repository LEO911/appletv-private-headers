/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRTextEntryController.h"
#import "BRTextFieldDelegate.h"

@class NSString;

@interface BRTextEntryDialog : BRTextEntryController <BRTextFieldDelegate> {
@private
	NSString *_dialogID;	// 136 = 0x88
	BOOL _canceled;	// 140 = 0x8c
}
@property(readonly, retain) NSString *dialogID;	// G=0x3299fd5d; converted property
- (BOOL)brEventAction:(id)action;	// 0x3299fc85
- (void)dealloc;	// 0x3299fd15
// converted property getter: - (id)dialogID;	// 0x3299fd5d
- (id)runModal;	// 0x3299fbe5
- (void)textDidChange:(id)text;	// 0x3299fbad
- (void)textDidEndEditing:(id)text;	// 0x3299fbb1
@end
