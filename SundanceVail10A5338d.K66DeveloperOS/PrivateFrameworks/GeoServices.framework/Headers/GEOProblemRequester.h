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
+ (id)sharedRequester;	// 0x324efee5
- (id)init;	// 0x324eff51
- (void)cancelRequest:(id)request;	// 0x324f0555
- (Class)classForProviderID:(short)providerID;	// 0x324f0649
- (void)dealloc;	// 0x324f0031
- (void)registerProvider:(Class)provider;	// 0x324f0609
- (void)startRequest:(id)request finished:(id)finished networkActivity:(id)activity error:(id)error;	// 0x324f0161
@end
