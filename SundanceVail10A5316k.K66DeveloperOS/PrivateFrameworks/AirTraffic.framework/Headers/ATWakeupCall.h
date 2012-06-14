/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"
#import <NSObject.h> // Unknown library

@class NSNetServiceBrowser, NSMutableArray, NSThread;

@interface ATWakeupCall : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
	NSMutableArray *_hostLibraryIdentifiers;	// 4 = 0x4
	NSMutableArray *_resolvingHosts;	// 8 = 0x8
	NSMutableArray *_resolvedLibraryIdentifiers;	// 12 = 0xc
	NSMutableArray *_resolvedLibraryServices;	// 16 = 0x10
	id _completion;	// 20 = 0x14
	NSNetServiceBrowser *_browser;	// 24 = 0x18
	NSThread *_wakeThread;	// 28 = 0x1c
	BOOL _searching;	// 32 = 0x20
	int _resolving;	// 36 = 0x24
	int _hostsToResolve;	// 40 = 0x28
}
+ (void)sendWakeupCall:(id)call;	// 0x30d82ba1
+ (void)sendWakeupCallToAllSyncHosts;	// 0x30d82d29
+ (id)wakeableHostsWithCompletion:(id)completion;	// 0x30d82fe9
- (void)dealloc;	// 0x30d83165
- (void)netService:(id)service didNotResolve:(id)resolve;	// 0x30d8292d
- (void)netServiceBrowser:(id)browser didFindService:(id)service moreComing:(BOOL)coming;	// 0x30d82351
- (void)netServiceBrowser:(id)browser didNotSearch:(id)search;	// 0x30d82455
- (void)netServiceBrowser:(id)browser didRemoveService:(id)service moreComing:(BOOL)coming;	// 0x30d824c1
- (void)netServiceBrowserDidStopSearch:(id)netServiceBrowser;	// 0x30d824ad
- (void)netServiceDidResolveAddress:(id)netService;	// 0x30d825b5
- (void)stop;	// 0x30d829ad
- (void)wake;	// 0x30d82a1d
@end
