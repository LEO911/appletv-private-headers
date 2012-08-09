/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImage, NSString;

__attribute__((visibility("hidden")))
@interface BRPairingPinControl : BRControl {
	BRImage *_boxImage;	// 84 = 0x54
	NSString *_pin;	// 88 = 0x58
}
@property(retain) id PIN;	// G=0x2e22f9; S=0x2e2189; converted property
- (id)init;	// 0x2e2071
// converted property getter: - (id)PIN;	// 0x2e22f9
- (id)_layerForPINDigit:(id)pindigit;	// 0x2e24b5
- (id)accessibilityLabel;	// 0x2e2459
- (void)dealloc;	// 0x2e2125
- (void)layoutSubcontrols;	// 0x2e2309
// converted property setter: - (void)setPIN:(id)pin;	// 0x2e2189
@end
