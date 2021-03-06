/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRUserPasswordAuthenticator.h"


__attribute__((visibility("hidden")))
@interface ATVSharedCredentialsAuthenticator : BRUserPasswordAuthenticator {
	BRUserPasswordAuthenticator *_sharedAuthenticator;	// 12 = 0xc
	BOOL _usingSharedCredentials;	// 16 = 0x10
	BOOL _setSharedCredentialsIsEnabled;	// 17 = 0x11
}
@property(assign) BOOL setSharedCredentialsIsEnabled;	// G=0x1c4acd; S=0x1c4ae5; @synthesize=_setSharedCredentialsIsEnabled
@property(retain) BRUserPasswordAuthenticator *sharedAuthenticator;	// G=0x1c4a79; S=0x1c4a8d; @synthesize=_sharedAuthenticator
@property(assign) BOOL usingSharedCredentials;	// G=0x1c4a9d; S=0x1c4ab5; @synthesize=_usingSharedCredentials
- (id)initWithAccount:(id)account sharedAuthenticator:(id)authenticator;	// 0x1c4655
- (void)_handleAuthenticationCancelledWithError:(id)error;	// 0x1c4a31
- (void)_handleAuthenticationFailedWithError:(id)error;	// 0x1c49e9
- (void)_handleAuthenticationSucceeded;	// 0x1c49a5
- (BOOL)canSetSharedCredentials;	// 0x1c4815
- (BOOL)canUseSharedCredentials:(id *)credentials;	// 0x1c46e9
- (void)dealloc;	// 0x1c469d
- (BOOL)requiresPassword:(id *)password;	// 0x1c4955
- (BOOL)requiresUser:(id *)user;	// 0x1c4905
// declared property setter: - (void)setSetSharedCredentialsIsEnabled:(BOOL)enabled;	// 0x1c4ae5
// declared property setter: - (void)setSharedAuthenticator:(id)authenticator;	// 0x1c4a8d
- (void)setSharedCredentials;	// 0x1c4875
// declared property getter: - (BOOL)setSharedCredentialsIsEnabled;	// 0x1c4acd
// declared property setter: - (void)setUsingSharedCredentials:(BOOL)credentials;	// 0x1c4ab5
// declared property getter: - (id)sharedAuthenticator;	// 0x1c4a79
- (void)useSharedCredentials;	// 0x1c4779
// declared property getter: - (BOOL)usingSharedCredentials;	// 0x1c4a9d
@end

