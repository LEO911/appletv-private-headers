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
- (id)initWithAccount:(id)account merchant:(id)merchant;	// 0x1627e9
- (void)_sendAuthenticationRequest;	// 0x1628d5
- (void)authenticationFinished:(id)finished;	// 0x162a09
- (void)dealloc;	// 0x162859
@end

