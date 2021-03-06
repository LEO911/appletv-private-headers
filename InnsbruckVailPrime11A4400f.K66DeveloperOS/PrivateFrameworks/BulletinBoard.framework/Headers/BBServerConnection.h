/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "BBXPCOutgoingConnection.h"


@interface BBServerConnection : BBXPCOutgoingConnection {
	int _serverListeningToken;	// 40 = 0x28
}
- (id)initWithServiceName:(id)serviceName queue:(id)queue target:(id)target remoteProtocol:(id)protocol;	// 0x30245ddd
- (void)_configureRemoteProxy;	// 0x30245ec9
- (void)connect;	// 0x30245eb9
- (void)dealloc;	// 0x30245e41
- (void)invalidate;	// 0x30245e6d
@end

