/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AAResponse.h"

@class NSDictionary;

@interface ATVHighSecurityAccountSendCodeResponse : AAResponse {
	BOOL _success;	// 16 = 0x10
	NSDictionary *_userDisplayStrings;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) BOOL success;	// G=0x300151cd; @synthesize=_success
@property(readonly, assign, nonatomic) NSDictionary *userDisplayStrings;	// G=0x300151dd; @synthesize=_userDisplayStrings
- (void).cxx_destruct;	// 0x300151ed
// declared property getter: - (BOOL)success;	// 0x300151cd
// declared property getter: - (id)userDisplayStrings;	// 0x300151dd
@end
