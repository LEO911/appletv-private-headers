/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WMStyle.h"


@interface WMTableCellStyle : WMStyle {
	double mLeftPadding;	// 12 = 0xc
	double mRightPadding;	// 20 = 0x14
}
+ (id)dominantColorOf:(id)of;	// 0x34fa9305
+ (float)resolveColorValueWithPercentage:(float)percentage foregroundComponent:(float)component backgroundComponent:(float)component3;	// 0x34fa9a81
+ (id)resolveStyleColorWithPercentage:(float)percentage foregroundColor:(id)color backgroundColor:(id)color3;	// 0x34fa98f1
+ (id)resolveStyleColorWithPercentage:(float)percentage shading:(id)shading;	// 0x34fa9879
- (id)initWithTableCellProperties:(id)tableCellProperties;	// 0x35030325
- (void)addTableCellProperties:(id)properties;	// 0x34f5bf21
- (double)leftPadding;	// 0x34f5cac5
- (double)rightPadding;	// 0x34f5cadd
@end
