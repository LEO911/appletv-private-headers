/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@protocol SKRequestDelegate;

__attribute__((visibility("hidden")))
@interface SKRequest : NSObject {
@private
	id _requestInternal;	// 4 = 0x4
}
@property(assign, nonatomic) id<SKRequestDelegate> delegate;	// G=0x368352a9; S=0x368352c9; 
- (id)init;	// 0x36834fe5
- (void)_beginBackgroundTask;	// 0x368356d5
- (void)_daemonExited:(id)exited;	// 0x36835325
- (void)_endBackgroundTask;	// 0x368356d9
- (void)_mainThreadDaemonExited:(id)exited;	// 0x36835351
- (id)_newIdentifier;	// 0x368356dd
- (void)_registerForNotifications;	// 0x36835701
- (void)_requestFailedNotification:(id)notification;	// 0x368353f1
- (void)_requestFinishedNotification:(id)notification;	// 0x3683558d
- (void)_sendErrorToDelegate:(id)delegate;	// 0x368357dd
- (void)_sendFinishToDelegate;	// 0x36835861
- (void)_unregisterForNotifications;	// 0x368358d9
- (void)cancel;	// 0x368350ad
- (void)dealloc;	// 0x36835049
// declared property getter: - (id)delegate;	// 0x368352a9
- (BOOL)handleFinishResponse:(id)response returningError:(id *)error;	// 0x368352e9
- (void)issueRequestForIdentifier:(id)identifier;	// 0x368352f5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x368352c9
- (void)start;	// 0x36835189
@end
