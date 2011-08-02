/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"


@interface DAMailMessage : NSObject <NSCoding> {
}
- (id)initWithCoder:(id)coder;	// 0x340b488d
- (id)attachments;	// 0x340b4819
- (id)body;	// 0x340b4809
- (int)bodySize;	// 0x340b480d
- (int)bodyTruncated;	// 0x340b4811
- (id)cc;	// 0x340b47e9
- (id)conversationId;	// 0x340b4829
- (id)conversationIndex;	// 0x340b482d
- (id)date;	// 0x340b47f5
- (id)displayTo;	// 0x340b47fd
- (void)encodeWithCoder:(id)coder;	// 0x340b4859
- (id)folderID;	// 0x340b4839
- (id)from;	// 0x340b47ed
- (int)importance;	// 0x340b4801
- (int)lastVerb;	// 0x340b483d
- (id)longID;	// 0x340b4835
- (id)meetingRequestMetaData;	// 0x340b4821
- (id)meetingRequestUUID;	// 0x340b481d
- (id)messageClass;	// 0x340b4815
- (BOOL)read;	// 0x340b4805
- (BOOL)readIsSet;	// 0x340b4841
- (id)remoteID;	// 0x340b4831
- (id)replyTo;	// 0x340b47f1
- (id)rfc822Data;	// 0x340b4a15
- (id)subject;	// 0x340b47f9
- (id)threadTopic;	// 0x340b4825
- (id)to;	// 0x340b47e5
- (BOOL)verbIsSet;	// 0x340b4845
@end
