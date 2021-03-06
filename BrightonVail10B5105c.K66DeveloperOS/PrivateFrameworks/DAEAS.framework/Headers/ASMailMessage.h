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
- (id)initWithASEmailItem:(id)asemailItem;	// 0x3369cdcd
- (id)initWithCoder:(id)coder;	// 0x3369d571
- (id)attachments;	// 0x3369d2c1
- (id)body;	// 0x3369d1f1
- (int)bodySize;	// 0x3369d211
- (int)bodyTruncated;	// 0x3369d27d
- (id)cc;	// 0x3369d0c9
- (id)conversationId;	// 0x3369d371
- (id)conversationIndex;	// 0x3369d391
- (id)date;	// 0x3369d129
- (void)dealloc;	// 0x3369cd81
- (id)description;	// 0x3369ce21
- (id)displayTo;	// 0x3369d169
- (void)encodeWithCoder:(id)coder;	// 0x3369d671
- (BOOL)flagged;	// 0x3369d1cd
- (BOOL)flaggedIsSet;	// 0x3369d455
- (id)folderID;	// 0x3369d3f1
- (id)from;	// 0x3369d0e9
- (int)importance;	// 0x3369d189
- (int)lastVerb;	// 0x3369d411
- (id)longID;	// 0x3369d3d1
- (BOOL)meetingRequestIsActionable;	// 0x3369d321
- (id)meetingRequestMetaData;	// 0x3369d301
- (id)meetingRequestUUID;	// 0x3369d2e1
- (id)messageClass;	// 0x3369d2a1
- (BOOL)read;	// 0x3369d1a9
- (BOOL)readIsSet;	// 0x3369d431
- (id)remoteID;	// 0x3369d3b1
- (id)replyTo;	// 0x3369d109
- (id)rfc822Data;	// 0x3369d50d
- (int)smimeType;	// 0x3369d49d
- (id)subject;	// 0x3369d149
- (id)threadTopic;	// 0x3369d351
- (id)to;	// 0x3369d0a9
- (BOOL)verbIsSet;	// 0x3369d479
@end

