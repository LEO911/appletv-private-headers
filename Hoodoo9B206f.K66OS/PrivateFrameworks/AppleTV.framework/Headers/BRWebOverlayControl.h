/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRPanelControl.h"


__attribute__((visibility("hidden")))
@interface BRWebOverlayControl : BRPanelControl {
@private
	BOOL _currentlyShowing;	// 76 = 0x4c
}
- (id)init;	// 0x366e3941
- (BOOL)brEventAction:(id)action;	// 0x366e3af5
- (void)hideControl;	// 0x366e3d25
- (BOOL)isShowing;	// 0x366e3ed1
- (void)showControl;	// 0x366e3b55
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x366e3a6d
- (void)toggleShownHidden;	// 0x366e3e9d
@end

