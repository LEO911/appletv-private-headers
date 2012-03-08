/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library


@interface CIImage : NSObject <NSCoding, NSCopying> {
	void *_priv;	// 4 = 0x4
}
+ (id)emptyImage;	// 0x36ea4a49
+ (id)imageWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format colorSpace:(CGColorSpaceRef)space;	// 0x36ea4411
+ (id)imageWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format options:(id)options;	// 0x36ea43a9
+ (id)imageWithCGImage:(CGImageRef)cgimage;	// 0x36ea3855
+ (id)imageWithCGImage:(CGImageRef)cgimage options:(id)options;	// 0x36ea3875
+ (id)imageWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer;	// 0x36ea47a5
+ (id)imageWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer options:(id)options;	// 0x36ea47c5
+ (id)imageWithColor:(id)color;	// 0x36ea4881
+ (id)imageWithContentsOfFile:(id)file;	// 0x36ea4ea9
+ (id)imageWithContentsOfFile:(id)file options:(id)options;	// 0x36ea4ec9
+ (id)imageWithContentsOfURL:(id)url;	// 0x36ea4de1
+ (id)imageWithContentsOfURL:(id)url options:(id)options;	// 0x36ea4df5
+ (id)imageWithData:(id)data;	// 0x36ea4c19
+ (id)imageWithData:(id)data options:(id)options;	// 0x36ea4c65
+ (id)imageWithIOSurface:(IOSurfaceRef)iosurface;	// 0x36ea33fd
+ (id)imageWithIOSurface:(IOSurfaceRef)iosurface options:(id)options;	// 0x36ea341d
+ (id)imageWithInternalRepresentation:(void *)internalRepresentation;	// 0x36ea56e9
- (id)initWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format colorSpace:(CGColorSpaceRef)space;	// 0x36ea4595
- (id)initWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format options:(id)options;	// 0x36ea4629
- (id)initWithCGImage:(CGImageRef)cgimage;	// 0x36ea38c1
- (id)initWithCGImage:(CGImageRef)cgimage options:(id)options;	// 0x36ea3be1
- (id)initWithCGImageSource:(CGImageSourceRef)cgimageSource index:(unsigned long)index options:(id)options;	// 0x36ea4139
- (id)initWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer;	// 0x36ea4811
- (id)initWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer options:(id)options;	// 0x36ea4825
- (id)initWithCoder:(id)coder;	// 0x36ea5451
- (id)initWithColor:(id)color;	// 0x36ea49b1
- (id)initWithColorR:(float)colorR G:(float)g B:(float)b A:(float)a;	// 0x36ea48c9
- (id)initWithContentsOfFile:(id)file;	// 0x36ea4f15
- (id)initWithContentsOfFile:(id)file options:(id)options;	// 0x36ea4f29
- (id)initWithContentsOfURL:(id)url;	// 0x36ea4e41
- (id)initWithContentsOfURL:(id)url options:(id)options;	// 0x36ea4e55
- (id)initWithData:(id)data;	// 0x36ea4cb1
- (id)initWithData:(id)data options:(id)options;	// 0x36ea4cc5
- (id)initWithIOSurface:(IOSurfaceRef)iosurface;	// 0x36ea3469
- (id)initWithIOSurface:(IOSurfaceRef)iosurface options:(id)options;	// 0x36ea347d
- (id)_autoRedEyeFilterWithFeatures:(id)features imageProperties:(id)properties context:(id)context options:(id)options;	// 0x36ebd6cd
- (id)_dictForFeature:(id)feature scale:(float)scale imageHeight:(float)height;	// 0x36ebd039
- (id)_initWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format options:(id)options;	// 0x36ea4479
- (id)_initWithCGImage:(CGImageRef)cgimage options:(id)options;	// 0x36ea38d5
- (id)_initWithInternalRepresentation:(void *)internalRepresentation;	// 0x36ea5731
- (void *)_internalRepresentation;	// 0x36ea5791
- (id)_scaleImageToMaxDimension:(unsigned)maxDimension;	// 0x36ebc3d9
- (IOSurfaceRef)_surfaceAndFormat:(int *)format;	// 0x36ea57d9
- (IOSurfaceRef)_surfaceWithFormat:(int)format;	// 0x36ea57a1
- (id)autoAdjustmentFilters;	// 0x36ebcff1
- (id)autoAdjustmentFiltersWithImageProperties:(id)imageProperties options:(id)options;	// 0x36ebc495
- (id)autoAdjustmentFiltersWithOptions:(id)options;	// 0x36ebd005
- (id)autoRedEyeFilterWithFeatures:(id)features imageProperties:(id)properties options:(id)options;	// 0x36ebdba9
- (id)autoRedEyeFilterWithFeatures:(id)features options:(id)options;	// 0x36ebdbd5
- (id)copyWithZone:(NSZone *)zone;	// 0x36ea5235
- (void)dealloc;	// 0x36ea5069
- (id)description;	// 0x36ea50ad
- (void)encodeWithCoder:(id)coder;	// 0x36ea5245
- (CGRect)extent;	// 0x36ea504d
- (id)filteredImage:(id)image keysAndValues:(id)values;	// 0x36ea51a5
- (id)imageByApplyingOrientation:(int)orientation;	// 0x36ea4bb5
- (id)imageByApplyingTransform:(CGAffineTransform)transform;	// 0x36ea4f69
- (id)imageByCroppingToRect:(CGRect)rect;	// 0x36ea4fe5
- (CGAffineTransform)imageTransformForOrientation:(int)orientation;	// 0x36ea4a9d
- (id)properties;	// 0x36ea5191
@end
