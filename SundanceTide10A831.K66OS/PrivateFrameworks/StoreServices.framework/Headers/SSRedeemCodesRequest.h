/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class NSArray, SSAuthenticationContext;

@interface SSRedeemCodesRequest : SSRequest <SSXPCCoding> {
	SSAuthenticationContext *_authenticationContext;	// 28 = 0x1c
	NSArray *_redeemCodes;	// 32 = 0x20
}
@property(copy) SSAuthenticationContext *authenticationContext;	// G=0x3784d3cd; S=0x3784d5c9; 
@property(readonly, assign) NSArray *redeemCodes;	// G=0x3784d591; 
- (id)initWithRedeemCodes:(id)redeemCodes;	// 0x3784d315
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x3784d88d
// declared property getter: - (id)authenticationContext;	// 0x3784d3cd
- (id)copyXPCEncoding;	// 0x3784d981
- (void)dealloc;	// 0x3784d369
// declared property getter: - (id)redeemCodes;	// 0x3784d591
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x3784d5c9
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x3784d815
- (void)startWithRedeemResponseBlock:(id)redeemResponseBlock;	// 0x3784d6a9
@end

