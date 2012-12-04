/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRPhotoMediaAsset.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVFlickrAsset : BRPhotoMediaAsset {
	NSDictionary *_assetInfo;	// 40 = 0x28
}
+ (id)assetWithAssetInfo:(id)assetInfo;	// 0x1ae841
- (id)initWithAssetInfo:(id)assetInfo;	// 0x1ae87d
- (id)_imagePathWithSize:(int)size;	// 0x1aea55
- (void)dealloc;	// 0x1ae99d
- (id)flickrIdentifier;	// 0x1aea09
- (id)imageProxy;	// 0x1aea35
- (BOOL)isLocal;	// 0x1ae9e9
- (id)mediaType;	// 0x1ae9ed
@end
