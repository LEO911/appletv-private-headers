/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMetadataPopulator.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRBaseMetadataPopulator : XXUnknownSuperclass <BRMetadataPopulator> {
}
- (void)_populateMetadataLabels:(id *)labels andValues:(id *)values forAsset:(id)asset;	// 0x3537d5
- (id)axMetadataFromAsset:(id)asset;	// 0x3531e1
- (id)copyrightForAsset:(id)asset;	// 0x35350d
- (void)likesRatingForAsset:(id)asset numberOfLikes:(int *)likes numberOfDislikes:(int *)dislikes;	// 0x3533a9
- (void)populateLayer:(id)layer fromAsset:(id)asset;	// 0x353561
- (void)populateLongDescriptionLayer:(id)layer fromAsset:(id)asset;	// 0x3536b5
- (void)populateMetadataLabels:(id *)labels andValues:(id *)values forAsset:(id)asset;	// 0x353511
- (id)ratingForAsset:(id)asset;	// 0x353361
- (id)summaryForAsset:(id)asset;	// 0x353475
- (id)titleForAsset:(id)asset;	// 0x353319
@end
