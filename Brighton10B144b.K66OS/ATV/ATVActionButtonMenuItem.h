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
@property(retain, nonatomic) BRControl *actionButton;	// G=0x3cb561; S=0x3cb209; @synthesize=_actionButton
@property(assign, nonatomic) XXStruct_40SSZC actionButtonPreferredSize;	// G=0x3cb591; S=0x3cb5a9; @synthesize=_actionButtonPreferredSize
@property(assign, nonatomic) BRControl *activeControl;	// G=0x3cb581; S=0x3cb35d; @synthesize=_activeControl
@property(retain, nonatomic) BRMenuItem *menuItem;	// G=0x3cb571; S=0x3cafe1; @synthesize=_menuItem
- (id)init;	// 0x3caf91
- (void).cxx_destruct;	// 0x3cb5bd
// declared property getter: - (id)actionButton;	// 0x3cb561
// declared property getter: - (XXStruct_40SSZC)actionButtonPreferredSize;	// 0x3cb591
// declared property getter: - (id)activeControl;	// 0x3cb581
- (BOOL)brEventAction:(id)action;	// 0x3cb269
- (void)controlWasFocused;	// 0x3cb3a5
- (void)controlWasUnfocused;	// 0x3cb3d1
- (CGRect)focusCursorFrame;	// 0x3cb3fd
- (void)layoutSubcontrols;	// 0x3cb055
// declared property getter: - (id)menuItem;	// 0x3cb571
// declared property setter: - (void)setActionButton:(id)button;	// 0x3cb209
// declared property setter: - (void)setActionButtonPreferredSize:(XXStruct_40SSZC)size;	// 0x3cb5a9
// declared property setter: - (void)setActiveControl:(id)control;	// 0x3cb35d
// declared property setter: - (void)setMenuItem:(id)item;	// 0x3cafe1
@end
