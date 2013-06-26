/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRUserPasswordAuthenticator.h"


__attribute__((visibility("hidden")))
@interface ATVSharedCredentialsAuthenticator : BRUserPasswordAuthenticator {
	BOOL _usingSharedCredentials;	// 12 = 0xc
	BOOL _setSharedCredentialsIsEnabled;	// 13 = 0xd
	BRUserPasswordAuthenticator *_sharedAuthenticator;	// 16 = 0x10
}
@property(assign) BOOL setSharedCredentialsIsEnabled;	// G=0x1878bd; S=0x1878d5; @synthesize=_setSharedCredentialsIsEnabled
@property(retain) BRUserPasswordAuthenticator *sharedAuthenticator;	// G=0x187869; S=0x18787d; @synthesize=_sharedAuthenticator
@property(assign) BOOL usingSharedCredentials;	// G=0x18788d; S=0x1878a5; @synthesize=_usingSharedCredentials
- (id)initWithAccount:(id)account sharedAuthenticator:(id)authenticator;	// 0x187445
- (void)_handleAuthenticationCancelledWithError:(id)error;	// 0x187821
- (void)_handleAuthenticationFailedWithError:(id)error;	// 0x1877d9
- (void)_handleAuthenticationSucceeded;	// 0x187795
- (BOOL)canSetSharedCredentials;	// 0x187605
- (BOOL)canUseSharedCredentials:(id *)credentials;	// 0x1874d9
- (void)dealloc;	// 0x18748d
- (BOOL)requiresPassword:(id *)password;	// 0x187745
- (BOOL)requiresUser:(id *)user;	// 0x1876f5
// declared property setter: - (void)setSetSharedCredentialsIsEnabled:(BOOL)enabled;	// 0x1878d5
// declared property setter: - (void)setSharedAuthenticator:(id)authenticator;	// 0x18787d
- (void)setSharedCredentials;	// 0x187665
// declared property getter: - (BOOL)setSharedCredentialsIsEnabled;	// 0x1878bd
// declared property setter: - (void)setUsingSharedCredentials:(BOOL)credentials;	// 0x1878a5
// declared property getter: - (id)sharedAuthenticator;	// 0x187869
- (void)useSharedCredentials;	// 0x187569
// declared property getter: - (BOOL)usingSharedCredentials;	// 0x18788d
@end
