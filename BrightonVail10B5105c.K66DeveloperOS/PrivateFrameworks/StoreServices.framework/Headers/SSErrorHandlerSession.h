/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, SSXPCConnection;
@protocol OS_dispatch_queue;

@interface SSErrorHandlerSession : NSObject {
	SSXPCConnection *_controlConnection;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
	NSDictionary *_properties;	// 12 = 0xc
	long long _sessionID;	// 16 = 0x10
}
- (id)init;	// 0x3588702d
- (void)_setControlConnection:(id)connection;	// 0x3588760d
- (void)_setErrorProperties:(id)properties;	// 0x358876ed
- (void)_setSessionID:(long long)anId;	// 0x358877cd
- (void)dealloc;	// 0x358870d1
- (void)performDefaultHandling;	// 0x35887149
- (void)redirectToURL:(id)url;	// 0x35887225
- (void)retry;	// 0x35887345
- (id)valueForProperty:(id)property;	// 0x35887421
@end

