/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <ASAccountActor.h> // Unknown library
#import "DAEAS-Structs.h"
#import "ASAccountActorMessages.h"

@class ASClientAccount;

@interface ASConcreteAccountActor : ASAccountActor <ASAccountActorMessages> {
	ASClientAccount *_account;	// 8 = 0x8
}
+ (CFRunLoopRef)_actorRunLoop;	// 0x33baf94d
+ (void)_runActorThreadWithStartupLock:(id)startupLock;	// 0x33baf861
- (id)initWithDAAccount:(id)daaccount;	// 0x33bb45e9
- (oneway void)_accountPasswordChanged;	// 0x33bb4539
- (oneway void)_daemonDiedNotification:(id)notification;	// 0x33bb4069
- (oneway void)_folderHierarchyChanged;	// 0x33bb43e1
- (oneway void)_folderUpdatedNotification:(id)notification;	// 0x33bb4115
- (oneway void)_foldersThatExternalClientsCareAboutChanged;	// 0x33bb448d
- (oneway void)_newASPolicyKeyNotification:(id)notification;	// 0x33bb4281
- (void)_performAsynchronousSerialOnActorQueue:(id)queue;	// 0x33bafa75
- (void)_performSynchronousSerialOnActorQueue:(id)queue;	// 0x33bafad5
- (void)_sendFailureToConsumer:(id)consumer;	// 0x33bb1c09
- (oneway void)cancelAllSearchQueries;	// 0x33bb3031
- (oneway void)cancelSearchQuery:(id)query;	// 0x33bb2f55
- (oneway void)cancelTaskWithID:(int)anId;	// 0x33bb2d51
- (id)customSignature;	// 0x33bb0ab5
- (void)dealloc;	// 0x33bb4701
- (id)delegateeInvitationICSRepresentationForMetaData:(id)metaData inFolderWithId:(id)anId outSummary:(id *)summary;	// 0x33bb1961
- (id)deletedItemsFolder;	// 0x33bb3625
- (void)disable;	// 0x33bb3e55
- (id)encryptionIdentityPersistentReference;	// 0x33bb0801
- (id)folderIDsThatExternalClientsCareAboutForDataclasses:(int)dataclasses withTag:(id *)tag;	// 0x33bb132d
- (id)folderIDsThatExternalClientsCareAboutWithTag:(id *)tag;	// 0x33bb10cd
- (BOOL)generatesBulletins;	// 0x33bb028d
- (id)inboxFolder;	// 0x33bb3275
- (BOOL)isHotmailAccount;	// 0x33bb37fd
- (int)mailNumberOfPastDaysToSync;	// 0x33bafdd1
- (id)mailboxes;	// 0x33bafbe5
- (oneway void)monitorFoldersForUpdates:(id)updates;	// 0x33bb0e69
- (int)performFetchAttachmentRequest:(id)request consumer:(id)consumer;	// 0x33bb25cd
- (int)performFetchMessageSearchResultRequests:(id)requests consumer:(id)consumer;	// 0x33bb27fd
- (void)performFolderChange:(id)change isUserRequested:(BOOL)requested;	// 0x33bb2be5
- (int)performMailboxRequest:(id)request mailbox:(id)mailbox previousTag:(id)tag isUserRequested:(BOOL)requested consumer:(id)consumer;	// 0x33bb1f21
- (int)performMailboxRequests:(id)requests mailbox:(id)mailbox previousTag:(id)tag isUserRequested:(BOOL)requested consumer:(id)consumer;	// 0x33bb217d
- (int)performMoveRequests:(id)requests consumer:(id)consumer;	// 0x33bb23d9
- (int)performResolveRecipientsRequest:(id)request consumer:(id)consumer;	// 0x33bb29f1
- (oneway void)performSearchQuery:(id)query;	// 0x33bb2e01
- (BOOL)reattemptInvitationLinkageForMetaData:(id)metaData inFolderWithId:(id)anId;	// 0x33bb178d
- (BOOL)searchQueriesRunning;	// 0x33bb30dd
- (int)sendMessageWithRFC822Data:(id)rfc822Data messageID:(id)anId outgoingMessageType:(int)type originalMessageFolderID:(id)anId4 originalMessageItemID:(id)anId5 originalMessageLongID:(id)anId6 originalAccountID:(id)anId7 useSmartTasksIfPossible:(BOOL)possible consumer:(id)consumer context:(void *)context;	// 0x33bb1c59
- (id)sentItemsFolder;	// 0x33bb344d
- (oneway void)setAccount:(id)account;	// 0x33bb3ba9
- (oneway void)setCustomSignature:(id)signature;	// 0x33bb0ca5
- (oneway void)setEncryptionIdentityPersistentReference:(id)reference;	// 0x33bb09d9
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;	// 0x33bb1591
- (oneway void)setGeneratesBulletins:(BOOL)bulletins;	// 0x33bb044d
- (oneway void)setMailNumberOfPastDaysToSync:(int)sync;	// 0x33bb0db9
- (oneway void)setSigningIdentityPersistentReference:(id)reference;	// 0x33bb0725
- (oneway void)shutdown;	// 0x33bb3e45
- (id)signingIdentityPersistentReference;	// 0x33bb054d
- (oneway void)startup;	// 0x33bb3995
- (oneway void)stopMonitoringAllFolders;	// 0x33bb1021
- (oneway void)stopMonitoringFoldersForUpdates:(id)updates;	// 0x33bb0f45
- (int)supportsEmailFlagging;	// 0x33bb00f9
- (int)supportsMailboxSearch;	// 0x33baff65
@end
