/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRAccountType, BRAuthenticator;

__attribute__((visibility("hidden")))
@interface BRAuthenticationManager : XXUnknownSuperclass {
	BOOL _isChangingAccounts;	// 4 = 0x4
	BRAccountType *_accountType;	// 8 = 0x8
	BRAuthenticator *__authenticator;	// 12 = 0xc
	id __authenticatorCreation;	// 16 = 0x10
}
@property(retain, nonatomic) BRAuthenticator *_authenticator;	// G=0x352fc9; S=0x352fd9; @synthesize=__authenticator
@property(copy, nonatomic) id _authenticatorCreation;	// G=0x352fe9; S=0x352ffd; @synthesize=__authenticatorCreation
@property(retain, nonatomic) BRAccountType *accountType;	// G=0x352fa9; S=0x352fb9; @synthesize=_accountType
+ (id)managerForAccountType:(id)accountType;	// 0x3534dd
+ (void)registerManager:(id)manager;	// 0x3533a5
- (id)initWithAccountType:(id)accountType authenticatorCreation:(id)creation;	// 0x352bc5
- (void)_accountManagerPreferredAccountEstablished:(id)established;	// 0x353075
- (void)_accountManagerPreferredAccountRemoved:(id)removed;	// 0x3530a5
- (void)_autenticationSucceededForAuthenticator:(id)authenticator accountChanged:(BOOL)changed;	// 0x352e3d
- (void)_authenticationCancelledForAuthenticator:(id)authenticator;	// 0x352f1d
- (void)_authenticationFailedForAuthenticator:(id)authenticator;	// 0x352ee5
- (void)_authenticationFinalizedForAuthenticator:(id)authenticator;	// 0x352f55
// declared property getter: - (id)_authenticator;	// 0x352fc9
// declared property getter: - (id)_authenticatorCreation;	// 0x352fe9
- (void)_changeCurrentAccountWithAccount:(id)account;	// 0x3530d5
- (void)_handlePreferredAccountChange:(id)change;	// 0x35300d
- (id)_selectAuthenticatorWithPreferredAccount:(id)preferredAccount;	// 0x353181
- (void)_sendNotificationWithActivity:(int)activity;	// 0x353311
// declared property getter: - (id)accountType;	// 0x352fa9
- (id)authenticatorWithAccount:(id)account;	// 0x352e2d
- (id)authenticatorWithNewAccount;	// 0x352dfd
- (id)currentAccount;	// 0x352dd9
- (void)dealloc;	// 0x352ce5
- (void)removeCurrentAccount;	// 0x352de9
// declared property setter: - (void)setAccountType:(id)type;	// 0x352fb9
// declared property setter: - (void)set_authenticator:(id)authenticator;	// 0x352fd9
// declared property setter: - (void)set_authenticatorCreation:(id)creation;	// 0x352ffd
@end
