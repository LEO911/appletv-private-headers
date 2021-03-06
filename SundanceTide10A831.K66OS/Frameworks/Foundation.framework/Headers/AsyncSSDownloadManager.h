/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "SSDownloadManagerObserver.h"

@class SSDownloadManager, NSOperationQueue, NSMutableDictionary;

@interface AsyncSSDownloadManager : NSObject <SSDownloadManagerObserver> {
	SSDownloadManager *_manager;	// 4 = 0x4
	NSOperationQueue *_queue;	// 8 = 0x8
	NSMutableDictionary *_downloads;	// 12 = 0xc
	BOOL _reconnectInProgress;	// 16 = 0x10
}
- (id)initWithDownloadManager:(id)downloadManager;	// 0x3263d951
- (void)_attemptReconnect;	// 0x3263edd9
- (void)addDownload:(id)download completionBlock:(id)block;	// 0x3263eca5
- (void)addDownloads:(id)downloads completionBlock:(id)block;	// 0x3263ebd1
- (void)addOperationWithBlock:(id)block;	// 0x3263e021
- (void)cancelDownload:(long long)download completionBlock:(id)block;	// 0x3263e7ad
- (void)dealloc;	// 0x3263de49
- (void)downloadHandlerDisconnected:(BOOL)disconnected;	// 0x3263f09d
- (void)downloadManager:(id)manager downloadStatesDidChange:(id)downloadStates;	// 0x3263e20d
- (void)downloadManagerDownloadsDidChange:(id)downloadManagerDownloads;	// 0x3263e549
- (void)finishDownload:(long long)download;	// 0x3263eafd
- (void)setDelegate:(id)delegate forDownload:(long long)download;	// 0x3263dec1
- (void)withDownload:(long long)download perform:(id)perform;	// 0x3263e0f9
- (void)withDownload:(long long)download performAsync:(id)async;	// 0x3263e139
- (void)withDownloadMatchingIdentifier:(id)downloadMatchingIdentifier perform:(id)perform;	// 0x3263e8b5
@end

