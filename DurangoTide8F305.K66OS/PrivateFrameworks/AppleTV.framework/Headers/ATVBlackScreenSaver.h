/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "ATVScreenSaverPluginProtocol.h"

@class BRControl;

__attribute__((visibility("hidden")))
@interface ATVBlackScreenSaver : NSObject <ATVScreenSaverPluginProtocol> {
@private
	BRControl *_blackShroudOfDeath;	// 4 = 0x4
}
- (id)init;	// 0x3076d345
- (void)dealloc;	// 0x3076d2fd
- (id)screenSaverControl;	// 0x3076d2e9
- (void)setScreenSaverAutoFired:(BOOL)fired;	// 0x3076d2f9
@end
