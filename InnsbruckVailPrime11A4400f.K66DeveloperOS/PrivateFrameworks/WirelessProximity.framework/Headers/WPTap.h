/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

#import "XPCClientDelegate.h"
#import </libobjc.A.h>

@class XPCClient;
@protocol WPTapDelegate;

@interface WPTap : NSObject <XPCClientDelegate> {
	id<WPTapDelegate> _delegate;	// 4 = 0x4
	XPCClient *_xpcClient;	// 8 = 0x8
	int _state;	// 12 = 0xc
}
@property(readonly, assign) int state;	// G=0x33a88d8d; @synthesize=_state
- (id)init;	// 0x33a88569
- (void).cxx_destruct;	// 0x33a88da1
- (void)connectionDied;	// 0x33a88d45
- (void)connectionInterrupted;	// 0x33a88d89
- (void)dealloc;	// 0x33a885ed
- (id)description;	// 0x33a88691
- (void)messageArrived:(id)arrived;	// 0x33a88a69
- (void)startWirelessTouchClient:(id)client withUUID:(id)uuid withTransport:(unsigned char)transport;	// 0x33a8887d
- (void)startWirelessTouchServer:(id)server withUUID:(id)uuid allowTransport:(unsigned char)transport;	// 0x33a88761
// declared property getter: - (int)state;	// 0x33a88d8d
- (void)stopWirelessTouchClient;	// 0x33a88a01
- (void)stopWirelessTouchServer;	// 0x33a88999
@end
