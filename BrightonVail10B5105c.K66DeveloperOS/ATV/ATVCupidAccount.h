/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRUserPasswordAccount.h"

@class NSDictionary, AAAccount;

__attribute__((visibility("hidden")))
@interface ATVCupidAccount : BRUserPasswordAccount {
	AAAccount *_appleAccount;	// 40 = 0x28
	NSDictionary *_manifest;	// 44 = 0x2c
	BOOL _forceAuthentication;	// 48 = 0x30
	BOOL _authenticatedAfterBoot;	// 49 = 0x31
}
@property(retain) AAAccount *appleAccount;	// G=0xf5195; S=0xf51a9; @synthesize=_appleAccount
@property(assign, nonatomic) BOOL authenticatedAfterBoot;	// G=0xf51e9; S=0xf51f9; @synthesize=_authenticatedAfterBoot
@property(assign, nonatomic) BOOL forceAuthentication;	// G=0xf51c9; S=0xf51d9; @synthesize=_forceAuthentication
@property(retain, nonatomic) NSDictionary *manifest;	// G=0xf51b9; S=0xf4de5; @synthesize=_manifest
- (id)initWithCoder:(id)coder;	// 0xf4c15
- (void)_readProtectedInfo:(id)info;	// 0xf5035
- (void)_resetSession;	// 0xf513d
- (void)_writeProtectedInfo:(id)info;	// 0xf4f6d
// declared property getter: - (id)appleAccount;	// 0xf5195
// declared property getter: - (BOOL)authenticatedAfterBoot;	// 0xf51e9
- (void)dealloc;	// 0xf4ce9
- (void)encodeWithCoder:(id)coder;	// 0xf4c7d
// declared property getter: - (BOOL)forceAuthentication;	// 0xf51c9
- (BOOL)isAuthenticated;	// 0xf4e35
// declared property getter: - (id)manifest;	// 0xf51b9
// declared property setter: - (void)setAppleAccount:(id)account;	// 0xf51a9
// declared property setter: - (void)setAuthenticatedAfterBoot:(BOOL)boot;	// 0xf51f9
// declared property setter: - (void)setForceAuthentication:(BOOL)authentication;	// 0xf51d9
// declared property setter: - (void)setManifest:(id)manifest;	// 0xf4de5
- (void)setPassword:(id)password;	// 0xf4d95
- (id)type;	// 0xf4d79
- (void)willBeDeleted;	// 0xf4e95
@end

