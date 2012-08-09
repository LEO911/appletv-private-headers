/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_source, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface EKDaemonConnection : NSObject {
	unsigned long _options;	// 4 = 0x4
	NSString *_dbPath;	// 8 = 0x8
	unsigned _requestedEntityTypes;	// 12 = 0xc
	unsigned _serverPort;	// 16 = 0x10
	unsigned _machPort;	// 20 = 0x14
	unsigned _connectionPort;	// 24 = 0x18
	NSObject<OS_dispatch_queue> *_connectionLock;	// 28 = 0x1c
	id _delegate;	// 32 = 0x20
	NSMutableDictionary *_replyHandlers;	// 36 = 0x24
	unsigned _nextID;	// 40 = 0x28
	NSObject<OS_dispatch_source> *_replySource;	// 44 = 0x2c
	NSObject<OS_dispatch_queue> *_replyHandlerLock;	// 48 = 0x30
	BOOL _registeredForStartNote;	// 52 = 0x34
}
@property(assign) id delegate;	// G=0x34b72811; S=0x34b2043d; @synthesize=_delegate
@property(readonly, assign) unsigned port;	// G=0x34b20535; 
- (id)initWithOptions:(unsigned long)options path:(id)path entityTypes:(unsigned)types;	// 0x34b71bf5
- (BOOL)_connectToServer;	// 0x34b205a9
- (void)_daemonRestarted;	// 0x34b71fa9
- (void)_finishAllRepliesOnServerDeath;	// 0x34b7255d
- (void)_processReplyWithID:(unsigned)anId data:(id)data finished:(BOOL)finished;	// 0x34b72325
- (id)addReplyHandler:(id)handler;	// 0x34b21165
- (void)dealloc;	// 0x34b2191d
// declared property getter: - (id)delegate;	// 0x34b72811
- (void)disconnect;	// 0x34b21851
// declared property getter: - (unsigned)port;	// 0x34b20535
- (void)removeReplyHandler:(id)handler;	// 0x34b721b1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34b2043d
@end
