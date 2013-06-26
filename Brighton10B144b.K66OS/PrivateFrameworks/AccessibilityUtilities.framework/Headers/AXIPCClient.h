/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import "AccessibilityUtilities-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface AXIPCClient : NSObject {
	CFMachPortRef _serverPort;	// 4 = 0x4
	unsigned _assignedServerMachPort;	// 8 = 0x8
	id _portDeathHandler;	// 12 = 0xc
	float _timeout;	// 16 = 0x10
	NSString *_clientIdentifier;	// 20 = 0x14
	CFRunLoopSourceRef _clientSource;	// 24 = 0x18
	unsigned serviceMachPort;	// 28 = 0x1c
	BOOL _connected;	// 32 = 0x20
	NSString *_serviceName;	// 36 = 0x24
	unsigned clientCallbackPort;	// 40 = 0x28
	CFRunLoopSourceRef clientCallbackSource;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) unsigned clientCallbackPort;	// G=0x3338d2ad; @synthesize
@property(readonly, assign, nonatomic) CFRunLoopSourceRef clientCallbackSource;	// G=0x3338d29d; @synthesize
@property(retain, nonatomic) NSString *clientIdentifier;	// G=0x3338e341; S=0x3338d205; @synthesize=_clientIdentifier
@property(assign, nonatomic, getter=isConnected) BOOL connected;	// G=0x3338e2ad; S=0x3338e2bd; @synthesize=_connected
@property(copy, nonatomic) id portDeathHandler;	// G=0x3338e2ed; S=0x3338e211; @synthesize=_portDeathHandler
@property(assign, nonatomic) CFMachPortRef serverPort;	// G=0x3338e301; S=0x3338e311; @synthesize=_serverPort
@property(readonly, assign, nonatomic) unsigned serviceMachPort;	// G=0x3338d1e9; @synthesize
@property(retain, nonatomic) NSString *serviceName;	// G=0x3338e2cd; S=0x3338e2dd; @synthesize=_serviceName
@property(assign, nonatomic) float timeout;	// G=0x3338e321; S=0x3338e331; @synthesize=_timeout
+ (id)allClients;	// 0x3338cf69
+ (void)initialize;	// 0x3338cf0d
- (id)initWithPort:(unsigned)port;	// 0x3338d065
- (id)initWithServiceName:(id)serviceName;	// 0x3338cfc5
- (void)_registerWithServer;	// 0x3338d2fd
- (void)_serverDied;	// 0x3338e239
- (BOOL)_verifyConnectionWithError:(id *)error;	// 0x3338db6d
// declared property getter: - (unsigned)clientCallbackPort;	// 0x3338d2ad
// declared property getter: - (CFRunLoopSourceRef)clientCallbackSource;	// 0x3338d29d
// declared property getter: - (id)clientIdentifier;	// 0x3338e341
- (BOOL)connectWithError:(id *)error;	// 0x3338d5a1
- (void)dealloc;	// 0x3338d0fd
- (BOOL)disconnectWithError:(id *)error;	// 0x3338da4d
// declared property getter: - (BOOL)isConnected;	// 0x3338e2ad
// declared property getter: - (id)portDeathHandler;	// 0x3338e2ed
- (id)sendMessage:(id)message withError:(id *)error;	// 0x3338deb9
- (void)sendSimpleMessage:(id)message;	// 0x3338dcb5
- (BOOL)sendSimpleMessage:(id)message withError:(id *)error;	// 0x3338dcc9
// declared property getter: - (CFMachPortRef)serverPort;	// 0x3338e301
// declared property getter: - (unsigned)serviceMachPort;	// 0x3338d1e9
// declared property getter: - (id)serviceName;	// 0x3338e2cd
// declared property setter: - (void)setClientIdentifier:(id)identifier;	// 0x3338d205
// declared property setter: - (void)setConnected:(BOOL)connected;	// 0x3338e2bd
// declared property setter: - (void)setPortDeathHandler:(id)handler;	// 0x3338e211
// declared property setter: - (void)setServerPort:(CFMachPortRef)port;	// 0x3338e311
// declared property setter: - (void)setServiceName:(id)name;	// 0x3338e2dd
// declared property setter: - (void)setTimeout:(float)timeout;	// 0x3338e331
// declared property getter: - (float)timeout;	// 0x3338e321
- (BOOL)verifyConnectionExists;	// 0x3338d529
@end
