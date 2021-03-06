/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMProperty.h"


@interface CMLengthProperty : CMProperty {
	double value;	// 8 = 0x8
	int unitType;	// 16 = 0x10
}
@property(readonly, assign) int unitType;	// G=0x37001425; converted property
@property(readonly, assign) double value;	// G=0x3700140d; converted property
+ (id)cssStringValue:(double)value unit:(int)unit;	// 0x36f77855
- (id)initWithNumber:(double)number;	// 0x36fb6ea1
- (id)initWithNumber:(double)number unit:(int)unit;	// 0x36f78135
- (int)compareValue:(id)value;	// 0x370d9c4d
- (id)cssString;	// 0x36fb989d
- (id)cssStringForName:(id)name;	// 0x36f78231
- (int)intValue;	// 0x370d9c31
// converted property getter: - (int)unitType;	// 0x37001425
// converted property getter: - (double)value;	// 0x3700140d
@end

