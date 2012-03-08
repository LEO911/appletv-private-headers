/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
 */

#import <DAAccount.h> // Unknown library
#import "DALDAP-Structs.h"

@class LDAPTaskManager, NSMutableSet;

@interface LDAPAccount : DAAccount {
	LDAPTaskManager *_taskManager;	// 64 = 0x40
	NSMutableSet *_searchTaskSet;	// 68 = 0x44
	dispatch_queue_s *_backgroundQueue;	// 72 = 0x48
	BOOL _isShuttingDown;	// 76 = 0x4c
}
@property(assign) int authType;	// G=0x36196ae9; S=0x36196b05; converted property
@property(readonly, assign) dispatch_queue_s *backgroundQueue;	// G=0x36196e75; @synthesize=_backgroundQueue
@property(retain) id host;	// G=0x3619692d; S=0x36196949; converted property
@property(assign, setter=setLDAPAccountVersion:) int ldapAccountVersion;	// G=0x3619681d; S=0x36196851; 
@property(assign, setter=setLDAPDidAutodiscovery:) BOOL ldapDidAutodiscovery;	// G=0x36196b21; S=0x36196b45; 
@property(assign) int port;	// G=0x361969c5; S=0x361969e1; converted property
@property(readonly, retain) LDAPTaskManager *taskManager;	// G=0x36194ec5; converted property
@property(assign) BOOL useSSL;	// G=0x36196a45; S=0x36196a65; converted property
@property(retain) id username;	// G=0x36196895; S=0x361968b1; converted property
+ (Class)accountClass;	// 0x36195321
+ (Class)clientClass;	// 0x3619533d
+ (Class)daemonClass;	// 0x36195359
+ (id)defaultProperties;	// 0x36195395
+ (id)displayedAccountTypeString;	// 0x36195e2d
+ (id)displayedShortAccountTypeString;	// 0x36195e39
+ (id)supportedDataclasses;	// 0x36195375
- (id)initWithProperties:(id)properties;	// 0x36194ed5
- (id)_oldURLsForKeychain;	// 0x36195ead
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x361961e5
- (BOOL)accountNeedsUpgrade;	// 0x36196639
- (void)addSearchSettings:(id)settings;	// 0x36195e55
// converted property getter: - (int)authType;	// 0x36196ae9
// declared property getter: - (dispatch_queue_s *)backgroundQueue;	// 0x36196e75
- (void)cancelAllSearchQueries;	// 0x36195661
- (void)cancelSearchQuery:(id)query;	// 0x36195519
- (void)checkValidityWithConsumer:(id)consumer;	// 0x36195ba9
- (id)connectionURL;	// 0x361967e1
- (id)connectionURLWithSSL:(BOOL)ssl;	// 0x36196749
- (void)dealloc;	// 0x36195295
- (id)displayName;	// 0x36195e45
// converted property getter: - (id)host;	// 0x3619692d
- (BOOL)isEqualToAccount:(id)account;	// 0x36196b65
- (BOOL)isLDAPAccount;	// 0x36196b61
- (int)keychainAccessibilityType;	// 0x361954c5
// declared property getter: - (int)ldapAccountVersion;	// 0x3619681d
// declared property getter: - (BOOL)ldapDidAutodiscovery;	// 0x36196b21
- (void)ldapGetDefaultSearchBaseTask:(id)task completedWithStatus:(int)status error:(id)error defaultSearchBase:(id)base;	// 0x36195c45
- (void)ldapSearchTask:(id)task finishedWithError:(id)error foundItems:(id)items;	// 0x361959f5
- (id)localizedIdenticalAccountFailureMessage;	// 0x36196d4d
- (id)localizedInvalidPasswordMessage;	// 0x36196dc5
- (void)performSearchQuery:(id)query;	// 0x3619573d
// converted property getter: - (int)port;	// 0x361969c5
- (id)propertiesToSave;	// 0x3619513d
- (void)removeSearchSettings:(id)settings;	// 0x36195e81
- (BOOL)resetCertWarnings;	// 0x3619672d
- (void)saveAccountSettings;	// 0x361954c9
- (id)searchSettings;	// 0x36196acd
// converted property setter: - (void)setAuthType:(int)type;	// 0x36196b05
// converted property setter: - (void)setHost:(id)host;	// 0x36196949
// declared property setter: - (void)setLDAPAccountVersion:(int)version;	// 0x36196851
// declared property setter: - (void)setLDAPDidAutodiscovery:(BOOL)autodiscovery;	// 0x36196b45
// converted property setter: - (void)setPort:(int)port;	// 0x361969e1
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x36196a65
// converted property setter: - (void)setUsername:(id)username;	// 0x361968b1
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x36196811
// converted property getter: - (id)taskManager;	// 0x36194ec5
- (BOOL)upgradeAccount;	// 0x361965b1
// converted property getter: - (BOOL)useSSL;	// 0x36196a45
// converted property getter: - (id)username;	// 0x36196895
@end
