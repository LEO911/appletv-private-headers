/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import "AccountsDaemon-Structs.h"
#import <NSObject.h> // Unknown library
#import "ACDAccountStoreDelegate.h"

@class ACDDatabase, NSMutableSet, NSString, ACDAuthenticationPluginManager, ACDAccessPluginManager;

@interface ACDServer : NSObject <ACDAccountStoreDelegate> {
	NSMutableSet *_clientAccountStores;	// 4 = 0x4
	NSMutableSet *_daemonAccountStores;	// 8 = 0x8
	NSMutableSet *_clientOAuthSigners;	// 12 = 0xc
	NSMutableSet *_daemonOAuthSigners;	// 16 = 0x10
	ACDAuthenticationPluginManager *_authenticationPluginManager;	// 20 = 0x14
	ACDAccessPluginManager *_accessPluginManager;	// 24 = 0x18
	dispatch_queue_s *_queue;	// 28 = 0x1c
	ACDDatabase *_accountDatabase;	// 32 = 0x20
	NSString *_accountDatabasePath;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) ACDAccessPluginManager *accessPluginManager;	// G=0x355a25e9; 
@property(readonly, assign, nonatomic) ACDAuthenticationPluginManager *authenticationPluginManager;	// G=0x355a2591; 
@property(readonly, assign, nonatomic) ACDDatabase *database;	// G=0x355a363d; @synthesize=_accountDatabase
+ (id)sharedServer;	// 0x355a2081
- (id)init;	// 0x355a20d5
- (id)initWithAccountStorePath:(id)accountStorePath;	// 0x355a212d
- (void).cxx_destruct;	// 0x355a364d
- (void)_addAccountStoreProxy:(id)proxy;	// 0x355a2675
- (void)_addAccountStoreWithConnection:(xpc_connection_s *)connection;	// 0x355a28c1
- (void)_addOAuthSignerProxy:(id)proxy;	// 0x355a277d
- (void)_addOAuthSignerWithConnection:(xpc_connection_s *)connection;	// 0x355a2e3d
- (void)_beginObservingLanguageChangeNotfication;	// 0x355a3359
- (id)_clientForConnection:(xpc_connection_s *)connection;	// 0x355a2885
- (BOOL)_databaseExists;	// 0x355a3301
- (void)_removeAccountStoreProxy:(id)proxy;	// 0x355a26f9
- (void)_removeOAuthSignerProxy:(id)proxy;	// 0x355a2801
- (void)_stopObservingLanguageChangeNotification;	// 0x355a3389
// declared property getter: - (id)accessPluginManager;	// 0x355a25e9
- (void)accountStoreDidSaveAccounts;	// 0x355a33a9
// declared property getter: - (id)authenticationPluginManager;	// 0x355a2591
- (void)credentialsDidChangeForAccountWithIdentifier:(id)credentials;	// 0x355a3409
// declared property getter: - (id)database;	// 0x355a363d
- (void)dealloc;	// 0x355a2251
- (void)setUpWithAccountStoreConnection:(xpc_connection_s *)accountStoreConnection oauthSignerConnection:(xpc_connection_s *)connection onQueue:(dispatch_queue_s *)queue;	// 0x355a22a5
@end

