/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, CIColor;

@interface UIColor : NSObject <NSCoding, NSCopying> {
	NSString *_systemColorName;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) CGColorRef CGColor;	// G=0x32d3b5f1; 
@property(readonly, assign, nonatomic) CIColor *CIColor;	// G=0x32d3b641; 
@property(retain, nonatomic, getter=_systemColorName, setter=_setSystemColorName:) NSString *systemColorName;	// G=0x32afbb49; S=0x32b30259; 
+ (id)__halfTransparentBlackColor;	// 0x32af9f71
+ (id)__halfTransparentWhiteColor;	// 0x32b4f199
+ (id)_dimmingViewColor;	// 0x32d3bda1
+ (id)_systemColorForColor:(id)color withName:(id)name;	// 0x32c85ff5
+ (id)_systemColorWithName:(id)name;	// 0x32b34101
+ (id)_translucentPaperTextureColor;	// 0x32d3bce9
+ (id)allocWithZone:(NSZone *)zone;	// 0x32ae5c95
+ (id)blackColor;	// 0x32ae5edd
+ (id)blueColor;	// 0x32b76f1d
+ (id)brownColor;	// 0x32d3abed
+ (id)classFallbacksForKeyedArchiver;	// 0x32d3a339
+ (id)clearColor;	// 0x32b00c61
+ (id)colorWithCGColor:(CGColorRef)cgcolor;	// 0x32b4e4f5
+ (id)colorWithCIColor:(id)cicolor;	// 0x32d3a225
+ (id)colorWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x32b54325
+ (id)colorWithPatternImage:(id)patternImage;	// 0x32b8c7d9
+ (id)colorWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x32b0919d
+ (id)colorWithWhite:(float)white alpha:(float)alpha;	// 0x32ae5c45
+ (id)cyanColor;	// 0x32d3a915
+ (id)darkGrayColor;	// 0x32c9e7e9
+ (id)darkTextColor;	// 0x32d3b92d
+ (id)grayColor;	// 0x32b71651
+ (id)greenColor;	// 0x32d3a861
+ (id)groupTableViewBackgroundColor;	// 0x32c85dc1
+ (id)infoTextOverPinStripeTextColor;	// 0x32d3b441
+ (void)initialize;	// 0x32b39c99
+ (id)insertionPointColor;	// 0x32b6932d
+ (id)lightGrayColor;	// 0x32b9b1e5
+ (id)lightTextColor;	// 0x32d3b87d
+ (id)magentaColor;	// 0x32d3aa81
+ (id)noContentDarkGradientBackgroundColor;	// 0x32d3bbc5
+ (id)noContentLightGradientBackgroundColor;	// 0x32d3bb4d
+ (id)orangeColor;	// 0x32bbfd75
+ (id)pinStripeColor;	// 0x32d3b7c5
+ (id)purpleColor;	// 0x32d3ab35
+ (id)redColor;	// 0x32b7e205
+ (id)scrollViewTexturedBackgroundColor;	// 0x32b8c75d
+ (id)sectionHeaderBackgroundColor;	// 0x32d3b06d
+ (id)sectionHeaderBorderColor;	// 0x32d3b1f9
+ (id)sectionHeaderOpaqueBackgroundColor;	// 0x32d3b135
+ (id)sectionListBorderColor;	// 0x32c23245
+ (id)selectionHighlightColor;	// 0x32b69415
+ (id)tableBackgroundColor;	// 0x32b34129
+ (id)tableCellBlueTextColor;	// 0x32c29c2d
+ (id)tableCellGrayTextColor;	// 0x32bb1511
+ (id)tableCellGroupedBackgroundColor;	// 0x32bbffb1
+ (id)tableCellGroupedBackgroundColorLegacyWhite;	// 0x32d3acb1
+ (id)tableCellPlainBackgroundColor;	// 0x32b301a5
+ (id)tableCellValue1BlueColor;	// 0x32bbe1a9
+ (id)tableCellValue2BlueColor;	// 0x32ca56a9
+ (id)tableGroupedSeparatorLightColor;	// 0x32ba6179
+ (id)tableGroupedTopShadowColor;	// 0x32d3afb5
+ (id)tableSelectionColor;	// 0x32d3ad65
+ (id)tableSelectionGradientEndColor;	// 0x32d3aeed
+ (id)tableSelectionGradientStartColor;	// 0x32d3ae29
+ (id)tableSeparatorDarkColor;	// 0x32bc20f9
+ (id)tableSeparatorLightColor;	// 0x32b4e1c1
+ (id)tableShadowColor;	// 0x32c2b131
+ (id)textFieldAtomBlueColor;	// 0x32d3b2bd
+ (id)textFieldAtomPurpleColor;	// 0x32d3b37d
+ (id)underPageBackgroundColor;	// 0x32d3ba95
+ (id)viewFlipsideBackgroundColor;	// 0x32d3b9dd
+ (id)whiteColor;	// 0x32aeec29
+ (id)yellowColor;	// 0x32d3a9c9
- (id)initWithCGColor:(CGColorRef)cgcolor;	// 0x32b39ccd
- (id)initWithCIColor:(id)cicolor;	// 0x32d3a2c9
- (id)initWithCoder:(id)coder;	// 0x32c8304d
- (id)initWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x32d3a275
- (id)initWithPatternImage:(id)patternImage;	// 0x32b8c829
- (id)initWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x32b4e4a5
- (id)initWithWhite:(float)white alpha:(float)alpha;	// 0x32b07a2d
// declared property getter: - (CGColorRef)CGColor;	// 0x32d3b5f1
// declared property getter: - (id)CIColor;	// 0x32d3b641
- (BOOL)_getWhite:(float *)white alpha:(float *)alpha;	// 0x32d3b78d
// declared property setter: - (void)_setSystemColorName:(id)name;	// 0x32b30259
// declared property getter: - (id)_systemColorName;	// 0x32afbb49
- (float)alphaComponent;	// 0x32d3b7a5
- (CGColorRef)cgColor;	// 0x32bb965d
- (Class)classForCoder;	// 0x32d3a319
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x32d3b5ed
- (id)copyWithZone:(NSZone *)zone;	// 0x32d3b6e1
- (void)dealloc;	// 0x32ae5fd5
- (void)encodeWithCoder:(id)coder;	// 0x32d3a371
- (BOOL)getHue:(float *)hue saturation:(float *)saturation brightness:(float *)brightness alpha:(float *)alpha;	// 0x32d3b785
- (BOOL)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x32c7ae91
- (BOOL)getWhite:(float *)white alpha:(float *)alpha;	// 0x32d3b781
- (unsigned)hash;	// 0x32d3b731
- (BOOL)isEqual:(id)equal;	// 0x32d3b691
- (BOOL)isPatternColor;	// 0x32cad5d5
- (void)set;	// 0x32d3b509
- (void)setFill;	// 0x32d3b555
- (void)setStroke;	// 0x32d3b5a1
- (id)styleString;	// 0x32bb9b71
@end

