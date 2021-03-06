/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRWaitSpinnerControl : BRControl {
	BOOL _spins;	// 84 = 0x54
	CGImageRef _spinnerImage;	// 88 = 0x58
}
@property(assign) BOOL spins;	// G=0x32d861; S=0x32d501; converted property
- (id)init;	// 0x32d2a9
- (void)_setAnimation;	// 0x32d599
- (id)accessibilityLabel;	// 0x32d935
- (void)controlWasActivated;	// 0x32d871
- (void)controlWasDeactivated;	// 0x32d8c1
- (void)dealloc;	// 0x32d4c1
- (BOOL)isAccessibilityElement;	// 0x32d931
// converted property setter: - (void)setSpins:(BOOL)spins;	// 0x32d501
// converted property getter: - (BOOL)spins;	// 0x32d861
@end

