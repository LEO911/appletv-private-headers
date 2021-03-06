/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h> // Unknown library


@interface AVFileProcessor : NSObject {
@private
	float _percentComplete;	// 4 = 0x4
}
+ (id)fileProcessor;	// 0x315ba271
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes;	// 0x315ba201
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes progressBlock:(id)block;	// 0x315ba229
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes resultInfo:(id *)info;	// 0x315ba24d
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes resultInfo:(id *)info progressBlock:(id)block;	// 0x315ba449
- (id)rentalInfo:(id)info;	// 0x315ba305
- (id)sinfInfoFromFilePath:(id)filePath;	// 0x315ba2b5
- (id)sinfsFromFilePath:(id)filePath;	// 0x315ba2dd
@end

