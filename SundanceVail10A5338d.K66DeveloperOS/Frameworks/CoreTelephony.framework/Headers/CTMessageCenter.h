/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import "CoreTelephony-Structs.h"
#import <NSObject.h> // Unknown library


@interface CTMessageCenter : NSObject {
}
+ (id)sharedMessageCenter;	// 0x3713c689
- (id)init;	// 0x3713c6d1
- (void)acknowledgeIncomingMessageWithId:(unsigned)anId;	// 0x3713e581
- (void)acknowledgeOutgoingMessageWithId:(unsigned)anId;	// 0x3713e831
- (void)addMessageOfType:(int)type toArray:(id)array withIdsFromArray:(id)array3;	// 0x3713e175
- (id)allIncomingMessages;	// 0x3713e249
- (void)dealloc;	// 0x3713c771
- (id)decodeMessage:(id)message;	// 0x3713eb89
- (id)deferredMessageWithId:(unsigned)anId;	// 0x3713e84d
- (id)encodeMessage:(id)message;	// 0x3713eb6d
- (BOOL)getCharacterCount:(int *)count andMessageSplitThreshold:(int *)threshold forSmsText:(id)smsText;	// 0x3713ef29
- (int)incomingMessageCount;	// 0x3713df89
- (id)incomingMessageWithId:(unsigned)anId;	// 0x3713e839
- (id)incomingMessageWithId:(unsigned)anId isDeferred:(BOOL)deferred;	// 0x3713d7fd
- (XXStruct_K5nmsA)isDeliveryReportsEnabled:(BOOL *)enabled;	// 0x3713eba5
- (BOOL)isMmsConfigured;	// 0x3713ebd1
- (BOOL)isMmsEnabled;	// 0x3713ebb9
- (XXStruct_K5nmsA)send:(id)send;	// 0x3713d655
- (XXStruct_K5nmsA)send:(id)send withMoreToFollow:(BOOL)follow;	// 0x3713d681
- (XXStruct_K5nmsA)sendMMS:(id)mms;	// 0x3713d419
- (XXStruct_K5nmsA)sendMMSFromData:(id)data messageId:(unsigned)anId;	// 0x3713cced
- (void)sendMessageAsSmsToShortCodeRecipients:(id)shortCodeRecipients andReplaceData:(id *)data;	// 0x3713d0b5
- (XXStruct_K5nmsA)sendSMS:(id)sms withMoreToFollow:(BOOL)follow;	// 0x3713c7b1
- (BOOL)sendSMSWithText:(id)text serviceCenter:(id)center toAddress:(id)address;	// 0x3713edc1
- (BOOL)sendSMSWithText:(id)text serviceCenter:(id)center toAddress:(id)address withMoreToFollow:(BOOL)follow;	// 0x3713ede5
- (void)setDeliveryReportsEnabled:(BOOL)enabled;	// 0x3713ebb5
- (id)statusOfOutgoingMessages;	// 0x3713e861
@end
