/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRPosterControl.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface ATVRentalPosterControl : BRPosterControl {
@private
	NSTimer *_expiryTextTimer;	// 240 = 0xf0
}
+ (id)posterForMediaItem:(ATVMediaItemRef)mediaItem;	// 0x3291ec1d
- (id)initWithMediaItem:(ATVMediaItemRef)mediaItem;	// 0x3291ecb9
- (void)_expiryTextTimerFired:(id)fired;	// 0x3291f3dd
- (void)_itemCacheStateChanged:(id)changed;	// 0x3291f43d
- (void)_rentalItemPropertySet:(id)set;	// 0x3291f4e1
- (void)_startExpiryTextTimer;	// 0x3291f329
- (void)_stopExpiryTextTimer;	// 0x3291f3ad
- (void)_updateTitleStrings;	// 0x3291f0ad
- (id)accessibilityLabel;	// 0x3291f4f1
- (BOOL)brEventAction:(id)action;	// 0x3291f00d
- (void)controlWasActivated;	// 0x3291ef0d
- (void)controlWasDeactivated;	// 0x3291ef4d
- (void)controlWasFocused;	// 0x3291ef8d
- (void)controlWasUnfocused;	// 0x3291efcd
- (void)dealloc;	// 0x3291eeb1
@end
