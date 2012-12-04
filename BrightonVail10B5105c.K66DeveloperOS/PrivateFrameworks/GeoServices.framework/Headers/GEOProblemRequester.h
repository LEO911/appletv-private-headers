/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSMapTable;

@interface GEOProblemRequester : NSObject {
	NSMapTable *_pendingRequests;	// 4 = 0x4
	NSLock *_pendingRequestsLock;	// 8 = 0x8
	NSMapTable *_providers;	// 12 = 0xc
}
+ (id)sharedRequester;	// 0x339ae351
- (id)init;	// 0x339ae3bd
- (void)cancelRequest:(id)request;	// 0x339ae9c1
- (Class)classForProviderID:(short)providerID;	// 0x339aeab5
- (void)dealloc;	// 0x339ae49d
- (void)registerProvider:(Class)provider;	// 0x339aea75
- (void)startRequest:(id)request finished:(id)finished networkActivity:(id)activity error:(id)error;	// 0x339ae5cd
@end
