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
@property(assign) BOOL setSharedCredentialsIsEnabled;	// G=0x1bf415; S=0x1bf42d; @synthesize=_setSharedCredentialsIsEnabled
@property(retain) BRUserPasswordAuthenticator *sharedAuthenticator;	// G=0x1bf3c1; S=0x1bf3d5; @synthesize=_sharedAuthenticator
@property(assign) BOOL usingSharedCredentials;	// G=0x1bf3e5; S=0x1bf3fd; @synthesize=_usingSharedCredentials
- (id)initWithAccount:(id)account sharedAuthenticator:(id)authenticator;	// 0x1bef9d
- (void)_handleAuthenticationCancelledWithError:(id)error;	// 0x1bf379
- (void)_handleAuthenticationFailedWithError:(id)error;	// 0x1bf331
- (void)_handleAuthenticationSucceeded;	// 0x1bf2ed
- (BOOL)canSetSharedCredentials;	// 0x1bf15d
- (BOOL)canUseSharedCredentials:(id *)credentials;	// 0x1bf031
- (void)dealloc;	// 0x1befe5
- (BOOL)requiresPassword:(id *)password;	// 0x1bf29d
- (BOOL)requiresUser:(id *)user;	// 0x1bf24d
// declared property setter: - (void)setSetSharedCredentialsIsEnabled:(BOOL)enabled;	// 0x1bf42d
// declared property setter: - (void)setSharedAuthenticator:(id)authenticator;	// 0x1bf3d5
- (void)setSharedCredentials;	// 0x1bf1bd
// declared property getter: - (BOOL)setSharedCredentialsIsEnabled;	// 0x1bf415
// declared property setter: - (void)setUsingSharedCredentials:(BOOL)credentials;	// 0x1bf3fd
// declared property getter: - (id)sharedAuthenticator;	// 0x1bf3c1
- (void)useSharedCredentials;	// 0x1bf0c1
// declared property getter: - (BOOL)usingSharedCredentials;	// 0x1bf3e5
@end
