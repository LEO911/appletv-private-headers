/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRAuthenticator.h"

@class NSString;

@interface BRUserPasswordAuthenticator : BRAuthenticator {
@private
	NSString *_user;	// 36 = 0x24
	NSString *_password;	// 40 = 0x28
}
@property(retain) NSString *password;	// G=0x332a2065; S=0x332a2079; @synthesize=_password
@property(retain) NSString *user;	// G=0x332a202d; S=0x332a2041; @synthesize=_user
- (id)initWithAccount:(id)account scope:(unsigned)scope;	// 0x332a1d2d
- (void)_handleAuthenticationSucceeded;	// 0x332a209d
- (void)dealloc;	// 0x332a1e01
- (id)makeAuthenticationController;	// 0x332a1e61
// declared property getter: - (id)password;	// 0x332a2065
- (BOOL)requiresPassword:(id *)password;	// 0x332a1fa5
- (BOOL)requiresUser:(id *)user;	// 0x332a1ed9
// declared property setter: - (void)setPassword:(id)password;	// 0x332a2079
// declared property setter: - (void)setUser:(id)user;	// 0x332a2041
// declared property getter: - (id)user;	// 0x332a202d
@end
