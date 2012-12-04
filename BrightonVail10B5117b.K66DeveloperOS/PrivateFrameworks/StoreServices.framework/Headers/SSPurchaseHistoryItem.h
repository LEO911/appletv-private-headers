/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class NSMutableDictionary;

@interface SSPurchaseHistoryItem : NSObject <SSXPCCoding, NSCopying> {
	NSMutableDictionary *_properties;	// 4 = 0x4
}
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x356d43e1
- (id)copyWithZone:(NSZone *)zone;	// 0x356d4341
- (id)copyXPCEncoding;	// 0x356d43ad
- (void)dealloc;	// 0x356d41b5
- (id)description;	// 0x356d44b9
- (unsigned)hash;	// 0x356d4521
- (BOOL)isEqual:(id)equal;	// 0x356d4541
- (void)setValue:(id)value forProperty:(id)property;	// 0x356d4201
- (id)valueForProperty:(id)property;	// 0x356d42f9
@end
