/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, ATVAirPlayCRDModeMessageControl;

__attribute__((visibility("hidden")))
@interface SettingsAirPlayCRDModePreviewView : BRControl {
	ATVAirPlayCRDModeMessageControl *_messageControl;	// 84 = 0x54
	BRTextControl *_instructions;	// 88 = 0x58
}
- (id)init;	// 0x4d6549
- (void).cxx_destruct;	// 0x4d6941
- (id)accessibilityLabel;	// 0x4d6921
- (void)layoutSubcontrols;	// 0x4d6691
- (void)setInstructionText:(id)text withAttributes:(id)attributes;	// 0x4d68b9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x4d661d
@end
