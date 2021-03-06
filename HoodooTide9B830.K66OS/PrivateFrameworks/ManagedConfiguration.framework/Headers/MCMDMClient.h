/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library
#import "ManagedConfiguration-Structs.h"

@class CPDistributedMessagingCenter;

@interface MCMDMClient : NSObject {
	CPDistributedMessagingCenter *_messageCenter;	// 4 = 0x4
}
+ (id)sharedClient;	// 0x33b1fadd
- (id)init;	// 0x33b1fa6d
- (BOOL)authenticateWithCheckInURL:(id)url identity:(SecIdentity *)identity topic:(id)topic useDevelopmentAPNS:(BOOL)apns signMessage:(BOOL)message outError:(id *)error;	// 0x33b1fdfd
- (BOOL)checkOutCheckInURL:(id)url identity:(SecIdentity *)identity topic:(id)topic signMessage:(BOOL)message outError:(id *)error;	// 0x33b1fbc9
- (void)notifyNewConfiguration;	// 0x33b1fb99
- (void)removeManagedAppsAccordingToFlags;	// 0x33b1fb09
- (void)scheduleTokenUpdate;	// 0x33b1fb69
- (void)simulatePush;	// 0x33b1fb39
@end

