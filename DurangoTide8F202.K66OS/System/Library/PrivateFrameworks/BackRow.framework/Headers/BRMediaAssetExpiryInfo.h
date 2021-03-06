/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library

@protocol BRMediaAsset;

@interface BRMediaAssetExpiryInfo : NSObject {
@private
	id<BRMediaAsset> _mediaAsset;	// 4 = 0x4
}
@property(retain) id expiryDate;	// G=0x328a9bc9; S=0x32947885; converted property
+ (id)expiryInfoForMediaAsset:(id)mediaAsset;	// 0x328a9b39
+ (void)setImplementationClass:(Class)aClass;	// 0x328a341d
- (id)initWithMediaAsset:(id)mediaAsset;	// 0x328a9b79
- (id)asset;	// 0x328a9c29
- (int)compare:(id)compare;	// 0x328a9be9
- (void)dealloc;	// 0x328aa309
// converted property getter: - (id)expiryDate;	// 0x328a9bc9
- (id)expiryDescription;	// 0x328b77c9
- (BOOL)hasBeenPlayed;	// 0x32947881
- (BOOL)isExpired;	// 0x32947879
- (unsigned)rentalPlaybackDuration;	// 0x3294787d
- (id)rentalPlaybackDurationDescription;	// 0x328b879d
// converted property setter: - (void)setExpiryDate:(id)date;	// 0x32947885
@end

