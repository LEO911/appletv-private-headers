/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "YTAuthenticatorDelegate.h"
#import "BRDefaultAuthenticationManager.h"


__attribute__((visibility("hidden")))
@interface RUIYTAuthenticationManager : BRDefaultAuthenticationManager <YTAuthenticatorDelegate> {
}
- (id)init;	// 0x28b3cd
- (void)_accountRemoved:(id)removed;	// 0x28b7f1
- (void)_authenticationCancelledForAuthenticator:(id)authenticator;	// 0x28b939
- (id)_currentAccount;	// 0x28b69d
- (void)_removeDuplicatesOfAccount:(id)account;	// 0x28babd
- (void)authenticatorNeedsAccountAndPassword:(id)password;	// 0x28b9c1
@end

