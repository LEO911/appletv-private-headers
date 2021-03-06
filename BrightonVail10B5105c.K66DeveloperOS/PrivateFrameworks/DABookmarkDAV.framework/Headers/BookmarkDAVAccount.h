/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DABookmarkDAV.framework/DABookmarkDAV
 */

#import <DAAccount.h> // Unknown library
#import "CoreDAVAccountInfoProvider.h"
#import "CoreDAVLogDelegate.h"
#import "CoreDAVDiscoveryTaskGroupDelegate.h"

@class DACoreDAVTaskManager, CoreDAVDiscoveryTaskGroup, DACoreDAVLogger;

@interface BookmarkDAVAccount : DAAccount <CoreDAVAccountInfoProvider, CoreDAVLogDelegate, CoreDAVDiscoveryTaskGroupDelegate> {
	DACoreDAVTaskManager *_taskManager;	// 60 = 0x3c
	CoreDAVDiscoveryTaskGroup *_checkValidityTaskGroup;	// 64 = 0x40
	DACoreDAVLogger *_curLogger;	// 68 = 0x44
}
@property(assign) int bookmarkDAVAccountVersion;	// G=0x30b7a6dd; S=0x30b7a6f9; 
@property(retain) id host;	// G=0x30b7a4c1; S=0x30b7a4dd; converted property
@property(assign) int port;	// G=0x30b7a559; S=0x30b7a575; converted property
@property(retain) id principalURL;	// G=0x30b7a309; S=0x30b7a269; converted property
@property(retain) id scheme;	// G=0x30b7a591; S=0x30b7a5ad; converted property
@property(retain) id serverComplianceClasses;	// G=0x30b7aa0d; S=0x30b7aa11; converted property
@property(retain) id serverRoot;	// G=0x30b7a6d5; S=0x30b7a6d9; converted property
@property(readonly, retain) DACoreDAVTaskManager *taskManager;	// G=0x30b79d21; converted property
@property(assign) BOOL useSSL;	// G=0x30b7a675; S=0x30b7a6a5; converted property
@property(retain) id username;	// G=0x30b7a429; S=0x30b7a445; converted property
+ (Class)accountClass;	// 0x30b79599
+ (Class)clientClass;	// 0x30b795b5
+ (id)defaultProperties;	// 0x30b79295
+ (id)supportedDataclasses;	// 0x30b795d1
- (id)init;	// 0x30b793e1
- (id)initWithProperties:(id)properties;	// 0x30b79421
- (id)_oldURLsForKeychain;	// 0x30b79dd9
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x30b79f05
- (id)_validationErrorFromRawError:(id)rawError;	// 0x30b79981
- (BOOL)accountNeedsUpgrade;	// 0x30b7a175
// declared property getter: - (int)bookmarkDAVAccountVersion;	// 0x30b7a6dd
- (void)checkValidityWithConsumer:(id)consumer;	// 0x30b795fd
- (void)coreDAVLogDiagnosticMessage:(id)message atLevel:(int)level;	// 0x30b7ab29
- (int)coreDAVLogLevel;	// 0x30b7ab09
- (void)coreDAVLogTransmittedDataPartial:(id)partial;	// 0x30b7ab91
- (int)coreDAVOutputLevel;	// 0x30b7ab21
- (void)coreDAVTransmittedDataFinished;	// 0x30b7abb1
- (void)dealloc;	// 0x30b794dd
- (void)discoveryTask:(id)task gotAccountInfo:(id)info error:(id)error;	// 0x30b79b9d
- (BOOL)handleCertificateError:(id)error;	// 0x30b7ab05
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x30b7aad5
// converted property getter: - (id)host;	// 0x30b7a4c1
- (BOOL)isEqualToAccount:(id)account;	// 0x30b7a715
- (id)localizedIdenticalAccountFailureMessage;	// 0x30b7a8e5
- (id)localizedInvalidPasswordMessage;	// 0x30b7a95d
- (void)noteHomeSetOnDifferentHost:(id)host;	// 0x30b7a369
// converted property getter: - (int)port;	// 0x30b7a559
// converted property getter: - (id)principalURL;	// 0x30b7a309
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)completionBlock;	// 0x30b7aa41
// converted property getter: - (id)scheme;	// 0x30b7a591
// converted property getter: - (id)serverComplianceClasses;	// 0x30b7aa0d
// converted property getter: - (id)serverRoot;	// 0x30b7a6d5
// declared property setter: - (void)setBookmarkDAVAccountVersion:(int)version;	// 0x30b7a6f9
// converted property setter: - (void)setHost:(id)host;	// 0x30b7a4dd
// converted property setter: - (void)setPort:(int)port;	// 0x30b7a575
// converted property setter: - (void)setPrincipalURL:(id)url;	// 0x30b7a269
// converted property setter: - (void)setScheme:(id)scheme;	// 0x30b7a5ad
// converted property setter: - (void)setServerComplianceClasses:(id)classes;	// 0x30b7aa11
// converted property setter: - (void)setServerRoot:(id)root;	// 0x30b7a6d9
- (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x30b7993d
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x30b7a6a5
// converted property setter: - (void)setUsername:(id)username;	// 0x30b7a445
- (BOOL)shouldLogTransmittedData;	// 0x30b7ab6d
- (id)spinnerIdentifiers;	// 0x30b7aa19
- (id)stateString;	// 0x30b79d71
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x30b795f1
// converted property getter: - (id)taskManager;	// 0x30b79d21
- (BOOL)upgradeAccount;	// 0x30b7a0ed
// converted property getter: - (BOOL)useSSL;	// 0x30b7a675
- (id)userAgentHeader;	// 0x30b7aa15
// converted property getter: - (id)username;	// 0x30b7a429
@end

