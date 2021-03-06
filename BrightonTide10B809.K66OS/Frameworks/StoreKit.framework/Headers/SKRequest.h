/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <NSObject.h> // Unknown library

@class SKPaymentQueueClient;
@protocol SKRequestDelegate;

@interface SKRequest : NSObject {
	id _requestInternal;	// 4 = 0x4
}
@property(assign, nonatomic) id<SKRequestDelegate> delegate;	// G=0x32a96c51; S=0x32a96c71; 
@property(copy, nonatomic) SKPaymentQueueClient *paymentQueueClient;	// G=0x32a96cf5; S=0x32a96d39; 
- (id)init;	// 0x32a96af1
- (void)_beginBackgroundTask;	// 0x32a96ed5
- (void)_endBackgroundTask;	// 0x32a96fa5
- (void)_sendXPCMessage;	// 0x32a96d89
- (void)_shutdownRequest;	// 0x32a96d8d
- (void)_startWithMessage:(id)message replyBlock:(id)block;	// 0x32a96df9
- (void)cancel;	// 0x32a96bc1
- (void)dealloc;	// 0x32a96b75
// declared property getter: - (id)delegate;	// 0x32a96c51
// declared property getter: - (id)paymentQueueClient;	// 0x32a96cf5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32a96c71
// declared property setter: - (void)setPaymentQueueClient:(id)client;	// 0x32a96d39
- (void)start;	// 0x32a96c91
@end

