/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, HSConnectionConfiguration;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface HSCloudClient : NSObject {
	BOOL _active;	// 4 = 0x4
	HSConnectionConfiguration *_configuration;	// 8 = 0x8
	NSObject<OS_xpc_object> *_connection;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_connectionQueue;	// 16 = 0x10
	unsigned long long _daemonConfiguration;	// 20 = 0x14
	NSMutableSet *_pendingArtworkRequests;	// 28 = 0x1c
	NSObject<OS_dispatch_queue> *_pendingArtworkRequestsQueue;	// 32 = 0x20
	id _updateInProgressChangedHandler;	// 36 = 0x24
}
@property(copy, nonatomic) id updateInProgressChangedHandler;	// G=0x33374479; S=0x3337448d; @synthesize=_updateInProgressChangedHandler
- (id)init;	// 0x33371649
- (id)initWithConfiguration:(id)configuration;	// 0x3337165d
- (void)_performBlockOnMainThread:(id)thread;	// 0x333742b1
- (void)_sendConfigurationToDaemon;	// 0x333742d5
- (void)_serverDidLaunch;	// 0x3337437d
- (void)_serverUpdateInProgressDidChange;	// 0x333743f1
- (void)addGeniusPlaylistWithName:(id)name seedItemSagaIDs:(id)ids itemSagaIDs:(id)ids3 completionHandler:(id)handler;	// 0x33371b2d
- (void)addPlaylistWithName:(id)name completionHandler:(id)handler;	// 0x333719b1
- (void)authenticateWithCompletionHandler:(id)completionHandler;	// 0x33371cf1
- (void)becomeActive;	// 0x333721b5
- (void)dealloc;	// 0x333718cd
- (void)deauthenticateWithCompletionHandler:(id)completionHandler;	// 0x33372931
- (void)downloadGeniusDataWithCompletionHandler:(id)completionHandler;	// 0x33372b1d
- (void)incrementItemProperty:(id)property forSagaID:(unsigned long long)sagaID;	// 0x33373f19
- (void)isAuthenticatedWithCompletionHandler:(id)completionHandler;	// 0x33372d09
- (void)isAuthenticatedWithQueue:(id)queue completionHandler:(id)handler;	// 0x33372d29
- (void)isExpiredWithCompletionHandler:(id)completionHandler;	// 0x33372ea9
- (void)loadArtworkDataForSagaID:(unsigned long long)sagaID;	// 0x33372fe9
- (void)loadArtworkDataForSagaID:(unsigned long long)sagaID completionHandler:(id)handler;	// 0x33373361
- (void)loadGeniusItemsForSagaID:(unsigned long long)sagaID completionHandler:(id)handler;	// 0x33373611
- (void)loadIsUpdateInProgressWithCompletionHandler:(id)completionHandler;	// 0x33373865
- (void)loadUpdateProgressWithCompletionHandler:(id)completionHandler;	// 0x333739bd
- (void)removePlaylistWithSagaID:(unsigned long long)sagaID completionHandler:(id)handler;	// 0x33373bd9
- (void)resetConfiguration:(id)configuration;	// 0x33373d11
- (void)resignActive;	// 0x33373d55
- (void)setDaemonConfiguration:(unsigned long long)configuration;	// 0x33373d6d
- (void)setItemProperties:(id)properties forSagaID:(unsigned long long)sagaID;	// 0x33373d81
// declared property setter: - (void)setUpdateInProgressChangedHandler:(id)progressChangedHandler;	// 0x3337448d
// declared property getter: - (id)updateInProgressChangedHandler;	// 0x33374479
- (void)updatePlaylistWithSagaID:(unsigned long long)sagaID itemSagaIDs:(id)ids queue:(id)queue completionHandler:(id)handler;	// 0x333740b1
- (void)updateSagaLibraryWithCompletionHandler:(id)completionHandler;	// 0x333726fd
- (void)uploadItemProperties;	// 0x33374059
@end

