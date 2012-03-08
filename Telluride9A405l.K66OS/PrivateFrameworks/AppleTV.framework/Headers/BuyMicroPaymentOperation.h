/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class NSData, ClientIdentity, MicroPaymentQueueResponse, NSString;

__attribute__((visibility("hidden")))
@interface BuyMicroPaymentOperation : ISOperation {
@private
	ClientIdentity *_clientIdentity;	// 60 = 0x3c
	NSString *_buyParameters;	// 64 = 0x40
	NSData *_requestData;	// 68 = 0x44
	MicroPaymentQueueResponse *_response;	// 72 = 0x48
}
@property(retain) NSString *buyParameters;	// G=0x35f60819; S=0x35f6082d; @synthesize=_buyParameters
@property(retain) ClientIdentity *clientIdentity;	// G=0x35f60851; S=0x35f60865; @synthesize=_clientIdentity
@property(retain) NSData *requestData;	// G=0x35f60889; S=0x35f6089d; @synthesize=_requestData
@property(retain) MicroPaymentQueueResponse *response;	// G=0x35f608c1; S=0x35f608d5; @synthesize=_response
- (id)_copyFullBuyParameters;	// 0x35f602b9
- (void)_runPurchaseOperation;	// 0x35f60499
// declared property getter: - (id)buyParameters;	// 0x35f60819
// declared property getter: - (id)clientIdentity;	// 0x35f60851
- (void)dealloc;	// 0x35f60195
// declared property getter: - (id)requestData;	// 0x35f60889
// declared property getter: - (id)response;	// 0x35f608c1
- (void)run;	// 0x35f60241
// declared property setter: - (void)setBuyParameters:(id)parameters;	// 0x35f6082d
// declared property setter: - (void)setClientIdentity:(id)identity;	// 0x35f60865
// declared property setter: - (void)setRequestData:(id)data;	// 0x35f6089d
// declared property setter: - (void)setResponse:(id)response;	// 0x35f608d5
@end
