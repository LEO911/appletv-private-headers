/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class NSString, BRHeaderControl, BRTextControl, BRWaitSpinnerControl;

__attribute__((visibility("hidden")))
@interface ATVAPDirectedScanController : BRController {
	BRWaitSpinnerControl *_spinner;	// 100 = 0x64
	NSString *_networkName;	// 104 = 0x68
	BRHeaderControl *_header;	// 108 = 0x6c
	BRTextControl *_prompt;	// 112 = 0x70
}
- (id)initWithNetworkName:(id)networkName;	// 0x2147b5
- (void)dealloc;	// 0x214999
- (void)setFrame:(CGRect)frame;	// 0x214a25
@end

