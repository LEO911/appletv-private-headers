/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "SSAuthenticateRequestDelegate.h"
#import "ISOperation.h"

@class SSAuthenticationContext, NSNumber, SSMutableAuthenticationContext;

@interface ISStoreAuthenticateOperation : ISOperation <SSAuthenticateRequestDelegate> {
	NSNumber *_authenticatedDSID;	// 60 = 0x3c
	SSMutableAuthenticationContext *_authenticationContext;	// 64 = 0x40
}
@property(readonly, assign) SSAuthenticationContext *authenticationContext;	// G=0x33c7e6f5; 
- (id)initWithAuthenticationContext:(id)authenticationContext;	// 0x33c7e641
- (id)_authenticatedDSID;	// 0x33c7eae1
- (void)_handleAuthenticateResponse:(id)response;	// 0x33c7eb41
- (void)_setAuthenticatedDSID:(id)dsid;	// 0x33c7ed69
- (id)authenticatedAccountDSID;	// 0x33c7e755
// declared property getter: - (id)authenticationContext;	// 0x33c7e6f5
- (void)dealloc;	// 0x33c7e691
- (void)run;	// 0x33c7e799
- (id)uniqueKey;	// 0x33c7ea71
@end
