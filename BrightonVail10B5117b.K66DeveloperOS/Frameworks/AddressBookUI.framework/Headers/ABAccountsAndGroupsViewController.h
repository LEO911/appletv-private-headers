/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "UITableViewDelegate.h"
#import "AddressBookUI-Structs.h"
#import "ABAbstractViewController.h"

@class ABPeoplePickerNavigationController, ABAccountsAndGroupDataSource, UITableView;

@interface ABAccountsAndGroupsViewController : ABAbstractViewController <UITableViewDelegate> {
	ABAccountsAndGroupDataSource *_dataSource;	// 204 = 0xcc
	BOOL _needsReload;	// 208 = 0xd0
	BOOL _tableViewNeedsReloadAfterResume;	// 209 = 0xd1
	BOOL _showsRefreshButton;	// 210 = 0xd2
	ABPeoplePickerNavigationController *_peoplePickerNavigationController;	// 212 = 0xd4
}
@property(readonly, assign, nonatomic) ABAccountsAndGroupDataSource *dataSource;	// G=0x309480c5; @synthesize=_dataSource
@property(assign, nonatomic) BOOL hidesGlobalGroupWrapper;	// G=0x30946e55; S=0x30946e29; 
@property(assign, nonatomic) BOOL hidesSearchableSources;	// G=0x30946e01; S=0x30946dd5; 
@property(retain) id model;	// G=0x309470b5; S=0x309470d5; converted property
@property(assign, nonatomic) ABPeoplePickerNavigationController *peoplePickerNavigationController;	// G=0x309480d5; S=0x309480e5; @synthesize=_peoplePickerNavigationController
@property(readonly, assign, nonatomic) UITableView *tableView;	// G=0x30946bfd; 
- (id)initWithModel:(id)model;	// 0x30946e7d
- (void)_applyAccessibilityFontChanges;	// 0x30946d45
- (void)_applyStylesToTableView:(id)tableView;	// 0x30947161
- (void)_updateDisplayedContactsFilterFromSelection;	// 0x30947e5d
- (int)abViewControllerType;	// 0x3094765d
- (void)accessibilityLargeTextDidChange;	// 0x30946d95
- (id)allGroupWrapperIndexPaths;	// 0x30977e99
- (void)applicationDidResume;	// 0x30947649
// declared property getter: - (id)dataSource;	// 0x309480c5
- (void)dealloc;	// 0x30946fed
- (void)done:(id)done;	// 0x30947661
// declared property getter: - (BOOL)hidesGlobalGroupWrapper;	// 0x30946e55
// declared property getter: - (BOOL)hidesSearchableSources;	// 0x30946e01
- (void)loadView;	// 0x3094737d
// converted property getter: - (id)model;	// 0x309470b5
- (void)modelDatabaseChange:(id)change;	// 0x30948095
// declared property getter: - (id)peoplePickerNavigationController;	// 0x309480d5
- (void)refreshEverythingNow;	// 0x30946acd
- (void)reloadData;	// 0x30946a69
// declared property setter: - (void)setHidesGlobalGroupWrapper:(BOOL)wrapper;	// 0x30946e29
// declared property setter: - (void)setHidesSearchableSources:(BOOL)sources;	// 0x30946dd5
// converted property setter: - (void)setModel:(id)model;	// 0x309470d5
// declared property setter: - (void)setPeoplePickerNavigationController:(id)controller;	// 0x309480e5
- (void)setStyleProvider:(id)provider;	// 0x30947311
// declared property getter: - (id)tableView;	// 0x30946bfd
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x30947ed1
- (float)tableView:(id)view heightForHeaderInSection:(int)section;	// 0x30947dc5
- (id)tableView:(id)view viewForHeaderInSection:(int)section;	// 0x30947a39
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x309476a1
- (void)updateRefreshButton;	// 0x30946b01
- (void)viewDidAppear:(BOOL)view;	// 0x309475b1
- (void)viewWillAppear:(BOOL)view;	// 0x309474e9
- (void)viewWillDisappear:(BOOL)view;	// 0x309475fd
@end

