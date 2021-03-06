/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class SSXPCConnection, SSDownload, SSDownloadAsset;
@protocol OS_dispatch_queue;

@interface SSDownloadSession : NSObject {
	SSXPCConnection *_controlConnection;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
	long long _sessionID;	// 12 = 0xc
}
@property(readonly, assign) SSDownload *download;	// G=0x35876029; 
@property(readonly, assign) SSDownloadAsset *downloadAsset;	// G=0x358760e1; 
- (id)init;	// 0x35875f65
- (id)_copySessionPropertyWithKey:(const char *)key;	// 0x35876205
- (id)_initSSDownloadSession;	// 0x35875f15
- (id)_initWithSessionIdentifier:(long long)sessionIdentifier controlConnection:(id)connection;	// 0x35875f75
- (void)dealloc;	// 0x35875fc9
// declared property getter: - (id)download;	// 0x35876029
// declared property getter: - (id)downloadAsset;	// 0x358760e1
- (unsigned)hash;	// 0x35876199
- (BOOL)isEqual:(id)equal;	// 0x358761a9
@end

