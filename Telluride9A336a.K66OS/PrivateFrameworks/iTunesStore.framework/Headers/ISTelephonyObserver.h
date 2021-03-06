/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISSingleton.h"
#import "iTunesStore-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSRecursiveLock;

@interface ISTelephonyObserver : NSObject <ISSingleton> {
	CTServerConnectionRef _connection;	// 4 = 0x4
	CFMachPortRef _connectionPort;	// 8 = 0x8
	CFRunLoopSourceRef _connectionRunLoopSource;	// 12 = 0xc
	NSString *_dataStatusIndicator;	// 16 = 0x10
	NSRecursiveLock *_lock;	// 20 = 0x14
	NSString *_operatorName;	// 24 = 0x18
	CFRunLoopRef _runLoop;	// 28 = 0x1c
}
@property(readonly, assign) NSString *dataStatusIndicator;	// G=0x35ed97a9; 
@property(readonly, assign) NSString *operatorName;	// G=0x35ed9875; 
+ (void)setSharedInstance:(id)instance;	// 0x35ed959d
+ (id)sharedInstance;	// 0x35ed95f1
- (id)init;	// 0x35ed94c5
- (BOOL)_establishServerConnection;	// 0x35ed9925
- (void)_handleMessage:(void *)message withSize:(long)size;	// 0x35ed9bb1
- (void)_handleNotificationWithName:(CFStringRef)name userInfo:(CFDictionaryRef)info;	// 0x35ed9c09
- (void)_handleServerInvalidated;	// 0x35ed9d65
- (void)_invalidateServerConnection;	// 0x35ed9a89
- (void)_registerForNotifications;	// 0x35ed9b69
- (BOOL)beginObservingOnRunLoop:(CFRunLoopRef)loop;	// 0x35ed9665
// declared property getter: - (id)dataStatusIndicator;	// 0x35ed97a9
- (void)dealloc;	// 0x35ed9529
// declared property getter: - (id)operatorName;	// 0x35ed9875
@end

