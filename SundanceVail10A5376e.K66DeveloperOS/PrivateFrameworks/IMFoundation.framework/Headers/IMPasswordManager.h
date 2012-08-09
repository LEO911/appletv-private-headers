/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, ACAccountStore;

@interface IMPasswordManager : NSObject {
	NSMutableSet *_runningQueries;	// 4 = 0x4
	ACAccountStore *_accountStore;	// 8 = 0x8
}
+ (id)_loginUserNotificationForService:(id)service user:(id)user isForBadPassword:(BOOL)badPassword showForgetPassword:(BOOL)password;	// 0x36ed3129
+ (id)sharedInstance;	// 0x36ecf831
- (id)init;	// 0x36ecf8dd
- (void)cancelRequestID:(id)anId;	// 0x36ed30cd
- (void)dealloc;	// 0x36ecf959
- (void)fetchAuthTokenForUsername:(id)username service:(id)service outRequestID:(id *)anId completionBlock:(id)block;	// 0x36ecf9b1
- (void)fetchPasswordForUsername:(id)username service:(id)service outRequestID:(id *)anId completionBlock:(id)block;	// 0x36ed007d
- (void)requestAuthTokenForUsername:(id)username service:(id)service badPassword:(BOOL)password showForgotPassword:(BOOL)password4 outRequestID:(id *)anId completionBlock:(id)block;	// 0x36ed1dd1
- (void)requestPasswordForUsername:(id)username service:(id)service badPassword:(BOOL)password showForgotPassword:(BOOL)password4 outRequestID:(id *)anId completionBlock:(id)block;	// 0x36ed19b1
- (void)setAuthTokenForUsername:(id)username service:(id)service authToken:(id)token outRequestID:(id *)anId completionBlock:(id)block;	// 0x36ed0fa5
- (void)setPasswordForUsername:(id)username service:(id)service password:(id)password outRequestID:(id *)anId completionBlock:(id)block;	// 0x36ed05fd
- (BOOL)supportsAuthTokenRequests;	// 0x36ed1dc5
@end
