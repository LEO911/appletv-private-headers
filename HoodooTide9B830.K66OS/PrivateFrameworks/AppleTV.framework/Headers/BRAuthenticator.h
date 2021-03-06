/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class BRAuthenticationController, BRAccount;
@protocol BRAuthenticatorDelegate;

@interface BRAuthenticator : NSObject {
@private
	BOOL _isAuthenticating;	// 4 = 0x4
	int _accountChangedState;	// 8 = 0x8
	id<BRAuthenticatorDelegate> _delegate;	// 12 = 0xc
	BOOL _failedOnce;	// 16 = 0x10
	unsigned _scope;	// 20 = 0x14
	BRAccount *_account;	// 24 = 0x18
	BRAuthenticationController *_authenticationController;	// 28 = 0x1c
	id _resources;	// 32 = 0x20
}
@property(readonly, assign) BRAccount *account;	// G=0x32a76791; @synthesize=_account
@property(assign) BRAuthenticationController *authenticationController;	// G=0x32a76459; S=0x32a76469; @synthesize=_authenticationController
@property(assign) id<BRAuthenticatorDelegate> delegate;	// G=0x32a76751; S=0x32a76761; @synthesize=_delegate
@property(readonly, assign) BOOL failedOnce;	// G=0x32a76771; @synthesize=_failedOnce
@property(retain) id resources;	// G=0x32a767a1; S=0x32a767b5; @synthesize=_resources
@property(readonly, assign) unsigned scope;	// G=0x32a76781; @synthesize=_scope
- (id)initWithAccount:(id)account scope:(unsigned)scope;	// 0x32a76345
- (void)_cleanupAuthentication;	// 0x32a76e9d
- (void)_handleAuthenticationCancelledWithError:(id)error;	// 0x32a76d21
- (void)_handleAuthenticationFailedWithError:(id)error;	// 0x32a7699d
- (void)_handleAuthenticationSucceeded;	// 0x32a767d9
- (BOOL)_isAuthorizing;	// 0x32a76e0d
- (void)_postAuthenticationCancelledWithError:(id)error;	// 0x32a77019
- (void)_postAuthenticationSucceeded:(BOOL)succeeded;	// 0x32a76eb9
- (unsigned)_scopeToSet;	// 0x32a76dfd
- (void)_setAccountChangedState:(int)state;	// 0x32a76ea1
// declared property getter: - (id)account;	// 0x32a76791
- (void)authenticate;	// 0x32a765b1
// declared property getter: - (id)authenticationController;	// 0x32a76459
- (void)dealloc;	// 0x32a763f9
// declared property getter: - (id)delegate;	// 0x32a76751
// declared property getter: - (BOOL)failedOnce;	// 0x32a76771
- (void)logout;	// 0x32a76741
- (id)makeAuthenticationController;	// 0x32a76559
- (BOOL)requiresAuthentication;	// 0x32a7655d
- (id)resourceForKey:(id)key defaultValue:(id)value;	// 0x32a76479
// declared property getter: - (id)resources;	// 0x32a767a1
// declared property getter: - (unsigned)scope;	// 0x32a76781
// declared property setter: - (void)setAuthenticationController:(id)controller;	// 0x32a76469
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32a76761
// declared property setter: - (void)setResources:(id)resources;	// 0x32a767b5
@end

