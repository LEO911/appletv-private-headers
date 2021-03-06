/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMetadataPopulator.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRBaseMetadataPopulator : NSObject <BRMetadataPopulator> {
}
- (void)_populateMetadataLabels:(id *)labels andValues:(id *)values forAsset:(id)asset;	// 0x330eecc9
- (id)axMetadataFromAsset:(id)asset;	// 0x330ee771
- (id)copyrightForAsset:(id)asset;	// 0x330eea0d
- (void)populateLayer:(id)layer fromAsset:(id)asset;	// 0x330eea61
- (void)populateLongDescriptionLayer:(id)layer fromAsset:(id)asset;	// 0x330eeba9
- (void)populateMetadataLabels:(id *)labels andValues:(id *)values forAsset:(id)asset;	// 0x330eea11
- (id)ratingForAsset:(id)asset;	// 0x330ee8e5
- (id)starRatingForAsset:(id)asset;	// 0x330ee92d
- (id)summaryForAsset:(id)asset;	// 0x330ee975
- (id)titleForAsset:(id)asset;	// 0x330ee89d
@end

