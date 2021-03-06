/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import <NSNotificationCenter.h> // Unknown library


@interface NSNotificationCenter (BRProviderHelpers)
- (void)postProviderItemsModifiedNotificationForRange:(NSRange)range object:(id)object;	// 0x32faedcd
- (void)postProviderItemsModifiedNotificationForRanges:(id)ranges object:(id)object;	// 0x32faed75
- (void)postProviderTitleChangedNotificationFrom:(id)from;	// 0x32faed55
@end

@interface NSNotificationCenter (ThreadSpecificNotifications)
- (void)_postNotification:(id)notification;	// 0x32fdcef9
- (void)postNotification:(id)notification onThread:(id)thread;	// 0x32f225ed
- (void)postNotificationName:(id)name object:(id)object onThread:(id)thread;	// 0x32fdcf29
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info onThread:(id)thread;	// 0x32f225a9
- (void)postNotificationOnMainThread:(id)thread;	// 0x32fdcfed
- (void)postNotificationOnMainThreadNamed:(id)named;	// 0x32fdcfa5
- (void)postNotificationOnMainThreadNamed:(id)named object:(id)object;	// 0x32fdcf5d
@end

