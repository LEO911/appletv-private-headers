/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSNotificationCenter.h> // Unknown library


@interface NSNotificationCenter (BRProviderHelpers)
- (void)postProviderItemsModifiedNotificationForRange:(NSRange)range object:(id)object;	// 0x35e7a3a1
- (void)postProviderItemsModifiedNotificationForRanges:(id)ranges object:(id)object;	// 0x35e7a3fd
- (void)postProviderTitleChangedNotificationFrom:(id)from;	// 0x35e7a459
@end

@interface NSNotificationCenter (ThreadSpecificNotifications)
- (void)_postNotification:(id)notification;	// 0x35ed7dc1
- (void)postNotification:(id)notification onThread:(id)thread;	// 0x35ed7d21
- (void)postNotificationName:(id)name object:(id)object onThread:(id)thread;	// 0x35ed7d3d
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info onThread:(id)thread;	// 0x35ed7d79
- (void)postNotificationOnMainThread:(id)thread;	// 0x35ed7c55
- (void)postNotificationOnMainThreadNamed:(id)named;	// 0x35ed7c85
- (void)postNotificationOnMainThreadNamed:(id)named object:(id)object;	// 0x35ed7cd5
@end
