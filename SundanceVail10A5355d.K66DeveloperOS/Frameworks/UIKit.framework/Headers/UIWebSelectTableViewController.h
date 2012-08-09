/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITableViewController.h"
#import "UIKeyInput.h"

@class DOMHTMLSelectElement, UIWebSelectPopover, NSArray;

__attribute__((visibility("hidden")))
@interface UIWebSelectTableViewController : UITableViewController <UIKeyInput> {
	DOMHTMLSelectElement *_selectionNode;	// 208 = 0xd0
	NSArray *_cachedItems;	// 212 = 0xd4
	NSArray *_groupsAndOptions;	// 216 = 0xd8
	unsigned _singleSelectionIndex;	// 220 = 0xdc
	unsigned _singleSelectionSection;	// 224 = 0xe0
	BOOL _allowsMultipleSelection;	// 228 = 0xe4
	float _fontSize;	// 232 = 0xe8
	float _maximumTextWidth;	// 236 = 0xec
	int _textAlignment;	// 240 = 0xf0
	UIWebSelectPopover *_popover;	// 244 = 0xf4
}
@property(retain, nonatomic) NSArray *_cachedItems;	// G=0x33c02501; S=0x33c02511; @synthesize
@property(retain, nonatomic) NSArray *_groupsAndOptions;	// G=0x33c024e1; S=0x33c024f1; @synthesize
@property(assign, nonatomic) UIWebSelectPopover *_popover;	// G=0x33c02521; S=0x33c02531; @synthesize
@property(retain, nonatomic) DOMHTMLSelectElement *_selectionNode;	// G=0x33c024c1; S=0x33c024d1; @synthesize
@property(assign, nonatomic) int autocapitalizationType;
@property(assign, nonatomic) int autocorrectionType;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
@property(assign, nonatomic) int keyboardAppearance;
@property(assign, nonatomic) int keyboardType;
@property(assign, nonatomic) int returnKeyType;
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(assign, nonatomic) int spellCheckingType;
- (id)initWithDOMHTMLSelectNode:(id)domhtmlselectNode cachedItems:(id)items singleSelectionIndex:(unsigned)index multipleSelection:(BOOL)selection;	// 0x33c018f5
// declared property getter: - (id)_cachedItems;	// 0x33c02501
// declared property getter: - (id)_groupsAndOptions;	// 0x33c024e1
- (BOOL)_isEmpty;	// 0x33c01551
- (id)_optionsForSection:(int)section;	// 0x33c01d59
// declared property getter: - (id)_popover;	// 0x33c02521
// declared property getter: - (id)_selectionNode;	// 0x33c024c1
- (void)_setupGroupsAndOptions;	// 0x33c01581
- (void)dealloc;	// 0x33c01a15
- (void)deleteBackward;	// 0x33c024bd
- (BOOL)hasText;	// 0x33c024b5
- (float)heightForItems;	// 0x33c01b1d
- (void)insertText:(id)text;	// 0x33c024b9
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x33c01c45
// declared property setter: - (void)set_cachedItems:(id)items;	// 0x33c02511
// declared property setter: - (void)set_groupsAndOptions:(id)options;	// 0x33c024f1
// declared property setter: - (void)set_popover:(id)popover;	// 0x33c02531
// declared property setter: - (void)set_selectionNode:(id)node;	// 0x33c024d1
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x33c01d91
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x33c020bd
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x33c01c89
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x33c01cf1
- (void)viewWillAppear:(BOOL)view;	// 0x33c01a81
@end
