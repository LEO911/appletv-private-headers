/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class ClientIdentity, NSDictionary, SSAuthenticationContext, NSString;

__attribute__((visibility("hidden")))
@interface ATVAppPurchaseOperation : ISOperation {
@private
	SSAuthenticationContext *_authContext;	// 60 = 0x3c
	int _state;	// 64 = 0x40
	BOOL _needsOwnershipCheck;	// 68 = 0x44
	NSDictionary *_microPaymentInfo;	// 72 = 0x48
	NSString *_buyParameters;	// 76 = 0x4c
	ClientIdentity *_clientIdentity;	// 80 = 0x50
}
@property(retain) NSString *buyParameters;	// G=0x35f6fef5; S=0x35f6ff09; @synthesize=_buyParameters
@property(retain) ClientIdentity *clientIdentity;	// G=0x35f6ff2d; S=0x35f6ff41; @synthesize=_clientIdentity
@property(retain) NSDictionary *microPaymentInfo;	// G=0x35f6febd; S=0x35f6fed1; @synthesize=_microPaymentInfo
@property(assign) BOOL needsOwnershipCheck;	// G=0x35f6fe9d; S=0x35f6fead; @synthesize=_needsOwnershipCheck
@property(assign) int state;	// G=0x35f6fe7d; S=0x35f6fe8d; @synthesize=_state
- (id)init;	// 0x35f6fa05
- (id)_copyCheckOperationForBundle:(id)bundle;	// 0x35f6fcb9
- (id)_copyPurchaseOperation;	// 0x35f6fde9
// declared property getter: - (id)buyParameters;	// 0x35f6fef5
// declared property getter: - (id)clientIdentity;	// 0x35f6ff2d
- (void)dealloc;	// 0x35f6fa55
// declared property getter: - (id)microPaymentInfo;	// 0x35f6febd
// declared property getter: - (BOOL)needsOwnershipCheck;	// 0x35f6fe9d
- (void)run;	// 0x35f6fa81
// declared property setter: - (void)setBuyParameters:(id)parameters;	// 0x35f6ff09
// declared property setter: - (void)setClientIdentity:(id)identity;	// 0x35f6ff41
// declared property setter: - (void)setMicroPaymentInfo:(id)info;	// 0x35f6fed1
// declared property setter: - (void)setNeedsOwnershipCheck:(BOOL)check;	// 0x35f6fead
// declared property setter: - (void)setState:(int)state;	// 0x35f6fe8d
// declared property getter: - (int)state;	// 0x35f6fe7d
@end

