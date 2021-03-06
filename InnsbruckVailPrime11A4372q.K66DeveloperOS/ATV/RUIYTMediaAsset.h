/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRXMLMediaAsset.h"

@class ATVImage;

__attribute__((visibility("hidden")))
@interface RUIYTMediaAsset : BRXMLMediaAsset {
	unsigned char _validThumbnailsFound;	// 12 = 0xc
	ATVImage *_smallThumbnailArtImage;	// 16 = 0x10
	BOOL _isFavorite;	// 20 = 0x14
}
@property(assign) BOOL isFavorite;	// G=0x26fa71; S=0x26fa61; converted property
@property(readonly, retain) ATVImage *smallThumbnailArtImage;	// G=0x26f999; converted property
+ (id)mediaAssetFromMediaProvider:(id)mediaProvider;	// 0x26f141
- (void).cxx_destruct;	// 0x26fa81
- (void)addThumbnailAttribute:(id)attribute;	// 0x26f1ad
- (id)authorName;	// 0x26f639
- (id)category;	// 0x26f859
- (void)clearSmallCoverArtImage;	// 0x26f9dd
- (id)datePublished;	// 0x26f805
- (long)duration;	// 0x26f56d
- (int)grFormat;	// 0x26f931
// converted property getter: - (BOOL)isFavorite;	// 0x26fa71
- (BOOL)isInappropriate;	// 0x26f8c5
- (id)keywords;	// 0x26f7b1
- (id)mediaType;	// 0x26f191
- (void)numberOfLikes:(int *)likes numberOfDislikes:(int *)dislikes;	// 0x26f5d5
- (id)objectForKey:(id)key;	// 0x26f9f5
// converted property setter: - (void)setIsFavorite:(BOOL)favorite;	// 0x26fa61
// converted property getter: - (id)smallThumbnailArtImage;	// 0x26f999
- (id)viewCount;	// 0x26f68d
@end

