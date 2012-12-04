/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import <UIView.h> // Unknown library

@class NSArray, ABPersonTableTinyActionCell, NSMutableArray, UIButton;

@interface ABPersonTableTinyActionCellContentView : UIView {
	NSMutableArray *_actions;	// 84 = 0x54
	NSMutableArray *_buttons;	// 88 = 0x58
	UIButton *_highlightedButton;	// 92 = 0x5c
	ABPersonTableTinyActionCell *_cell;	// 96 = 0x60
}
@property(readonly, assign, nonatomic) NSArray *actions;	// G=0x3762e661; @synthesize=_actions
@property(assign, nonatomic) ABPersonTableTinyActionCell *cell;	// G=0x37682121; S=0x3762db99; @synthesize=_cell
// declared property getter: - (id)actions;	// 0x3762e661
// declared property getter: - (id)cell;	// 0x37682121
- (void)dealloc;	// 0x3763b2a1
- (void)layoutSubviews;	// 0x37636cd9
- (void)refreshActions;	// 0x3762dc09
// declared property setter: - (void)setCell:(id)cell;	// 0x3762db99
- (void)setFrame:(CGRect)frame;	// 0x3762daf5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3762e581
- (void)unhighlight;	// 0x376820f5
@end
