/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITableViewController.h"
#import "UIKeyInput.h"

@class NSArray, DOMHTMLSelectElement, UIWebSelectPopover;

__attribute__((visibility("hidden")))
@interface UIWebSelectTableViewController : UITableViewController <UIKeyInput> {
@private
	DOMHTMLSelectElement *_selectionNode;	// 172 = 0xac
	NSArray *_cachedItems;	// 176 = 0xb0
	unsigned _singleSelectionIndex;	// 180 = 0xb4
	BOOL _allowsMultipleSelection;	// 184 = 0xb8
	float _fontSize;	// 188 = 0xbc
	float _maximumTextWidth;	// 192 = 0xc0
	int _textAlignment;	// 196 = 0xc4
	UIWebSelectPopover *_popover;	// 200 = 0xc8
}
@property(retain, nonatomic) NSArray *_cachedItems;	// G=0x330d76a1; S=0x330d76b1; @synthesize
@property(assign, nonatomic) UIWebSelectPopover *_popover;	// G=0x330d76f5; S=0x330d7705; @synthesize
@property(retain, nonatomic) DOMHTMLSelectElement *_selectionNode;	// G=0x330d766d; S=0x330d767d; @synthesize
@property(assign, nonatomic) unsigned _singleSelectionIndex;	// G=0x330d76d5; S=0x330d76e5; @synthesize
@property(assign, nonatomic) int autocapitalizationType;
@property(assign, nonatomic) int autocorrectionType;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
@property(assign, nonatomic) int keyboardAppearance;
@property(assign, nonatomic) int keyboardType;
@property(assign, nonatomic) int returnKeyType;
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(assign, nonatomic) int spellCheckingType;
- (id)initWithDOMHTMLSelectNode:(id)domhtmlselectNode cachedItems:(id)items singleSelectionIndex:(unsigned)index multipleSelection:(BOOL)selection;	// 0x330d6d45
// declared property getter: - (id)_cachedItems;	// 0x330d76a1
- (BOOL)_hasItems;	// 0x330d6d15
// declared property getter: - (id)_popover;	// 0x330d76f5
// declared property getter: - (id)_selectionNode;	// 0x330d766d
// declared property getter: - (unsigned)_singleSelectionIndex;	// 0x330d76d5
- (void)dealloc;	// 0x330d6e41
- (void)deleteBackward;	// 0x330d7669
- (BOOL)hasText;	// 0x330d7661
- (float)heightForItems;	// 0x330d6f29
- (void)insertText:(id)text;	// 0x330d7665
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x330d6fc9
// declared property setter: - (void)set_cachedItems:(id)items;	// 0x330d76b1
// declared property setter: - (void)set_popover:(id)popover;	// 0x330d7705
// declared property setter: - (void)set_selectionNode:(id)node;	// 0x330d767d
// declared property setter: - (void)set_singleSelectionIndex:(unsigned)index;	// 0x330d76e5
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x330d7011
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x330d7335
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x330d6fcd
- (void)viewWillAppear:(BOOL)view;	// 0x330d6e99
@end
