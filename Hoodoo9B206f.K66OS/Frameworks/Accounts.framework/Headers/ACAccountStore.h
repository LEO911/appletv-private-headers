/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <NSObject.h> // Unknown library
#import "XPCProxyTarget.h"
#import "Accounts-Structs.h"

@class NSArray;

@interface ACAccountStore : NSObject <XPCProxyTarget> {
@private
	id _accountStoreProxy;	// 4 = 0x4
	dispatch_queue_s *_connectionQueue;	// 8 = 0x8
	xpc_connection_s *_connection;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSArray *accounts;	// G=0x351aa855; 
+ (int)accountsWithAccountTypeIdentifierExist:(id)accountTypeIdentifierExist;	// 0x351ad23d
- (id)init;	// 0x351aa3f9
- (void)_noteAccountStoreConnectionInterrupted;	// 0x351ad085
- (id)accountTypeWithAccountTypeIdentifier:(id)accountTypeIdentifier;	// 0x351aa669
- (id)accountWithIdentifier:(id)identifier;	// 0x351aa47d
// declared property getter: - (id)accounts;	// 0x351aa855
- (id)accountsWithAccountType:(id)accountType;	// 0x351aaab9
- (void)addAccount:(id)account;	// 0x351ac0fd
- (id)allAccountTypes;	// 0x351abdbd
- (id)allDataclasses;	// 0x351abf5d
- (id)appPermissionsForAccountType:(id)accountType;	// 0x351acc15
- (id)childAccountsForAccount:(id)account;	// 0x351ac6bd
- (void)clearPermissionGrantedForBundleID:(id)bundleID onAccountType:(id)type;	// 0x351ace79
- (id)credentialForAccount:(id)account;	// 0x351ac32d
- (void)dealloc;	// 0x351aa43d
- (id)enabledDataclassesForAccount:(id)account;	// 0x351ac885
- (void)establishAccountStoreConnection;	// 0x351aa0f5
- (void)insertAccountType:(id)type withCompletionHandler:(id)completionHandler;	// 0x351aad21
- (id)parentAccountForAccount:(id)account;	// 0x351ac4f5
- (BOOL)permissionForAccountType:(id)accountType;	// 0x351acf11
- (id)provisionedDataclassesForAccount:(id)account;	// 0x351aca4d
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x351ad16d
- (void)removeAccount:(id)account withCompletionHandler:(id)completionHandler;	// 0x351ab049
- (void)removeAccountType:(id)type withCompletionHandler:(id)completionHandler;	// 0x351aaf21
- (void)requestAccessToAccountsWithType:(id)type withCompletionHandler:(id)completionHandler;	// 0x351abbe9
- (void)saveAccount:(id)account forPID:(id)pid withCompletionHandler:(id)completionHandler;	// 0x351ab90d
- (void)saveAccount:(id)account withCompletionHandler:(id)completionHandler;	// 0x351ab1dd
- (void)sendAccountDatabaseDidChangeNotificationWithHandler:(id)sendAccountDatabase;	// 0x351ad0b1
- (void)setPermissionGranted:(BOOL)granted forBundleID:(id)bundleID onAccountType:(id)type;	// 0x351acdb9
- (void)tearDownAccountStoreConnection;	// 0x351aa071
- (id)typeForAccount:(id)account;	// 0x351ac11d
- (void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)typeIdentifier;	// 0x351ad1a9
@end
