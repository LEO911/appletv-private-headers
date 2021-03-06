/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
 */

#import "CoreDAVAccountInfoProvider.h"
#import <DAAccount.h> // Unknown library
#import "CoreDAVLogDelegate.h"
#import "CoreDAVDiscoveryTaskGroupDelegate.h"

@class DACoreDAVTaskManager, CoreDAVDiscoveryTaskGroup, DACoreDAVLogger;

@interface CardDAVAccount : DAAccount <CoreDAVAccountInfoProvider, CoreDAVLogDelegate, CoreDAVDiscoveryTaskGroupDelegate> {
	DACoreDAVTaskManager *_taskManager;	// 60 = 0x3c
	CoreDAVDiscoveryTaskGroup *_checkValidityTaskGroup;	// 64 = 0x40
	DACoreDAVLogger *_curLogger;	// 68 = 0x44
}
@property(assign) int cardDAVAccountVersion;	// G=0x339c7169; S=0x339c7185; 
@property(retain) id host;	// G=0x339c6de5; S=0x339c6e49; converted property
@property(assign) int port;	// G=0x339c6f05; S=0x339c6f69; converted property
@property(retain) id principalURL;	// G=0x339c6ae1; S=0x339c6955; converted property
@property(retain) id scheme;	// G=0x339c6fd5; S=0x339c7039; converted property
@property(retain) id serverComplianceClasses;	// G=0x339c74a1; S=0x339c74a5; converted property
@property(retain) id serverRoot;	// G=0x339c7161; S=0x339c7165; converted property
@property(readonly, retain) DACoreDAVTaskManager *taskManager;	// G=0x339c637d; converted property
@property(assign) BOOL useSSL;	// G=0x339c7101; S=0x339c7131; converted property
@property(retain) id username;	// G=0x339c6cc5; S=0x339c6d29; converted property
+ (Class)accountClass;	// 0x339c5edd
+ (id)addressBookConstraintsPlistPath;	// 0x339c7499
+ (Class)clientClass;	// 0x339c5ef9
+ (id)defaultProperties;	// 0x339c5b6d
+ (id)supportedDataclasses;	// 0x339c5f15
- (id)init;	// 0x339c5cc9
- (id)initWithBackingAccountInfo:(id)backingAccountInfo;	// 0x339c5ddd
- (id)initWithProperties:(id)properties;	// 0x339c5d99
- (void)_massageAddedOrModifiedVCard:(id)card;	// 0x339c749d
- (BOOL)_needsNewAccountIDForOldVersion:(int)oldVersion;	// 0x339c6435
- (id)_oldURLsForKeychain;	// 0x339c6441
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x339c656d
- (BOOL)accountNeedsUpgrade;	// 0x339c6861
// declared property getter: - (int)cardDAVAccountVersion;	// 0x339c7169
- (void)checkValidityWithConsumer:(id)consumer;	// 0x339c5f91
- (void)configureAccount;	// 0x339c5d09
- (id)copyImageContentsAtURL:(id)url outError:(id *)error;	// 0x339c6c3d
- (void)coreDAVLogDiagnosticMessage:(id)message atLevel:(int)level;	// 0x339c75d9
- (int)coreDAVLogLevel;	// 0x339c75b9
- (void)coreDAVLogTransmittedDataPartial:(id)partial;	// 0x339c7641
- (int)coreDAVOutputLevel;	// 0x339c75d1
- (void)coreDAVTransmittedDataFinished;	// 0x339c7661
- (void)dealloc;	// 0x339c5e21
- (void)discoveryTask:(id)task gotAccountInfo:(id)info error:(id)error;	// 0x339c6205
- (BOOL)handleCertificateError:(id)error;	// 0x339c75b5
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x339c7585
// converted property getter: - (id)host;	// 0x339c6de5
- (BOOL)isEqualToAccount:(id)account;	// 0x339c71a1
- (id)localizedIdenticalAccountFailureMessage;	// 0x339c7371
- (id)localizedInvalidPasswordMessage;	// 0x339c73e9
- (void)noteHomeSetOnDifferentHost:(id)host;	// 0x339c6b7d
// converted property getter: - (int)port;	// 0x339c6f05
// converted property getter: - (id)principalURL;	// 0x339c6ae1
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)completionBlock;	// 0x339c74f1
// converted property getter: - (id)scheme;	// 0x339c6fd5
// converted property getter: - (id)serverComplianceClasses;	// 0x339c74a1
// converted property getter: - (id)serverRoot;	// 0x339c7161
// declared property setter: - (void)setCardDAVAccountVersion:(int)version;	// 0x339c7185
// converted property setter: - (void)setHost:(id)host;	// 0x339c6e49
// converted property setter: - (void)setPort:(int)port;	// 0x339c6f69
// converted property setter: - (void)setPrincipalURL:(id)url;	// 0x339c6955
// converted property setter: - (void)setScheme:(id)scheme;	// 0x339c7039
// converted property setter: - (void)setServerComplianceClasses:(id)classes;	// 0x339c74a5
// converted property setter: - (void)setServerRoot:(id)root;	// 0x339c7165
- (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x339c61c1
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x339c7131
// converted property setter: - (void)setUsername:(id)username;	// 0x339c6d29
- (BOOL)shouldLogTransmittedData;	// 0x339c761d
- (id)spinnerIdentifiers;	// 0x339c74ad
- (id)stateString;	// 0x339c63cd
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x339c5f35
// converted property getter: - (id)taskManager;	// 0x339c637d
- (BOOL)upgradeAccount;	// 0x339c67d9
// converted property getter: - (BOOL)useSSL;	// 0x339c7101
- (id)userAgentHeader;	// 0x339c74a9
// converted property getter: - (id)username;	// 0x339c6cc5
- (id)wellKnownPathsToCheck;	// 0x339c5f45
@end

