/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface UIRemoteApplication : NSObject {
	NSString *_machServiceName;	// 4 = 0x4
	unsigned _port;	// 8 = 0x8
}
- (id)initWithBundleIdentifier:(id)bundleIdentifier;	// 0x3479046d
- (id)initWithMachServiceName:(id)machServiceName;	// 0x347904a9
- (void)backgroundContinuationEnabledDidChange:(BOOL)backgroundContinuationEnabled;	// 0x34790ac9
- (void)dealloc;	// 0x347904fd
- (void)hideTopMostMiniAlert;	// 0x34790609
- (void)localNotificationDidSnooze:(id)localNotification;	// 0x34790a1d
- (void)localNotificationMessageDelivered:(id)delivered;	// 0x34790971
- (void)remoteNotificationMessageDelivered;	// 0x3479091d
- (void)remoteNotificationRegistrationFailedWithErrorDomain:(id)errorDomain code:(int)code localizedDescription:(id)description;	// 0x34790891
- (void)remoteNotificationRegistrationSucceededWithDeviceToken:(id)deviceToken;	// 0x34790805
- (void)sheetWithRemoteViewIdentifierDidDismiss:(id)sheetWithRemoteViewIdentifier;	// 0x3479076d
- (void)showTopMostMiniAlertWithSynchronizationPort:(unsigned)synchronizationPort;	// 0x3479065d
- (void)simpleRemoteActionDidOccur:(int)simpleRemoteAction;	// 0x34790715
- (void)statusBarWillChangeOrientation:(int)statusBar duration:(float)duration;	// 0x347906b5
- (void)updatePort;	// 0x34790571
- (void)wakeTimerFired;	// 0x34790b21
@end

