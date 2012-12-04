/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADEffect.h"

@class OADColor;

@interface OADShadowEffect : OADEffect {
	OADColor *mColor;	// 8 = 0x8
	float mBlurRadius;	// 12 = 0xc
	float mDistance;	// 16 = 0x10
	float mAngle;	// 20 = 0x14
}
@property(assign) float angle;	// G=0x34b368c1; S=0x34ab92d9; converted property
@property(assign) float blurRadius;	// G=0x34b368a1; S=0x34ab92b9; converted property
@property(retain) id color;	// G=0x34b367cd; S=0x34ab92e9; converted property
@property(assign) float distance;	// G=0x34b368b1; S=0x34ab92c9; converted property
- (id)initWithShadowEffect:(id)shadowEffect type:(int)type;	// 0x34b36719
- (id)initWithType:(int)type;	// 0x34ab8f31
// converted property getter: - (float)angle;	// 0x34b368c1
// converted property getter: - (float)blurRadius;	// 0x34b368a1
// converted property getter: - (id)color;	// 0x34b367cd
- (void)dealloc;	// 0x34ae2f01
// converted property getter: - (float)distance;	// 0x34b368b1
- (unsigned)hash;	// 0x34c2cab9
- (BOOL)isEqual:(id)equal;	// 0x34b8b761
// converted property setter: - (void)setAngle:(float)angle;	// 0x34ab92d9
// converted property setter: - (void)setBlurRadius:(float)radius;	// 0x34ab92b9
// converted property setter: - (void)setColor:(id)color;	// 0x34ab92e9
// converted property setter: - (void)setDistance:(float)distance;	// 0x34ab92c9
- (void)setStyleColor:(id)color;	// 0x34b368d1
@end
