/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRUserPasswordAuthenticator.h"

@class ATVFeedMerchant;

__attribute__((visibility("hidden")))
@interface ATVJSUserPasswordAuthenticator : BRUserPasswordAuthenticator {
	ATVFeedMerchant *_merchant;	// 12 = 0xc
}
- (id)initWithAccount:(id)account merchant:(id)merchant;	// 0x1736f1
- (void)_sendAuthenticationRequest;	// 0x1737dd
- (void)authenticationFinished:(id)finished;	// 0x173911
- (void)dealloc;	// 0x173761
@end
