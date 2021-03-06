/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"


@interface TSUColor : NSObject <NSCopying> {
	CGColorRef mCGColor;	// 4 = 0x4
}
@property(readonly, assign) CGColorRef CGColor;	// G=0x31bfb57d; @synthesize=mCGColor
+ (id)blackColor;	// 0x31c017a1
+ (id)blueColor;	// 0x31e54b35
+ (id)brownColor;	// 0x31e54d05
+ (id)clearColor;	// 0x31c59a8d
+ (id)colorWithBGR:(unsigned long)bgr;	// 0x31d7b4f1
+ (id)colorWithBGRValue:(long)bgrvalue;	// 0x31c15a49
+ (id)colorWithBinaryRed:(int)binaryRed green:(int)green blue:(int)blue;	// 0x31d7b3fd
+ (id)colorWithBinaryRed:(int)binaryRed green:(int)green blue:(int)blue alpha:(int)alpha;	// 0x31d7b421
+ (id)colorWithCGColor:(CGColorRef)cgcolor;	// 0x31c096c1
+ (id)colorWithCalibratedHue:(float)calibratedHue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x31d7faa5
+ (id)colorWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x31bfafc1
+ (id)colorWithCsColour:(const CsColour *)csColour;	// 0x31ca7fa1
+ (id)colorWithDeviceRed:(float)deviceRed green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x31cd3a61
+ (id)colorWithEshColor:(const EshColor *)eshColor;	// 0x31dd8095
+ (id)colorWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x31e5494d
+ (id)colorWithPatternImage:(id)patternImage;	// 0x31d28f71
+ (id)colorWithRGBBytes:(unsigned char)rgbbytes :(unsigned char)arg2 :(unsigned char)arg3;	// 0x31c4d569
+ (id)colorWithRGBValue:(long)rgbvalue;	// 0x31d277b1
+ (id)colorWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x31bfafdd
+ (id)colorWithSystemColorID:(int)systemColorID;	// 0x31c1e089
+ (id)colorWithUIColor:(id)uicolor;	// 0x31e549a5
+ (id)colorWithWhite:(float)white alpha:(float)alpha;	// 0x31e5490d
+ (id)cyanColor;	// 0x31e54b7d
+ (id)grayColor;	// 0x31e54a19
+ (id)greenColor;	// 0x31e54ae9
+ (id)lightGrayColor;	// 0x31e54a59
+ (id)magentaColor;	// 0x31e54c19
+ (id)orangeColor;	// 0x31e54c65
+ (id)purpleColor;	// 0x31e54cb5
+ (id)randomColor;	// 0x31e549e1
+ (id)redColor;	// 0x31e54a9d
+ (id)stringForColor:(id)color;	// 0x31d7b799
+ (id)stringForSystemColorID:(int)systemColorID;	// 0x31d7b571
+ (id)whiteColor;	// 0x31c49e71
+ (id)yellowColor;	// 0x31e54bc9
- (id)initWithCGColor:(CGColorRef)cgcolor;	// 0x31bfb0c1
- (id)initWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x31e54d65
- (id)initWithPatternImage:(id)patternImage;	// 0x31d28fb9
- (id)initWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x31bfb039
- (id)initWithUIColor:(id)uicolor;	// 0x31e54d9d
- (id)initWithWhite:(float)white alpha:(float)alpha;	// 0x31c017e5
// declared property getter: - (CGColorRef)CGColor;	// 0x31bfb57d
- (id)UIColor;	// 0x31e54dfd
- (float)alphaComponent;	// 0x31bfb5b9
- (id)blendedColorWithFraction:(float)fraction ofColor:(id)color;	// 0x31cc5789
- (float)blueComponent;	// 0x31bfb5a5
- (CGColorRef)cgColorRef;	// 0x31d00695
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x31c09679
- (id)colorWithShadeValue:(double)shadeValue;	// 0x31cc5701
- (id)colorWithTintValue:(double)tintValue;	// 0x31d16a0d
- (id)copy;	// 0x31c4d399
- (id)copyWithZone:(NSZone *)zone;	// 0x31e54dcd
- (CsColour)csColour;	// 0x31dd804d
- (void)dealloc;	// 0x31c00005
- (EshColor)eshColor;	// 0x31dd8129
- (void)getRGBBytes:(char *)bytes :(char *)arg2 :(char *)arg3;	// 0x31cd72b1
- (void)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x31e755f1
- (id)grayscaleColor;	// 0x31e54e39
- (float)greenComponent;	// 0x31bfb591
- (unsigned)hash;	// 0x31d41fdd
- (id)invertedColor;	// 0x31e54ef1
- (BOOL)isBlack;	// 0x31c02031
- (BOOL)isEqual:(id)equal;	// 0x31c48ff9
- (BOOL)isEqualToColor:(id)color;	// 0x31c48fdd
- (BOOL)isOpaque;	// 0x31e54ff1
- (float)luminance;	// 0x31e54f65
- (id)newSolidColoredBitmap:(CGSize)bitmap;	// 0x31d7b3f5
- (float)p_rgbComponentWithIndex:(unsigned char)index;	// 0x31bfb4d9
- (void)paintPath:(CGPathRef)path inContext:(CGContextRef)context;	// 0x31e55071
- (void)paintRect:(CGRect)rect inContext:(CGContextRef)context;	// 0x31e55025
- (float)redComponent;	// 0x31bfb4c5
- (void)set;	// 0x31cd536d
- (id)solidColoredPngImage;	// 0x31d7b3f9
- (unsigned long)toBGR;	// 0x31d7b4a9
- (tagRgbQuad)ttColor;	// 0x31c08491
@end

