/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import "AccountNotificationProtocol.h"
#import <NSObject.h> // Unknown library

@class NSMutableSet, NSMutableDictionary;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface DADConnection : NSObject <AccountNotificationProtocol> {
	NSObject<OS_xpc_object> *_conn;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_muckingWithConn;	// 8 = 0x8
	NSMutableSet *_accountIdsWithAlreadyResetCerts;	// 12 = 0xc
	NSMutableSet *_accountIdsWithAlreadyResetThrottleTimers;	// 16 = 0x10
	id _statusReportBlock;	// 20 = 0x14
	NSMutableDictionary *_inFlightSearchQueries;	// 24 = 0x18
	NSMutableDictionary *_inFlightFolderChanges;	// 28 = 0x1c
	NSMutableDictionary *_inFlightAttachmentDownloads;	// 32 = 0x20
	NSMutableDictionary *_inFlightShareRequests;	// 36 = 0x24
}
+ (void)accountDidChange:(id)account forDataclass:(id)dataclass;	// 0x34b3e425
+ (void)accountWillChange:(id)account forDataclass:(id)dataclass;	// 0x34b3e395
+ (void)noteAccountChanges:(id)changes;	// 0x34b3e2f5
+ (void)setShouldIgnoreAccountChanges;	// 0x34b3a261
+ (id)sharedConnection;	// 0x34b3a1c9
+ (id)sharedConnectionIfServerIsRunning;	// 0x34b3a235
- (id)init;	// 0x34b3d889
- (void)_cancelDownloadsWithIDs:(id)ids error:(id)error;	// 0x34b3cb01
- (id)_connection;	// 0x34b38c61
- (id)_createReplyToRequest:(id)request withProperties:(id)properties;	// 0x34b38f59
- (void)_dispatchMessage:(id)message;	// 0x34b3e0c5
- (void)_downloadFinished:(id)finished;	// 0x34b39fb5
- (void)_downloadProgress:(id)progress;	// 0x34b39e49
- (void)_folderChangeFinished:(id)finished;	// 0x34b399c5
- (void)_foldersUpdated:(id)updated;	// 0x34b39331
- (void)_getStatusReportsFromClient:(id)client;	// 0x34b39c05
- (id)_init;	// 0x34b3d8e1
- (void)_logDataAccessStatus:(id)status;	// 0x34b39511
- (void)_policyKeyChanged:(id)changed;	// 0x34b391a1
- (void)_reallyRegisterForInterrogation;	// 0x34b3d6f1
- (void)_registerForAppResumedNotification;	// 0x34b3e06d
- (void)_requestDaemonChangeAgentMonitoringStatus:(BOOL)status waitForReply:(BOOL)reply;	// 0x34b3afb9
- (void)_requestDaemonStopMonitoringAgents_Sync;	// 0x34b3b229
- (void)_resetCertWarningsForAccountId:(id)accountId andDataclasses:(int)dataclasses isUserRequested:(BOOL)requested;	// 0x34b3db59
- (void)_resetThrottleTimersForAccountId:(id)accountId;	// 0x34b3dd7d
- (void)_sendSynchronousXPCMessageWithParameters:(id)parameters handlerBlock:(id)block;	// 0x34b3c62d
- (void)_serverContactsSearchQueryFinished:(id)finished;	// 0x34b39571
- (void)_serverDiedWithReason:(id)reason;	// 0x34b38b4d
- (void)_shareResponseFinished:(id)finished;	// 0x34b3a111
- (void)_tearDownInFlightObjects;	// 0x34b387b5
- (void)applyNewAccountProperties:(id)properties onAccountWithId:(id)anId forceSave:(BOOL)save;	// 0x34b3d2fd
- (id)beginDownloadingAttachmentWithUUID:(id)uuid accountID:(id)anId queue:(id)queue progressBlock:(id)block completionBlock:(id)block5;	// 0x34b3c761
- (void)cancelDownloadingAttachmentWithDownloadID:(id)downloadID error:(id)error;	// 0x34b3cbfd
- (void)cancelServerContactsSearch:(id)search;	// 0x34b3bbdd
- (id)currentPolicyKeyForAccountID:(id)accountID;	// 0x34b3aca1
- (void)dealloc;	// 0x34b3da25
- (id)decodedErrorFromData:(id)data;	// 0x34b38fdd
- (void)fillOutCurrentEASTimeZoneInfo;	// 0x34b3d795
- (void)handleURL:(id)url;	// 0x34b3c555
- (BOOL)performServerContactsSearch:(id)search forAccountWithID:(id)anId;	// 0x34b3b7d1
- (BOOL)processFolderChange:(id)change forAccountWithID:(id)anId;	// 0x34b3cf6d
- (BOOL)processMeetingRequests:(id)requests deliveryIdsToClear:(id)clear deliveryIdsToSoftClear:(id)softClear inFolderWithId:(id)anId forAccountWithId:(id)anId5;	// 0x34b3bd71
- (BOOL)registerForInterrogationWithBlock:(id)block;	// 0x34b3d761
- (void)removeStoresForAccountWithID:(id)anId;	// 0x34b3b23d
- (void)reportFolderItemsSyncSuccess:(BOOL)success forFolderWithID:(id)anId andAccountWithID:(id)anId3;	// 0x34b3c46d
- (void)requestDaemonShutdown;	// 0x34b3b2cd
- (void)requestDaemonStartMonitoringAgents;	// 0x34b3b1ed
- (void)requestDaemonStartMonitoringAgents_Sync;	// 0x34b3b215
- (void)requestDaemonStopMonitoringAgents;	// 0x34b3b201
- (BOOL)requestPolicyUpdateForAccountID:(id)accountID;	// 0x34b3ac09
- (void)resetTimersAndWarnings;	// 0x34b3df55
- (void)respondToSharedCalendarInvite:(int)sharedCalendarInvite forCalendarWithID:(id)anId accountID:(id)anId3 queue:(id)queue completionBlock:(id)block;	// 0x34b3cce1
- (BOOL)resumeWatchingFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x34b3a331
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag forAccountID:(id)accountID;	// 0x34b3c0f5
- (id)statusReports;	// 0x34b3d3d1
- (BOOL)stopWatchingFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x34b3a929
- (BOOL)suspendWatchingFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x34b3a649
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)accountID andDataclass:(int)dataclass;	// 0x34b3b7ad
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)accountID andDataclass:(int)dataclass isUserRequested:(BOOL)requested;	// 0x34b3b60d
- (BOOL)updateContentsOfFoldersWithKeys:(id)keys forAccountID:(id)accountID andDataclass:(int)dataclass;	// 0x34b3b789
- (BOOL)updateContentsOfFoldersWithKeys:(id)keys forAccountID:(id)accountID andDataclass:(int)dataclass isUserRequested:(BOOL)requested;	// 0x34b3b491
- (BOOL)updateFolderListForAccountID:(id)accountID andDataclasses:(int)dataclasses;	// 0x34b3b765
- (BOOL)updateFolderListForAccountID:(id)accountID andDataclasses:(int)dataclasses isUserRequested:(BOOL)requested;	// 0x34b3b46d
- (BOOL)updateFolderListForAccountID:(id)accountID andDataclasses:(int)dataclasses requireChangedFolders:(BOOL)folders isUserRequested:(BOOL)requested;	// 0x34b3b2e1
- (BOOL)watchFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x34b3a271
@end

