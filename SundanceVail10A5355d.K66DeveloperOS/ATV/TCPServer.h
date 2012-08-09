/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSNetService;

__attribute__((visibility("hidden")))
@interface TCPServer : XXUnknownSuperclass {
	id delegate;	// 4 = 0x4
	NSString *domain;	// 8 = 0x8
	NSString *name;	// 12 = 0xc
	NSString *type;	// 16 = 0x10
	unsigned short port;	// 20 = 0x14
	CFSocketRef ipv4socket;	// 24 = 0x18
	CFSocketRef ipv6socket;	// 28 = 0x1c
	NSNetService *netService;	// 32 = 0x20
	BOOL publishConnection;	// 36 = 0x24
	CFRunLoopRef _runLoop;	// 40 = 0x28
	CFRunLoopSourceRef _source4;	// 44 = 0x2c
	CFRunLoopSourceRef _source6;	// 48 = 0x30
}
@property(assign) id delegate;	// G=0x219fb1; S=0x219fc1; converted property
@property(retain) NSString *domain;	// G=0x219fd1; S=0x219fe1; converted property
@property(retain) NSString *name;	// G=0x21a025; S=0x21a035; converted property
@property(assign) unsigned short port;	// G=0x21a0cd; S=0x21a0dd; converted property
@property(retain) NSString *type;	// G=0x21a079; S=0x21a089; converted property
- (id)init;	// 0x219f25
- (void)dealloc;	// 0x219f29
// converted property getter: - (id)delegate;	// 0x219fb1
// converted property getter: - (id)domain;	// 0x219fd1
- (void)handleNewConnectionFromAddress:(id)address inputStream:(id)stream outputStream:(id)stream3;	// 0x21a0fd
// converted property getter: - (id)name;	// 0x21a025
// converted property getter: - (unsigned short)port;	// 0x21a0cd
- (void)publishConnection:(BOOL)connection;	// 0x21a0ed
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x219fc1
// converted property setter: - (void)setDomain:(id)domain;	// 0x219fe1
// converted property setter: - (void)setName:(id)name;	// 0x21a035
// converted property setter: - (void)setPort:(unsigned short)port;	// 0x21a0dd
// converted property setter: - (void)setType:(id)type;	// 0x21a089
- (BOOL)start:(id *)start;	// 0x21a15d
- (BOOL)stop;	// 0x21a75d
// converted property getter: - (id)type;	// 0x21a079
@end
