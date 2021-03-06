/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import </libobjc.A.h>
#import "NSURLAuthenticationChallengeSender.h"


@interface WebCoreAuthenticationClientAsChallengeSender : NSObject <NSURLAuthenticationChallengeSender> {
	AuthenticationClient *m_client;	// 4 = 0x4
	CFURLAuthChallengeRef m_cfChallenge;	// 8 = 0x8
}
@property(readonly, assign) CFURLAuthChallengeRef cfChallenge;	// G=0x330a74d5; converted property
@property(readonly, assign) AuthenticationClient *client;	// G=0x330a6fa1; converted property
- (id)initWithAuthenticationClient:(AuthenticationClient *)authenticationClient;	// 0x330a6f71
- (void)cancelAuthenticationChallenge:(id)challenge;	// 0x330a7369
// converted property getter: - (CFURLAuthChallengeRef)cfChallenge;	// 0x330a74d5
// converted property getter: - (AuthenticationClient *)client;	// 0x330a6fa1
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;	// 0x330a720d
- (void)detachClient;	// 0x330a6fb1
- (void)setCFChallenge:(CFURLAuthChallengeRef)challenge;	// 0x330a74c5
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;	// 0x330a6fc5
@end

