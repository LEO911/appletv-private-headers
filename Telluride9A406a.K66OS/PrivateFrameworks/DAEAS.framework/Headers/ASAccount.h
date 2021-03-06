/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAAccount.h> // Unknown library
#import "DAEAS-Structs.h"

@class ASFolderHierarchy, ASProtocol, ASTaskManager, NSMutableSet, NSLock, NSMutableArray, ASAutodiscoverTask;

@interface ASAccount : DAAccount {
	ASFolderHierarchy *_folderHierarchy;	// 64 = 0x40
	ASTaskManager *_taskManager;	// 68 = 0x44
	ASProtocol *_protocol;	// 72 = 0x48
	NSMutableSet *_searchTaskSet;	// 76 = 0x4c
	NSMutableArray *_autodiscoveryServersToTry;	// 80 = 0x50
	NSLock *_autodiscoverTaskLock;	// 84 = 0x54
	ASAutodiscoverTask *_autodiscoverTask;	// 88 = 0x58
	BOOL _useHTTPForTesting;	// 92 = 0x5c
	BOOL _useLocalhostForAutodiscoveryTesting;	// 93 = 0x5d
	BOOL _isValidating;	// 94 = 0x5e
}
@property(assign, setter=setASAccountVersion:) int asAccountVersion;	// G=0x343edbe1; S=0x343edc15; 
@property(retain) id emailAddress;	// G=0x343eded5; S=0x343edef1; converted property
@property(retain) id emailAddresses;	// G=0x343edf6d; S=0x343edfe9; converted property
@property(retain) id encryptionIdentityPersistentReference;	// G=0x343ee575; S=0x343ee591; converted property
@property(retain) id host;	// G=0x343edd7d; S=0x343edd99; converted property
@property(retain) id lastKnownProtocolVersion;	// G=0x343ee369; S=0x343ee4dd; converted property
@property(assign) int mailNumberOfPastDaysToSync;	// G=0x343ee2dd; S=0x343ee34d; 
@property(readonly, assign) int mailNumberOfPastDaysToSyncUpperLimit;	// G=0x343ee231; 
@property(assign) int port;	// G=0x343ede15; S=0x343ede31; converted property
@property(readonly, retain) ASProtocol *protocol;	// G=0x343ee711; converted property
@property(retain) id savedFolderPathsThatClientsCareAbout;	// G=0x343ee3f9; S=0x343ee415; converted property
@property(retain) id signingIdentityPersistentReference;	// G=0x343ee511; S=0x343ee52d; converted property
@property(readonly, retain) ASTaskManager *taskManager;	// G=0x343e8351; converted property
@property(assign) BOOL useSSL;	// G=0x343ede4d; S=0x343ede6d; converted property
@property(retain) id username;	// G=0x343edc59; S=0x343edc75; converted property
+ (Class)accountClass;	// 0x343e8165
+ (void)cleanUpFilesForAccountWithId:(id)anId;	// 0x343e83dd
+ (Class)clientClass;	// 0x343f2e85
+ (id)defaultProperties;	// 0x343e8621
+ (id)supportedDataclasses;	// 0x343e879d
- (id)initWithProperties:(id)properties;	// 0x343e8099
- (void *)_copyDefaultExchangeEventsCalendar:(BOOL)calendar;	// 0x343ec4c1
- (void *)_copyExchangeCalendarStore:(BOOL)store;	// 0x343ec1bd
- (id)_defaultMailFolderWithDefaultType:(int)defaultType fallbackType:(int)type fallbackName:(id)name;	// 0x343ea031
- (void)_fillOutActionsArray:(id)array responseArray:(id)array2 withTask:(id)task added:(id)added removed:(id)removed modified:(id)modified perserved:(id)perserved addedResponse:(id)response modifiedResponse:(id)response9 removedResponse:(id)response10 fetchedResponse:(id)response11;	// 0x343ea3dd
- (id)_folderHierarchy;	// 0x343e9395
- (BOOL)_generateAutodiscoverURLsForEmailAddress:(id)emailAddress;	// 0x343ed025
- (void)_getContextElementsForItemChangeType:(int)itemChangeType dataclass:(int)dataclass nativeContext:(id)context outContext:(id *)context4 outServerId:(id *)anId;	// 0x343ea365
- (BOOL)_needsNewAccountIDForOldVersion:(int)oldVersion;	// 0x343e8be1
- (id)_newPolicyManager;	// 0x343e8095
- (id)_oldURLsForKeychain;	// 0x343e8971
- (void)_removeInvitationsForMailboxFolderID:(id)mailboxFolderID;	// 0x343eaac5
- (BOOL)_shouldSaveLastKnownProtocolVersion;	// 0x343ee4d9
- (void)_startAutodiscoverTaskWithConsumer:(id)consumer;	// 0x343ed331
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x343e8bed
- (id)_visibleASFolders;	// 0x343e9419
- (void)accountDidUpdateProtocolVersion;	// 0x343ee819
- (BOOL)accountNeedsUpgrade;	// 0x343e9081
- (id)addressBookConstraintsPath;	// 0x343ee7f1
- (void)applyNewAccountProperties:(id)properties forceSave:(BOOL)save;	// 0x343ebf3d
// declared property getter: - (int)asAccountVersion;	// 0x343edbe1
- (id)asFolderHierarchyTaskManager:(id)manager;	// 0x343ea295
- (id)asFolderWithId:(id)anId;	// 0x343ea23d
- (BOOL)autodiscoverAccountConfigurationWithConsumer:(id)consumer;	// 0x343ed4b5
- (void)autodiscoverTask:(id)task completedWithStatus:(int)status accountInfo:(id)info shouldRetryWithEmail:(id)email error:(id)error;	// 0x343ed6ed
- (void)blowAwayFolderCache;	// 0x343ea215
- (id)calendarConstraintsPath;	// 0x343ee7c9
- (void)cancelAllSearchQueries;	// 0x343ecb71
- (void)cancelAutodiscovery;	// 0x343ed2c1
- (void)cancelSearchQuery:(id)query;	// 0x343eca29
- (void)cancelTaskWithID:(int)anId;	// 0x343ec191
- (void)checkValidityWithConsumer:(id)consumer;	// 0x343e83f9
- (void)cleanupAccountFiles;	// 0x343e8311
- (id)contactsFolders;	// 0x343e99cd
- (void)dealloc;	// 0x343e8181
- (id)defaultContactsFolder;	// 0x343e982d
- (id)defaultContainerIdentifierForDADataclass:(int)dadataclass;	// 0x343ea2f9
- (id)defaultEventsFolder;	// 0x343e9ad9
- (id)defaultToDosFolder;	// 0x343e9d85
- (id)deletedItemsFolder;	// 0x343ea1c1
- (id)displayName;	// 0x343e8851
- (id)domainOnly;	// 0x343ee81d
// converted property getter: - (id)emailAddress;	// 0x343eded5
// converted property getter: - (id)emailAddresses;	// 0x343edf6d
- (BOOL)enabledForDADataclass:(int)dadataclass;	// 0x343e9179
// converted property getter: - (id)encryptionIdentityPersistentReference;	// 0x343ee575
- (id)eventsFolders;	// 0x343e9c79
- (id)existingTaskManager;	// 0x343e83cd
- (void)fetchAttachmentTask:(id)task completedWithStatus:(int)status dataWasBase64:(BOOL)a64 error:(id)error;	// 0x343eb839
- (void)fetchAttachmentTask:(id)task receivedData:(id)data ofContentType:(id)contentType;	// 0x343eb7cd
- (id)folderIdsThatExternalClientsCareAbout;	// 0x343ea2a5
- (id)folderIdsThatExternalClientsCareAboutForDataclasses:(int)dataclasses;	// 0x343ea2cd
- (void)folderItemsSyncTask:(id)task completedWithStatus:(int)status error:(id)error newSyncKey:(id)key added:(id)added removed:(id)removed modified:(id)modified addedResponse:(id)response modifiedResponse:(id)response9 removedResponse:(id)response10 fetchedResponse:(id)response11;	// 0x343eac21
- (BOOL)folderItemsSyncTask:(id)task handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char *)data dataLength:(int)length;	// 0x343eb361
- (BOOL)folderItemsSyncTask:(id)task hasPartialAdded:(id)added removed:(id)removed modified:(id)modified addedResponse:(id)response modifiedResponse:(id)response6 removedResponse:(id)response7 fetchedResponse:(id)response8 moreAvailable:(BOOL)available;	// 0x343eb589
- (id)folderWithId:(id)anId;	// 0x343ea269
- (id)foldersTag;	// 0x343ea1ed
- (void)getOptionsTask:(id)task completedWithStatus:(int)status supportedCommands:(id)commands supportedVersions:(id)versions error:(id)error;	// 0x343e84a5
// converted property getter: - (id)host;	// 0x343edd7d
- (id)inboxFolder;	// 0x343ea169
- (BOOL)isActiveSyncAccount;	// 0x343ee88d
- (BOOL)isEqualToAccount:(id)account;	// 0x343ee959
- (BOOL)isGoogleAccount;	// 0x343ee8f5
- (BOOL)isHotmailAccount;	// 0x343ee891
- (void)itemOperationsTask:(id)task completedWithStatus:(int)status error:(id)error responses:(id)responses;	// 0x343eb8a5
- (BOOL)itemOperationsTask:(id)task handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char *)data dataLength:(int)length;	// 0x343ebab1
- (BOOL)itemOperationsTask:(id)task hasPartialResponses:(id)responses;	// 0x343ebcbd
// converted property getter: - (id)lastKnownProtocolVersion;	// 0x343ee369
- (id)localizedIdenticalAccountFailureMessage;	// 0x343eeb85
- (id)localizedInvalidPasswordMessage;	// 0x343eec35
// declared property getter: - (int)mailNumberOfPastDaysToSync;	// 0x343ee2dd
// declared property getter: - (int)mailNumberOfPastDaysToSyncUpperLimit;	// 0x343ee231
- (void)moveItemsTask:(id)task completedWithStatus:(int)status error:(id)error movedItems:(id)items;	// 0x343ec65d
- (CFStringRef)passwordChangedNotificationName;	// 0x343e8909
- (CFStringRef)passwordIsKnownGoodNotificationName;	// 0x343e893d
- (void)performSearchQuery:(id)query;	// 0x343ecc49
- (id)policyManager;	// 0x343e8299
// converted property getter: - (int)port;	// 0x343ede15
// converted property getter: - (id)protocol;	// 0x343ee711
- (void)resetAccountID;	// 0x343e9345
- (void)saveAccountSettings;	// 0x343e82c1
// converted property getter: - (id)savedFolderPathsThatClientsCareAbout;	// 0x343ee3f9
- (BOOL)searchQueriesRunning;	// 0x343ece6d
- (void)searchTask:(id)task finishedWithError:(id)error;	// 0x343ecf45
- (void)searchTask:(id)task returnedResults:(id)results;	// 0x343ece95
- (void)searchTask:(id)task returnedTotalCount:(id)count;	// 0x343ecedd
- (void)sendMailTask:(id)task completedWithStatus:(int)status error:(id)error;	// 0x343ebef9
- (int)sendMessageWithRFC822Data:(id)rfc822Data messageID:(id)anId outgoingMessageType:(int)type originalMessageFolderID:(id)anId4 originalMessageItemID:(id)anId5 originalMessageLongID:(id)anId6 originalAccountID:(id)anId7 consumer:(id)consumer context:(void *)context;	// 0x343ebf81
- (id)sentItemsFolder;	// 0x343ea195
// declared property setter: - (void)setASAccountVersion:(int)version;	// 0x343edc15
// converted property setter: - (void)setEmailAddress:(id)address;	// 0x343edef1
// converted property setter: - (void)setEmailAddresses:(id)addresses;	// 0x343edfe9
- (void)setEnabled:(BOOL)enabled forDADataclass:(int)dadataclass changeType:(int)type;	// 0x343e91c9
// converted property setter: - (void)setEncryptionIdentityPersistentReference:(id)reference;	// 0x343ee591
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;	// 0x343ea361
// converted property setter: - (void)setHost:(id)host;	// 0x343edd99
// converted property setter: - (void)setLastKnownProtocolVersion:(id)version;	// 0x343ee4dd
- (void)setLastKnownProtocolVersion:(id)version save:(BOOL)save;	// 0x343ee385
// declared property setter: - (void)setMailNumberOfPastDaysToSync:(int)sync;	// 0x343ee34d
// converted property setter: - (void)setPort:(int)port;	// 0x343ede31
- (void)setProtocolVersion:(id)version;	// 0x343ee621
// converted property setter: - (void)setSavedFolderPathsThatClientsCareAbout:(id)about;	// 0x343ee415
- (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x343edb39
// converted property setter: - (void)setSigningIdentityPersistentReference:(id)reference;	// 0x343ee52d
- (void)setUseHTTPForTesting:(BOOL)testing;	// 0x343ed2a1
- (void)setUseLocalhostForAutodiscoveryTesting:(BOOL)autodiscoveryTesting;	// 0x343ed2b1
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x343ede6d
// converted property setter: - (void)setUsername:(id)username;	// 0x343edc75
- (id)shortTypeString;	// 0x343e88b5
- (BOOL)shouldFixOnDiskDeviceId;	// 0x343ea3d9
- (BOOL)shouldSavePropertiesForFolderPathsThatClientsCareAbout;	// 0x343ee3f5
// converted property getter: - (id)signingIdentityPersistentReference;	// 0x343ee511
- (int)sniffableTypeForFolder:(id)folder;	// 0x343e96b1
- (id)stateString;	// 0x343e859d
- (id)supportedDataclasses;	// 0x343e87bd
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x343e857d
- (int)supportsEmailFlagging;	// 0x343ee7a1
- (int)supportsMailboxSearch;	// 0x343ee779
// converted property getter: - (id)taskManager;	// 0x343e8351
- (id)toDosFolders;	// 0x343e9f25
- (id)typeString;	// 0x343e8861
- (BOOL)upgradeAccount;	// 0x343e8ff9
- (void)upgradeWithProtocolVersion:(id)protocolVersion;	// 0x343ee5d9
// converted property getter: - (BOOL)useSSL;	// 0x343ede4d
// converted property getter: - (id)username;	// 0x343edc59
- (id)usernameWithoutDomain;	// 0x343edcf1
- (id)visibleFolders;	// 0x343e93fd
@end

