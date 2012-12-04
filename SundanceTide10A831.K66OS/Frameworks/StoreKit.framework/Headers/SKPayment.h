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
@property(readonly, assign, nonatomic) NSString *productIdentifier;	// G=0x338a1315; 
@property(readonly, assign, nonatomic) int quantity;	// G=0x338a1359; 
@property(readonly, assign, nonatomic) NSData *requestData;	// G=0x338a1379; 
@property(readonly, assign, nonatomic) NSDictionary *requestParameters;	// G=0x338a13bd; 
+ (id)paymentWithProduct:(id)product;	// 0x338a1199
+ (id)paymentWithProductIdentifier:(id)productIdentifier;	// 0x338a1215
- (id)init;	// 0x338a0ff5
- (id)copyWithZone:(NSZone *)zone;	// 0x338a10a9
- (void)dealloc;	// 0x338a1059
- (BOOL)isEqual:(id)equal;	// 0x338a1281
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x338a1121
// declared property getter: - (id)productIdentifier;	// 0x338a1315
// declared property getter: - (int)quantity;	// 0x338a1359
// declared property getter: - (id)requestData;	// 0x338a1379
// declared property getter: - (id)requestParameters;	// 0x338a13bd
@end
