/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import </libobjc.A.h>
#import "HomeSharing-Structs.h"

@class NSNetService;

@interface _HSUnresolvedLibrary : NSObject {
	int _browserType;	// 4 = 0x4
	id _completionHandler;	// 8 = 0x8
	NSNetService *_netService;	// 12 = 0xc
	DNSServiceRef_tRef _resolvingDNSService;	// 16 = 0x10
}
- (id)initWithNSNetService:(id)nsnetService browserType:(int)type;	// 0x3106981d
- (void)_callAndInvalidateCompletionHandlerWithLibrary:(id)library;	// 0x310698f9
- (void)_netServiceDidNotResolve;	// 0x3106a405
- (void)_netServiceDidResolveAddressWithTXTRecordData:(id)_netService host:(hostent *)host port:(unsigned short)port;	// 0x31069bed
- (void)_timeoutResolve;	// 0x31069bb9
- (void)dealloc;	// 0x31069881
- (void)resolveWithTimeout:(double)timeout completionHandler:(id)handler;	// 0x3106993d
@end

