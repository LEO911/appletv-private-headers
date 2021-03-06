/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRImageProxy.h"
#import <NSObject.h> // Unknown library

@class BRPhotoMediaAsset;

__attribute__((visibility("hidden")))
@interface ATVFlickrImageProxy : NSObject <BRImageProxy> {
@private
	BRPhotoMediaAsset *_asset;	// 4 = 0x4
}
+ (id)imageProxyForAsset:(id)asset;	// 0x35cd2959
- (id)initWithAsset:(id)asset;	// 0x35cd2901
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x35cd2bed
- (void)dealloc;	// 0x35cd2995
- (id)defaultImageForImageSize:(int)imageSize;	// 0x35cd2b7d
- (id)imageForImageSize:(int)imageSize;	// 0x35cd2a59
- (id)imageIDForImageSize:(int)imageSize;	// 0x35cd29f1
- (id)object;	// 0x35cd29e1
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x35cd2b79
@end

