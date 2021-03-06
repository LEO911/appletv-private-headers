/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMProperty.h"


__attribute__((visibility("hidden")))
@interface CMLengthProperty : CMProperty {
@private
	double value;	// 8 = 0x8
	int unitType;	// 16 = 0x10
}
@property(readonly, assign) int unitType;	// G=0x30d2a0d1; converted property
@property(readonly, assign) double value;	// G=0x30d2a0b9; converted property
+ (id)cssStringValue:(double)value unit:(int)unit;	// 0x30be601d
- (id)initWithNumber:(double)number;	// 0x30cdc11d
- (id)initWithNumber:(double)number unit:(int)unit;	// 0x30be7755
- (int)compareValue:(id)value;	// 0x30ed72e9
- (id)cssString;	// 0x30cdf3d9
- (id)cssStringForName:(id)name;	// 0x30be7849
- (int)intValue;	// 0x30ed72cd
// converted property getter: - (int)unitType;	// 0x30d2a0d1
// converted property getter: - (double)value;	// 0x30d2a0b9
@end

