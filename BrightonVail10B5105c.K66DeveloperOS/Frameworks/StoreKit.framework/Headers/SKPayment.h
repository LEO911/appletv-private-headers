/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import <NSObject.h> // Unknown library
#import "StoreKit-Structs.h"

@class NSData, NSDictionary, NSString;

@interface SKPayment : NSObject <NSCopying, NSMutableCopying> {
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *productIdentifier;	// G=0x35119315; 
@property(readonly, assign, nonatomic) int quantity;	// G=0x35119359; 
@property(readonly, assign, nonatomic) NSData *requestData;	// G=0x35119379; 
@property(readonly, assign, nonatomic) NSDictionary *requestParameters;	// G=0x351193bd; 
+ (id)paymentWithProduct:(id)product;	// 0x35119199
+ (id)paymentWithProductIdentifier:(id)productIdentifier;	// 0x35119215
- (id)init;	// 0x35118ff5
- (id)copyWithZone:(NSZone *)zone;	// 0x351190a9
- (void)dealloc;	// 0x35119059
- (BOOL)isEqual:(id)equal;	// 0x35119281
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x35119121
// declared property getter: - (id)productIdentifier;	// 0x35119315
// declared property getter: - (int)quantity;	// 0x35119359
// declared property getter: - (id)requestData;	// 0x35119379
// declared property getter: - (id)requestParameters;	// 0x351193bd
@end
