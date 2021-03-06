/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASFetchAttachmentTaskProtocol.h"
#import "ASTask.h"

@class NSString;

@interface ASFetchAttachmentTask : ASTask <ASFetchAttachmentTaskProtocol> {
	NSString *_messageServerID;	// 104 = 0x68
	NSString *_attachmentName;	// 108 = 0x6c
}
@property(readonly, retain) NSString *attachmentName;	// G=0x32189fe5; converted property
- (id)initForMessageServerID:(id)messageServerID andAttachmentName:(id)name;	// 0x3218a005
// converted property getter: - (id)attachmentName;	// 0x32189fe5
- (id)command;	// 0x32189d99
- (int)commandCode;	// 0x32189cd5
- (int)connectionActionForResponse:(id)response;	// 0x32189cd1
- (id)contentType;	// 0x32189e09
- (void)dealloc;	// 0x3218a079
- (BOOL)expectsWBXML;	// 0x32189ccd
- (void)finishWithError:(id)error;	// 0x32189b21
- (id)messageID;	// 0x32189ff5
- (id)parameterData;	// 0x32189cd9
- (BOOL)processContext:(id)context;	// 0x32189e0d
- (id)requestBody;	// 0x32189cc9
- (BOOL)shouldLogIncomingData;	// 0x3218a0d9
@end

