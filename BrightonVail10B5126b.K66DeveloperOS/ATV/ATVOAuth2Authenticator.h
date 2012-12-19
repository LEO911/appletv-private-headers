/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRAuthenticator.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface ATVOAuth2Authenticator : BRAuthenticator {
	NSDate *_codeCreationDate;	// 12 = 0xc
	double _codeExpiresIn;	// 16 = 0x10
	NSString *_code;	// 24 = 0x18
}
@property(readonly, assign) NSString *clientID;	// G=0xd55c1; @dynamic
@property(readonly, assign) NSString *clientSecret;	// G=0xd55dd; @dynamic
@property(readonly, assign) NSString *code;	// G=0xd5a45; @synthesize=_code
@property(readonly, assign) NSString *tokenEndpoint;	// G=0xd55f9; @dynamic
- (id)initWithAccount:(id)account;	// 0xd5505
- (void)_handleAuthenticationFailedWithError:(id)error;	// 0xd59b9
- (void)_handleAuthenticationSucceeded;	// 0xd594d
- (void)_handlePostTokenGenerationWithCompletionHandler:(id)completionHandler;	// 0xd5945
- (id)_makeTokenRequestFromCode:(id)code;	// 0xd5c55
- (id)_makeTokenRequestFromRefreshToken:(id)refreshToken;	// 0xd5db5
- (void)_resetCode;	// 0xd5bed
- (void)_sendAuthenticationRequest;	// 0xd5719
- (void)_tokenRequestDocumentReady:(id)ready;	// 0xd5a59
// declared property getter: - (id)clientID;	// 0xd55c1
// declared property getter: - (id)clientSecret;	// 0xd55dd
// declared property getter: - (id)code;	// 0xd5a45
- (void)dealloc;	// 0xd5531
- (BOOL)requiresCode;	// 0xd5615
- (void)setCode:(id)code withExpiryTime:(double)expiryTime;	// 0xd5661
// declared property getter: - (id)tokenEndpoint;	// 0xd55f9
@end
