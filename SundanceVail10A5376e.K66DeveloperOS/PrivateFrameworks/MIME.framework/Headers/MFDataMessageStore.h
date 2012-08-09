/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MessageStore.h"

@class NSData;

@interface MFDataMessageStore : MessageStore {
	NSData *_data;	// 24 = 0x18
	Class _messageClass;	// 28 = 0x1c
}
- (id)initWithData:(id)data;	// 0x3698bef1
- (id)_cachedBodyDataForMessage:(id)message valueIfNotPresent:(id)present;	// 0x3698c209
- (id)_cachedBodyForMessage:(id)message valueIfNotPresent:(id)present;	// 0x3698c201
- (id)_cachedHeadersForMessage:(id)message valueIfNotPresent:(id)present;	// 0x3698c205
- (id)account;	// 0x3698c055
- (id)bodyDataForMessage:(id)message isComplete:(BOOL *)complete isPartial:(BOOL *)partial downloadIfNecessary:(BOOL)necessary;	// 0x3698c121
- (void)dealloc;	// 0x3698bf49
- (id)headerDataForMessage:(id)message downloadIfNecessary:(BOOL)necessary;	// 0x3698c059
- (id)mailboxUid;	// 0x3698c22d
- (id)message;	// 0x3698bfad
- (void)setMessageClass:(Class)aClass;	// 0x3698bf9d
- (id)storePath;	// 0x3698bf95
- (void)writeUpdatedMessageDataToDisk;	// 0x3698bf99
@end
