/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRImageControl, NSMutableDictionary, BRTextControl;

__attribute__((visibility("hidden")))
@interface LTHDCPIndicatorControl : BRControl {
	NSMutableDictionary *_textAttrs;	// 84 = 0x54
	BRImageControl *_background;	// 88 = 0x58
	BRTextControl *_level;	// 92 = 0x5c
	BOOL _HDCPEnabled;	// 96 = 0x60
}
+ (void)hideHDCPIndicatorPopup;	// 0x5fa15
+ (void)showHDCPIndicatorPopup:(BOOL)popup;	// 0x5f865
- (id)init;	// 0x5fa65
- (void).cxx_destruct;	// 0x5fdfd
- (void)layoutSubcontrols;	// 0x5fc41
@end
