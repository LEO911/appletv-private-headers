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
@interface BRModalMenuItem : BRControl {
	BRMenuItem *_menuItem;	// 84 = 0x54
	XXStruct_40SSZC _modeSwitchPreferredSize;	// 88 = 0x58
	BRControl *_modeSwitch;	// 96 = 0x60
	int _mode;	// 100 = 0x64
	id _onModeSwitch;	// 104 = 0x68
}
@property(retain, nonatomic) BRMenuItem *menuItem;	// G=0x40da69; S=0x40d669; @synthesize=_menuItem
@property(assign, nonatomic) int mode;	// G=0x40dab5; S=0x40dac5; @synthesize=_mode
@property(retain, nonatomic) BRControl *modeSwitch;	// G=0x40daa5; S=0x40d6c9; @synthesize=_modeSwitch
@property(assign, nonatomic) XXStruct_40SSZC modeSwitchPreferredSize;	// G=0x40da79; S=0x40da91; @synthesize=_modeSwitchPreferredSize
@property(copy, nonatomic) id onModeSwitch;	// G=0x40dad5; S=0x40dae9; @synthesize=_onModeSwitch
- (id)init;	// 0x40d619
- (void).cxx_destruct;	// 0x40daf9
- (BOOL)brEventAction:(id)action;	// 0x40d8fd
- (CGRect)focusCursorFrame;	// 0x40d98d
- (void)layoutSubcontrols;	// 0x40d73d
// declared property getter: - (id)menuItem;	// 0x40da69
// declared property getter: - (int)mode;	// 0x40dab5
// declared property getter: - (id)modeSwitch;	// 0x40daa5
// declared property getter: - (XXStruct_40SSZC)modeSwitchPreferredSize;	// 0x40da79
// declared property getter: - (id)onModeSwitch;	// 0x40dad5
// declared property setter: - (void)setMenuItem:(id)item;	// 0x40d669
// declared property setter: - (void)setMode:(int)mode;	// 0x40dac5
// declared property setter: - (void)setModeSwitch:(id)aSwitch;	// 0x40d6c9
// declared property setter: - (void)setModeSwitchPreferredSize:(XXStruct_40SSZC)size;	// 0x40da91
// declared property setter: - (void)setOnModeSwitch:(id)aSwitch;	// 0x40dae9
@end

