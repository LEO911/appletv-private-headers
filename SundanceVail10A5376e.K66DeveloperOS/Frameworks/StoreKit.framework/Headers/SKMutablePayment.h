/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import "SKPayment.h"

@class NSData, NSDictionary, NSString;

@interface SKMutablePayment : SKPayment {
}
@property(copy, nonatomic) NSString *productIdentifier;	// S=0x35f90401; @dynamic
@property(assign, nonatomic) int quantity;	// S=0x35f90451; @dynamic
@property(copy, nonatomic) NSData *requestData;	// S=0x35f90471; @dynamic
@property(copy, nonatomic) NSDictionary *requestParameters;	// S=0x35f90515; @dynamic
// declared property setter: - (void)setProductIdentifier:(id)identifier;	// 0x35f90401
// declared property setter: - (void)setQuantity:(int)quantity;	// 0x35f90451
// declared property setter: - (void)setRequestData:(id)data;	// 0x35f90471
// declared property setter: - (void)setRequestParameters:(id)parameters;	// 0x35f90515
@end
