/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

#import "APSMessage.h"

@class NSDate;

@interface APSIncomingMessage : APSMessage {
}
@property(assign, nonatomic, getter=wasFromStorage) BOOL fromStorage;	// G=0x33c7abf5; S=0x33c7ac25; 
@property(assign, nonatomic, getter=wasLastMessageFromStorage) BOOL lastMessageFromStorage;	// G=0x33c7ac69; S=0x33c7ac99; 
@property(copy, nonatomic) NSDate *timestamp;	// G=0x33c7abbd; S=0x33c7abd9; 
// declared property setter: - (void)setFromStorage:(BOOL)storage;	// 0x33c7ac25
// declared property setter: - (void)setLastMessageFromStorage:(BOOL)storage;	// 0x33c7ac99
// declared property setter: - (void)setTimestamp:(id)timestamp;	// 0x33c7abd9
// declared property getter: - (id)timestamp;	// 0x33c7abbd
// declared property getter: - (BOOL)wasFromStorage;	// 0x33c7abf5
// declared property getter: - (BOOL)wasLastMessageFromStorage;	// 0x33c7ac69
@end

