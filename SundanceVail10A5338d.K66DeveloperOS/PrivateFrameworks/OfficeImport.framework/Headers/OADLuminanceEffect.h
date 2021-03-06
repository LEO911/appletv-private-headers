/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADBlipEffect.h"
#import "OfficeImport-Structs.h"


@interface OADLuminanceEffect : OADBlipEffect {
	float mBrightness;	// 8 = 0x8
	float mContrast;	// 12 = 0xc
}
@property(assign) float brightness;	// G=0x33b9bd5d; S=0x339d212d; converted property
@property(assign) float contrast;	// G=0x33b9bd6d; S=0x339d2109; converted property
- (id)init;	// 0x339d2085
// converted property getter: - (float)brightness;	// 0x33b9bd5d
// converted property getter: - (float)contrast;	// 0x33b9bd6d
- (id)copyWithZone:(NSZone *)zone;	// 0x33b9bcd9
- (unsigned)hash;	// 0x33b9bd7d
- (BOOL)isEqual:(id)equal;	// 0x33b9bde5
// converted property setter: - (void)setBrightness:(float)brightness;	// 0x339d212d
// converted property setter: - (void)setContrast:(float)contrast;	// 0x339d2109
@end

