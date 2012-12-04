/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"

@class SSXPCConnection, SSDownloadManagerOptions, NSMutableSet, NSArray;
@protocol OS_dispatch_queue;

@interface SSDownloadManager : NSObject {
	NSObject<OS_dispatch_queue> *_accessQueue;	// 4 = 0x4
	NSArray *_activeDownloads;	// 8 = 0x8
	BOOL _activeDownloadsChanged;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_backgroundQueue;	// 16 = 0x10
	SSXPCConnection *_connection;	// 20 = 0x14
	NSArray *_downloads;	// 24 = 0x18
	BOOL _downloadsChanged;	// 28 = 0x1c
	BOOL _isUsingNetwork;	// 29 = 0x1d
	SSXPCConnection *_observerConnection;	// 32 = 0x20
	NSObject<OS_dispatch_queue> *_observerQueue;	// 36 = 0x24
	CFArrayRef _observers;	// 40 = 0x28
	SSDownloadManagerOptions *_options;	// 44 = 0x2c
	NSMutableSet *_removedDownloads;	// 48 = 0x30
}
@property(readonly, assign) NSArray *activeDownloads;	// G=0x3586937d; 
@property(readonly, assign) NSArray *downloads;	// G=0x35869cb9; 
@property(readonly, assign) SSDownloadManagerOptions *managerOptions;	// G=0x3586a149; 
@property(readonly, assign, getter=isUsingNetwork) BOOL usingNetwork;	// G=0x3586a079; 
+ (id)EBookDownloadKinds;	// 0x3586a67d
+ (id)EBookDownloadManager;	// 0x3586a40d
+ (id)IPodDownloadKinds;	// 0x3586a6b1
+ (id)IPodDownloadManager;	// 0x3586a4dd
+ (void)_sendGlobalHandler:(id)handler;	// 0x3586b155
+ (void)_triggerDownloads;	// 0x3586ac25
+ (void)reevaluateBackgroundDownloadsForBundleIdentifiers:(id)bundleIdentifiers;	// 0x3586a7b9
+ (void)removePersistenceIdentifier:(id)identifier;	// 0x35869271
+ (void)retryAllRestoreDownloads;	// 0x3586a85d
+ (void)setDownloadHandler:(id)handler;	// 0x35869315
+ (id)softwareDownloadKinds;	// 0x3586a919
+ (id)softwareDownloadManager;	// 0x3586a5ad
- (id)initWithDownloadKinds:(id)downloadKinds;	// 0x35868f39
- (id)initWithManagerOptions:(id)managerOptions;	// 0x35868fb1
- (id)_XPCConnection;	// 0x3586b145
- (void)_connectAsObserver;	// 0x3586b215
- (id)_copyDownloadKindsUsingNetwork;	// 0x3586b361
- (id)_copyDownloads;	// 0x3586b58d
- (id)_copyDownloadsForMessage:(long long)message downloadIDs:(id)ids;	// 0x3586b709
- (void)_finishDownloads:(id)downloads;	// 0x3586ace5
- (void)_handleDownloadKindsUsingNetworkChanged:(id)changed;	// 0x3586ba55
- (void)_handleDownloadStatesChanged:(id)changed;	// 0x3586c425
- (void)_handleDownloadsChanged:(id)changed;	// 0x3586bafd
- (void)_handleDownloadsRemoved:(id)removed;	// 0x3586c0d5
- (void)_handleMessage:(id)message fromServerConnection:(id)serverConnection;	// 0x3586cc51
- (void)_handleReply:(id)reply forDownloads:(id)downloads message:(id)message isRetry:(BOOL)retry block:(id)block;	// 0x3586cdbd
- (id)_initSSDownloadManager;	// 0x35868db9
- (void)_insertDownloads:(id)downloads before:(id)before after:(id)after completionBlock:(id)block;	// 0x3586d01d
- (void)_loadDownloadKindsUsingNetwork;	// 0x3586d2c5
- (void)_moveDownload:(id)download before:(id)before after:(id)after completionBlock:(id)block;	// 0x3586d401
- (id)_newOptionsDictionary;	// 0x3586d4b5
- (void)_pauseDownloads:(id)downloads completionBlock:(id)block;	// 0x3586a94d
- (void)_pauseDownloads:(id)downloads forced:(BOOL)forced completionBlock:(id)block;	// 0x3586d56d
- (void)_reloadIsUsingNetworkWithDownloadKinds:(id)downloadKinds;	// 0x3586d6b1
- (void)_sendDownloadsChanged:(id)changed;	// 0x3586d731
- (void)_sendMessage:(id)message withCompletionBlock:(id)completionBlock;	// 0x3586db95
- (void)_sendMessageToObservers:(SEL)observers;	// 0x3586dd01
- (void)_sendObserverConnection;	// 0x3586df35
- (void)_willFinishDownloads:(id)downloads;	// 0x3586aef9
// declared property getter: - (id)activeDownloads;	// 0x3586937d
- (void)addDownloads:(id)downloads completionBlock:(id)block;	// 0x35869615
- (void)addObserver:(id)observer;	// 0x35869a2d
- (BOOL)canCancelDownload:(id)download;	// 0x35869afd
- (void)cancelAllDownloadsWithCompletionBlock:(id)completionBlock;	// 0x35869b15
- (void)cancelDownloads:(id)downloads completionBlock:(id)block;	// 0x35869b91
- (void)dealloc;	// 0x35869075
// declared property getter: - (id)downloads;	// 0x35869cb9
- (void)finishDownloads:(id)downloads;	// 0x35869e59
- (void)getDownloadsUsingBlock:(id)block;	// 0x35869e8d
- (void)insertDownloads:(id)downloads afterDownload:(id)download completionBlock:(id)block;	// 0x3586a031
- (void)insertDownloads:(id)downloads beforeDownload:(id)download completionBlock:(id)block;	// 0x3586a055
// declared property getter: - (BOOL)isUsingNetwork;	// 0x3586a079
// declared property getter: - (id)managerOptions;	// 0x3586a149
- (void)moveDownload:(id)download afterDownload:(id)download2 completionBlock:(id)block;	// 0x3586a181
- (void)moveDownload:(id)download beforeDownload:(id)download2 completionBlock:(id)block;	// 0x3586a1a5
- (void)pauseDownloads:(id)downloads completionBlock:(id)block;	// 0x3586a1c9
- (void)reloadFromServer;	// 0x3586a96d
- (void)removeObserver:(id)observer;	// 0x3586a311
- (void)resumeDownloads:(id)downloads completionBlock:(id)block;	// 0x3586a1e9
- (void)setDownloads:(id)downloads completionBlock:(id)block;	// 0x3586a3ed
- (void)setDownloads:(id)downloads forKinds:(id)kinds completionBlock:(id)block;	// 0x3586a9bd
@end
