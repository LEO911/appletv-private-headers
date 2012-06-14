/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class NSDictionary, ClientIdentity, SSAuthenticationContext, NSString;

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
@property(retain) NSString *buyParameters;	// G=0x367f2665; S=0x367f2679; @synthesize=_buyParameters
@property(retain) ClientIdentity *clientIdentity;	// G=0x367f269d; S=0x367f26b1; @synthesize=_clientIdentity
@property(retain) NSDictionary *microPaymentInfo;	// G=0x367f262d; S=0x367f2641; @synthesize=_microPaymentInfo
@property(assign) BOOL needsOwnershipCheck;	// G=0x367f260d; S=0x367f261d; @synthesize=_needsOwnershipCheck
@property(assign) int state;	// G=0x367f25ed; S=0x367f25fd; @synthesize=_state
- (id)init;	// 0x367f2155
- (id)_copyCheckOperationForBundle:(id)bundle;	// 0x367f2419
- (id)_copyPurchaseOperation;	// 0x367f2559
// declared property getter: - (id)buyParameters;	// 0x367f2665
// declared property getter: - (id)clientIdentity;	// 0x367f269d
- (void)dealloc;	// 0x367f21a5
// declared property getter: - (id)microPaymentInfo;	// 0x367f262d
// declared property getter: - (BOOL)needsOwnershipCheck;	// 0x367f260d
- (void)run;	// 0x367f21d1
// declared property setter: - (void)setBuyParameters:(id)parameters;	// 0x367f2679
// declared property setter: - (void)setClientIdentity:(id)identity;	// 0x367f26b1
// declared property setter: - (void)setMicroPaymentInfo:(id)info;	// 0x367f2641
// declared property setter: - (void)setNeedsOwnershipCheck:(BOOL)check;	// 0x367f261d
// declared property setter: - (void)setState:(int)state;	// 0x367f25fd
// declared property getter: - (int)state;	// 0x367f25ed
@end
