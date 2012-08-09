/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMProperty.h"
#import "NSCopying.h"
#import "OfficeImport-Structs.h"

@class EDBorders, TSUColor;

@interface EMBordersProperty : CMProperty <NSCopying> {
	EDBorders *edValue;	// 8 = 0x8
	TSUColor *mBorderColor;	// 12 = 0xc
	TSUColor *mBorderTopColor;	// 16 = 0x10
	TSUColor *mBorderLeftColor;	// 20 = 0x14
	TSUColor *mBorderBottomColor;	// 24 = 0x18
	TSUColor *mBorderRightColor;	// 28 = 0x1c
	int mBorderStyle[5];	// 32 = 0x20
	int mBorderWidth[5];	// 52 = 0x34
}
- (id)initWithEDBorders:(id)edborders;	// 0x31c48af9
- (id)initWithOADStroke:(id)oadstroke;	// 0x31d68339
- (id)borderColor;	// 0x31d685cd
- (int *)borderStyles;	// 0x31d685dd
- (int *)borderWidths;	// 0x31d685ed
- (id)colorString;	// 0x31c497c5
- (id)copyWithZone:(NSZone *)zone;	// 0x31d68269
- (id)cssString;	// 0x31c49189
- (id)cssStringForName:(id)name;	// 0x31c4915d
- (BOOL)hasSameColorsAs:(id)as;	// 0x31d686f1
- (BOOL)hasSameStylesAs:(id)as;	// 0x31d68619
- (BOOL)hasSameWidthsAs:(id)as;	// 0x31d68685
- (BOOL)isEqual:(id)equal;	// 0x31d68199
- (BOOL)isNoneAtLocation:(int)location;	// 0x31d685fd
- (void)setBorderStyleAndWidth:(int)width location:(unsigned)location;	// 0x31c48e65
- (void)setNoneAtLocation:(int)location;	// 0x31c49131
- (id)stringFromColor:(id)color;	// 0x31c49935
- (id)stringFromStyleEnum:(int)styleEnum;	// 0x31c494a1
- (id)stringFromWidthEnum:(int)widthEnum;	// 0x31c4977d
- (id)styleHashNumber;	// 0x31c493d9
- (id)styleString;	// 0x31c4920d
- (id)widthHashNumber;	// 0x31c496b5
- (id)widthString;	// 0x31c494e9
@end
