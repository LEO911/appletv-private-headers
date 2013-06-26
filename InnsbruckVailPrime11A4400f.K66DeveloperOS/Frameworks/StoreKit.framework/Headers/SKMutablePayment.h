/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import "SKPayment.h"

@class NSString, NSData, NSDictionary;

@interface SKMutablePayment : SKPayment {
}
@property(copy, nonatomic) NSString *applicationUsername;	// S=0x2f37c1d5; @dynamic
@property(copy, nonatomic) NSString *productIdentifier;	// S=0x2f37c225; @dynamic
@property(assign, nonatomic) int quantity;	// S=0x2f37c275; @dynamic
@property(copy, nonatomic) NSData *requestData;	// S=0x2f37c295; @dynamic
@property(copy, nonatomic) NSDictionary *requestParameters;	// S=0x2f37c339; @dynamic
// declared property setter: - (void)setApplicationUsername:(id)username;	// 0x2f37c1d5
// declared property setter: - (void)setProductIdentifier:(id)identifier;	// 0x2f37c225
// declared property setter: - (void)setQuantity:(int)quantity;	// 0x2f37c275
// declared property setter: - (void)setRequestData:(id)data;	// 0x2f37c295
// declared property setter: - (void)setRequestParameters:(id)parameters;	// 0x2f37c339
@end
