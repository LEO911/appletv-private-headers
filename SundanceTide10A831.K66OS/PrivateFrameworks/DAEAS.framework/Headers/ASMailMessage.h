/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAMailMessage.h> // Unknown library

@class ASEmailItem;

@interface ASMailMessage : DAMailMessage {
	ASEmailItem *_ASEmailItem;	// 4 = 0x4
}
- (id)initWithASEmailItem:(id)asemailItem;	// 0x36e6006d
- (id)initWithCoder:(id)coder;	// 0x36e60811
- (id)attachments;	// 0x36e60561
- (id)body;	// 0x36e60491
- (int)bodySize;	// 0x36e604b1
- (int)bodyTruncated;	// 0x36e6051d
- (id)cc;	// 0x36e60369
- (id)conversationId;	// 0x36e60611
- (id)conversationIndex;	// 0x36e60631
- (id)date;	// 0x36e603c9
- (void)dealloc;	// 0x36e60021
- (id)description;	// 0x36e600c1
- (id)displayTo;	// 0x36e60409
- (void)encodeWithCoder:(id)coder;	// 0x36e60911
- (BOOL)flagged;	// 0x36e6046d
- (BOOL)flaggedIsSet;	// 0x36e606f5
- (id)folderID;	// 0x36e60691
- (id)from;	// 0x36e60389
- (int)importance;	// 0x36e60429
- (int)lastVerb;	// 0x36e606b1
- (id)longID;	// 0x36e60671
- (BOOL)meetingRequestIsActionable;	// 0x36e605c1
- (id)meetingRequestMetaData;	// 0x36e605a1
- (id)meetingRequestUUID;	// 0x36e60581
- (id)messageClass;	// 0x36e60541
- (BOOL)read;	// 0x36e60449
- (BOOL)readIsSet;	// 0x36e606d1
- (id)remoteID;	// 0x36e60651
- (id)replyTo;	// 0x36e603a9
- (id)rfc822Data;	// 0x36e607ad
- (int)smimeType;	// 0x36e6073d
- (id)subject;	// 0x36e603e9
- (id)threadTopic;	// 0x36e605f1
- (id)to;	// 0x36e60349
- (BOOL)verbIsSet;	// 0x36e60719
@end
