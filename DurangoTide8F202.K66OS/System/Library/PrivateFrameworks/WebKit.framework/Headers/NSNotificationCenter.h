/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSNotificationCenter.h> // Unknown library


@interface NSNotificationCenter (WebNSNotificationCenterExtras)
+ (void)_postNotificationName:(id)name;	// 0x32c6b2f1
- (void)postNotificationOnMainThreadWithName:(id)name object:(id)object;	// 0x32c6b1e5
- (void)postNotificationOnMainThreadWithName:(id)name object:(id)object userInfo:(id)info;	// 0x32c6b209
- (void)postNotificationOnMainThreadWithName:(id)name object:(id)object userInfo:(id)info waitUntilDone:(BOOL)done;	// 0x32c6b229
@end
