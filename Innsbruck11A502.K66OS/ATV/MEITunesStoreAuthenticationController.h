/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRUserPasswordAuthenticationController.h"


__attribute__((visibility("hidden")))
@interface MEITunesStoreAuthenticationController : BRUserPasswordAuthenticationController {
	unsigned _loginAttempts;	// 120 = 0x78
}
- (BOOL)configurePostUserPasswordOptionsWithUser:(id)user;	// 0x4ac4c9
- (BOOL)configurePreUserPasswordOptions;	// 0x4ac2b9
- (BOOL)handleDisplayForAuthFailureError:(id)authFailureError userName:(id)name attempAuthorizationAgain:(BOOL *)again;	// 0x4ac73d
@end

