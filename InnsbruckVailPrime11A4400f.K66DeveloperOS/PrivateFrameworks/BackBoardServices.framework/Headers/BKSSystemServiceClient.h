/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import "BKSBaseXPCClient.h"


@interface BKSSystemServiceClient : BKSBaseXPCClient {
}
- (id)init;	// 0x301cfea5
- (id)initWithEndpoint:(id)endpoint;	// 0x301cfee1
- (void)_sendMessageType:(int)type withMessage:(id)message withReplyHandler:(id)replyHandler waitForReply:(BOOL)reply;	// 0x301d0bc9
- (void)canActivateApplication:(id)application withResult:(id)result;	// 0x301d01e9
- (id)clientCallbackQueue;	// 0x301d0c79
- (void)fireCompletion:(id)completion bundleIDResult:(id)result error:(id)error;	// 0x301d0d25
- (void)fireCompletion:(id)completion error:(id)error;	// 0x301d0c81
- (void)fireCompletion:(id)completion pidResult:(int)result error:(id)error;	// 0x301d0de5
- (void)fireCompletion:(id)completion reasonResult:(int)result error:(id)error;	// 0x301d0e91
- (void)invalidate;	// 0x301cff21
- (void)openApplication:(id)application options:(id)options clientPort:(unsigned)port withResult:(id)result;	// 0x301d0361
- (void)openURL:(id)url application:(id)application options:(id)options clientPort:(unsigned)port withResult:(id)result;	// 0x301d0585
- (void)pidForApplication:(id)application withResult:(id)result;	// 0x301d0071
- (void)queue_connectionWasCreated;	// 0x301d0b89
- (void)systemApplicationBundleIdentifierWithResult:(id)result;	// 0x301cff4d
- (void)terminateApplication:(id)application forReason:(int)reason andReport:(BOOL)report withDescription:(id)description withResult:(id)result;	// 0x301d07d9
- (void)terminateApplicationGroup:(int)group forReason:(int)reason andReport:(BOOL)report withDescription:(id)description withResult:(id)result;	// 0x301d09d1
@end

