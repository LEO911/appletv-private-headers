/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"
#import "BRTextFieldDelegate.h"

@class NSArray, BRTextEntryController;

__attribute__((visibility("hidden")))
@interface SettingsDeviceNameController : BRViewController <BRTextFieldDelegate> {
	NSArray *_names;	// 104 = 0x68
	BRTextEntryController *_customNameController;	// 108 = 0x6c
}
- (id)init;	// 0xb830d
- (void).cxx_destruct;	// 0xb8cf5
- (id)_collectNames;	// 0xb8f19
- (unsigned)_indexOfCurrentName;	// 0xb8d29
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xb8761
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xb8629
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xb8739
- (void)textDidChange:(id)text;	// 0xb8bf5
- (void)textDidEndEditing:(id)text;	// 0xb8bf9
- (void)wasPushed;	// 0xb8565
@end

