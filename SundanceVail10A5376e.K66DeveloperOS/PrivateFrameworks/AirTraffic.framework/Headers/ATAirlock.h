/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <NSObject.h> // Unknown library

@class NSFileManager;

@interface ATAirlock : NSObject {
	NSFileManager *_fm;	// 4 = 0x4
}
+ (id)artworkPathForDataclass:(id)dataclass artworkIdentifier:(id)identifier;	// 0x338703d9
+ (id)geniusPathForDataclass:(id)dataclass geniusIdentifier:(id)identifier;	// 0x33870419
+ (id)pathForDataclass:(id)dataclass;	// 0x33870459
+ (id)sharedInstance;	// 0x33870339
- (void)copyAssetToAirlock:(id)airlock;	// 0x3386faf1
- (void)createAirlockForDataclasses:(id)dataclasses;	// 0x3386f67d
- (void)evacuateDataclasses:(id)dataclasses;	// 0x3386f7d1
- (void)handleCompletedAsset:(id)asset;	// 0x3386feb1
- (void)purgeAssetWithIdentifier:(id)identifier dataclass:(id)dataclass;	// 0x3386fa35
@end
