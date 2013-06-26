/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"

@class NSObject;
@protocol OS_dispatch_queue, MSNotificationDelegate;

@interface MSNotificationObserver : MSMailDefaultService {
	NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
	NSObject<MSNotificationDelegate> *_delegate;	// 36 = 0x24
}
@property(assign, nonatomic) NSObject<MSNotificationDelegate> *delegate;	// G=0x313441d1; S=0x313438fd; @synthesize=_delegate
+ (id)registerNotificationObserver:(id)observer shouldLaunchMobileMail:(BOOL)mail queue:(id)queue;	// 0x31343799
- (void)_delegateDidShutdownWithError:(id)_delegate;	// 0x31343955
- (void)_didReceiveNotificationData:(id)data;	// 0x31343fb9
- (id)_initWithDelegate:(id)delegate queue:(id)queue;	// 0x3134382d
- (void)_registerObserverClient;	// 0x31343e05
- (id)copyActiveAccounts;	// 0x31343c3d
- (void)dealloc;	// 0x313438a9
// declared property getter: - (id)delegate;	// 0x313441d1
- (id)messagesForAccountIDs:(id)accountIDs count:(unsigned)count cutOffDates:(id)dates;	// 0x313439b9
- (void)responseConnection:(id)connection handleError:(id)error;	// 0x31343f2d
- (void)responseConnection:(id)connection handleResponse:(id)response;	// 0x31343f81
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x313438fd
@end
