/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRImageProxy.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRPhotoMediaAsset, BRPhotoMediaCollection;

__attribute__((visibility("hidden")))
@interface BRPhotoImageProxy : XXUnknownSuperclass <BRImageProxy> {
	BRPhotoMediaAsset *_asset;	// 4 = 0x4
	BRPhotoMediaCollection *_collection;	// 8 = 0x8
}
@property(readonly, retain) BRPhotoMediaAsset *asset;	// G=0x2a6975; converted property
+ (id)imageProxyWithAsset:(id)asset;	// 0x2a6321
+ (id)imageProxyWithCollection:(id)collection;	// 0x2a63c5
- (id)initWithAsset:(id)asset;	// 0x2a636d
- (id)initWithCollection:(id)collection;	// 0x2a6411
// converted property getter: - (id)asset;	// 0x2a6975
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x2a676d
- (void)dealloc;	// 0x2a64c5
- (id)defaultImageForImageSize:(int)imageSize;	// 0x2a671d
- (id)imageForImageSize:(int)imageSize;	// 0x2a658d
- (id)imageIDForImageSize:(int)imageSize;	// 0x2a6529
- (id)object;	// 0x2a694d
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x2a6769
@end
