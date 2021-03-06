/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRAuthenticationController.h"

@class BRWaitPromptControl, NSTimer, NSString;

@interface BRUserPasswordAuthenticationController : BRAuthenticationController {
@private
	NSString *_userName;	// 96 = 0x60
	NSTimer *_authTimeoutTimer;	// 100 = 0x64
	NSTimer *_promptTimer;	// 104 = 0x68
	BOOL _hasTimedOut;	// 108 = 0x6c
	BOOL _haveShownPasswordOnce;	// 109 = 0x6d
	BRWaitPromptControl *_waitPrompt;	// 112 = 0x70
}
- (id)initWithAuthenticator:(id)authenticator resources:(id)resources;	// 0x3419c9b5
- (id)_askUserForPassword:(id)password userName:(id)name;	// 0x3419d1c5
- (id)_askUserForUserName:(id)userName;	// 0x3419ce71
- (void)_authSucceededComplete:(BOOL)complete;	// 0x3419ce45
- (void)_authenticate;	// 0x3419da61
- (void)_authenticationTimedOut:(id)anOut;	// 0x3419d88d
- (BOOL)_shouldAttemptAuthorizationAgainForUser:(id)user error:(id)error;	// 0x3419d4b1
- (void)_showCancellationMessage:(id)message;	// 0x3419d675
- (void)_showPrompt:(id)prompt;	// 0x3419d77d
- (void)authenticationCancelled:(id)cancelled;	// 0x3419cb45
- (void)authenticationFailed:(id)failed;	// 0x3419cc49
- (void)authenticationSucceeded:(BOOL)succeeded;	// 0x3419caa1
- (BOOL)configurePostUserPasswordOptionsWithUser:(id)user;	// 0x3419dc95
- (BOOL)configurePreUserPasswordOptions;	// 0x3419dc91
- (void)dealloc;	// 0x3419ca55
- (BOOL)handleDisplayForAuthCancelledError:(id)authCancelledError;	// 0x3419dc9d
- (BOOL)handleDisplayForAuthFailureError:(id)authFailureError userName:(id)name attempAuthorizationAgain:(BOOL *)again;	// 0x3419dca1
- (BOOL)performPostAuthenticationOperationsWithUser:(id)user accountOptionsPreviouslySet:(BOOL)set;	// 0x3419dc99
- (void)wasPopped;	// 0x3419cdd1
- (void)wasPushed;	// 0x3419cd6d
@end

