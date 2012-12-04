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
+ (id)_loginUserNotificationForService:(id)service user:(id)user isForBadPassword:(BOOL)badPassword showForgetPassword:(BOOL)password;	// 0x32d75d59
+ (id)sharedInstance;	// 0x32d72461
- (id)init;	// 0x32d7250d
- (void)cancelRequestID:(id)anId;	// 0x32d75cfd
- (void)dealloc;	// 0x32d72589
- (void)fetchAuthTokenForUsername:(id)username service:(id)service outRequestID:(id *)anId completionBlock:(id)block;	// 0x32d725e1
- (void)fetchPasswordForUsername:(id)username service:(id)service outRequestID:(id *)anId completionBlock:(id)block;	// 0x32d72cad
- (void)requestAuthTokenForUsername:(id)username service:(id)service badPassword:(BOOL)password showForgotPassword:(BOOL)password4 outRequestID:(id *)anId completionBlock:(id)block;	// 0x32d74a01
- (void)requestPasswordForUsername:(id)username service:(id)service badPassword:(BOOL)password showForgotPassword:(BOOL)password4 outRequestID:(id *)anId completionBlock:(id)block;	// 0x32d745e1
- (void)setAuthTokenForUsername:(id)username service:(id)service authToken:(id)token outRequestID:(id *)anId completionBlock:(id)block;	// 0x32d73bd5
- (void)setPasswordForUsername:(id)username service:(id)service password:(id)password outRequestID:(id *)anId completionBlock:(id)block;	// 0x32d7322d
- (BOOL)supportsAuthTokenRequests;	// 0x32d749f5
@end
