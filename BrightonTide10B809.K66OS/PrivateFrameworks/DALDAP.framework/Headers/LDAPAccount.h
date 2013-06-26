/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
 */

#import <DAAccount.h> // Unknown library

@class NSMutableSet, NSObject, LDAPTaskManager;
@protocol OS_dispatch_queue;

@interface LDAPAccount : DAAccount {
	LDAPTaskManager *_taskManager;	// 60 = 0x3c
	NSMutableSet *_searchTaskSet;	// 64 = 0x40
	NSObject<OS_dispatch_queue> *_backgroundQueue;	// 68 = 0x44
	BOOL _isShuttingDown;	// 72 = 0x48
}
@property(assign) int authType;	// G=0x33a60f95; S=0x33a60fb1; converted property
@property(readonly, assign) NSObject<OS_dispatch_queue> *backgroundQueue;	// G=0x33a61301; @synthesize=_backgroundQueue
@property(retain) id host;	// G=0x33a60dd9; S=0x33a60df5; converted property
@property(assign, setter=setLDAPAccountVersion:) int ldapAccountVersion;	// G=0x33a60cc9; S=0x33a60cfd; 
@property(assign, setter=setLDAPDidAutodiscovery:) BOOL ldapDidAutodiscovery;	// G=0x33a60fcd; S=0x33a60ff1; 
@property(assign) int port;	// G=0x33a60e71; S=0x33a60e8d; converted property
@property(readonly, retain) LDAPTaskManager *taskManager;	// G=0x33a5f389; converted property
@property(assign) BOOL useSSL;	// G=0x33a60ef1; S=0x33a60f11; converted property
@property(retain) id username;	// G=0x33a60d41; S=0x33a60d5d; converted property
+ (Class)accountClass;	// 0x33a5f829
+ (Class)clientClass;	// 0x33a5f845
+ (Class)daemonClass;	// 0x33a5f861
+ (id)defaultProperties;	// 0x33a5f89d
+ (id)displayedAccountTypeString;	// 0x33a6035d
+ (id)displayedShortAccountTypeString;	// 0x33a60369
+ (id)supportedDataclasses;	// 0x33a5f87d
- (id)initWithProperties:(id)properties;	// 0x33a5f399
- (id)_oldURLsForKeychain;	// 0x33a603dd
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x33a606e1
- (BOOL)accountNeedsUpgrade;	// 0x33a60b45
- (void)addSearchSettings:(id)settings;	// 0x33a60385
// converted property getter: - (int)authType;	// 0x33a60f95
// declared property getter: - (id)backgroundQueue;	// 0x33a61301
- (void)cancelAllSearchQueries;	// 0x33a5fb89
- (void)cancelSearchQuery:(id)query;	// 0x33a5fa25
- (void)checkValidityWithConsumer:(id)consumer;	// 0x33a600c1
- (id)connectionURL;	// 0x33a60c55
- (void)dealloc;	// 0x33a5f78d
- (id)displayName;	// 0x33a60375
// converted property getter: - (id)host;	// 0x33a60dd9
- (BOOL)isEqualToAccount:(id)account;	// 0x33a61011
- (BOOL)isLDAPAccount;	// 0x33a6100d
- (int)keychainAccessibilityType;	// 0x33a5f9d1
// declared property getter: - (int)ldapAccountVersion;	// 0x33a60cc9
// declared property getter: - (BOOL)ldapDidAutodiscovery;	// 0x33a60fcd
- (void)ldapGetDefaultSearchBaseTask:(id)task completedWithStatus:(int)status error:(id)error defaultSearchBase:(id)base;	// 0x33a6015d
- (void)ldapSearchTask:(id)task finishedWithError:(id)error foundItems:(id)items;	// 0x33a5ff29
- (id)localizedIdenticalAccountFailureMessage;	// 0x33a611d9
- (id)localizedInvalidPasswordMessage;	// 0x33a61251
- (void)performSearchQuery:(id)query;	// 0x33a5fc81
// converted property getter: - (int)port;	// 0x33a60e71
- (id)propertiesToSave;	// 0x33a5f611
- (void)removeSearchSettings:(id)settings;	// 0x33a603b1
- (BOOL)resetCertWarnings;	// 0x33a60c39
- (void)saveAccountSettings;	// 0x33a5f9d5
- (id)searchSettings;	// 0x33a60f79
// converted property setter: - (void)setAuthType:(int)type;	// 0x33a60fb1
// converted property setter: - (void)setHost:(id)host;	// 0x33a60df5
// declared property setter: - (void)setLDAPAccountVersion:(int)version;	// 0x33a60cfd
// declared property setter: - (void)setLDAPDidAutodiscovery:(BOOL)autodiscovery;	// 0x33a60ff1
// converted property setter: - (void)setPort:(int)port;	// 0x33a60e8d
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x33a60f11
// converted property setter: - (void)setUsername:(id)username;	// 0x33a60d5d
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x33a60cbd
// converted property getter: - (id)taskManager;	// 0x33a5f389
- (BOOL)upgradeAccount;	// 0x33a60abd
// converted property getter: - (BOOL)useSSL;	// 0x33a60ef1
// converted property getter: - (id)username;	// 0x33a60d41
@end
