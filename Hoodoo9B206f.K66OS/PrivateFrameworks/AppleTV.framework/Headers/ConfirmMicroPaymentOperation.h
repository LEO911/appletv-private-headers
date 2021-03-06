/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class NSData, NSString, ClientIdentity;

__attribute__((visibility("hidden")))
@interface ConfirmMicroPaymentOperation : ISOperation {
@private
	NSString *_buyParameters;	// 60 = 0x3c
	ClientIdentity *_clientIdentity;	// 64 = 0x40
	NSString *_productIdentifier;	// 68 = 0x44
	int _quantity;	// 72 = 0x48
	NSData *_requestData;	// 76 = 0x4c
}
@property(retain) NSString *buyParameters;	// G=0x367fa965; S=0x367fa979; @synthesize=_buyParameters
@property(retain) ClientIdentity *clientIdentity;	// G=0x367fa99d; S=0x367fa9b1; @synthesize=_clientIdentity
@property(retain) NSString *productIdentifier;	// G=0x367fa9d5; S=0x367fa9e9; @synthesize=_productIdentifier
@property(assign) int quantity;	// G=0x367faa0d; S=0x367faa1d; @synthesize=_quantity
@property(retain) NSData *requestData;	// G=0x367faa2d; S=0x367faa41; @synthesize=_requestData
- (BOOL)_canPromptWithServerDialog:(id)serverDialog;	// 0x367f9b79
- (id)_copyQueryStringDictionaryForApplication:(id)application;	// 0x367f9c2d
- (id)_copyResponseForApplication:(id)application returningError:(id *)error;	// 0x367f9ffd
- (id)_copyResponseReturningError:(id *)error;	// 0x367fa3b1
- (id)_errorForFailureType:(id)failureType;	// 0x367fa53d
- (void)_fetchAndDisplayConfirmation;	// 0x367fa5c5
- (BOOL)_promptUserWithServerDialog:(id)serverDialog returningError:(id *)error;	// 0x367fa7b9
// declared property getter: - (id)buyParameters;	// 0x367fa965
// declared property getter: - (id)clientIdentity;	// 0x367fa99d
- (void)dealloc;	// 0x367f9a55
// declared property getter: - (id)productIdentifier;	// 0x367fa9d5
// declared property getter: - (int)quantity;	// 0x367faa0d
// declared property getter: - (id)requestData;	// 0x367faa2d
- (void)run;	// 0x367f9b01
// declared property setter: - (void)setBuyParameters:(id)parameters;	// 0x367fa979
// declared property setter: - (void)setClientIdentity:(id)identity;	// 0x367fa9b1
// declared property setter: - (void)setProductIdentifier:(id)identifier;	// 0x367fa9e9
// declared property setter: - (void)setQuantity:(int)quantity;	// 0x367faa1d
// declared property setter: - (void)setRequestData:(id)data;	// 0x367faa41
@end

