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
@property(retain, nonatomic) BRControl *actionButton;	// G=0x3a30cd; S=0x3a2d85; @synthesize=_actionButton
@property(assign, nonatomic) XXStruct_40SSZC actionButtonPreferredSize;	// G=0x3a30fd; S=0x3a3115; @synthesize=_actionButtonPreferredSize
@property(assign, nonatomic) BRControl *activeControl;	// G=0x3a30ed; S=0x3a2ed9; @synthesize=_activeControl
@property(retain, nonatomic) BRMenuItem *menuItem;	// G=0x3a30dd; S=0x3a2b5d; @synthesize=_menuItem
- (id)init;	// 0x3a2b0d
- (void).cxx_destruct;	// 0x3a3129
// declared property getter: - (id)actionButton;	// 0x3a30cd
// declared property getter: - (XXStruct_40SSZC)actionButtonPreferredSize;	// 0x3a30fd
// declared property getter: - (id)activeControl;	// 0x3a30ed
- (BOOL)brEventAction:(id)action;	// 0x3a2de5
- (void)controlWasFocused;	// 0x3a2f21
- (void)controlWasUnfocused;	// 0x3a2f4d
- (CGRect)focusCursorFrame;	// 0x3a2f79
- (void)layoutSubcontrols;	// 0x3a2bd1
// declared property getter: - (id)menuItem;	// 0x3a30dd
// declared property setter: - (void)setActionButton:(id)button;	// 0x3a2d85
// declared property setter: - (void)setActionButtonPreferredSize:(XXStruct_40SSZC)size;	// 0x3a3115
// declared property setter: - (void)setActiveControl:(id)control;	// 0x3a2ed9
// declared property setter: - (void)setMenuItem:(id)item;	// 0x3a2b5d
@end

