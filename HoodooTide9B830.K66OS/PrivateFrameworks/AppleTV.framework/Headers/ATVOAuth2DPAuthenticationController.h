/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRAuthenticationController.h"

@class BRAlertControl, NSTimer, BRWaitPromptControl;

@interface ATVOAuth2DPAuthenticationController : BRAuthenticationController {
@private
	BRWaitPromptControl *_waitPrompt;	// 100 = 0x64
	BRAlertControl *_alertControl;	// 104 = 0x68
	NSTimer *_promptTimer;	// 108 = 0x6c
	NSTimer *_retryTimer;	// 112 = 0x70
	double _retryInterval;	// 116 = 0x74
}
- (id)initWithAuthenticator:(id)authenticator resources:(id)resources;	// 0x32aebb0d
- (void)_authenticate;	// 0x32aec511
- (void)_promptUserWithUserCode:(id)userCode verificationURL:(id)url;	// 0x32aebff5
- (void)_retryTimerHandler:(id)handler;	// 0x32aec4d9
- (BOOL)_shouldAttemptAuthenticationAgainWithErrorMessage:(id)errorMessage;	// 0x32aec1f5
- (BOOL)_shouldRetryAuthentication;	// 0x32aec1a5
- (void)_showPrompt:(id)prompt;	// 0x32aec38d
- (void)authenticateAtInterval:(double)interval userCode:(id)code verificationURL:(id)url;	// 0x32aebe21
- (void)authenticationCancelled:(id)cancelled;	// 0x32aebc65
- (void)authenticationFailed:(id)failed;	// 0x32aebcbd
- (void)authenticationSucceeded:(BOOL)succeeded;	// 0x32aebc0d
- (void)slowDown;	// 0x32aebef5
- (void)wasPopped;	// 0x32aebf79
- (void)wasPushed;	// 0x32aebf15
@end

