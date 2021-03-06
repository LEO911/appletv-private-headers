/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "NSSecureCoding.h"
#import <ImageIO/NSObject.h>

@class CIImage, _UIDecompressionInfo, NSArray;

@interface UIImage : NSObject <NSSecureCoding, NSCoding> {
	void *_imageRef;	// 4 = 0x4
	float _scale;	// 8 = 0x8
	struct {
		unsigned named : 1;
		unsigned imageOrientation : 3;
		unsigned cached : 1;
		unsigned hasPattern : 1;
		unsigned isCIImage : 1;
		unsigned imageSetIdentifer : 16;
		unsigned renderingMode : 2;
	} _imageFlags;	// 12 = 0xc
	_UIDecompressionInfo *_decompressionInfo;	// 16 = 0x10
	UIEdgeInsets _alignmentRectInsets;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) CGImageRef CGImage;	// G=0x2f3e9735; 
@property(readonly, assign, nonatomic) CIImage *CIImage;	// G=0x2f3f9789; 
@property(readonly, assign, nonatomic) UIEdgeInsets alignmentRectInsets;	// G=0x2f403b65; @synthesize=_alignmentRectInsets
@property(readonly, assign, nonatomic) UIEdgeInsets capInsets;	// G=0x2f3e9da5; 
@property(readonly, assign, nonatomic) double duration;	// G=0x2f3f9879; 
@property(readonly, assign, nonatomic) int imageOrientation;	// G=0x2f3e9dc5; 
@property(readonly, assign, nonatomic) NSArray *images;	// G=0x2f40b4f9; 
@property(readonly, assign, nonatomic) int leftCapWidth;	// G=0x2f3f970d; 
@property(readonly, assign, nonatomic) int renderingMode;	// G=0x2f597e49; 
@property(readonly, assign, nonatomic) int resizingMode;	// G=0x2f597dd5; 
@property(readonly, assign, nonatomic) float scale;	// G=0x2f3e96c1; 
@property(readonly, assign, nonatomic) CGSize size;	// G=0x2f3e9665; 
@property(readonly, assign, nonatomic) int topCapHeight;	// G=0x2f3f9749; 
+ (id)_applicationIconImageForBundleIdentifier:(id)bundleIdentifier format:(int)format;	// 0x2f599ff9
+ (id)_applicationIconImageForBundleIdentifier:(id)bundleIdentifier format:(int)format scale:(float)scale;	// 0x2f54e25d
+ (id)_backgroundGradientWithStartColor:(id)startColor andEndColor:(id)color;	// 0x2f494291
+ (id)_cachedImageForKey:(id)key fromBlock:(id)block;	// 0x2f4a08ad
+ (id)_defaultBackgroundGradient;	// 0x2f494161
+ (id)_deviceSpecificImageNamed:(id)named;	// 0x2f46ccf9
+ (id)_deviceSpecificImageNamed:(id)named inBundle:(id)bundle;	// 0x2f598d59
+ (UIEdgeInsets)_edgeInsetsForStylePresetName:(id)stylePresetName scale:(float)scale;	// 0x2f597e5d
+ (void)_flushCache:(id)cache;	// 0x2f45f9ad
+ (void)_flushSharedImageCache;	// 0x2f460789
+ (id)_iconForResourceProxy:(id)resourceProxy format:(int)format;	// 0x2f59a025
+ (id)_iconForResourceProxy:(id)resourceProxy variant:(int)variant variantsScale:(float)scale;	// 0x2f54e4a5
+ (int)_iconVariantForUIApplicationIconFormat:(int)uiapplicationIconFormat scale:(float *)scale;	// 0x2f54e2d1
+ (CGSize)_legibilityImageSizeForSize:(CGSize)size style:(int)style;	// 0x2f8551b1
+ (id)_tintedImageForSize:(CGSize)size withTint:(id)tint effectsImage:(id)image maskImage:(id)image4 style:(int)style;	// 0x2f49b5cd
+ (id)_tintedImageForSize:(CGSize)size withTint:(id)tint maskImage:(id)image effectsImage:(id)image4 style:(int)style;	// 0x2f49178d
+ (id)_tintedImageForSize:(CGSize)size withTint:(id)tint maskImage:(id)image effectsImage:(id)image4 style:(int)style edgeInsets:(UIEdgeInsets)insets;	// 0x2f6ccc15
+ (id)animatedImageNamed:(id)named duration:(double)duration;	// 0x2f5983ed
+ (id)animatedImageWithImages:(id)images duration:(double)duration;	// 0x2f598781
+ (id)animatedResizableImageNamed:(id)named capInsets:(UIEdgeInsets)insets duration:(double)duration;	// 0x2f5986d9
+ (id)animatedResizableImageNamed:(id)named capInsets:(UIEdgeInsets)insets resizingMode:(int)mode duration:(double)duration;	// 0x2f598721
+ (id)applicationImageNamed:(id)named;	// 0x2f598865
+ (id)imageAtPath:(id)path;	// 0x2f59941d
+ (id)imageFromAlbumArtData:(id)albumArtData height:(int)height width:(int)width bytesPerRow:(int)row cache:(BOOL)cache;	// 0x2f5989ed
+ (id)imageNamed:(id)named;	// 0x2f3f2b99
+ (id)imageNamed:(id)named inBundle:(id)bundle;	// 0x2f3f42c5
+ (id)imageWithCGImage:(CGImageRef)cgimage;	// 0x2f508cbd
+ (id)imageWithCGImage:(CGImageRef)cgimage scale:(float)scale orientation:(int)orientation;	// 0x2f3f5075
+ (id)imageWithCIImage:(id)ciimage;	// 0x2f597571
+ (id)imageWithCIImage:(id)ciimage scale:(float)scale orientation:(int)orientation;	// 0x2f5975b9
+ (id)imageWithContentsOfCPBitmapFile:(id)cpbitmapFile flags:(int)flags;	// 0x2f598ad9
+ (id)imageWithContentsOfFile:(id)file;	// 0x2f433441
+ (id)imageWithData:(id)data;	// 0x2f5974d9
+ (id)imageWithData:(id)data scale:(float)scale;	// 0x2f597521
+ (void)initialize;	// 0x2f431a01
+ (id)kitImageNamed:(id)named;	// 0x2f4285dd
+ (void)setPreferredSharedImageScale:(float)scale;	// 0x2f599415
+ (BOOL)supportsSecureCoding;	// 0x2f5976f5
- (id)initWithCGImage:(CGImageRef)cgimage;	// 0x2f508d09
- (id)initWithCGImage:(CGImageRef)cgimage imageOrientation:(int)orientation;	// 0x2f49df95
- (id)initWithCGImage:(CGImageRef)cgimage scale:(float)scale orientation:(int)orientation;	// 0x2f3f50cd
- (id)initWithCIImage:(id)ciimage;	// 0x2f59760d
- (id)initWithCIImage:(id)ciimage scale:(float)scale orientation:(int)orientation;	// 0x2f59762d
- (id)initWithCoder:(id)coder;	// 0x2f57671d
- (id)initWithContentsOfFile:(id)file;	// 0x2f43348d
- (id)initWithContentsOfFile:(id)file cache:(BOOL)cache;	// 0x2f598871
- (id)initWithData:(id)data;	// 0x2f4680c1
- (id)initWithData:(id)data cache:(BOOL)cache;	// 0x2f599429
- (id)initWithData:(id)data scale:(float)scale;	// 0x2f53b55d
- (id)initWithIOSurface:(IOSurfaceRef)iosurface;	// 0x2f5989d9
// declared property getter: - (CGImageRef)CGImage;	// 0x2f3e9735
// declared property getter: - (id)CIImage;	// 0x2f3f9789
- (id)_applicationIconImageForFormat:(int)format precomposed:(BOOL)precomposed;	// 0x2f59a09d
- (id)_applicationIconImageForFormat:(int)format precomposed:(BOOL)precomposed scale:(float)scale;	// 0x2f59a0f1
- (id)_applyBackdropViewSettings:(id)settings;	// 0x2f59a231
- (id)_applyBackdropViewStyle:(int)style includeTints:(BOOL)tints includeBlur:(BOOL)blur;	// 0x2f59ae71
- (id)_applyBackdropViewStyle:(int)style includeTints:(BOOL)tints includeBlur:(BOOL)blur graphicsQuality:(int)quality;	// 0x2f59aecd
- (id)_automationID;	// 0x2f598861
- (id)_bezeledImageWithShadowRed:(float)shadowRed green:(float)green blue:(float)blue alpha:(float)alpha fillRed:(float)red green:(float)green6 blue:(float)blue7 alpha:(float)alpha8 drawShadow:(BOOL)shadow;	// 0x2f402609
- (XXStruct_2Z8sdB)_calculateStatistics;	// 0x2f598de1
- (BOOL)_canEncodeWithName:(id)name;	// 0x2f5976f9
- (CGRect)_contentRectInPixels;	// 0x2f597d81
- (CGRect)_contentStretchInPixels;	// 0x2f3f9b65
- (void)_decompressionComplete;	// 0x2f596a2d
- (void)_decompressionFallbackImageCreation;	// 0x2f596a91
- (id)_doubleBezeledImageWithExteriorShadowRed:(float)exteriorShadowRed green:(float)green blue:(float)blue alpha:(float)alpha interiorShadowRed:(float)red green:(float)green6 blue:(float)blue7 alpha:(float)alpha8 fillRed:(float)red9 green:(float)green10 blue:(float)blue11 alpha:(float)alpha12;	// 0x2f599c79
- (void)_drawImageForLegibilitySettings:(id)legibilitySettings strength:(float)strength size:(CGSize)size;	// 0x2f8554a9
- (void)_drawImageForLegibilityStyle:(int)legibilityStyle size:(CGSize)size;	// 0x2f855455
- (void)_encodeDataWithCoder:(id)coder imageName:(id)name;	// 0x2f597735
- (void)_encodePropertiesWithCoder:(id)coder;	// 0x2f5979cd
- (id)_flatImageWithColor:(id)color;	// 0x2f599305
- (id)_flatImageWithWhite:(float)white alpha:(float)alpha;	// 0x2f599c3d
- (id)_imageForLegibilitySettings:(id)legibilitySettings strength:(float)strength;	// 0x2f8552bd
- (id)_imageForLegibilityStyle:(int)legibilityStyle;	// 0x2f855225
- (id)_imageScaledToProportion:(float)proportion interpolationQuality:(int)quality;	// 0x2f544879
- (int)_imageSetIdentifier;	// 0x2f599a29
- (id)_imageWithLetterpressEffectWithForegroundColor:(id)foregroundColor;	// 0x2f597f95
- (id)_initWithData:(id)data immediateLoadWithMaxSize:(CGSize)maxSize scale:(float)scale renderingIntent:(int)intent;	// 0x2f597051
- (id)_initWithData:(id)data preserveScale:(BOOL)scale;	// 0x2f5989b5
- (id)_initWithData:(id)data preserveScale:(BOOL)scale cache:(BOOL)cache;	// 0x2f59890d
- (id)_initWithData:(id)data scale:(float)scale;	// 0x2f468089
- (id)_initWithIOSurface:(IOSurfaceRef)iosurface imageOrientation:(int)orientation;	// 0x2f5491d9
- (id)_initWithIOSurface:(IOSurfaceRef)iosurface scale:(float)scale orientation:(int)orientation;	// 0x2f3f5595
- (id)_initWithOtherImage:(id)otherImage;	// 0x2f497dcd
- (BOOL)_isCached;	// 0x2f3f2e21
- (BOOL)_isDecompressing;	// 0x2f431bdd
- (BOOL)_isInvisibleAndGetIsTranslucent:(BOOL *)translucent;	// 0x2f599a51
- (BOOL)_isNamed;	// 0x2f3f543d
- (BOOL)_isResizable;	// 0x2f3f957d
- (BOOL)_isTiledWhenStretchedToSize:(CGSize)size;	// 0x2f3e9dc1
- (CGColorRef)_patternColor;	// 0x2f47c481
- (void)_preheatBitmapData;	// 0x2f59a021
- (id)_resizableImageWithCapMask:(int)capMask;	// 0x2f59a191
- (id)_resizableImageWithSubimageInsets:(UIEdgeInsets)subimageInsets resizeInsets:(UIEdgeInsets)insets;	// 0x2f598cd1
- (void)_saveDecompressedImage:(CGImageRef)image;	// 0x2f596b2d
- (id)_selectedTabBarItemImageWithTintColor:(id)tintColor metrics:(int)metrics style:(int)style;	// 0x2f6c4911
- (id)_serializedData;	// 0x2f599f6d
- (void)_setAlignmentRectInsets:(UIEdgeInsets)insets;	// 0x2f403b81
- (void)_setAlwaysStretches:(BOOL)stretches;	// 0x2f597dcd
- (void)_setCached:(BOOL)cached;	// 0x2f3f5f61
- (void)_setImageSetIdentifier:(int)identifier;	// 0x2f3f8d21
- (void)_setNamed:(BOOL)named;	// 0x2f3f5f45
- (CGSize)_sizeInPixels;	// 0x2f597c39
- (void)_startEagerDecompression;	// 0x2f596b69
- (id)_stretchableImageWithCapInsets:(UIEdgeInsets)capInsets;	// 0x2f403985
- (id)_subimageInRect:(CGRect)rect;	// 0x2f6126ed
- (CGColorRef)_tiledPatternColor;	// 0x2f47c0e9
- (id)_unselectedTabBarItemImageWithTintColor:(id)tintColor metrics:(int)metrics style:(int)style;	// 0x2f6c4e95
// declared property getter: - (UIEdgeInsets)alignmentRectInsets;	// 0x2f403b65
// declared property getter: - (UIEdgeInsets)capInsets;	// 0x2f3e9da5
- (void)compositeToPoint:(CGPoint)point fromRect:(CGRect)rect operation:(int)operation fraction:(float)fraction;	// 0x2f519e29
- (void)compositeToPoint:(CGPoint)point operation:(int)operation;	// 0x2f52c4fd
- (void)compositeToPoint:(CGPoint)point operation:(int)operation fraction:(float)fraction;	// 0x2f52c525
- (void)compositeToRect:(CGRect)rect fromRect:(CGRect)rect2 operation:(int)operation fraction:(float)fraction;	// 0x2f455481
- (id)copyWithZone:(NSZone *)zone;	// 0x2f597c25
- (void)dealloc;	// 0x2f3f52e5
- (void)draw1PartImageInRect:(CGRect)rect;	// 0x2f599869
- (void)draw1PartImageInRect:(CGRect)rect fraction:(float)fraction;	// 0x2f5998a9
- (void)draw1PartImageInRect:(CGRect)rect fraction:(float)fraction operation:(int)operation;	// 0x2f56d6ed
- (void)draw3PartImageWithSliceRects:(XXStruct_UUz0SD)sliceRects inRect:(CGRect)rect;	// 0x2f519b01
- (void)draw3PartImageWithSliceRects:(XXStruct_UUz0SD)sliceRects inRect:(CGRect)rect fraction:(float)fraction;	// 0x2f5997d5
- (void)draw3PartImageWithSliceRects:(XXStruct_UUz0SD)sliceRects inRect:(CGRect)rect operation:(int)operation fraction:(float)fraction;	// 0x2f56d65d
- (void)draw9PartImageWithSliceRects:(XXStruct_4cr1oD)sliceRects inRect:(CGRect)rect;	// 0x2f5994c1
- (void)draw9PartImageWithSliceRects:(XXStruct_4cr1oD)sliceRects inRect:(CGRect)rect fraction:(float)fraction;	// 0x2f5996e5
- (void)draw9PartImageWithSliceRects:(XXStruct_4cr1oD)sliceRects inRect:(CGRect)rect operation:(int)operation fraction:(float)fraction;	// 0x2f59975d
- (void)drawAsPatternInRect:(CGRect)rect;	// 0x2f5987fd
- (void)drawAtPoint:(CGPoint)point;	// 0x2f47a9d9
- (void)drawAtPoint:(CGPoint)point blendMode:(int)mode alpha:(float)alpha;	// 0x2f3e95f1
- (void)drawInRect:(CGRect)rect;	// 0x2f42828d
- (void)drawInRect:(CGRect)rect blendMode:(int)mode alpha:(float)alpha;	// 0x2f3e97c1
// declared property getter: - (double)duration;	// 0x2f3f9879
- (void)encodeWithCoder:(id)coder;	// 0x2f597b0d
// declared property getter: - (int)imageOrientation;	// 0x2f3e9dc5
- (CGImageRef)imageRef;	// 0x2f5243dd
- (id)imageWithAlignmentRectInsets:(UIEdgeInsets)alignmentRectInsets;	// 0x2f497d55
- (id)imageWithRenderingMode:(int)renderingMode;	// 0x2f597dd9
// declared property getter: - (id)images;	// 0x2f40b4f9
- (IOSurfaceRef)ioSurface;	// 0x2f49b66d
// declared property getter: - (int)leftCapWidth;	// 0x2f3f970d
- (id)patternColor;	// 0x2f53b595
// declared property getter: - (int)renderingMode;	// 0x2f597e49
- (id)resizableImageWithCapInsets:(UIEdgeInsets)capInsets;	// 0x2f4039c1
- (id)resizableImageWithCapInsets:(UIEdgeInsets)capInsets resizingMode:(int)mode;	// 0x2f4039ed
// declared property getter: - (int)resizingMode;	// 0x2f597dd5
// declared property getter: - (float)scale;	// 0x2f3e96c1
// declared property getter: - (CGSize)size;	// 0x2f3e9665
- (id)stretchableImageWithLeftCapWidth:(int)leftCapWidth topCapHeight:(int)height;	// 0x2f4038ed
// declared property getter: - (int)topCapHeight;	// 0x2f3f9749
- (BOOL)writeToCPBitmapFile:(id)cpbitmapFile flags:(int)flags;	// 0x2f598bc5
@end

