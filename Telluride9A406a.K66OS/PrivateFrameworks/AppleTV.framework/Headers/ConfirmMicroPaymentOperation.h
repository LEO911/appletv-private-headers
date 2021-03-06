/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class NSData, ClientIdentity, NSString;

__attribute__((visibility("hidden")))
@interface ConfirmMicroPaymentOperation : ISOperation {
@private
	NSString *_buyParameters;	// 60 = 0x3c
	ClientIdentity *_clientIdentity;	// 64 = 0x40
	NSString *_productIdentifier;	// 68 = 0x44
	int _quantity;	// 72 = 0x48
	NSData *_requestData;	// 76 = 0x4c
}
@property(retain) NSString *buyParameters;	// G=0x331db519; S=0x331db52d; @synthesize=_buyParameters
@property(retain) ClientIdentity *clientIdentity;	// G=0x331db551; S=0x331db565; @synthesize=_clientIdentity
@property(retain) NSString *productIdentifier;	// G=0x331db589; S=0x331db59d; @synthesize=_productIdentifier
@property(assign) int quantity;	// G=0x331db5c1; S=0x331db5d1; @synthesize=_quantity
@property(retain) NSData *requestData;	// G=0x331db5e1; S=0x331db5f5; @synthesize=_requestData
- (BOOL)_canPromptWithServerDialog:(id)serverDialog;	// 0x331da831
- (id)_copyQueryStringDictionaryForApplication:(id)application;	// 0x331da8e5
- (id)_copyResponseForApplication:(id)application returningError:(id *)error;	// 0x331dac5d
- (id)_copyResponseReturningError:(id *)error;	// 0x331daf65
- (id)_errorForFailureType:(id)failureType;	// 0x331db0f1
- (void)_fetchAndDisplayConfirmation;	// 0x331db179
- (BOOL)_promptUserWithServerDialog:(id)serverDialog returningError:(id *)error;	// 0x331db36d
// declared property getter: - (id)buyParameters;	// 0x331db519
// declared property getter: - (id)clientIdentity;	// 0x331db551
- (void)dealloc;	// 0x331da70d
// declared property getter: - (id)productIdentifier;	// 0x331db589
// declared property getter: - (int)quantity;	// 0x331db5c1
// declared property getter: - (id)requestData;	// 0x331db5e1
- (void)run;	// 0x331da7b9
// declared property setter: - (void)setBuyParameters:(id)parameters;	// 0x331db52d
// declared property setter: - (void)setClientIdentity:(id)identity;	// 0x331db565
// declared property setter: - (void)setProductIdentifier:(id)identifier;	// 0x331db59d
// declared property setter: - (void)setQuantity:(int)quantity;	// 0x331db5d1
// declared property setter: - (void)setRequestData:(id)data;	// 0x331db5f5
@end

