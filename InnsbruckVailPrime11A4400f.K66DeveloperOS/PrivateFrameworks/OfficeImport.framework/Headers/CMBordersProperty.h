/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMProperty.h"

@class TSUColor;

@interface CMBordersProperty : CMProperty {
	TSUColor *mBorderColor;	// 8 = 0x8
	TSUColor *mBorderTopColor;	// 12 = 0xc
	TSUColor *mBorderLeftColor;	// 16 = 0x10
	TSUColor *mBorderBottomColor;	// 20 = 0x14
	TSUColor *mBorderRightColor;	// 24 = 0x18
	int mBorderStyle[5];	// 28 = 0x1c
	int mBorderWidth[5];	// 48 = 0x30
	int mCustomWidth;	// 68 = 0x44
}
+ (BOOL)isStroked:(id)stroked;	// 0x317bfd85
- (id)init;	// 0x3176d29d
- (id)initWithOADStroke:(id)oadstroke;	// 0x31779b2d
- (void)adjustValues;	// 0x3176dad5
- (id)colorString;	// 0x3176ef75
- (id)cssString;	// 0x3176ea45
- (id)cssStringForName:(id)name;	// 0x3176ea15
- (BOOL)isNoneAtLocation:(int)location;	// 0x318a4a89
- (void)setFromOadStroke:(id)oadStroke atLocation:(int)location state:(id)state;	// 0x31854171
- (void)setNoneAtLocation:(int)location;	// 0x318a4aa5
- (id)stringFromColor:(id)color;	// 0x3176f0e5
- (id)stringFromStyleEnum:(int)styleEnum;	// 0x3176ecbd
- (id)stringFromWidthEnum:(int)widthEnum;	// 0x3176eef9
- (id)styleString;	// 0x3176eac9
- (id)widthString;	// 0x3176ed05
@end
