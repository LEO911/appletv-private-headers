/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "UITableViewDataSource.h"
#import "AddressBookUI-Structs.h"
#import "UITableViewDelegate.h"
#import "ABSimpleTextInputViewControllerDelegate.h"
#import <UIView.h> // Unknown library

@class NSIndexPath, NSString, ABPropertyGroup, UITableView, NSMutableArray, ABStyleProvider;

@interface ABItemLabelPicker : UIView <UITableViewDataSource, UITableViewDelegate, ABSimpleTextInputViewControllerDelegate> {
@private
	id _delegate;	// 84 = 0x54
	id _editedItem;	// 88 = 0x58
	NSString *_savedLabel;	// 92 = 0x5c
	NSString *_selectedLabel;	// 96 = 0x60
	NSIndexPath *_selectedPath;	// 100 = 0x64
	UITableView *_tableView;	// 104 = 0x68
	NSMutableArray *_additionalLabels;	// 108 = 0x6c
	CFArrayRef _sortedCustomItemLabelInfos;	// 112 = 0x70
	CFArrayRef _sortedDefaultItemLabelInfos;	// 116 = 0x74
	void *_sortedCustomItemLabelInfosMemory;	// 120 = 0x78
	void *_sortedDefaultItemLabelInfosMemory;	// 124 = 0x7c
	ABPropertyGroup *_propertyGroup;	// 128 = 0x80
	int _property;	// 132 = 0x84
	int _itemIndex;	// 136 = 0x88
	void *_addressBook;	// 140 = 0x8c
	BOOL _addLabelDisabled;	// 144 = 0x90
	BOOL _didCreateNewLabel;	// 145 = 0x91
	ABStyleProvider *_styleProvider;	// 148 = 0x94
}
@property(assign, nonatomic, getter=isAddLabelDisabled) BOOL addLabelDisabled;	// G=0x34c96ded; S=0x34c96dfd; @synthesize=_addLabelDisabled
@property(assign, nonatomic) void *addressBook;	// G=0x34c954c1; S=0x34c9548d; @synthesize=_addressBook
@property(assign, nonatomic) BOOL didCreateNewLabel;	// G=0x34c96e2d; S=0x34c96e3d; @synthesize=_didCreateNewLabel
@property(retain) NSString *savedLabel;	// G=0x34c9556d; S=0x34c95529; converted property
@property(retain) NSString *selectedLabel;	// G=0x34c95831; S=0x34c95775; converted property
@property(retain, nonatomic) ABStyleProvider *styleProvider;	// G=0x34c96e0d; S=0x34c96e1d; @synthesize=_styleProvider
@property(readonly, assign, nonatomic) UITableView *tableView;	// G=0x34c96ddd; @synthesize=_tableView
+ (id)_defaultLabelsForProperty:(int)property person:(void *)person propertyGroup:(id)group index:(int)index addressBook:(void *)book outBestLabelIndex:(int *)index6 forceIncludeLabels:(id)labels;	// 0x34c7b189
+ (id)builtInLabelsForProperty:(int)property;	// 0x34c7b9fd
+ (CFDictionaryRef)copyLabelUsageForProperty:(int)property person:(void *)person;	// 0x34c9507d
+ (CFDictionaryRef)copyLabelUsageForPropertyGroup:(id)propertyGroup person:(void *)person;	// 0x34c94f61
+ (id)defaultLabelsForProperty:(int)property person:(void *)person addressBook:(void *)book outBestLabelIndex:(int *)index forceIncludeLabels:(id)labels;	// 0x34c95105
+ (id)defaultLabelsForProperty:(int)property policy:(void *)policy;	// 0x34c7be95
+ (id)defaultLabelsForPropertyGroup:(id)propertyGroup index:(int)index addressBook:(void *)book outBestLabelIndex:(int *)index4 forceIncludeLabels:(id)labels;	// 0x34c7b151
- (id)initWithFrame:(CGRect)frame;	// 0x34c95141
- (void)_didEndPickingAndConfirmed:(BOOL)confirmed animate:(BOOL)animate;	// 0x34c960a5
- (void)_matchSelectedPathWithSelectedLabel;	// 0x34c95639
- (void)_setSelectedLabel:(id)label;	// 0x34c955f5
- (void)_setSelectedLabel:(id)label atPath:(id)path;	// 0x34c9557d
- (void)_setSelectedPath:(id)path;	// 0x34c955b1
// declared property getter: - (void *)addressBook;	// 0x34c954c1
- (BOOL)allowsCustomLabels;	// 0x34c95841
- (void)buildUI;	// 0x34c95fad
- (BOOL)canEdit;	// 0x34c96101
- (void)createNewCustomLabel;	// 0x34c961d1
- (void)dealloc;	// 0x34c951a1
// declared property getter: - (BOOL)didCreateNewLabel;	// 0x34c96e2d
- (void)displayScrollerIndicators;	// 0x34c964a5
// declared property getter: - (BOOL)isAddLabelDisabled;	// 0x34c96ded
- (BOOL)isEditing;	// 0x34c96125
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x34c965bd
- (void)reloadData;	// 0x34c95f8d
- (void)reloadItemLabels;	// 0x34c959d1
- (void)resetLabelCaches;	// 0x34c953ad
// converted property getter: - (id)savedLabel;	// 0x34c9556d
// converted property getter: - (id)selectedLabel;	// 0x34c95831
// declared property setter: - (void)setAddLabelDisabled:(BOOL)disabled;	// 0x34c96dfd
- (void)setAdditionalLabels:(id)labels;	// 0x34c954ed
// declared property setter: - (void)setAddressBook:(void *)book;	// 0x34c9548d
- (void)setBackgroundColor:(id)color;	// 0x34c952e9
- (void)setDelegate:(id)delegate;	// 0x34c95f9d
// declared property setter: - (void)setDidCreateNewLabel:(BOOL)createNewLabel;	// 0x34c96e3d
- (void)setIsEditing:(BOOL)editing animate:(BOOL)animate;	// 0x34c96149
- (void)setPropertyGroup:(id)group itemIndex:(int)index;	// 0x34c95411
// converted property setter: - (void)setSavedLabel:(id)label;	// 0x34c95529
// converted property setter: - (void)setSelectedLabel:(id)label;	// 0x34c95775
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x34c96e1d
- (BOOL)shouldPopItem;	// 0x34c963c9
- (void)simpleTextInputViewController:(id)controller didCompleteWithValue:(id)value;	// 0x34c964c5
- (BOOL)simpleTextInputViewControllerShouldDismissKeyboard:(id)simpleTextInputViewController;	// 0x34c96571
// declared property getter: - (id)styleProvider;	// 0x34c96e0d
// declared property getter: - (id)tableView;	// 0x34c96ddd
- (BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;	// 0x34c96825
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x34c96641
- (void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;	// 0x34c96845
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x34c96c45
- (int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;	// 0x34c96d81
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x34c965e1
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x34c96bc5
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x34c96b49
- (void)toggleEditing;	// 0x34c96195
@end

