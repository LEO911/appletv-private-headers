/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface BRMediaAssetExpiryInfo : XXUnknownSuperclass {
	id<BRMediaAsset> _mediaAsset;	// 4 = 0x4
}
@property(retain) id expiryDate;	// G=0x33f321; S=0x33f33d; converted property
+ (id)expiryInfoForMediaAsset:(id)mediaAsset;	// 0x33f225
+ (void)setImplementationClass:(Class)aClass;	// 0x33f215
- (id)initWithMediaAsset:(id)mediaAsset;	// 0x33f26d
- (id)asset;	// 0x33f2c1
- (int)compare:(id)compare;	// 0x33f391
- (void)dealloc;	// 0x33f2d1
// converted property getter: - (id)expiryDate;	// 0x33f321
- (id)expiryDescription;	// 0x33f3cd
- (BOOL)hasBeenPlayed;	// 0x33f46d
- (BOOL)isExpired;	// 0x33f31d
- (unsigned)rentalPlaybackDuration;	// 0x33f38d
- (id)rentalPlaybackDurationDescription;	// 0x33f3f5
// converted property setter: - (void)setExpiryDate:(id)date;	// 0x33f33d
@end
