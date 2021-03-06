/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AASigningSession, NSDictionary;

@interface AASetupAssistantSetupDelegatesRequest : AARequest {
	NSDictionary *setupParameters;	// 12 = 0xc
	AASigningSession *signingSession;	// 16 = 0x10
}
+ (Class)responseClass;	// 0x349a8419
- (id)initWithSetupParameters:(id)setupParameters signingSession:(id)session;	// 0x349a8435
- (void)dealloc;	// 0x349a84ad
- (id)urlRequest;	// 0x349a8541
- (id)urlString;	// 0x349a850d
@end

