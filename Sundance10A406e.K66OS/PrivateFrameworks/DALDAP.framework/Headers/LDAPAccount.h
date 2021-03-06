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
@property(assign) int authType;	// G=0x303a0f99; S=0x303a0fb5; converted property
@property(readonly, assign) NSObject<OS_dispatch_queue> *backgroundQueue;	// G=0x303a1305; @synthesize=_backgroundQueue
@property(retain) id host;	// G=0x303a0ddd; S=0x303a0df9; converted property
@property(assign, setter=setLDAPAccountVersion:) int ldapAccountVersion;	// G=0x303a0ccd; S=0x303a0d01; 
@property(assign, setter=setLDAPDidAutodiscovery:) BOOL ldapDidAutodiscovery;	// G=0x303a0fd1; S=0x303a0ff5; 
@property(assign) int port;	// G=0x303a0e75; S=0x303a0e91; converted property
@property(readonly, retain) LDAPTaskManager *taskManager;	// G=0x3039f38d; converted property
@property(assign) BOOL useSSL;	// G=0x303a0ef5; S=0x303a0f15; converted property
@property(retain) id username;	// G=0x303a0d45; S=0x303a0d61; converted property
+ (Class)accountClass;	// 0x3039f82d
+ (Class)clientClass;	// 0x3039f849
+ (Class)daemonClass;	// 0x3039f865
+ (id)defaultProperties;	// 0x3039f8a1
+ (id)displayedAccountTypeString;	// 0x303a0361
+ (id)displayedShortAccountTypeString;	// 0x303a036d
+ (id)supportedDataclasses;	// 0x3039f881
- (id)initWithProperties:(id)properties;	// 0x3039f39d
- (id)_oldURLsForKeychain;	// 0x303a03e1
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x303a06e5
- (BOOL)accountNeedsUpgrade;	// 0x303a0b49
- (void)addSearchSettings:(id)settings;	// 0x303a0389
// converted property getter: - (int)authType;	// 0x303a0f99
// declared property getter: - (id)backgroundQueue;	// 0x303a1305
- (void)cancelAllSearchQueries;	// 0x3039fb8d
- (void)cancelSearchQuery:(id)query;	// 0x3039fa29
- (void)checkValidityWithConsumer:(id)consumer;	// 0x303a00c5
- (id)connectionURL;	// 0x303a0c59
- (void)dealloc;	// 0x3039f791
- (id)displayName;	// 0x303a0379
// converted property getter: - (id)host;	// 0x303a0ddd
- (BOOL)isEqualToAccount:(id)account;	// 0x303a1015
- (BOOL)isLDAPAccount;	// 0x303a1011
- (int)keychainAccessibilityType;	// 0x3039f9d5
// declared property getter: - (int)ldapAccountVersion;	// 0x303a0ccd
// declared property getter: - (BOOL)ldapDidAutodiscovery;	// 0x303a0fd1
- (void)ldapGetDefaultSearchBaseTask:(id)task completedWithStatus:(int)status error:(id)error defaultSearchBase:(id)base;	// 0x303a0161
- (void)ldapSearchTask:(id)task finishedWithError:(id)error foundItems:(id)items;	// 0x3039ff2d
- (id)localizedIdenticalAccountFailureMessage;	// 0x303a11dd
- (id)localizedInvalidPasswordMessage;	// 0x303a1255
- (void)performSearchQuery:(id)query;	// 0x3039fc85
// converted property getter: - (int)port;	// 0x303a0e75
- (id)propertiesToSave;	// 0x3039f615
- (void)removeSearchSettings:(id)settings;	// 0x303a03b5
- (BOOL)resetCertWarnings;	// 0x303a0c3d
- (void)saveAccountSettings;	// 0x3039f9d9
- (id)searchSettings;	// 0x303a0f7d
// converted property setter: - (void)setAuthType:(int)type;	// 0x303a0fb5
// converted property setter: - (void)setHost:(id)host;	// 0x303a0df9
// declared property setter: - (void)setLDAPAccountVersion:(int)version;	// 0x303a0d01
// declared property setter: - (void)setLDAPDidAutodiscovery:(BOOL)autodiscovery;	// 0x303a0ff5
// converted property setter: - (void)setPort:(int)port;	// 0x303a0e91
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x303a0f15
// converted property setter: - (void)setUsername:(id)username;	// 0x303a0d61
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x303a0cc1
// converted property getter: - (id)taskManager;	// 0x3039f38d
- (BOOL)upgradeAccount;	// 0x303a0ac1
// converted property getter: - (BOOL)useSSL;	// 0x303a0ef5
// converted property getter: - (id)username;	// 0x303a0d45
@end

