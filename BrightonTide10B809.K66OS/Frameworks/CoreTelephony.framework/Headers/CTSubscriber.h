/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <NSObject.h> // Unknown library
#import "CoreTelephony-Structs.h"

@class NSData;

@interface CTSubscriber : NSObject {
	void *_internal;	// 4 = 0x4
	CTServerConnection *_server;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSData *carrierToken;	// G=0x3175a3c1; @dynamic
- (id)init;	// 0x3175a271
// declared property getter: - (id)carrierToken;	// 0x3175a3c1
- (void)dealloc;	// 0x3175a379
- (BOOL)refreshCarrierToken;	// 0x3175a619
@end

