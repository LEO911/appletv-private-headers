/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTextControl, BRImageControl, BRWaitSpinnerControl;

__attribute__((visibility("hidden")))
@interface SettingsBluetoothMediaMenuViewPreviewControl : BRControl {
	BRImageControl *_logo;	// 84 = 0x54
	BRTextControl *_searchingText;	// 88 = 0x58
	BRWaitSpinnerControl *_spinner;	// 92 = 0x5c
	BOOL _displayScanningMessage;	// 96 = 0x60
}
- (id)init;	// 0xb8241
- (void).cxx_destruct;	// 0xb87f5
- (void)layoutSubcontrols;	// 0xb8575
- (void)setDisplayScanningMessage:(BOOL)message;	// 0xb87c9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0xb84a5
@end

