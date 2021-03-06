/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface RTFNSColor : NSObject {
	float _red;	// 4 = 0x4
	float _green;	// 8 = 0x8
	float _blue;	// 12 = 0xc
	float _alpha;	// 16 = 0x10
}
@property(assign) float alpha;	// G=0x30e0c32d; S=0x30e0c341; @synthesize=_alpha
@property(assign) float blue;	// G=0x30e0c301; S=0x30e0c315; @synthesize=_blue
@property(assign) float green;	// G=0x30e0c2d5; S=0x30e0c2e9; @synthesize=_green
@property(assign) float red;	// G=0x30e0c2a9; S=0x30e0c2bd; @synthesize=_red
+ (id)blackColor;	// 0x30e0c11d
+ (id)colorWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x30e0bf6d
+ (id)colorWithCalibratedWhite:(float)calibratedWhite alpha:(float)alpha;	// 0x30e0be99
+ (id)whiteColor;	// 0x30e0c0f9
- (id)init;	// 0x30e0be6d
- (id)initWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x30e0bfd1
- (id)initWithCalibratedWhite:(float)calibratedWhite alpha:(float)alpha;	// 0x30e0bee5
// declared property getter: - (float)alpha;	// 0x30e0c32d
// declared property getter: - (float)blue;	// 0x30e0c301
- (id)colorUsingColorSpaceName:(id)name;	// 0x30e0c1a5
- (id)copyWithZone:(NSZone *)zone;	// 0x30e0c061
- (id)description;	// 0x30e0c1a9
- (void)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x30e0c141
// declared property getter: - (float)green;	// 0x30e0c2d5
// declared property getter: - (float)red;	// 0x30e0c2a9
// declared property setter: - (void)setAlpha:(float)alpha;	// 0x30e0c341
// declared property setter: - (void)setBlue:(float)blue;	// 0x30e0c315
// declared property setter: - (void)setGreen:(float)green;	// 0x30e0c2e9
// declared property setter: - (void)setRed:(float)red;	// 0x30e0c2bd
@end

