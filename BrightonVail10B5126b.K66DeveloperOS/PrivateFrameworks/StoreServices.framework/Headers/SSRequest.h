/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"

@class SSXPCConnection;
@protocol OS_dispatch_queue, SSRequestDelegate;

@interface SSRequest : NSObject <SSXPCCoding> {
	int _backgroundTaskIdentifier;	// 4 = 0x4
	BOOL _cancelAfterTaskExpiration;	// 8 = 0x8
	id<SSRequestDelegate> _delegate;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
	SSXPCConnection *_requestConnection;	// 20 = 0x14
	SSXPCConnection *_responseConnection;	// 24 = 0x18
}
@property(assign, nonatomic) id<SSRequestDelegate> delegate;	// G=0x354bac49; S=0x354bac59; @synthesize=_delegate
@property(assign, nonatomic) BOOL shouldCancelAfterTaskExpiration;	// G=0x354ba25d; S=0x354ba1dd; 
- (id)init;	// 0x354b9e45
- (void)_beginBackgroundTask;	// 0x354ba829
- (void)_endBackgroundTask;	// 0x354baad1
- (id)_initSSRequest;	// 0x354b9d81
- (void)_shutdownRequest;	// 0x354ba32d
- (void)_shutdownRequestWithMessageID:(long long)messageID;	// 0x354bab65
- (void)_startWithMessageID:(long long)messageID messageBlock:(id)block;	// 0x354ba3ad
- (void)cancel;	// 0x354b9f29
- (void)dealloc;	// 0x354b9e55
// declared property getter: - (id)delegate;	// 0x354bac49
- (void)disconnect;	// 0x354b9fa9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x354bac59
// declared property setter: - (void)setShouldCancelAfterTaskExpiration:(BOOL)cancelAfterTaskExpiration;	// 0x354ba1dd
// declared property getter: - (BOOL)shouldCancelAfterTaskExpiration;	// 0x354ba25d
- (BOOL)start;	// 0x354ba029
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x354ba1ad
@end
