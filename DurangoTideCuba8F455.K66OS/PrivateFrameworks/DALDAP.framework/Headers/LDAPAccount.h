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
@property(assign) int authType;	// G=0x31eca8a5; S=0x31eca889; converted property
@property(readonly, assign) dispatch_queue_s *backgroundQueue;	// G=0x31eca541; @synthesize=_backgroundQueue
@property(retain) id host;	// G=0x31ecaa65; S=0x31eca9e9; converted property
@property(assign, setter=setLDAPAccountVersion:) int ldapAccountVersion;	// G=0x31ecab55; S=0x31ecab19; 
@property(assign, setter=setLDAPDidAutodiscovery:) BOOL ldapDidAutodiscovery;	// G=0x31eca869; S=0x31eca849; 
@property(assign) int port;	// G=0x31eca9cd; S=0x31eca965; converted property
@property(readonly, retain) LDAPTaskManager *taskManager;	// G=0x31eca509; converted property
@property(assign) BOOL useSSL;	// G=0x31eca945; S=0x31eca8dd; converted property
@property(retain) id username;	// G=0x31ecaafd; S=0x31ecaa81; converted property
+ (Class)accountClass;	// 0x31ecafbd
+ (Class)clientClass;	// 0x31ecaf9d
+ (Class)daemonClass;	// 0x31ecaf7d
+ (id)defaultProperties;	// 0x31ecae29
+ (id)displayedAccountTypeString;	// 0x31eca519
+ (id)displayedShortAccountTypeString;	// 0x31eca525
+ (id)supportedDataclasses;	// 0x31ecaf5d
- (id)initWithProperties:(id)properties;	// 0x31ecb3b5
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x31ecba41
- (id)_urlForKeychainUsingPreApexScheme;	// 0x31ecb691
- (BOOL)accountNeedsUpgrade;	// 0x31ecb969
- (void)addSearchSettings:(id)settings;	// 0x31ecad1d
// converted property getter: - (int)authType;	// 0x31eca8a5
// declared property getter: - (dispatch_queue_s *)backgroundQueue;	// 0x31eca541
- (void)cancelAllSearchQueries;	// 0x31ecb19d
- (void)cancelSearchQuery:(id)query;	// 0x31ecbf31
- (void)checkValidityWithConsumer:(id)consumer;	// 0x31ecad59
- (id)connectionURL;	// 0x31ecab81
- (id)connectionURLWithSSL:(BOOL)ssl;	// 0x31ecabad
- (void)dealloc;	// 0x31ecb5e9
- (id)displayName;	// 0x31ecad45
// converted property getter: - (id)host;	// 0x31ecaa65
- (BOOL)isEqualToAccount:(id)account;	// 0x31eca6a9
- (BOOL)isLDAPAccount;	// 0x31eca53d
- (int)keychainAccessibilityType;	// 0x31ecb66d
// declared property getter: - (int)ldapAccountVersion;	// 0x31ecab55
// declared property getter: - (BOOL)ldapDidAutodiscovery;	// 0x31eca869
- (void)ldapGetDefaultSearchBaseTask:(id)task completedWithStatus:(int)status error:(id)error defaultSearchBase:(id)base;	// 0x31ecafdd
- (void)ldapSearchTask:(id)task finishedWithError:(id)error foundItems:(id)items;	// 0x31ecbdc5
- (id)localizedIdenticalAccountFailureMessage;	// 0x31eca639
- (id)localizedInvalidPasswordMessage;	// 0x31eca58d
- (void)performSearchQuery:(id)query consumer:(id)consumer;	// 0x31ecc061
// converted property getter: - (int)port;	// 0x31eca9cd
- (id)propertiesToSave;	// 0x31ecb275
- (void)removeSearchSettings:(id)settings;	// 0x31ecacf5
- (BOOL)resetCertWarnings;	// 0x31ecac61
- (void)saveAccountSettings;	// 0x31ecade1
- (id)searchSettings;	// 0x31eca8c1
// converted property setter: - (void)setAuthType:(int)type;	// 0x31eca889
// converted property setter: - (void)setHost:(id)host;	// 0x31eca9e9
// declared property setter: - (void)setLDAPAccountVersion:(int)version;	// 0x31ecab19
// declared property setter: - (void)setLDAPDidAutodiscovery:(BOOL)autodiscovery;	// 0x31eca849
// converted property setter: - (void)setPort:(int)port;	// 0x31eca965
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x31eca8dd
// converted property setter: - (void)setUsername:(id)username;	// 0x31ecaa81
- (BOOL)supportsDataclass:(int)dataclass;	// 0x31eca531
// converted property getter: - (id)taskManager;	// 0x31eca509
- (BOOL)upgradeAccount;	// 0x31ecac79
- (id)urlForKeychain;	// 0x31ecb7ed
// converted property getter: - (BOOL)useSSL;	// 0x31eca945
// converted property getter: - (id)username;	// 0x31ecaafd
@end

