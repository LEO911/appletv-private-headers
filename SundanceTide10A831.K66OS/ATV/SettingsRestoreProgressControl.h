/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRTextControl, BRProgressBarWidget, BRImageControl;

__attribute__((visibility("hidden")))
@interface SettingsRestoreProgressControl : BRControl {
	BRImageControl *_image;	// 84 = 0x54
	BRProgressBarWidget *_progress;	// 88 = 0x58
	BRTextControl *_text;	// 92 = 0x5c
}
- (id)init;	// 0xb6cd5
- (void).cxx_destruct;	// 0xb7311
- (void)layoutSubcontrols;	// 0xb6f59
- (void)updatePercentComplete:(id)complete andTimeToComplete:(id)complete2;	// 0xb72c1
- (void)updateText:(id)text;	// 0xb71e1
@end
