/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASFetchAttachmentTaskProtocol.h"
#import "ASTask.h"

@class NSString;

@interface ASItemOperationsFetchAttachmentTask : ASTask <ASFetchAttachmentTaskProtocol> {
	NSString *_messageServerID;	// 108 = 0x6c
	NSString *_attachmentName;	// 112 = 0x70
}
@property(readonly, retain) NSString *attachmentName;	// G=0x322c747d; converted property
- (id)initForMessageServerID:(id)messageServerID andAttachmentName:(id)name;	// 0x322c749d
// converted property getter: - (id)attachmentName;	// 0x322c747d
- (int)commandCode;	// 0x322c6fe5
- (void)dealloc;	// 0x322c7515
- (void)finishWithError:(id)error;	// 0x322c6ca5
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x322c6fd1
- (int)handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char *)data dataLength:(int)length;	// 0x322c6fe9
- (id)messageID;	// 0x322c748d
- (BOOL)processContext:(id)context;	// 0x322c7079
- (id)requestBody;	// 0x322c6e21
@end

