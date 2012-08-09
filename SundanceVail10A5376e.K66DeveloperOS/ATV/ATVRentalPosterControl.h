/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRPosterControl.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface ATVRentalPosterControl : BRPosterControl {
	NSTimer *_expiryTextTimer;	// 268 = 0x10c
}
+ (id)posterForMediaItem:(id)mediaItem;	// 0x1f80f1
- (id)initWithMediaItem:(id)mediaItem;	// 0x1f817d
- (void)_expiryTextTimerFired:(id)fired;	// 0x1f8881
- (void)_itemCacheStateChanged:(id)changed;	// 0x1f88e5
- (void)_rentalItemPropertySet:(id)set;	// 0x1f8989
- (void)_startExpiryTextTimer;	// 0x1f87d5
- (void)_stopExpiryTextTimer;	// 0x1f8855
- (void)_updateTitleStrings;	// 0x1f856d
- (id)accessibilityLabel;	// 0x1f8999
- (BOOL)brEventAction:(id)action;	// 0x1f84cd
- (void)controlWasActivated;	// 0x1f83cd
- (void)controlWasDeactivated;	// 0x1f840d
- (void)controlWasFocused;	// 0x1f844d
- (void)controlWasUnfocused;	// 0x1f848d
- (void)dealloc;	// 0x1f8371
@end
