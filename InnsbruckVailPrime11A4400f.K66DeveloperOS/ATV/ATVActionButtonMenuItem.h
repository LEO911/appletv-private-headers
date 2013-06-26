/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMenuItem;

__attribute__((visibility("hidden")))
@interface ATVActionButtonMenuItem : BRControl {
	BRMenuItem *_menuItem;	// 84 = 0x54
	BRControl *_actionButton;	// 88 = 0x58
	BRControl *_activeControl;	// 92 = 0x5c
	XXStruct_40SSZC _actionButtonPreferredSize;	// 96 = 0x60
}
@property(retain, nonatomic) BRControl *actionButton;	// G=0x7d59d; S=0x7d259; @synthesize=_actionButton
@property(assign, nonatomic) XXStruct_40SSZC actionButtonPreferredSize;	// G=0x7d5cd; S=0x7d5e5; @synthesize=_actionButtonPreferredSize
@property(assign, nonatomic) BRControl *activeControl;	// G=0x7d5bd; S=0x7d3c5; @synthesize=_activeControl
@property(retain, nonatomic) BRMenuItem *menuItem;	// G=0x7d5ad; S=0x7d01d; @synthesize=_menuItem
- (id)init;	// 0x7cfd5
- (void).cxx_destruct;	// 0x7d5f9
// declared property getter: - (id)actionButton;	// 0x7d59d
// declared property getter: - (XXStruct_40SSZC)actionButtonPreferredSize;	// 0x7d5cd
// declared property getter: - (id)activeControl;	// 0x7d5bd
- (BOOL)brEventAction:(id)action;	// 0x7d2b9
- (void)controlWasFocused;	// 0x7d41d
- (void)controlWasUnfocused;	// 0x7d449
- (CGRect)focusCursorFrame;	// 0x7d475
- (void)layoutSubcontrols;	// 0x7d091
// declared property getter: - (id)menuItem;	// 0x7d5ad
// declared property setter: - (void)setActionButton:(id)button;	// 0x7d259
// declared property setter: - (void)setActionButtonPreferredSize:(XXStruct_40SSZC)size;	// 0x7d5e5
// declared property setter: - (void)setActiveControl:(id)control;	// 0x7d3c5
// declared property setter: - (void)setMenuItem:(id)item;	// 0x7d01d
@end
