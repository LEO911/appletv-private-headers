/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "ASAccountActorMessages.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface ASAccountActor : XXUnknownSuperclass <ASAccountActorMessages> {
}
- (id)initWithDAAccount:(id)daaccount;	// 0x3394b3b5
- (oneway void)_accountPasswordChanged;	// 0x33969121
- (oneway void)_daemonDiedNotification:(id)notification;	// 0x33968e51
- (oneway void)_folderHierarchyChanged;	// 0x33969001
- (oneway void)_folderUpdatedNotification:(id)notification;	// 0x33968ee1
- (oneway void)_foldersThatExternalClientsCareAboutChanged;	// 0x33969091
- (oneway void)_newASPolicyKeyNotification:(id)notification;	// 0x33968f71
- (oneway void)cancelAllSearchQueries;	// 0x33968b89
- (oneway void)cancelSearchQuery:(id)query;	// 0x33968afd
- (oneway void)cancelTaskWithID:(int)anId;	// 0x339689e5
- (id)customSignature;	// 0x33967ebd
- (id)delegateeInvitationICSRepresentationForMetaData:(id)metaData inFolderWithId:(id)anId outSummary:(id *)summary;	// 0x339684d9
- (id)deletedItemsFolder;	// 0x3394b679
- (id)encryptionIdentityPersistentReference;	// 0x33967da1
- (id)folderIDsThatExternalClientsCareAboutForDataclasses:(int)dataclasses withTag:(id *)tag;	// 0x33968329
- (id)folderIDsThatExternalClientsCareAboutWithTag:(id *)tag;	// 0x33968299
- (id)foldersTag;	// 0x33968209
- (BOOL)generatesBulletins;	// 0x33967b69
- (id)inboxFolder;	// 0x3394b559
- (BOOL)isHotmailAccount;	// 0x33968ca5
- (int)mailNumberOfPastDaysToSync;	// 0x339679b9
- (id)mailboxes;	// 0x3394b4c9
- (oneway void)monitorFoldersForUpdates:(id)updates;	// 0x33968065
- (int)performFetchAttachmentRequest:(id)request consumer:(id)consumer;	// 0x339687a9
- (int)performFetchMessageSearchResultRequests:(id)requests consumer:(id)consumer;	// 0x33968839
- (void)performFolderChange:(id)change isUserRequested:(BOOL)requested;	// 0x33968959
- (int)performMailboxRequest:(id)request mailbox:(id)mailbox previousTag:(id)tag isUserRequested:(BOOL)requested consumer:(id)consumer;	// 0x339685f9
- (int)performMailboxRequests:(id)requests mailbox:(id)mailbox previousTag:(id)tag isUserRequested:(BOOL)requested consumer:(id)consumer;	// 0x33968689
- (int)performMoveRequests:(id)requests consumer:(id)consumer;	// 0x33968719
- (int)performResolveRecipientsRequest:(id)request consumer:(id)consumer;	// 0x339688c9
- (oneway void)performSearchQuery:(id)query;	// 0x33968a71
- (BOOL)reattemptInvitationLinkageForMetaData:(id)metaData inFolderWithId:(id)anId;	// 0x33968449
- (BOOL)searchQueriesRunning;	// 0x33968c15
- (int)sendMessageWithRFC822Data:(id)rfc822Data messageID:(id)anId outgoingMessageType:(int)type originalMessageFolderID:(id)anId4 originalMessageItemID:(id)anId5 originalMessageLongID:(id)anId6 originalAccountID:(id)anId7 useSmartTasksIfPossible:(BOOL)possible consumer:(id)consumer context:(void *)context;	// 0x33968569
- (id)sentItemsFolder;	// 0x3394b5e9
- (oneway void)setAccount:(id)account;	// 0x33968d35
- (oneway void)setCustomSignature:(id)signature;	// 0x33967f4d
- (oneway void)setEncryptionIdentityPersistentReference:(id)reference;	// 0x33967e31
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;	// 0x339683b9
- (oneway void)setGeneratesBulletins:(BOOL)bulletins;	// 0x33967bf9
- (oneway void)setMailNumberOfPastDaysToSync:(int)sync;	// 0x33967fd9
- (oneway void)setSigningIdentityPersistentReference:(id)reference;	// 0x33967d15
- (oneway void)shutdown;	// 0x33968dc1
- (id)signingIdentityPersistentReference;	// 0x33967c85
- (oneway void)startup;	// 0x3394b43d
- (oneway void)stopMonitoringAllFolders;	// 0x3396817d
- (oneway void)stopMonitoringFoldersForUpdates:(id)updates;	// 0x339680f1
- (int)supportsEmailFlagging;	// 0x33967ad9
- (int)supportsMailboxSearch;	// 0x33967a49
@end

