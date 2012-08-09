/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PSListController.h"


@interface PSEditableListController : PSListController {
	BOOL _editable;	// 284 = 0x11c
	BOOL _editingDisabled;	// 285 = 0x11d
}
@property(assign) BOOL editable;	// G=0x34db1b41; S=0x34db1bc9; converted property
- (id)init;	// 0x34db1861
- (id)_editButtonBarItem;	// 0x34db188d
- (void)_setEditable:(BOOL)editable animated:(BOOL)animated;	// 0x34db1b51
- (void)_updateNavigationBar;	// 0x34db198d
- (void)didLock;	// 0x34db1e4d
- (void)editDoneTapped;	// 0x34db1b19
// converted property getter: - (BOOL)editable;	// 0x34db1b41
- (BOOL)performDeletionActionForSpecifier:(id)specifier;	// 0x34db1ce5
- (void)pushController:(id)controller;	// 0x34db1aa9
// converted property setter: - (void)setEditable:(BOOL)editable;	// 0x34db1bc9
- (void)setEditingButtonHidden:(BOOL)hidden animated:(BOOL)animated;	// 0x34db19e5
- (void)suspend;	// 0x34db1e09
- (void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;	// 0x34db1e91
- (int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;	// 0x34db1c81
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x34db1bf1
- (void)viewWillAppear:(BOOL)view;	// 0x34db1a69
@end
