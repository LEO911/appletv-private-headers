/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class _UIDecompressionInfo, NSArray, CIImage;

@interface UIImage : NSObject <NSCoding> {
	void *_imageRef;	// 4 = 0x4
	float _scale;	// 8 = 0x8
	struct {
		unsigned named : 1;
		unsigned imageOrientation : 3;
		unsigned cached : 1;
		unsigned hasPattern : 1;
		unsigned isCIImage : 1;
		unsigned imageSetIdentifer : 16;
	} _imageFlags;	// 12 = 0xc
	_UIDecompressionInfo *_decompressionInfo;	// 16 = 0x10
	UIEdgeInsets _alignmentRectInsets;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) CGImageRef CGImage;	// G=0x33a09ab1; 
@property(readonly, assign, nonatomic) CIImage *CIImage;	// G=0x33b8fb25; 
@property(readonly, assign, nonatomic) UIEdgeInsets alignmentRectInsets;	// G=0x33b90101; @synthesize=_alignmentRectInsets
@property(readonly, assign, nonatomic) UIEdgeInsets capInsets;	// G=0x33a051f1; 
@property(readonly, assign, nonatomic) double duration;	// G=0x33a0e139; 
@property(readonly, assign, nonatomic) int imageOrientation;	// G=0x33a0521d; 
@property(readonly, assign, nonatomic) NSArray *images;	// G=0x33a224c1; 
@property(readonly, assign, nonatomic) int leftCapWidth;	// G=0x33a0db05; 
@property(readonly, assign, nonatomic) int resizingMode;	// G=0x33b8fbdd; 
@property(readonly, assign, nonatomic) float scale;	// G=0x33a04cc9; 
@property(readonly, assign, nonatomic) CGSize size;	// G=0x33a04b61; 
@property(readonly, assign, nonatomic) int topCapHeight;	// G=0x33a0db41; 
+ (id)_applicationIconImageForBundleIdentifier:(id)bundleIdentifier format:(int)format;	// 0x33b91ce9
+ (id)_applicationIconImageForBundleIdentifier:(id)bundleIdentifier format:(int)format scale:(float)scale;	// 0x33b91d0d
+ (id)_backgroundGradientWithStartColor:(id)startColor andEndColor:(id)color;	// 0x33b9021d
+ (id)_cachedImageForKey:(id)key fromBlock:(id)block;	// 0x33c57d9d
+ (id)_defaultBackgroundGradient;	// 0x33b9032d
+ (id)_deviceSpecificImageNamed:(id)named;	// 0x33b90749
+ (id)_deviceSpecificImageNamed:(id)named inBundle:(id)bundle;	// 0x33b907bd
+ (void)_flushCache:(id)cache;	// 0x33b913ed
+ (void)_flushSharedImageCache;	// 0x33a5d911
+ (id)_iconForResourceProxy:(id)resourceProxy format:(int)format;	// 0x33b91e2d
+ (id)_iconForResourceProxy:(id)resourceProxy variant:(int)variant variantsScale:(float)scale;	// 0x33b91d85
+ (int)_iconVariantForUIApplicationIconFormat:(int)uiapplicationIconFormat scale:(float *)scale;	// 0x33b91af5
+ (id)_tintedImageForSize:(CGSize)size withTint:(id)tint effectsImage:(id)image maskImage:(id)image4 style:(int)style;	// 0x33c57c05
+ (id)_tintedImageForSize:(CGSize)size withTint:(id)tint maskImage:(id)image effectsImage:(id)image4 style:(int)style;	// 0x33b50afd
+ (id)_tintedImageForSize:(CGSize)size withTint:(id)tint maskImage:(id)image effectsImage:(id)image4 style:(int)style edgeInsets:(UIEdgeInsets)insets;	// 0x33c57ca5
+ (id)animatedImageNamed:(id)named duration:(double)duration;	// 0x33b8fc75
+ (id)animatedImageWithImages:(id)images duration:(double)duration;	// 0x33b90021
+ (id)animatedResizableImageNamed:(id)named capInsets:(UIEdgeInsets)insets duration:(double)duration;	// 0x33b8ff75
+ (id)animatedResizableImageNamed:(id)named capInsets:(UIEdgeInsets)insets resizingMode:(int)mode duration:(double)duration;	// 0x33b8ffbd
+ (id)applicationImageNamed:(id)named;	// 0x33b90125
+ (id)imageAtPath:(id)path;	// 0x33b908ed
+ (id)imageFromAlbumArtData:(id)albumArtData height:(int)height width:(int)width bytesPerRow:(int)row cache:(BOOL)cache;	// 0x33b90461
+ (id)imageNamed:(id)named;	// 0x33a7bb11
+ (id)imageNamed:(id)named inBundle:(id)bundle;	// 0x33a0451d
+ (id)imageWithCGImage:(CGImageRef)cgimage;	// 0x33a09b3d
+ (id)imageWithCGImage:(CGImageRef)cgimage scale:(float)scale orientation:(int)orientation;	// 0x33a142a5
+ (id)imageWithCIImage:(id)ciimage;	// 0x33b8efa9
+ (id)imageWithCIImage:(id)ciimage scale:(float)scale orientation:(int)orientation;	// 0x33b8eff1
+ (id)imageWithContentsOfCPBitmapFile:(id)cpbitmapFile flags:(int)flags;	// 0x33b9054d
+ (id)imageWithContentsOfFile:(id)file;	// 0x33a23601
+ (id)imageWithData:(id)data;	// 0x33b8ef11
+ (id)imageWithData:(id)data scale:(float)scale;	// 0x33b8ef59
+ (void)initialize;	// 0x33a21fd1
+ (id)kitImageNamed:(id)named;	// 0x33a22095
+ (void)setPreferredSharedImageScale:(float)scale;	// 0x33b908e5
- (id)initWithCGImage:(CGImageRef)cgimage;	// 0x33a09b89
- (id)initWithCGImage:(CGImageRef)cgimage imageOrientation:(int)orientation;	// 0x33aaf6d9
- (id)initWithCGImage:(CGImageRef)cgimage scale:(float)scale orientation:(int)orientation;	// 0x33a04a05
- (id)initWithCIImage:(id)ciimage;	// 0x33b8f07d
- (id)initWithCIImage:(id)ciimage scale:(float)scale orientation:(int)orientation;	// 0x33b8f0e5
- (id)initWithCoder:(id)coder;	// 0x33b8f831
- (id)initWithContentsOfFile:(id)file;	// 0x33a2364d
- (id)initWithContentsOfFile:(id)file cache:(BOOL)cache;	// 0x33ab2eb1
- (id)initWithData:(id)data;	// 0x33aa8b71
- (id)initWithData:(id)data cache:(BOOL)cache;	// 0x33b908f9
- (id)initWithData:(id)data scale:(float)scale;	// 0x33b8f045
- (id)initWithIOSurface:(IOSurfaceRef)iosurface;	// 0x33b90205
// declared property getter: - (CGImageRef)CGImage;	// 0x33a09ab1
// declared property getter: - (id)CIImage;	// 0x33b8fb25
- (id)_applicationIconImageForFormat:(int)format precomposed:(BOOL)precomposed;	// 0x33b91ea5
- (id)_applicationIconImageForFormat:(int)format precomposed:(BOOL)precomposed scale:(float)scale;	// 0x33b91ef9
- (id)_automationID;	// 0x33b26acd
- (id)_bezeledImageWithShadowRed:(float)shadowRed green:(float)green blue:(float)blue alpha:(float)alpha fillRed:(float)red green:(float)green6 blue:(float)blue7 alpha:(float)alpha8 drawShadow:(BOOL)shadow;	// 0x33a44515
- (BOOL)_canEncodeWithName:(id)name;	// 0x33b8f321
- (CGRect)_contentStretchInPixels;	// 0x33a0e39d
- (void)_decompressionComplete;	// 0x33b8e561
- (void)_decompressionFallbackImageCreation;	// 0x33b8e5c1
- (id)_doubleBezeledImageWithExteriorShadowRed:(float)exteriorShadowRed green:(float)green blue:(float)blue alpha:(float)alpha interiorShadowRed:(float)red green:(float)green6 blue:(float)blue7 alpha:(float)alpha8 fillRed:(float)red9 green:(float)green10 blue:(float)blue11 alpha:(float)alpha12;	// 0x33b916c5
- (void)_encodeDataWithCoder:(id)coder imageName:(id)name;	// 0x33b8f35d
- (void)_encodePropertiesWithCoder:(id)coder;	// 0x33b8f5f5
- (id)_flatImageWithWhite:(float)white alpha:(float)alpha;	// 0x33b915e5
- (id)_imageScaledToProportion:(float)proportion interpolationQuality:(int)quality;	// 0x33b91999
- (int)_imageSetIdentifier;	// 0x33b91461
- (id)_initWithData:(id)data immediateLoadWithMaxSize:(CGSize)maxSize scale:(float)scale renderingIntent:(int)intent;	// 0x33b8eb1d
- (id)_initWithData:(id)data preserveScale:(BOOL)scale;	// 0x33b901e1
- (id)_initWithData:(id)data preserveScale:(BOOL)scale cache:(BOOL)cache;	// 0x33b9012d
- (id)_initWithData:(id)data scale:(float)scale;	// 0x33aa8b3d
- (id)_initWithIOSurface:(IOSurfaceRef)iosurface imageOrientation:(int)orientation;	// 0x33b60afd
- (id)_initWithIOSurface:(IOSurfaceRef)iosurface scale:(float)scale orientation:(int)orientation;	// 0x33a1af71
- (id)_initWithOtherImage:(id)otherImage;	// 0x33b8f191
- (BOOL)_isCached;	// 0x33a131bd
- (BOOL)_isDecompressing;	// 0x33b8eee5
- (BOOL)_isInvisible;	// 0x33b91489
- (BOOL)_isNamed;	// 0x33a09d05
- (BOOL)_isResizable;	// 0x33a0cf79
- (BOOL)_isTiledWhenStretchedToSize:(CGSize)size;	// 0x33a05215
- (CGColorRef)_patternColor;	// 0x33ab314d
- (void)_preheatBitmapData;	// 0x33b91d81
- (id)_resizableImageWithCapMask:(int)capMask;	// 0x33b91f99
- (void)_saveDecompressedImage:(CGImageRef)image;	// 0x33b8e65d
- (id)_selectedTabBarItemImageWithTintColor:(id)tintColor;	// 0x33a7f6f1
- (id)_serializedData;	// 0x33b91a69
- (void)_setAlignmentRectInsets:(UIEdgeInsets)insets;	// 0x33b8fbe1
- (void)_setAlwaysStretches:(BOOL)stretches;	// 0x33b8fb59
- (void)_setCached:(BOOL)cached;	// 0x33a04ac9
- (void)_setImageSetIdentifier:(int)identifier;	// 0x33b91419
- (void)_setNamed:(BOOL)named;	// 0x33a04aa1
- (void)_startEagerDecompression;	// 0x33b8e699
- (id)_stretchableImageWithCapInsets:(UIEdgeInsets)capInsets;	// 0x33a2741d
- (id)_subimageInRect:(CGRect)rect;	// 0x33bdaaf1
- (CGColorRef)_tiledPatternColor;	// 0x33b911b1
- (id)_unselectedTabBarItemImageWithTintColor:(id)tintColor;	// 0x33a7f44d
// declared property getter: - (UIEdgeInsets)alignmentRectInsets;	// 0x33b90101
// declared property getter: - (UIEdgeInsets)capInsets;	// 0x33a051f1
- (void)compositeToPoint:(CGPoint)point fromRect:(CGRect)rect operation:(int)operation fraction:(float)fraction;	// 0x33a70489
- (void)compositeToPoint:(CGPoint)point operation:(int)operation;	// 0x33b75a91
- (void)compositeToPoint:(CGPoint)point operation:(int)operation fraction:(float)fraction;	// 0x33b75ab9
- (void)compositeToRect:(CGRect)rect fromRect:(CGRect)rect2 operation:(int)operation fraction:(float)fraction;	// 0x33a6fb89
- (id)copyWithZone:(NSZone *)zone;	// 0x33b8fb11
- (void)dealloc;	// 0x33a09bb1
- (void)draw1PartImageInRect:(CGRect)rect;	// 0x33b21e65
- (void)draw1PartImageInRect:(CGRect)rect fraction:(float)fraction;	// 0x33b9112d
- (void)draw1PartImageInRect:(CGRect)rect fraction:(float)fraction operation:(int)operation;	// 0x33b68ef1
- (void)draw3PartImageWithSliceRects:(XXStruct_UUz0SD)sliceRects inRect:(CGRect)rect;	// 0x33afb0a5
- (void)draw3PartImageWithSliceRects:(XXStruct_UUz0SD)sliceRects inRect:(CGRect)rect fraction:(float)fraction;	// 0x33b9109d
- (void)draw3PartImageWithSliceRects:(XXStruct_UUz0SD)sliceRects inRect:(CGRect)rect operation:(int)operation fraction:(float)fraction;	// 0x33a700dd
- (void)draw9PartImageWithSliceRects:(XXStruct_4cr1oD)sliceRects inRect:(CGRect)rect;	// 0x33b90995
- (void)draw9PartImageWithSliceRects:(XXStruct_4cr1oD)sliceRects inRect:(CGRect)rect fraction:(float)fraction;	// 0x33b90e99
- (void)draw9PartImageWithSliceRects:(XXStruct_4cr1oD)sliceRects inRect:(CGRect)rect operation:(int)operation fraction:(float)fraction;	// 0x33b90f99
- (void)drawAsPatternInRect:(CGRect)rect;	// 0x33b90099
- (void)drawAtPoint:(CGPoint)point;	// 0x33a86149
- (void)drawAtPoint:(CGPoint)point blendMode:(int)mode alpha:(float)alpha;	// 0x33a04aed
- (void)drawInRect:(CGRect)rect;	// 0x33a7f6b9
- (void)drawInRect:(CGRect)rect blendMode:(int)mode alpha:(float)alpha;	// 0x33a04d3d
// declared property getter: - (double)duration;	// 0x33a0e139
- (void)encodeWithCoder:(id)coder;	// 0x33b8f719
// declared property getter: - (int)imageOrientation;	// 0x33a0521d
- (CGImageRef)imageRef;	// 0x33a5d9bd
- (id)imageWithAlignmentRectInsets:(UIEdgeInsets)alignmentRectInsets;	// 0x33b8fbfd
// declared property getter: - (id)images;	// 0x33a224c1
- (IOSurfaceRef)ioSurface;	// 0x33b48fb9
// declared property getter: - (int)leftCapWidth;	// 0x33a0db05
- (id)patternColor;	// 0x33b549f5
- (id)resizableImageWithCapInsets:(UIEdgeInsets)capInsets;	// 0x33a2745d
- (id)resizableImageWithCapInsets:(UIEdgeInsets)capInsets resizingMode:(int)mode;	// 0x33b8fb61
// declared property getter: - (int)resizingMode;	// 0x33b8fbdd
// declared property getter: - (float)scale;	// 0x33a04cc9
// declared property getter: - (CGSize)size;	// 0x33a04b61
- (id)stretchableImageWithLeftCapWidth:(int)leftCapWidth topCapHeight:(int)height;	// 0x33a27375
// declared property getter: - (int)topCapHeight;	// 0x33a0db41
- (BOOL)writeToCPBitmapFile:(id)cpbitmapFile flags:(int)flags;	// 0x33b90639
@end

