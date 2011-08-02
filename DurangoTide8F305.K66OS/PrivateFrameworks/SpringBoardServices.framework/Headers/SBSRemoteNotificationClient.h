/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <NSObject.h> // Unknown library


@interface SBSRemoteNotificationClient : NSObject {
}
+ (int)enabledRemoteNotificationTypes;	// 0x31e547b9
+ (id)getPendingNotificationUserInfo;	// 0x31e547d5
+ (void)getSupportedTypes:(id *)types enabledTypes:(id *)types2;	// 0x31e548c9
+ (BOOL)hasRegisteredBundleIdentifiers;	// 0x31e548a5
+ (BOOL)isSystemwideEnabled;	// 0x31e5486d
+ (void)registerForRemoteNotificationTypes:(int)remoteNotificationTypes;	// 0x31e547a5
+ (void)setEnabledNotificationTypes:(int)types forBundleIdentifier:(id)bundleIdentifier;	// 0x31e549f5
+ (void)setSystemwideEnabled:(BOOL)enabled;	// 0x31e54891
@end
