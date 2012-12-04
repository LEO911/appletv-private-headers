/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface COMPUTERSTopShelfSharingView : BRControl {
	BRImageControl *_sharingImage;	// 84 = 0x54
	BRTextControl *_title;	// 88 = 0x58
	BRTextControl *_text;	// 92 = 0x5c
}
- (id)init;	// 0xc4901
- (void).cxx_destruct;	// 0xc4f59
- (void)_updateSharingImage;	// 0xc4d21
- (id)accessibilityLabel;	// 0xc4ee5
- (void)controlWasActivated;	// 0xc4ce1
- (void)layoutSubcontrols;	// 0xc4dd9
- (void)setTitle:(id)title andDescription:(id)description;	// 0xc4a09
@end
