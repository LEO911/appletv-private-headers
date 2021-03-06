/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Marco.framework/Marco
 */

#import <NSObject.h> // Unknown library

@class IMRemoteObject;
@protocol MarcoLogServerProtocol;

@interface MarcoClient : NSObject {
	IMRemoteObject *_remoteObject;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) BOOL connect;	// G=0x30bfe811; 
@property(readonly, assign, nonatomic) BOOL isConnected;	// G=0x30bfe719; 
@property(readonly, assign, nonatomic) id<MarcoLogServerProtocol> remoteServer;	// G=0x30bfe72d; 
// declared property getter: - (BOOL)connect;	// 0x30bfe811
- (BOOL)disconnect;	// 0x30bfe781
// declared property getter: - (BOOL)isConnected;	// 0x30bfe719
// declared property getter: - (id)remoteServer;	// 0x30bfe72d
@end

