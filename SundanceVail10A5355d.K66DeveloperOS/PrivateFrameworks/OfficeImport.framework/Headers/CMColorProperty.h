/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMProperty.h"
#import "OfficeImport-Structs.h"

@class TSUColor;

@interface CMColorProperty : CMProperty {
	TSUColor *wdValue;	// 8 = 0x8
}
+ (CGColorRef)copyCGColorFromOADColor:(id)oadcolor state:(id)state;	// 0x31d5b479
+ (CGColorRef)copyCGColorFromOADFill:(id)oadfill state:(id)state;	// 0x31d5b511
+ (id)cssStringFromOADColor:(id)oadcolor;	// 0x31c51871
+ (id)cssStringFromOADGradientFill:(id)oadgradientFill state:(id)state;	// 0x31c07d09
+ (id)cssStringFromRed:(float)red green:(float)green blue:(float)blue;	// 0x31bfb5d5
+ (id)cssStringFromTSUColor:(id)tsucolor;	// 0x31bfb455
+ (id)nsColorFromOADColor:(id)oadcolor state:(id)state;	// 0x31bfaa41
+ (id)nsColorFromOADFill:(id)oadfill state:(id)state;	// 0x31bffc05
+ (id)nsColorFromShading:(id)shading;	// 0x31d46729
+ (float)resolveColorValueWithPercentage:(float)percentage foregroundComponent:(float)component backgroundComponent:(float)component3;	// 0x31d46d11
+ (id)resolveStyleColorWithPercentage:(float)percentage foregroundColor:(id)color backgroundColor:(id)color3;	// 0x31d46b81
+ (id)resolveStyleColorWithPercentage:(float)percentage shading:(id)shading;	// 0x31d46b29
+ (float)transformedAlphaFromOADColor:(id)oadcolor;	// 0x31c09061
- (id)initWithColor:(id)color;	// 0x31c5192d
- (id)cssString;	// 0x31c519a5
- (id)cssStringForName:(id)name;	// 0x31c51971
- (BOOL)isEqualTo:(id)to;	// 0x31d5b5c1
- (id)value;	// 0x31d5b5ad
@end
