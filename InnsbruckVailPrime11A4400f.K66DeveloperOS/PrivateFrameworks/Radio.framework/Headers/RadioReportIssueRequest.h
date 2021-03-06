/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

#import "RadioRequest.h"

@class SSURLConnectionRequest, NSString, NSData;

@interface RadioReportIssueRequest : RadioRequest {
	NSData *_data;	// 24 = 0x18
	NSString *_description;	// 28 = 0x1c
	int _issueType;	// 32 = 0x20
	SSURLConnectionRequest *_request;	// 36 = 0x24
}
- (id)initWithIssueType:(int)issueType description:(id)description;	// 0x32667fd5
- (id)initWithIssueType:(int)issueType description:(id)description data:(id)data;	// 0x32667ff9
- (void).cxx_destruct;	// 0x32668785
- (void)cancel;	// 0x326680ad
- (void)startWithCompletionHandler:(id)completionHandler;	// 0x326680cd
@end

