/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <ASAccountActor.h> // Unknown library
#import "ASAccountActorMessages.h"

@class ASClientAccount;

@interface ASConcreteAccountActor : ASAccountActor <ASAccountActorMessages> {
	ASClientAccount *_account;	// 8 = 0x8
}
- (id)initWithDAAccount:(id)daaccount;	// 0x341b0cfd
- (oneway void)_accountPasswordChanged;	// 0x341b0bd1
- (oneway void)_daemonDiedNotification:(id)notification;	// 0x341b09f9
- (void)_findScheduler;	// 0x341b0bf1
- (oneway void)_folderHierarchyChanged;	// 0x341b0b91
- (oneway void)_folderUpdatedNotification:(id)notification;	// 0x341b0a19
- (oneway void)_foldersThatExternalClientsCareAboutChanged;	// 0x341b0bb1
- (oneway void)_newASPolicyKeyNotification:(id)notification;	// 0x341b0ad5
- (oneway void)cancelAllSearchQueries;	// 0x341b0315
- (oneway void)cancelSearchQuery:(id)query;	// 0x341b02f5
- (oneway void)cancelTaskWithID:(int)anId;	// 0x341b02b5
- (void)dealloc;	// 0x341b0e59
- (id)deletedItemsFolder;	// 0x341b0399
- (id)encryptionIdentityPersistentReference;	// 0x341affdd
- (id)folderIDsThatExternalClientsCareAboutForDataclasses:(int)dataclasses withTag:(id *)tag;	// 0x341b0109
- (id)folderIDsThatExternalClientsCareAboutWithTag:(id *)tag;	// 0x341b00bd
- (id)foldersTag;	// 0x341b009d
- (BOOL)generatesBulletins;	// 0x341afee1
- (id)inboxFolder;	// 0x341b0359
- (BOOL)isHotmailAccount;	// 0x341b03b9
- (int)mailNumberOfPastDaysToSync;	// 0x341afe81
- (id)mailboxes;	// 0x341afe61
- (oneway void)monitorFoldersForUpdates:(id)updates;	// 0x341b003d
- (int)performFetchAttachmentRequest:(id)request consumer:(id)consumer;	// 0x341b0235
- (int)performFetchMessageSearchResultRequests:(id)requests consumer:(id)consumer;	// 0x341b0255
- (void)performFolderChange:(id)change;	// 0x341b0295
- (int)performMailboxRequest:(id)request mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x341b01d5
- (int)performMailboxRequests:(id)requests mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x341b01f5
- (int)performMoveRequests:(id)requests consumer:(id)consumer;	// 0x341b0215
- (int)performResolveRecipientsRequest:(id)request consumer:(id)consumer;	// 0x341b0275
- (oneway void)performSearchQuery:(id)query;	// 0x341b02d5
- (BOOL)reattemptInvitationLinkageForMetaData:(id)metaData inFolderWithId:(id)anId;	// 0x341b018d
- (BOOL)searchQueriesRunning;	// 0x341b0335
- (int)sendMessageWithRFC822Data:(id)rfc822Data messageID:(id)anId outgoingMessageType:(int)type originalMessageFolderID:(id)anId4 originalMessageItemID:(id)anId5 originalMessageLongID:(id)anId6 originalAccountID:(id)anId7 consumer:(id)consumer context:(void *)context;	// 0x341b01b5
- (id)sentItemsFolder;	// 0x341b0379
- (oneway void)setAccount:(id)account;	// 0x341b05f1
- (oneway void)setEncryptionIdentityPersistentReference:(id)reference;	// 0x341afffd
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;	// 0x341b0159
- (oneway void)setGeneratesBulletins:(BOOL)bulletins;	// 0x341aff29
- (oneway void)setMailNumberOfPastDaysToSync:(int)sync;	// 0x341b001d
- (oneway void)setSigningIdentityPersistentReference:(id)reference;	// 0x341affbd
- (oneway void)shutdown;	// 0x341b07f5
- (id)signingIdentityPersistentReference;	// 0x341aff9d
- (oneway void)startup;	// 0x341b03dd
- (oneway void)stopMonitoringAllFolders;	// 0x341b007d
- (oneway void)stopMonitoringFoldersForUpdates:(id)updates;	// 0x341b005d
- (int)supportsEmailFlagging;	// 0x341afec1
- (int)supportsMailboxSearch;	// 0x341afea1
@end
