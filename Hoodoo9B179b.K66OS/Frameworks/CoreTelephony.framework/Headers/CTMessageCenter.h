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
+ (id)sharedMessageCenter;	// 0x32d51d35
- (id)init;	// 0x32d51d7d
- (void)acknowledgeIncomingMessageWithId:(unsigned)anId;	// 0x32d52a59
- (void)acknowledgeOutgoingMessageWithId:(unsigned)anId;	// 0x32d52aa5
- (id)allIncomingMessages;	// 0x32d52911
- (id)decodeMessage:(id)message;	// 0x32d52c69
- (id)deferredMessageWithId:(unsigned)anId;	// 0x32d52af9
- (id)encodeMessage:(id)message;	// 0x32d52c4d
- (BOOL)getCharacterCount:(int *)count andMessageSplitThreshold:(int *)threshold forSmsText:(id)smsText;	// 0x32d52f09
- (int)incomingMessageCount;	// 0x32d528d5
- (id)incomingMessageWithId:(unsigned)anId;	// 0x32d52aad
- (id)incomingMessageWithId:(unsigned)anId telephonyCenter:(CTTelephonyCenterRef)center isDeferred:(BOOL)deferred;	// 0x32d5272d
- (XXStruct_K5nmsA)isDeliveryReportsEnabled:(BOOL *)enabled;	// 0x32d52c85
- (BOOL)isMmsConfigured;	// 0x32d52d4d
- (BOOL)isMmsEnabled;	// 0x32d52d35
- (XXStruct_K5nmsA)send:(id)send;	// 0x32d52599
- (XXStruct_K5nmsA)send:(id)send withMoreToFollow:(BOOL)follow;	// 0x32d525c5
- (XXStruct_K5nmsA)sendMMS:(id)mms;	// 0x32d5233d
- (XXStruct_K5nmsA)sendMMSFromData:(id)data messageId:(unsigned)anId;	// 0x32d51f51
- (void)sendMessageAsSmsToShortCodeRecipients:(id)shortCodeRecipients andReplaceData:(id *)data;	// 0x32d52001
- (XXStruct_K5nmsA)sendSMS:(id)sms withMoreToFollow:(BOOL)follow;	// 0x32d51da9
- (BOOL)sendSMSWithText:(id)text serviceCenter:(id)center toAddress:(id)address;	// 0x32d52da1
- (BOOL)sendSMSWithText:(id)text serviceCenter:(id)center toAddress:(id)address withMoreToFollow:(BOOL)follow;	// 0x32d52dc5
- (void)setDeliveryReportsEnabled:(BOOL)enabled;	// 0x32d52d09
- (id)statusOfOutgoingMessages;	// 0x32d52b45
@end
