/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKeyInput.h"
#import "UITableViewController.h"

@class NSArray, DOMHTMLSelectElement, UIWebSelectPopover;

__attribute__((visibility("hidden")))
@interface UIWebSelectTableViewController : UITableViewController <UIKeyInput> {
@private
	DOMHTMLSelectElement *_selectionNode;	// 144 = 0x90
	NSArray *_cachedItems;	// 148 = 0x94
	unsigned _singleSelectionIndex;	// 152 = 0x98
	BOOL _allowsMultipleSelection;	// 156 = 0x9c
	float _fontSize;	// 160 = 0xa0
	float _maximumTextWidth;	// 164 = 0xa4
	UIWebSelectPopover *_popover;	// 168 = 0xa8
}
@property(retain, nonatomic) NSArray *_cachedItems;	// G=0x30744375; S=0x30744f05; @synthesize
@property(assign, nonatomic) UIWebSelectPopover *_popover;	// G=0x30744335; S=0x30744345; @synthesize
@property(retain, nonatomic) DOMHTMLSelectElement *_selectionNode;	// G=0x30744385; S=0x30744edd; @synthesize
@property(assign, nonatomic) unsigned _singleSelectionIndex;	// G=0x30744355; S=0x30744365; @synthesize
@property(assign, nonatomic) int autocapitalizationType;
@property(assign, nonatomic) int autocorrectionType;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
@property(assign, nonatomic) int keyboardAppearance;
@property(assign, nonatomic) int keyboardType;
@property(assign, nonatomic) int returnKeyType;
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
- (id)initWithDOMHTMLSelectNode:(id)domhtmlselectNode cachedItems:(id)items singleSelectionIndex:(unsigned)index multipleSelection:(BOOL)selection;	// 0x30744b91
// declared property getter: - (id)_cachedItems;	// 0x30744375
- (BOOL)_hasItems;	// 0x30744531
// declared property getter: - (id)_popover;	// 0x30744335
// declared property getter: - (id)_selectionNode;	// 0x30744385
// declared property getter: - (unsigned)_singleSelectionIndex;	// 0x30744355
- (void)dealloc;	// 0x30744b41
- (void)deleteBackward;	// 0x30744331
- (BOOL)hasText;	// 0x30744329
- (float)heightForItems;	// 0x307444a1
- (void)insertText:(id)text;	// 0x3074432d
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x30744325
// declared property setter: - (void)set_cachedItems:(id)items;	// 0x30744f05
// declared property setter: - (void)set_popover:(id)popover;	// 0x30744345
// declared property setter: - (void)set_selectionNode:(id)node;	// 0x30744edd
// declared property setter: - (void)set_singleSelectionIndex:(unsigned)index;	// 0x30744365
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x30745bb1
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x3074533d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x30744465
- (void)viewWillAppear:(BOOL)view;	// 0x30744abd
@end
